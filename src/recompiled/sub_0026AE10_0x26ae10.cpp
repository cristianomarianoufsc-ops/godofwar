#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AE10
// Address: 0x26ae10 - 0x26b5c8
void sub_0026AE10_0x26ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AE10_0x26ae10");
#endif

    ctx->pc = 0x26ae10u;

    // 0x26ae10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26ae14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x26ae18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x26ae1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ae1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x26ae24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26ae24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ae2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26ae2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ae34: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x26ae34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26ae38: 0x384203ed  xori        $v0, $v0, 0x3ED
    ctx->pc = 0x26ae38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1005);
    // 0x26ae3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26AE3Cu;
    {
        const bool branch_taken_0x26ae3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE3Cu;
            // 0x26ae40: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae3c) {
            ctx->pc = 0x26AE58u;
            goto label_26ae58;
        }
    }
    ctx->pc = 0x26AE44u;
    // 0x26ae44: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x26ae44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x26ae48: 0xc09ad72  jal         func_26B5C8
    ctx->pc = 0x26AE48u;
    SET_GPR_U32(ctx, 31, 0x26AE50u);
    ctx->pc = 0x26AE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE48u;
            // 0x26ae4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B5C8u;
    if (runtime->hasFunction(0x26B5C8u)) {
        auto targetFn = runtime->lookupFunction(0x26B5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE50u; }
        if (ctx->pc != 0x26AE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B5C8_0x26b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE50u; }
        if (ctx->pc != 0x26AE50u) { return; }
    }
    ctx->pc = 0x26AE50u;
    // 0x26ae50: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26AE50u;
    {
        const bool branch_taken_0x26ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE50u;
            // 0x26ae54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae50) {
            ctx->pc = 0x26AEDCu;
            goto label_26aedc;
        }
    }
    ctx->pc = 0x26AE58u;
label_26ae58:
    // 0x26ae58: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x26ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x26ae5c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x26AE5Cu;
    {
        const bool branch_taken_0x26ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae5c) {
            ctx->pc = 0x26AE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE5Cu;
            // 0x26ae60: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AEC4u;
            goto label_26aec4;
        }
    }
    ctx->pc = 0x26AE64u;
    // 0x26ae64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x26ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ae68: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x26ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ae6c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x26ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x26ae70: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AE70u;
    {
        const bool branch_taken_0x26ae70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26ae70) {
            ctx->pc = 0x26AE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE70u;
            // 0x26ae74: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AE84u;
            goto label_26ae84;
        }
    }
    ctx->pc = 0x26AE78u;
    // 0x26ae78: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x26ae78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26ae7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26AE7Cu;
    {
        const bool branch_taken_0x26ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE7Cu;
            // 0x26ae80: 0xa6220074  sh          $v0, 0x74($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae7c) {
            ctx->pc = 0x26AEC0u;
            goto label_26aec0;
        }
    }
    ctx->pc = 0x26AE84u;
label_26ae84:
    // 0x26ae84: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x26ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x26ae88: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x26ae88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26ae8c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x26ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26ae90: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x26ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26ae94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26ae94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ae98: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x26ae98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x26ae9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26aea0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x26aea0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x26aea4: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x26aea4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x26aea8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26aea8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26aeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aeb0: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x26aeb0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x26aeb4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x26aeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x26aeb8: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x26AEB8u;
    SET_GPR_U32(ctx, 31, 0x26AEC0u);
    ctx->pc = 0x26AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEB8u;
            // 0x26aebc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEC0u; }
        if (ctx->pc != 0x26AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEC0u; }
        if (ctx->pc != 0x26AEC0u) { return; }
    }
    ctx->pc = 0x26AEC0u;
label_26aec0:
    // 0x26aec0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_26aec4:
    // 0x26aec4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26aec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26aec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aecc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26aeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aed0: 0xc09ada4  jal         func_26B690
    ctx->pc = 0x26AED0u;
    SET_GPR_U32(ctx, 31, 0x26AED8u);
    ctx->pc = 0x26AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AED0u;
            // 0x26aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B690u;
    if (runtime->hasFunction(0x26B690u)) {
        auto targetFn = runtime->lookupFunction(0x26B690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AED8u; }
        if (ctx->pc != 0x26AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B690_0x26b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AED8u; }
        if (ctx->pc != 0x26AED8u) { return; }
    }
    ctx->pc = 0x26AED8u;
    // 0x26aed8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26aed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aedc:
    // 0x26aedc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26aedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26aee0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26aee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26aee4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26aee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26aee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26aee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26aeec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26aeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26aef0: 0x3e00008  jr          $ra
    ctx->pc = 0x26AEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEF0u;
            // 0x26aef4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AEF8u;
    // 0x26aef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26aef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26aefc: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AEFCu;
    {
        const bool branch_taken_0x26aefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEFCu;
            // 0x26af00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aefc) {
            ctx->pc = 0x26AF1Cu;
            goto label_26af1c;
        }
    }
    ctx->pc = 0x26AF04u;
    // 0x26af04: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26af08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26af0c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26af0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26af10: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26af14: 0x40f809  jalr        $v0
    ctx->pc = 0x26AF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AF1Cu);
        ctx->pc = 0x26AF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF14u;
            // 0x26af18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AF1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AF1Cu; }
            if (ctx->pc != 0x26AF1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26AF1Cu;
label_26af1c:
    // 0x26af1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26af20: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF20u;
            // 0x26af24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AF28u;
    // 0x26af28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26af2c: 0x240203eb  addiu       $v0, $zero, 0x3EB
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x26af30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26af34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26af34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26af38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26af3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26af3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26af44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26af44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26af4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26af4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af50: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x26af54: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x26af54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26af58: 0x14820029  bne         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26AF58u;
    {
        const bool branch_taken_0x26af58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF58u;
            // 0x26af5c: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af58) {
            ctx->pc = 0x26B000u;
            goto label_26b000;
        }
    }
    ctx->pc = 0x26AF60u;
    // 0x26af60: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26af64: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x26af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x26af68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x26af6c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26AF6Cu;
    {
        const bool branch_taken_0x26af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF6Cu;
            // 0x26af70: 0x240203ee  addiu       $v0, $zero, 0x3EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1006));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af6c) {
            ctx->pc = 0x26B004u;
            goto label_26b004;
        }
    }
    ctx->pc = 0x26AF74u;
    // 0x26af74: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x26af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x26af78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26af78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26af7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26af80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26af88: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26af8c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26af90: 0x40f809  jalr        $v0
    ctx->pc = 0x26AF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AF98u);
        ctx->pc = 0x26AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AF90u;
            // 0x26af94: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AF98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AF98u; }
            if (ctx->pc != 0x26AF98u) { return; }
        }
        }
    }
    ctx->pc = 0x26AF98u;
    // 0x26af98: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x26af98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26af9c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26afa0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26afa4: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x26afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x26afa8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x26afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x26afac: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x26afacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26afb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26afb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26afb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26afbc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26AFBCu;
    {
        const bool branch_taken_0x26afbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x26AFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFBCu;
            // 0x26afc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afbc) {
            ctx->pc = 0x26AFC8u;
            goto label_26afc8;
        }
    }
    ctx->pc = 0x26AFC4u;
    // 0x26afc4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_26afc8:
    // 0x26afc8: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AFC8u;
    {
        const bool branch_taken_0x26afc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afc8) {
            ctx->pc = 0x26AFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFC8u;
            // 0x26afcc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26AFE0u;
            goto label_26afe0;
        }
    }
    ctx->pc = 0x26AFD0u;
    // 0x26afd0: 0x78c50050  lq          $a1, 0x50($a2)
    ctx->pc = 0x26afd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x26afd4: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x26AFD4u;
    SET_GPR_U32(ctx, 31, 0x26AFDCu);
    ctx->pc = 0x26AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFD4u;
            // 0x26afd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFDCu; }
        if (ctx->pc != 0x26AFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFDCu; }
        if (ctx->pc != 0x26AFDCu) { return; }
    }
    ctx->pc = 0x26AFDCu;
    // 0x26afdc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_26afe0:
    // 0x26afe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26afe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afe4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26afe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afe8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26afe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26afec: 0xc09ada4  jal         func_26B690
    ctx->pc = 0x26AFECu;
    SET_GPR_U32(ctx, 31, 0x26AFF4u);
    ctx->pc = 0x26AFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFECu;
            // 0x26aff0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B690u;
    if (runtime->hasFunction(0x26B690u)) {
        auto targetFn = runtime->lookupFunction(0x26B690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFF4u; }
        if (ctx->pc != 0x26AFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B690_0x26b690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AFF4u; }
        if (ctx->pc != 0x26AFF4u) { return; }
    }
    ctx->pc = 0x26AFF4u;
    // 0x26aff4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x26aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26aff8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26AFF8u;
    {
        const bool branch_taken_0x26aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AFF8u;
            // 0x26affc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aff8) {
            ctx->pc = 0x26B040u;
            goto label_26b040;
        }
    }
    ctx->pc = 0x26B000u;
label_26b000:
    // 0x26b000: 0x240203ee  addiu       $v0, $zero, 0x3EE
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1006));
label_26b004:
    // 0x26b004: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B004u;
    {
        const bool branch_taken_0x26b004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B004u;
            // 0x26b008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b004) {
            ctx->pc = 0x26B030u;
            goto label_26b030;
        }
    }
    ctx->pc = 0x26B00Cu;
    // 0x26b00c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26b010: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26b010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b018: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26b018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26b01c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26b020: 0x40f809  jalr        $v0
    ctx->pc = 0x26B020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B028u);
        ctx->pc = 0x26B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B020u;
            // 0x26b024: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B028u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B028u; }
            if (ctx->pc != 0x26B028u) { return; }
        }
        }
    }
    ctx->pc = 0x26B028u;
    // 0x26b028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B028u;
    {
        const bool branch_taken_0x26b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B028u;
            // 0x26b02c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b028) {
            ctx->pc = 0x26B044u;
            goto label_26b044;
        }
    }
    ctx->pc = 0x26B030u;
label_26b030:
    // 0x26b030: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26b034: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x26B034u;
    SET_GPR_U32(ctx, 31, 0x26B03Cu);
    ctx->pc = 0x26B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B034u;
            // 0x26b038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B03Cu; }
        if (ctx->pc != 0x26B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B03Cu; }
        if (ctx->pc != 0x26B03Cu) { return; }
    }
    ctx->pc = 0x26B03Cu;
    // 0x26b03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b040:
    // 0x26b040: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26b040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26b044:
    // 0x26b044: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26b044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b04c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26b04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b054: 0x3e00008  jr          $ra
    ctx->pc = 0x26B054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B054u;
            // 0x26b058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B05Cu;
    // 0x26b05c: 0x0  nop
    ctx->pc = 0x26b05cu;
    // NOP
    // 0x26b060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26b064: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26b064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26b068: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26b06c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x26b06cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x26b070: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26b074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b078: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26b07c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26b07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b080: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26b084: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26b084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b08c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x26b08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x26b090: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26b094: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B094u;
    {
        const bool branch_taken_0x26b094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x26B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B094u;
            // 0x26b098: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b094) {
            ctx->pc = 0x26B0A8u;
            goto label_26b0a8;
        }
    }
    ctx->pc = 0x26B09Cu;
    // 0x26b09c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0a0: 0xc047092  jal         func_11C248
    ctx->pc = 0x26B0A0u;
    SET_GPR_U32(ctx, 31, 0x26B0A8u);
    ctx->pc = 0x26B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0A0u;
            // 0x26b0a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C248u;
    if (runtime->hasFunction(0x11C248u)) {
        auto targetFn = runtime->lookupFunction(0x11C248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0A8u; }
        if (ctx->pc != 0x26B0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C248_0x11c248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0A8u; }
        if (ctx->pc != 0x26B0A8u) { return; }
    }
    ctx->pc = 0x26B0A8u;
label_26b0a8:
    // 0x26b0a8: 0x1232000a  beq         $s1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x26B0A8u;
    {
        const bool branch_taken_0x26b0a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x26B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0A8u;
            // 0x26b0ac: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0a8) {
            ctx->pc = 0x26B0D4u;
            goto label_26b0d4;
        }
    }
    ctx->pc = 0x26B0B0u;
    // 0x26b0b0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x26b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26b0b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26b0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26b0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b0c4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26b0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b0c8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26b0cc: 0x40f809  jalr        $v0
    ctx->pc = 0x26B0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B0D4u);
        ctx->pc = 0x26B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0CCu;
            // 0x26b0d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B0D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B0D4u; }
            if (ctx->pc != 0x26B0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x26B0D4u;
label_26b0d4:
    // 0x26b0d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26b0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b0d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26b0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b0dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26b0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b0e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26b0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b0e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26b0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0ECu;
            // 0x26b0f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B0F4u;
    // 0x26b0f4: 0x0  nop
    ctx->pc = 0x26b0f4u;
    // NOP
    // 0x26b0f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26b0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26b0fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26b0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b100: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x26b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x26b104: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x26b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x26b108: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x26b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x26b10c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x26b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x26b110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26b110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b114: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x26b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x26b118: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26b118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b11c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26b120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b124: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x26b128: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x26b128u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26b12c: 0x14820027  bne         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26B12Cu;
    {
        const bool branch_taken_0x26b12c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B12Cu;
            // 0x26b130: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b12c) {
            ctx->pc = 0x26B1CCu;
            goto label_26b1cc;
        }
    }
    ctx->pc = 0x26B134u;
    // 0x26b134: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x26b138: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26b13c: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x26B13Cu;
    {
        const bool branch_taken_0x26b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B13Cu;
            // 0x26b140: 0x240203ed  addiu       $v0, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b13c) {
            ctx->pc = 0x26B1D0u;
            goto label_26b1d0;
        }
    }
    ctx->pc = 0x26B144u;
    // 0x26b144: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x26b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x26b148: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b14c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x26b14cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26b150: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26b154: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b158: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b15c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x26b160: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26b164: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26b168: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x26b16c: 0x8453008e  lh          $s3, 0x8E($v0)
    ctx->pc = 0x26b16cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x26b170: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x26b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x26b174: 0x40f809  jalr        $v0
    ctx->pc = 0x26B174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B17Cu);
        ctx->pc = 0x26B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B174u;
            // 0x26b178: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B17Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B17Cu; }
            if (ctx->pc != 0x26B17Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26B17Cu;
    // 0x26b17c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b180: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26b184: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x26b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x26b188: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26b188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b18c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x26B18Cu;
    SET_GPR_U32(ctx, 31, 0x26B194u);
    ctx->pc = 0x26B190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B18Cu;
            // 0x26b190: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B194u; }
        if (ctx->pc != 0x26B194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B194u; }
        if (ctx->pc != 0x26B194u) { return; }
    }
    ctx->pc = 0x26B194u;
    // 0x26b194: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b198: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B198u;
    {
        const bool branch_taken_0x26b198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b198) {
            ctx->pc = 0x26B1B8u;
            goto label_26b1b8;
        }
    }
    ctx->pc = 0x26B1A0u;
    // 0x26b1a0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x26b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x26b1a4: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B1A4u;
    {
        const bool branch_taken_0x26b1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x26b1a4) {
            ctx->pc = 0x26B1B8u;
            goto label_26b1b8;
        }
    }
    ctx->pc = 0x26B1ACu;
    // 0x26b1ac: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x26B1ACu;
    SET_GPR_U32(ctx, 31, 0x26B1B4u);
    ctx->pc = 0x26B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1ACu;
            // 0x26b1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (runtime->hasFunction(0x1CBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1CBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1B4u; }
        if (ctx->pc != 0x26B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBB30_0x1cbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1B4u; }
        if (ctx->pc != 0x26B1B4u) { return; }
    }
    ctx->pc = 0x26B1B4u;
    // 0x26b1b4: 0x0  nop
    ctx->pc = 0x26b1b4u;
    // NOP
label_26b1b8:
    // 0x26b1b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26b1bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26b1c4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26B1C4u;
    {
        const bool branch_taken_0x26b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1C4u;
            // 0x26b1c8: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1c4) {
            ctx->pc = 0x26B2C4u;
            goto label_26b2c4;
        }
    }
    ctx->pc = 0x26B1CCu;
label_26b1cc:
    // 0x26b1cc: 0x240203ed  addiu       $v0, $zero, 0x3ED
    ctx->pc = 0x26b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
label_26b1d0:
    // 0x26b1d0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B1D0u;
    {
        const bool branch_taken_0x26b1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1D0u;
            // 0x26b1d4: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1d0) {
            ctx->pc = 0x26B1E0u;
            goto label_26b1e0;
        }
    }
    ctx->pc = 0x26B1D8u;
    // 0x26b1d8: 0x54820033  bnel        $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26B1D8u;
    {
        const bool branch_taken_0x26b1d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b1d8) {
            ctx->pc = 0x26B1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1D8u;
            // 0x26b1dc: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B2A8u;
            goto label_26b2a8;
        }
    }
    ctx->pc = 0x26B1E0u;
label_26b1e0:
    // 0x26b1e0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x26b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x26b1e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26b1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26b1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b1f0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26b1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b1f4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26b1f8: 0x40f809  jalr        $v0
    ctx->pc = 0x26B1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B200u);
        ctx->pc = 0x26B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1F8u;
            // 0x26b1fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B200u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B200u; }
            if (ctx->pc != 0x26B200u) { return; }
        }
        }
    }
    ctx->pc = 0x26B200u;
    // 0x26b200: 0xc0743c6  jal         func_1D0F18
    ctx->pc = 0x26B200u;
    SET_GPR_U32(ctx, 31, 0x26B208u);
    ctx->pc = 0x26B204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B200u;
            // 0x26b204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F18u;
    if (runtime->hasFunction(0x1D0F18u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B208u; }
        if (ctx->pc != 0x26B208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F18_0x1d0f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B208u; }
        if (ctx->pc != 0x26B208u) { return; }
    }
    ctx->pc = 0x26B208u;
    // 0x26b208: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x26b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26b20c: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26B20Cu;
    SET_GPR_U32(ctx, 31, 0x26B214u);
    ctx->pc = 0x26B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B20Cu;
            // 0x26b210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B214u; }
        if (ctx->pc != 0x26B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B214u; }
        if (ctx->pc != 0x26B214u) { return; }
    }
    ctx->pc = 0x26B214u;
    // 0x26b214: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x26b214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x26b218: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b21c: 0x84a20044  lh          $v0, 0x44($a1)
    ctx->pc = 0x26b21cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x26b220: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26B220u;
    {
        const bool branch_taken_0x26b220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B220u;
            // 0x26b224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b220) {
            ctx->pc = 0x26B260u;
            goto label_26b260;
        }
    }
    ctx->pc = 0x26B228u;
    // 0x26b228: 0x84b1008c  lh          $s1, 0x8C($a1)
    ctx->pc = 0x26b228u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x26b22c: 0x5222001c  beql        $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B22Cu;
    {
        const bool branch_taken_0x26b22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b22c) {
            ctx->pc = 0x26B230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B22Cu;
            // 0x26b230: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B234u;
    // 0x26b234: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b238: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b23c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b240: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b244: 0x40f809  jalr        $v0
    ctx->pc = 0x26B244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B24Cu);
        ctx->pc = 0x26B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B244u;
            // 0x26b248: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B24Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B24Cu; }
            if (ctx->pc != 0x26B24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26B24Cu;
    // 0x26b24c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b250: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B250u;
    SET_GPR_U32(ctx, 31, 0x26B258u);
    ctx->pc = 0x26B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B250u;
            // 0x26b254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B258u; }
        if (ctx->pc != 0x26B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B258u; }
        if (ctx->pc != 0x26B258u) { return; }
    }
    ctx->pc = 0x26B258u;
    // 0x26b258: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B258u;
    {
        const bool branch_taken_0x26b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B258u;
            // 0x26b25c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b258) {
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B260u;
label_26b260:
    // 0x26b260: 0x84b10090  lh          $s1, 0x90($a1)
    ctx->pc = 0x26b260u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x26b264: 0x5222000e  beql        $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B264u;
    {
        const bool branch_taken_0x26b264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b264) {
            ctx->pc = 0x26B268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B264u;
            // 0x26b268: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B26Cu;
    // 0x26b26c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b270: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b274: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b278: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b27c: 0x40f809  jalr        $v0
    ctx->pc = 0x26B27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B284u);
        ctx->pc = 0x26B280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B27Cu;
            // 0x26b280: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B284u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B284u; }
            if (ctx->pc != 0x26B284u) { return; }
        }
        }
    }
    ctx->pc = 0x26B284u;
    // 0x26b284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b288: 0xc08235e  jal         func_208D78
    ctx->pc = 0x26B288u;
    SET_GPR_U32(ctx, 31, 0x26B290u);
    ctx->pc = 0x26B28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B288u;
            // 0x26b28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B290u; }
        if (ctx->pc != 0x26B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B290u; }
        if (ctx->pc != 0x26B290u) { return; }
    }
    ctx->pc = 0x26B290u;
    // 0x26b290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b294: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B294u;
    SET_GPR_U32(ctx, 31, 0x26B29Cu);
    ctx->pc = 0x26B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B294u;
            // 0x26b298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B29Cu; }
        if (ctx->pc != 0x26B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B29Cu; }
        if (ctx->pc != 0x26B29Cu) { return; }
    }
    ctx->pc = 0x26B29Cu;
    // 0x26b29c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26b2a0:
    // 0x26b2a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26B2A0u;
    {
        const bool branch_taken_0x26b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2A0u;
            // 0x26b2a4: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2a0) {
            ctx->pc = 0x26B2C4u;
            goto label_26b2c4;
        }
    }
    ctx->pc = 0x26B2A8u;
label_26b2a8:
    // 0x26b2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2ac: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x26b2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b2b4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26b2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26b2b8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26b2bc: 0x40f809  jalr        $v0
    ctx->pc = 0x26B2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B2C4u);
        ctx->pc = 0x26B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2BCu;
            // 0x26b2c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B2C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B2C4u; }
            if (ctx->pc != 0x26B2C4u) { return; }
        }
        }
    }
    ctx->pc = 0x26B2C4u;
label_26b2c4:
    // 0x26b2c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x26b2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b2c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x26b2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b2cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x26b2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b2d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26b2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b2d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x26b2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b2d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2DCu;
            // 0x26b2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B2E4u;
    // 0x26b2e4: 0x0  nop
    ctx->pc = 0x26b2e4u;
    // NOP
    // 0x26b2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b2ec: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x26b2ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b2f4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26b2f8: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x26b2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26b2fc: 0x91020089  lbu         $v0, 0x89($t0)
    ctx->pc = 0x26b2fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 137)));
    // 0x26b300: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x26b300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26b304: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26B304u;
    {
        const bool branch_taken_0x26b304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B304u;
            // 0x26b308: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b304) {
            ctx->pc = 0x26B338u;
            goto label_26b338;
        }
    }
    ctx->pc = 0x26B30Cu;
    // 0x26b30c: 0x91030089  lbu         $v1, 0x89($t0)
    ctx->pc = 0x26b30cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 137)));
    // 0x26b310: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26b310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26b314: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26b318: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x26b318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26b31c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26b31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26b320: 0x24425ee0  addiu       $v0, $v0, 0x5EE0
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x26b324: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26b328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b32c: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x26b32cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x26b330: 0xa1040089  sb          $a0, 0x89($t0)
    ctx->pc = 0x26b330u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 137), (uint8_t)GPR_U32(ctx, 4));
    // 0x26b334: 0xa100008a  sb          $zero, 0x8A($t0)
    ctx->pc = 0x26b334u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 138), (uint8_t)GPR_U32(ctx, 0));
label_26b338:
    // 0x26b338: 0x11490007  beq         $t2, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B338u;
    {
        const bool branch_taken_0x26b338 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        ctx->pc = 0x26B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B338u;
            // 0x26b33c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b338) {
            ctx->pc = 0x26B358u;
            goto label_26b358;
        }
    }
    ctx->pc = 0x26B340u;
    // 0x26b340: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x26b344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b348: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b34c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26b350: 0x40f809  jalr        $v0
    ctx->pc = 0x26B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B358u);
        ctx->pc = 0x26B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B350u;
            // 0x26b354: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B358u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B358u; }
            if (ctx->pc != 0x26B358u) { return; }
        }
        }
    }
    ctx->pc = 0x26B358u;
label_26b358:
    // 0x26b358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B35Cu;
            // 0x26b360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B364u;
    // 0x26b364: 0x0  nop
    ctx->pc = 0x26b364u;
    // NOP
    // 0x26b368: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26b36c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26b36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b370: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x26b374: 0x240203ea  addiu       $v0, $zero, 0x3EA
    ctx->pc = 0x26b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
    // 0x26b378: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x26b37c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26b37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b380: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x26b384: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x26b388: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26b388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b38c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26b390: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26b394: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x26b398: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x26b398u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26b39c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x26b39cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26b3a0: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26B3A0u;
    {
        const bool branch_taken_0x26b3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3A0u;
            // 0x26b3a4: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3a0) {
            ctx->pc = 0x26B470u;
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B3A8u;
    // 0x26b3a8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26b3ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26b3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26b3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b3b8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26b3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b3bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26b3c0: 0x40f809  jalr        $v0
    ctx->pc = 0x26B3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B3C8u);
        ctx->pc = 0x26B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3C0u;
            // 0x26b3c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B3C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B3C8u; }
            if (ctx->pc != 0x26B3C8u) { return; }
        }
        }
    }
    ctx->pc = 0x26B3C8u;
    // 0x26b3c8: 0xc0743c6  jal         func_1D0F18
    ctx->pc = 0x26B3C8u;
    SET_GPR_U32(ctx, 31, 0x26B3D0u);
    ctx->pc = 0x26B3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3C8u;
            // 0x26b3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F18u;
    if (runtime->hasFunction(0x1D0F18u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3D0u; }
        if (ctx->pc != 0x26B3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F18_0x1d0f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3D0u; }
        if (ctx->pc != 0x26B3D0u) { return; }
    }
    ctx->pc = 0x26B3D0u;
    // 0x26b3d0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x26b3d4: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26B3D4u;
    SET_GPR_U32(ctx, 31, 0x26B3DCu);
    ctx->pc = 0x26B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3D4u;
            // 0x26b3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3DCu; }
        if (ctx->pc != 0x26B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3DCu; }
        if (ctx->pc != 0x26B3DCu) { return; }
    }
    ctx->pc = 0x26B3DCu;
    // 0x26b3dc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x26b3e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b3e4: 0x84820044  lh          $v0, 0x44($a0)
    ctx->pc = 0x26b3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26b3e8: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26B3E8u;
    {
        const bool branch_taken_0x26b3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3E8u;
            // 0x26b3ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3e8) {
            ctx->pc = 0x26B428u;
            goto label_26b428;
        }
    }
    ctx->pc = 0x26B3F0u;
    // 0x26b3f0: 0x8490008c  lh          $s0, 0x8C($a0)
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x26b3f4: 0x5202001c  beql        $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B3F4u;
    {
        const bool branch_taken_0x26b3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b3f4) {
            ctx->pc = 0x26B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3F4u;
            // 0x26b3f8: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B468u;
            goto label_26b468;
        }
    }
    ctx->pc = 0x26B3FCu;
    // 0x26b3fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26b400: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b404: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b408: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b40c: 0x40f809  jalr        $v0
    ctx->pc = 0x26B40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B414u);
        ctx->pc = 0x26B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B40Cu;
            // 0x26b410: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B414u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B414u; }
            if (ctx->pc != 0x26B414u) { return; }
        }
        }
    }
    ctx->pc = 0x26B414u;
    // 0x26b414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b418: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B418u;
    SET_GPR_U32(ctx, 31, 0x26B420u);
    ctx->pc = 0x26B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B418u;
            // 0x26b41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B420u; }
        if (ctx->pc != 0x26B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B420u; }
        if (ctx->pc != 0x26B420u) { return; }
    }
    ctx->pc = 0x26B420u;
    // 0x26b420: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B420u;
    {
        const bool branch_taken_0x26b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B420u;
            // 0x26b424: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b420) {
            ctx->pc = 0x26B468u;
            goto label_26b468;
        }
    }
    ctx->pc = 0x26B428u;
label_26b428:
    // 0x26b428: 0x84910090  lh          $s1, 0x90($a0)
    ctx->pc = 0x26b428u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x26b42c: 0x5222000e  beql        $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B42Cu;
    {
        const bool branch_taken_0x26b42c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b42c) {
            ctx->pc = 0x26B430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B42Cu;
            // 0x26b430: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B468u;
            goto label_26b468;
        }
    }
    ctx->pc = 0x26B434u;
    // 0x26b434: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26b438: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b43c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b440: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b444: 0x40f809  jalr        $v0
    ctx->pc = 0x26B444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B44Cu);
        ctx->pc = 0x26B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B444u;
            // 0x26b448: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B44Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B44Cu; }
            if (ctx->pc != 0x26B44Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26B44Cu;
    // 0x26b44c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b450: 0xc08235e  jal         func_208D78
    ctx->pc = 0x26B450u;
    SET_GPR_U32(ctx, 31, 0x26B458u);
    ctx->pc = 0x26B454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B450u;
            // 0x26b454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B458u; }
        if (ctx->pc != 0x26B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B458u; }
        if (ctx->pc != 0x26B458u) { return; }
    }
    ctx->pc = 0x26B458u;
    // 0x26b458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b45c: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B45Cu;
    SET_GPR_U32(ctx, 31, 0x26B464u);
    ctx->pc = 0x26B460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B45Cu;
            // 0x26b460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B464u; }
        if (ctx->pc != 0x26B464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B464u; }
        if (ctx->pc != 0x26B464u) { return; }
    }
    ctx->pc = 0x26B464u;
    // 0x26b464: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_26b468:
    // 0x26b468: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x26B468u;
    {
        const bool branch_taken_0x26b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B468u;
            // 0x26b46c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b468) {
            ctx->pc = 0x26B5A4u;
            goto label_26b5a4;
        }
    }
    ctx->pc = 0x26B470u;
label_26b470:
    // 0x26b470: 0x24020409  addiu       $v0, $zero, 0x409
    ctx->pc = 0x26b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x26b474: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B474u;
    {
        const bool branch_taken_0x26b474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b474) {
            ctx->pc = 0x26B478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B474u;
            // 0x26b478: 0x24020406  addiu       $v0, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B4B0u;
            goto label_26b4b0;
        }
    }
    ctx->pc = 0x26B47Cu;
    // 0x26b47c: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x26b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x26b480: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b484: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x26b484u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26b488: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b48c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x26b490: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b494: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26b498: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x26b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x26b49c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26b49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4a0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x26B4A0u;
    SET_GPR_U32(ctx, 31, 0x26B4A8u);
    ctx->pc = 0x26B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4A0u;
            // 0x26b4a4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4A8u; }
        if (ctx->pc != 0x26B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4A8u; }
        if (ctx->pc != 0x26B4A8u) { return; }
    }
    ctx->pc = 0x26B4A8u;
    // 0x26b4a8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x26B4A8u;
    {
        const bool branch_taken_0x26b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4A8u;
            // 0x26b4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4a8) {
            ctx->pc = 0x26B5A4u;
            goto label_26b5a4;
        }
    }
    ctx->pc = 0x26B4B0u;
label_26b4b0:
    // 0x26b4b0: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x26B4B0u;
    {
        const bool branch_taken_0x26b4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b4b0) {
            ctx->pc = 0x26B4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4B0u;
            // 0x26b4b4: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B588u;
            goto label_26b588;
        }
    }
    ctx->pc = 0x26B4B8u;
    // 0x26b4b8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x26b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26b4bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26b4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b4c8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26b4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b4cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26b4d0: 0x40f809  jalr        $v0
    ctx->pc = 0x26B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B4D8u);
        ctx->pc = 0x26B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4D0u;
            // 0x26b4d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B4D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B4D8u; }
            if (ctx->pc != 0x26B4D8u) { return; }
        }
        }
    }
    ctx->pc = 0x26B4D8u;
    // 0x26b4d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x26b4dc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x26b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26b4e0: 0x94450088  lhu         $a1, 0x88($v0)
    ctx->pc = 0x26b4e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x26b4e4: 0x8453008e  lh          $s3, 0x8E($v0)
    ctx->pc = 0x26b4e4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x26b4e8: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26b4ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26B4ECu;
    {
        const bool branch_taken_0x26b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4ECu;
            // 0x26b4f0: 0x24750014  addiu       $s5, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4ec) {
            ctx->pc = 0x26B540u;
            goto label_26b540;
        }
    }
    ctx->pc = 0x26B4F4u;
    // 0x26b4f4: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x26b4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4fc: 0xc047086  jal         func_11C218
    ctx->pc = 0x26B4FCu;
    SET_GPR_U32(ctx, 31, 0x26B504u);
    ctx->pc = 0x26B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4FCu;
            // 0x26b500: 0xa6220072  sh          $v0, 0x72($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B504u; }
        if (ctx->pc != 0x26B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B504u; }
        if (ctx->pc != 0x26B504u) { return; }
    }
    ctx->pc = 0x26B504u;
    // 0x26b504: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26b504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x26b508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b50c: 0x5262001c  beql        $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B50Cu;
    {
        const bool branch_taken_0x26b50c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b50c) {
            ctx->pc = 0x26B510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B50Cu;
            // 0x26b510: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B580u;
            goto label_26b580;
        }
    }
    ctx->pc = 0x26B514u;
    // 0x26b514: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26b518: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26b51c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26b520: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26b524: 0x40f809  jalr        $v0
    ctx->pc = 0x26B524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B52Cu);
        ctx->pc = 0x26B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B524u;
            // 0x26b528: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B52Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B52Cu; }
            if (ctx->pc != 0x26B52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26B52Cu;
    // 0x26b52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b530: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x26B530u;
    SET_GPR_U32(ctx, 31, 0x26B538u);
    ctx->pc = 0x26B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B530u;
            // 0x26b534: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B538u; }
        if (ctx->pc != 0x26B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B538u; }
        if (ctx->pc != 0x26B538u) { return; }
    }
    ctx->pc = 0x26B538u;
    // 0x26b538: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B538u;
    {
        const bool branch_taken_0x26b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B538u;
            // 0x26b53c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b538) {
            ctx->pc = 0x26B580u;
            goto label_26b580;
        }
    }
    ctx->pc = 0x26B540u;
label_26b540:
    // 0x26b540: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x26b544: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x26b544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x26b548: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x26b548u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x26b54c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x26b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x26b550: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x26b550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x26b554: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x26b554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x26b558: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26b55c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x26b560: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26b564: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x26B564u;
    SET_GPR_U32(ctx, 31, 0x26B56Cu);
    ctx->pc = 0x26B568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B564u;
            // 0x26b568: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B56Cu; }
        if (ctx->pc != 0x26B56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B56Cu; }
        if (ctx->pc != 0x26B56Cu) { return; }
    }
    ctx->pc = 0x26B56Cu;
    // 0x26b56c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26b570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26b574: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26b574u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x26b578: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26b57c: 0x0  nop
    ctx->pc = 0x26b57cu;
    // NOP
label_26b580:
    // 0x26b580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26B580u;
    {
        const bool branch_taken_0x26b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B580u;
            // 0x26b584: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b580) {
            ctx->pc = 0x26B5A4u;
            goto label_26b5a4;
        }
    }
    ctx->pc = 0x26B588u;
label_26b588:
    // 0x26b588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b58c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x26b58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b590: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b594: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26b594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26b598: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26b59c: 0x40f809  jalr        $v0
    ctx->pc = 0x26B59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B5A4u);
        ctx->pc = 0x26B5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B59Cu;
            // 0x26b5a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B5A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B5A4u; }
            if (ctx->pc != 0x26B5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x26B5A4u;
label_26b5a4:
    // 0x26b5a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26b5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b5a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26b5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26b5ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26b5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b5b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26b5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b5b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26b5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b5b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26b5b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b5bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26B5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5C0u;
            // 0x26b5c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AE58u: goto label_26ae58;
            case 0x26AE84u: goto label_26ae84;
            case 0x26AEC0u: goto label_26aec0;
            case 0x26AEC4u: goto label_26aec4;
            case 0x26AEDCu: goto label_26aedc;
            case 0x26AF1Cu: goto label_26af1c;
            case 0x26AFC8u: goto label_26afc8;
            case 0x26AFE0u: goto label_26afe0;
            case 0x26B000u: goto label_26b000;
            case 0x26B004u: goto label_26b004;
            case 0x26B030u: goto label_26b030;
            case 0x26B040u: goto label_26b040;
            case 0x26B044u: goto label_26b044;
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0D4u: goto label_26b0d4;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1CCu: goto label_26b1cc;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B260u: goto label_26b260;
            case 0x26B2A0u: goto label_26b2a0;
            case 0x26B2A8u: goto label_26b2a8;
            case 0x26B2C4u: goto label_26b2c4;
            case 0x26B338u: goto label_26b338;
            case 0x26B358u: goto label_26b358;
            case 0x26B428u: goto label_26b428;
            case 0x26B468u: goto label_26b468;
            case 0x26B470u: goto label_26b470;
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B540u: goto label_26b540;
            case 0x26B580u: goto label_26b580;
            case 0x26B588u: goto label_26b588;
            case 0x26B5A4u: goto label_26b5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B5C8u;
}
