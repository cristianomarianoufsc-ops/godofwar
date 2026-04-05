#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A5E0
// Address: 0x22a5e0 - 0x22a6c0
void sub_0022A5E0_0x22a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A5E0_0x22a5e0");
#endif

    ctx->pc = 0x22a5e0u;

    // 0x22a5e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a5e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22a5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22a5e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22a5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22a5f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22a5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22a5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22a5fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22a5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a604: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22a604u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22a608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a60c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x22a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a610: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x22a610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a614: 0xb21018  mult        $v0, $a1, $s2
    ctx->pc = 0x22a614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a61c: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x22a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22a620: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x22A620u;
    SET_GPR_U32(ctx, 31, 0x22A628u);
    ctx->pc = 0x22A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A620u;
            // 0x22a624: 0x24a5003c  addiu       $a1, $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A628u; }
        if (ctx->pc != 0x22A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A628u; }
        if (ctx->pc != 0x22A628u) { return; }
    }
    ctx->pc = 0x22A628u;
    // 0x22a628: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A628u;
    {
        const bool branch_taken_0x22a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a628) {
            ctx->pc = 0x22A62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A628u;
            // 0x22a62c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A630u;
    // 0x22a630: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a638: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22a638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a63c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22a63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a640: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A640u;
    SET_GPR_U32(ctx, 31, 0x22A648u);
    ctx->pc = 0x22A644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A640u;
            // 0x22a644: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A648u; }
        if (ctx->pc != 0x22A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A648u; }
        if (ctx->pc != 0x22A648u) { return; }
    }
    ctx->pc = 0x22A648u;
    // 0x22a648: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22A648u;
    {
        const bool branch_taken_0x22a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A648u;
            // 0x22a64c: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a648) {
            ctx->pc = 0x22A69Cu;
            goto label_22a69c;
        }
    }
    ctx->pc = 0x22A650u;
label_22a650:
    // 0x22a650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a65c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x22a65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a660: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x22a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x22a664: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22A664u;
    SET_GPR_U32(ctx, 31, 0x22A66Cu);
    ctx->pc = 0x22A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A664u;
            // 0x22a668: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A66Cu; }
        if (ctx->pc != 0x22A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A66Cu; }
        if (ctx->pc != 0x22A66Cu) { return; }
    }
    ctx->pc = 0x22A66Cu;
    // 0x22a66c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x22A66Cu;
    {
        const bool branch_taken_0x22a66c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A66Cu;
            // 0x22a670: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a66c) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A674u;
    // 0x22a674: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a678: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a67c: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x22a67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22a680: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x22a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22a684: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a688: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A688u;
    {
        const bool branch_taken_0x22a688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A688u;
            // 0x22a68c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a688) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A690u;
    // 0x22a690: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A690u;
    SET_GPR_U32(ctx, 31, 0x22A698u);
    ctx->pc = 0x22A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A690u;
            // 0x22a694: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A698u; }
        if (ctx->pc != 0x22A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A698u; }
        if (ctx->pc != 0x22A698u) { return; }
    }
    ctx->pc = 0x22A698u;
label_22a698:
    // 0x22a698: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x22a698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_22a69c:
    // 0x22a69c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22a69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a6a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22a6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a6a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a6a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22a6a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a6b0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6B4u;
            // 0x22a6b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A650u: goto label_22a650;
            case 0x22A698u: goto label_22a698;
            case 0x22A69Cu: goto label_22a69c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A6BCu;
    // 0x22a6bc: 0x0  nop
    ctx->pc = 0x22a6bcu;
    // NOP
}
