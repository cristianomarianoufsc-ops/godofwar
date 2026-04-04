#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA600
// Address: 0x1da600 - 0x1da938
void sub_001DA600_0x1da600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA600_0x1da600");
#endif

    ctx->pc = 0x1da600u;

    // 0x1da600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da604: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da610: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DA610u;
    SET_GPR_U32(ctx, 31, 0x1DA618u);
    ctx->pc = 0x1DA614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA610u;
            // 0x1da614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA618u; }
        if (ctx->pc != 0x1DA618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA618u; }
        if (ctx->pc != 0x1DA618u) { return; }
    }
    ctx->pc = 0x1DA618u;
    // 0x1da618: 0x544000c2  bnel        $v0, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1DA618u;
    {
        const bool branch_taken_0x1da618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da618) {
            ctx->pc = 0x1DA61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA618u;
            // 0x1da61c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA924u;
            goto label_1da924;
        }
    }
    ctx->pc = 0x1DA620u;
    // 0x1da620: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da624: 0x544000bf  bnel        $v0, $zero, . + 4 + (0xBF << 2)
    ctx->pc = 0x1DA624u;
    {
        const bool branch_taken_0x1da624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da624) {
            ctx->pc = 0x1DA628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA624u;
            // 0x1da628: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA924u;
            goto label_1da924;
        }
    }
    ctx->pc = 0x1DA62Cu;
    // 0x1da62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da630: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DA630u;
    SET_GPR_U32(ctx, 31, 0x1DA638u);
    ctx->pc = 0x1DA634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA630u;
            // 0x1da634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA638u; }
        if (ctx->pc != 0x1DA638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA638u; }
        if (ctx->pc != 0x1DA638u) { return; }
    }
    ctx->pc = 0x1DA638u;
    // 0x1da638: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DA638u;
    {
        const bool branch_taken_0x1da638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da638) {
            ctx->pc = 0x1DA63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA638u;
            // 0x1da63c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA70Cu;
            goto label_1da70c;
        }
    }
    ctx->pc = 0x1DA640u;
    // 0x1da640: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DA640u;
    SET_GPR_U32(ctx, 31, 0x1DA648u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA648u; }
        if (ctx->pc != 0x1DA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA648u; }
        if (ctx->pc != 0x1DA648u) { return; }
    }
    ctx->pc = 0x1DA648u;
    // 0x1da648: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DA648u;
    {
        const bool branch_taken_0x1da648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA648u;
            // 0x1da64c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da648) {
            ctx->pc = 0x1DA6E0u;
            goto label_1da6e0;
        }
    }
    ctx->pc = 0x1DA650u;
    // 0x1da650: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1da650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1da654: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1da654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1da658: 0x24462cc0  addiu       $a2, $v0, 0x2CC0
    ctx->pc = 0x1da658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1da65c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1da65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1da660: 0x90c2007d  lbu         $v0, 0x7D($a2)
    ctx->pc = 0x1da660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 125)));
    // 0x1da664: 0x24652940  addiu       $a1, $v1, 0x2940
    ctx->pc = 0x1da664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
    // 0x1da668: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1da66c: 0xc4c10060  lwc1        $f1, 0x60($a2)
    ctx->pc = 0x1da66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da670: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1da670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1da674: 0xc460c658  lwc1        $f0, -0x39A8($v1)
    ctx->pc = 0x1da674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da678: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1da678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1da67c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1da67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1da680: 0xc442003c  lwc1        $f2, 0x3C($v0)
    ctx->pc = 0x1da680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da684: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1da684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1da688: 0x460208c3  div.s       $f3, $f1, $f2
    ctx->pc = 0x1da688u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[2];
    // 0x1da68c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1da68cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1da690: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1da690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da694: 0x0  nop
    ctx->pc = 0x1da694u;
    // NOP
    // 0x1da698: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA698u;
    {
        const bool branch_taken_0x1da698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA698u;
            // 0x1da69c: 0xe4c10060  swc1        $f1, 0x60($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da698) {
            ctx->pc = 0x1DA6A8u;
            goto label_1da6a8;
        }
    }
    ctx->pc = 0x1DA6A0u;
    // 0x1da6a0: 0xe4c40060  swc1        $f4, 0x60($a2)
    ctx->pc = 0x1da6a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x1da6a4: 0x0  nop
    ctx->pc = 0x1da6a4u;
    // NOP
label_1da6a8:
    // 0x1da6a8: 0xc4a102d8  lwc1        $f1, 0x2D8($a1)
    ctx->pc = 0x1da6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6ac: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x1da6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da6b0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1da6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da6b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1da6b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1da6b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA6B8u;
    {
        const bool branch_taken_0x1da6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6B8u;
            // 0x1da6bc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6b8) {
            ctx->pc = 0x1DA6E0u;
            goto label_1da6e0;
        }
    }
    ctx->pc = 0x1DA6C0u;
    // 0x1da6c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1da6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da6c4: 0x0  nop
    ctx->pc = 0x1da6c4u;
    // NOP
    // 0x1da6c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA6C8u;
    {
        const bool branch_taken_0x1da6c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6C8u;
            // 0x1da6cc: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6c8) {
            ctx->pc = 0x1DA6E4u;
            goto label_1da6e4;
        }
    }
    ctx->pc = 0x1DA6D0u;
    // 0x1da6d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da6d4: 0xc077abc  jal         func_1DEAF0
    ctx->pc = 0x1DA6D4u;
    SET_GPR_U32(ctx, 31, 0x1DA6DCu);
    ctx->pc = 0x1DA6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6D4u;
            // 0x1da6d8: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF0u;
    if (runtime->hasFunction(0x1DEAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1DEAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6DCu; }
        if (ctx->pc != 0x1DA6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEAF0_0x1deaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6DCu; }
        if (ctx->pc != 0x1DA6DCu) { return; }
    }
    ctx->pc = 0x1DA6DCu;
    // 0x1da6dc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1da6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1da6e0:
    // 0x1da6e0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1da6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_1da6e4:
    // 0x1da6e4: 0xc4412d20  lwc1        $f1, 0x2D20($v0)
    ctx->pc = 0x1da6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6e8: 0xc4602be4  lwc1        $f0, 0x2BE4($v1)
    ctx->pc = 0x1da6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da6ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1da6ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da6f0: 0x0  nop
    ctx->pc = 0x1da6f0u;
    // NOP
    // 0x1da6f4: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x1DA6F4u;
    {
        const bool branch_taken_0x1da6f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6F4u;
            // 0x1da6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6f4) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA6FCu;
    // 0x1da6fc: 0xc076856  jal         func_1DA158
    ctx->pc = 0x1DA6FCu;
    SET_GPR_U32(ctx, 31, 0x1DA704u);
    ctx->pc = 0x1DA700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6FCu;
            // 0x1da700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA158u;
    if (runtime->hasFunction(0x1DA158u)) {
        auto targetFn = runtime->lookupFunction(0x1DA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA704u; }
        if (ctx->pc != 0x1DA704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA158_0x1da158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA704u; }
        if (ctx->pc != 0x1DA704u) { return; }
    }
    ctx->pc = 0x1DA704u;
    // 0x1da704: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1DA704u;
    {
        const bool branch_taken_0x1da704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da704) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA70Cu;
label_1da70c:
    // 0x1da70c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da710: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1da710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1da714: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1da714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1da718: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA718u;
            // 0x1da71c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA758u;
            goto label_1da758;
        }
    }
    ctx->pc = 0x1DA720u;
    // 0x1da720: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1da720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1da724: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA724u;
    {
        const bool branch_taken_0x1da724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA724u;
            // 0x1da728: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da724) {
            ctx->pc = 0x1DA760u;
            goto label_1da760;
        }
    }
    ctx->pc = 0x1DA72Cu;
    // 0x1da72c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1da72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1da730: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1da730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1da734: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1da734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1da738: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1da738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1da73c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA73Cu;
    {
        const bool branch_taken_0x1da73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da73c) {
            ctx->pc = 0x1DA740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA73Cu;
            // 0x1da740: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA758u;
            goto label_1da758;
        }
    }
    ctx->pc = 0x1DA744u;
    // 0x1da744: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1da744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1da748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA748u;
    {
        const bool branch_taken_0x1da748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA748u;
            // 0x1da74c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da748) {
            ctx->pc = 0x1DA760u;
            goto label_1da760;
        }
    }
    ctx->pc = 0x1DA750u;
    // 0x1da750: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da754: 0x0  nop
    ctx->pc = 0x1da754u;
    // NOP
label_1da758:
    // 0x1da758: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1da758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1da75c: 0x0  nop
    ctx->pc = 0x1da75cu;
    // NOP
label_1da760:
    // 0x1da760: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1da760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1da764: 0x24442cc0  addiu       $a0, $v0, 0x2CC0
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1da768: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1da768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1da76c: 0x9082007d  lbu         $v0, 0x7D($a0)
    ctx->pc = 0x1da76cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 125)));
    // 0x1da770: 0x24632940  addiu       $v1, $v1, 0x2940
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
    // 0x1da774: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1da774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1da778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da77c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1da780: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA780u;
    {
        const bool branch_taken_0x1da780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da780) {
            ctx->pc = 0x1DA784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA780u;
            // 0x1da784: 0xc4810060  lwc1        $f1, 0x60($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA798u;
            goto label_1da798;
        }
    }
    ctx->pc = 0x1DA788u;
    // 0x1da788: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da78c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1da78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1da790: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da794: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x1da794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da798:
    // 0x1da798: 0xc46002a0  lwc1        $f0, 0x2A0($v1)
    ctx->pc = 0x1da798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da79c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1da79cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da7a0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1DA7A0u;
    {
        const bool branch_taken_0x1da7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da7a0) {
            ctx->pc = 0x1DA854u;
            goto label_1da854;
        }
    }
    ctx->pc = 0x1DA7A8u;
    // 0x1da7a8: 0x9082007d  lbu         $v0, 0x7D($a0)
    ctx->pc = 0x1da7a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 125)));
    // 0x1da7ac: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x1da7acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1da7b0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1da7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1da7b4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1da7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1da7b8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DA7B8u;
    {
        const bool branch_taken_0x1da7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7b8) {
            ctx->pc = 0x1DA854u;
            goto label_1da854;
        }
    }
    ctx->pc = 0x1DA7C0u;
    // 0x1da7c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7c4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1da7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1da7c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA7C8u;
    {
        const bool branch_taken_0x1da7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7C8u;
            // 0x1da7cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c8) {
            ctx->pc = 0x1DA7F8u;
            goto label_1da7f8;
        }
    }
    ctx->pc = 0x1DA7D0u;
    // 0x1da7d0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1da7d4: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1da7d8: 0x24c66c30  addiu       $a2, $a2, 0x6C30
    ctx->pc = 0x1da7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27696));
    // 0x1da7dc: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1DA7DCu;
    SET_GPR_U32(ctx, 31, 0x1DA7E4u);
    ctx->pc = 0x1DA7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7DCu;
            // 0x1da7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7E4u; }
        if (ctx->pc != 0x1DA7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7E4u; }
        if (ctx->pc != 0x1DA7E4u) { return; }
    }
    ctx->pc = 0x1DA7E4u;
    // 0x1da7e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7e8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1da7ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1da7f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da7f4: 0x0  nop
    ctx->pc = 0x1da7f4u;
    // NOP
label_1da7f8:
    // 0x1da7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7fc: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1DA7FCu;
    SET_GPR_U32(ctx, 31, 0x1DA804u);
    ctx->pc = 0x1DA800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7FCu;
            // 0x1da800: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA804u; }
        if (ctx->pc != 0x1DA804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA804u; }
        if (ctx->pc != 0x1DA804u) { return; }
    }
    ctx->pc = 0x1DA804u;
    // 0x1da804: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DA804u;
    {
        const bool branch_taken_0x1da804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da804) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA80Cu;
    // 0x1da80c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DA80Cu;
    SET_GPR_U32(ctx, 31, 0x1DA814u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA814u; }
        if (ctx->pc != 0x1DA814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA814u; }
        if (ctx->pc != 0x1DA814u) { return; }
    }
    ctx->pc = 0x1DA814u;
    // 0x1da814: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DA814u;
    {
        const bool branch_taken_0x1da814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da814) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA81Cu;
    // 0x1da81c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da820: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1da820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da824: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1da824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da82c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1DA82Cu;
    {
        const bool branch_taken_0x1da82c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da82c) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA834u;
    // 0x1da834: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da838: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1da838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1da83c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DA83Cu;
    {
        const bool branch_taken_0x1da83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA83Cu;
            // 0x1da840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da83c) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA844u;
    // 0x1da844: 0xc076856  jal         func_1DA158
    ctx->pc = 0x1DA844u;
    SET_GPR_U32(ctx, 31, 0x1DA84Cu);
    ctx->pc = 0x1DA848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA844u;
            // 0x1da848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA158u;
    if (runtime->hasFunction(0x1DA158u)) {
        auto targetFn = runtime->lookupFunction(0x1DA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA84Cu; }
        if (ctx->pc != 0x1DA84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA158_0x1da158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA84Cu; }
        if (ctx->pc != 0x1DA84Cu) { return; }
    }
    ctx->pc = 0x1DA84Cu;
    // 0x1da84c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DA84Cu;
    {
        const bool branch_taken_0x1da84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da84c) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA854u;
label_1da854:
    // 0x1da854: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA854u;
    {
        const bool branch_taken_0x1da854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da854) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA85Cu;
    // 0x1da85c: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DA85Cu;
    SET_GPR_U32(ctx, 31, 0x1DA864u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA864u; }
        if (ctx->pc != 0x1DA864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA864u; }
        if (ctx->pc != 0x1DA864u) { return; }
    }
    ctx->pc = 0x1DA864u;
    // 0x1da864: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA864u;
    {
        const bool branch_taken_0x1da864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da864) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA86Cu;
    // 0x1da86c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da870: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1da870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da874: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1da874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da87c: 0x0  nop
    ctx->pc = 0x1da87cu;
    // NOP
    // 0x1da880: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA880u;
    {
        const bool branch_taken_0x1da880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA880u;
            // 0x1da884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da880) {
            ctx->pc = 0x1DA8A8u;
            goto label_1da8a8;
        }
    }
    ctx->pc = 0x1DA888u;
    // 0x1da888: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1DA888u;
    SET_GPR_U32(ctx, 31, 0x1DA890u);
    ctx->pc = 0x1DA88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA888u;
            // 0x1da88c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA890u; }
        if (ctx->pc != 0x1DA890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA890u; }
        if (ctx->pc != 0x1DA890u) { return; }
    }
    ctx->pc = 0x1DA890u;
    // 0x1da890: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1da894: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1da898: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1da89c: 0x24c63938  addiu       $a2, $a2, 0x3938
    ctx->pc = 0x1da89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14648));
    // 0x1da8a0: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1DA8A0u;
    SET_GPR_U32(ctx, 31, 0x1DA8A8u);
    ctx->pc = 0x1DA8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8A0u;
            // 0x1da8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8A8u; }
        if (ctx->pc != 0x1DA8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8A8u; }
        if (ctx->pc != 0x1DA8A8u) { return; }
    }
    ctx->pc = 0x1DA8A8u;
label_1da8a8:
    // 0x1da8a8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1DA8A8u;
    SET_GPR_U32(ctx, 31, 0x1DA8B0u);
    ctx->pc = 0x1DA8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8A8u;
            // 0x1da8ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8B0u; }
        if (ctx->pc != 0x1DA8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8B0u; }
        if (ctx->pc != 0x1DA8B0u) { return; }
    }
    ctx->pc = 0x1DA8B0u;
    // 0x1da8b0: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x1da8b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1da8b4: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1da8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1da8b8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA8B8u;
    {
        const bool branch_taken_0x1da8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8B8u;
            // 0x1da8bc: 0x70063ca9  por         $a3, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8b8) {
            ctx->pc = 0x1DA8ECu;
            goto label_1da8ec;
        }
    }
    ctx->pc = 0x1DA8C0u;
    // 0x1da8c0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1da8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1da8c4: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x1da8c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1da8c8: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x1da8c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1da8cc: 0x7ca60050  sq          $a2, 0x50($a1)
    ctx->pc = 0x1da8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 6));
    // 0x1da8d0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1da8d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1da8d4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1da8d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1da8d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8dc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1da8dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1da8e0: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x1da8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x1da8e4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1da8e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e8: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x1da8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
label_1da8ec:
    // 0x1da8ec: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1da8f0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA8F0u;
    {
        const bool branch_taken_0x1da8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8F0u;
            // 0x1da8f4: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8f0) {
            ctx->pc = 0x1DA920u;
            goto label_1da920;
        }
    }
    ctx->pc = 0x1DA8F8u;
    // 0x1da8f8: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x1da8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1da8fc: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x1da8fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1da900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da904: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1da904u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1da908: 0x7ca70050  sq          $a3, 0x50($a1)
    ctx->pc = 0x1da908u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 7));
    // 0x1da90c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1da90cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1da910: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1da910u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1da914: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x1da914u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x1da918: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1da918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da91c: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x1da91cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
label_1da920:
    // 0x1da920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1da920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da924:
    // 0x1da924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da92c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA92Cu;
            // 0x1da930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA6A8u: goto label_1da6a8;
            case 0x1DA6E0u: goto label_1da6e0;
            case 0x1DA6E4u: goto label_1da6e4;
            case 0x1DA70Cu: goto label_1da70c;
            case 0x1DA758u: goto label_1da758;
            case 0x1DA760u: goto label_1da760;
            case 0x1DA798u: goto label_1da798;
            case 0x1DA7F8u: goto label_1da7f8;
            case 0x1DA854u: goto label_1da854;
            case 0x1DA8A8u: goto label_1da8a8;
            case 0x1DA8ECu: goto label_1da8ec;
            case 0x1DA920u: goto label_1da920;
            case 0x1DA924u: goto label_1da924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA934u;
    // 0x1da934: 0x0  nop
    ctx->pc = 0x1da934u;
    // NOP
}
