#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4790
// Address: 0x1a4790 - 0x1a49e8
void sub_001A4790_0x1a4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4790_0x1a4790");
#endif

    ctx->pc = 0x1a4790u;

    // 0x1a4790: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a4794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a4794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a4798: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1a4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1a479c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1a479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1a47a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a47a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47a4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1a47a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1a47a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a47a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47ac: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1a47acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1a47b0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a47b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47b4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1a47b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1a47b8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a47b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47bc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1a47bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1a47c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a47c4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1a47c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1a47c8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1a47c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1a47cc: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1a47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1a47d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a47d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a47d4: 0x8c44c874  lw          $a0, -0x378C($v0)
    ctx->pc = 0x1a47d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953076)));
    // 0x1a47d8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1A47D8u;
    SET_GPR_U32(ctx, 31, 0x1A47E0u);
    ctx->pc = 0x1A47DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47D8u;
            // 0x1a47dc: 0x86450022  lh          $a1, 0x22($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47E0u; }
        if (ctx->pc != 0x1A47E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47E0u; }
        if (ctx->pc != 0x1A47E0u) { return; }
    }
    ctx->pc = 0x1A47E0u;
    // 0x1a47e0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1A47E0u;
    SET_GPR_U32(ctx, 31, 0x1A47E8u);
    ctx->pc = 0x1A47E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47E0u;
            // 0x1a47e4: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47E8u; }
        if (ctx->pc != 0x1A47E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47E8u; }
        if (ctx->pc != 0x1A47E8u) { return; }
    }
    ctx->pc = 0x1A47E8u;
    // 0x1a47e8: 0xc06909a  jal         func_1A4268
    ctx->pc = 0x1A47E8u;
    SET_GPR_U32(ctx, 31, 0x1A47F0u);
    ctx->pc = 0x1A47ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47E8u;
            // 0x1a47ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4268u;
    if (runtime->hasFunction(0x1A4268u)) {
        auto targetFn = runtime->lookupFunction(0x1A4268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47F0u; }
        if (ctx->pc != 0x1A47F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4268_0x1a4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47F0u; }
        if (ctx->pc != 0x1A47F0u) { return; }
    }
    ctx->pc = 0x1A47F0u;
    // 0x1a47f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1a47f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1a47f4: 0x86460024  lh          $a2, 0x24($s2)
    ctx->pc = 0x1a47f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1a47f8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a47f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47fc: 0x24a54050  addiu       $a1, $a1, 0x4050
    ctx->pc = 0x1a47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16464));
    // 0x1a4800: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1A4800u;
    SET_GPR_U32(ctx, 31, 0x1A4808u);
    ctx->pc = 0x1A4804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4800u;
            // 0x1a4804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4808u; }
        if (ctx->pc != 0x1A4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4808u; }
        if (ctx->pc != 0x1A4808u) { return; }
    }
    ctx->pc = 0x1A4808u;
    // 0x1a4808: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1a480c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1a4810: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1a4814: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4818: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a481c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a481cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a4820: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a4820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a4824: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A482Cu);
        ctx->pc = 0x1A4828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4824u;
            // 0x1a4828: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A482Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49B4u: goto label_1a49b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A482Cu; }
            if (ctx->pc != 0x1A482Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A482Cu;
    // 0x1a482c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1a482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a4830: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a4830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4838: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a483c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4840: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4844: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a4848: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1a4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1a484c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4854u);
        ctx->pc = 0x1A4850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A484Cu;
            // 0x1a4850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4854u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49B4u: goto label_1a49b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4854u; }
            if (ctx->pc != 0x1A4854u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4854u;
    // 0x1a4854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4858: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1A4858u;
    SET_GPR_U32(ctx, 31, 0x1A4860u);
    ctx->pc = 0x1A485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4858u;
            // 0x1a485c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4860u; }
        if (ctx->pc != 0x1A4860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4860u; }
        if (ctx->pc != 0x1A4860u) { return; }
    }
    ctx->pc = 0x1A4860u;
    // 0x1a4860: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a4860u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4864: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1A4864u;
    SET_GPR_U32(ctx, 31, 0x1A486Cu);
    ctx->pc = 0x1A4868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4864u;
            // 0x1a4868: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A486Cu; }
        if (ctx->pc != 0x1A486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A486Cu; }
        if (ctx->pc != 0x1A486Cu) { return; }
    }
    ctx->pc = 0x1A486Cu;
    // 0x1a486c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a486cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4870: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1A4870u;
    SET_GPR_U32(ctx, 31, 0x1A4878u);
    ctx->pc = 0x1A4874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4870u;
            // 0x1a4874: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4878u; }
        if (ctx->pc != 0x1A4878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4878u; }
        if (ctx->pc != 0x1A4878u) { return; }
    }
    ctx->pc = 0x1A4878u;
    // 0x1a4878: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a4878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a487c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a4880: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4884: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a4888: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1a4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a488c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4894u);
        ctx->pc = 0x1A4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A488Cu;
            // 0x1a4890: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4894u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49B4u: goto label_1a49b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4894u; }
            if (ctx->pc != 0x1A4894u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4894u;
    // 0x1a4894: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4894u;
    {
        const bool branch_taken_0x1a4894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4894u;
            // 0x1a4898: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4894) {
            ctx->pc = 0x1A48B8u;
            goto label_1a48b8;
        }
    }
    ctx->pc = 0x1A489Cu;
    // 0x1a489c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48a0: 0x24c64060  addiu       $a2, $a2, 0x4060
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16480));
    // 0x1a48a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1a48a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48a8: 0xc091258  jal         func_244960
    ctx->pc = 0x1A48A8u;
    SET_GPR_U32(ctx, 31, 0x1A48B0u);
    ctx->pc = 0x1A48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48A8u;
            // 0x1a48ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48B0u; }
        if (ctx->pc != 0x1A48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48B0u; }
        if (ctx->pc != 0x1A48B0u) { return; }
    }
    ctx->pc = 0x1A48B0u;
    // 0x1a48b0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A48B0u;
    {
        const bool branch_taken_0x1a48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48B0u;
            // 0x1a48b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48b0) {
            ctx->pc = 0x1A49B4u;
            goto label_1a49b4;
        }
    }
    ctx->pc = 0x1A48B8u;
label_1a48b8:
    // 0x1a48b8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A48B8u;
    {
        const bool branch_taken_0x1a48b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48B8u;
            // 0x1a48bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48b8) {
            ctx->pc = 0x1A48CCu;
            goto label_1a48cc;
        }
    }
    ctx->pc = 0x1A48C0u;
    // 0x1a48c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a48c4: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x1a48c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a48c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1a48cc:
    // 0x1a48cc: 0x26430022  addiu       $v1, $s2, 0x22
    ctx->pc = 0x1a48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
    // 0x1a48d0: 0x8c42ca88  lw          $v0, -0x3578($v0)
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953608)));
    // 0x1a48d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a48d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48d8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1a48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1a48dc: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A48DCu;
    {
        const bool branch_taken_0x1a48dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A48E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48DCu;
            // 0x1a48e0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48dc) {
            ctx->pc = 0x1A48ECu;
            goto label_1a48ec;
        }
    }
    ctx->pc = 0x1A48E4u;
    // 0x1a48e4: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x1a48e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1a48e8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1a48e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a48ec:
    // 0x1a48ec: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a48f0: 0x8248001e  lb          $t0, 0x1E($s2)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x1a48f4: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x1a48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a48f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a48f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48fc: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x1a48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a4900: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x1a4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a4904: 0x96450020  lhu         $a1, 0x20($s2)
    ctx->pc = 0x1a4904u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a4908: 0x8246001c  lb          $a2, 0x1C($s2)
    ctx->pc = 0x1a4908u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a490c: 0x8247001d  lb          $a3, 0x1D($s2)
    ctx->pc = 0x1a490cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
    // 0x1a4910: 0xc06911a  jal         func_1A4468
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4910u;
            // 0x1a4914: 0x8249001f  lb          $t1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4468u;
    if (runtime->hasFunction(0x1A4468u)) {
        auto targetFn = runtime->lookupFunction(0x1A4468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4918u; }
        if (ctx->pc != 0x1A4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a4468_0x1a46b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4918u; }
        if (ctx->pc != 0x1A4918u) { return; }
    }
    ctx->pc = 0x1A4918u;
    // 0x1a4918: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4918u;
    {
        const bool branch_taken_0x1a4918 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A491Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4918u;
            // 0x1a491c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4918) {
            ctx->pc = 0x1A4924u;
            goto label_1a4924;
        }
    }
    ctx->pc = 0x1A4920u;
    // 0x1a4920: 0x9648000e  lhu         $t0, 0xE($s2)
    ctx->pc = 0x1a4920u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_1a4924:
    // 0x1a4924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a492c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4930: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a4930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4938: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a493c: 0xc06b498  jal         func_1AD260
    ctx->pc = 0x1A493Cu;
    SET_GPR_U32(ctx, 31, 0x1A4944u);
    ctx->pc = 0x1A4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A493Cu;
            // 0x1a4940: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD260u;
    if (runtime->hasFunction(0x1AD260u)) {
        auto targetFn = runtime->lookupFunction(0x1AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4944u; }
        if (ctx->pc != 0x1A4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD260_0x1ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4944u; }
        if (ctx->pc != 0x1A4944u) { return; }
    }
    ctx->pc = 0x1A4944u;
    // 0x1a4944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4948: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4948u;
    {
        const bool branch_taken_0x1a4948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4948u;
            // 0x1a494c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4948) {
            ctx->pc = 0x1A49B4u;
            goto label_1a49b4;
        }
    }
    ctx->pc = 0x1A4950u;
    // 0x1a4950: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4950u;
    {
        const bool branch_taken_0x1a4950 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4950u;
            // 0x1a4954: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4950) {
            ctx->pc = 0x1A49A0u;
            goto label_1a49a0;
        }
    }
    ctx->pc = 0x1A4958u;
    // 0x1a4958: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1a495c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4960: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a4964: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a4968: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4968u;
    {
        const bool branch_taken_0x1a4968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A496Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4968u;
            // 0x1a496c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4968) {
            ctx->pc = 0x1A4978u;
            goto label_1a4978;
        }
    }
    ctx->pc = 0x1A4970u;
    // 0x1a4970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4970u;
    {
        const bool branch_taken_0x1a4970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4970u;
            // 0x1a4974: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4970) {
            ctx->pc = 0x1A497Cu;
            goto label_1a497c;
        }
    }
    ctx->pc = 0x1A4978u;
label_1a4978:
    // 0x1a4978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a497c:
    // 0x1a497c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A497Cu;
    {
        const bool branch_taken_0x1a497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a497c) {
            ctx->pc = 0x1A4980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A497Cu;
            // 0x1a4980: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4998u;
            goto label_1a4998;
        }
    }
    ctx->pc = 0x1A4984u;
    // 0x1a4984: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1a4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1a4988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a498c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A498Cu;
    {
        const bool branch_taken_0x1a498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A498Cu;
            // 0x1a4990: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a498c) {
            ctx->pc = 0x1A499Cu;
            goto label_1a499c;
        }
    }
    ctx->pc = 0x1A4994u;
    // 0x1a4994: 0x0  nop
    ctx->pc = 0x1a4994u;
    // NOP
label_1a4998:
    // 0x1a4998: 0x94420086  lhu         $v0, 0x86($v0)
    ctx->pc = 0x1a4998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
label_1a499c:
    // 0x1a499c: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x1a499cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a49a0:
    // 0x1a49a0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A49A0u;
    {
        const bool branch_taken_0x1a49a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49A0u;
            // 0x1a49a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49a0) {
            ctx->pc = 0x1A49B4u;
            goto label_1a49b4;
        }
    }
    ctx->pc = 0x1A49A8u;
    // 0x1a49a8: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x1a49a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1a49ac: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x1a49acu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a49b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a49b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a49b4:
    // 0x1a49b4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1a49b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a49b8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1a49b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a49bc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1a49bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a49c0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1a49c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a49c4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1a49c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a49c8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1a49c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a49cc: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1a49ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a49d0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1a49d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a49d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1a49d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a49d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a49d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a49dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A49DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49DCu;
            // 0x1a49e0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49B4u: goto label_1a49b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A49E4u;
    // 0x1a49e4: 0x0  nop
    ctx->pc = 0x1a49e4u;
    // NOP
}
