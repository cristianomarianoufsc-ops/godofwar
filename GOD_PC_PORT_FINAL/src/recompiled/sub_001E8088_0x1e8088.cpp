#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8088
// Address: 0x1e8088 - 0x1e83c8
void sub_001E8088_0x1e8088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8088_0x1e8088");
#endif

    ctx->pc = 0x1e8088u;

    // 0x1e8088: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e808c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e8090: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e8094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e8098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e809c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1e809cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e80a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e80a4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e80a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e80a8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e80ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1E80ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E80B4u);
        ctx->pc = 0x1E80B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80ACu;
            // 0x1e80b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E80B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E80B4u; }
            if (ctx->pc != 0x1E80B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E80B4u;
    // 0x1e80b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e80b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1e80bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E80BCu;
    {
        const bool branch_taken_0x1e80bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80BCu;
            // 0x1e80c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80bc) {
            ctx->pc = 0x1E80E0u;
            goto label_1e80e0;
        }
    }
    ctx->pc = 0x1E80C4u;
    // 0x1e80c4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1e80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1e80c8: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1e80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1e80cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E80CCu;
    {
        const bool branch_taken_0x1e80cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E80D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80CCu;
            // 0x1e80d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80cc) {
            ctx->pc = 0x1E80E4u;
            goto label_1e80e4;
        }
    }
    ctx->pc = 0x1E80D4u;
    // 0x1e80d4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1e80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1e80d8: 0xc081522  jal         func_205488
    ctx->pc = 0x1E80D8u;
    SET_GPR_U32(ctx, 31, 0x1E80E0u);
    ctx->pc = 0x1E80DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80D8u;
            // 0x1e80dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80E0u; }
        if (ctx->pc != 0x1E80E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80E0u; }
        if (ctx->pc != 0x1E80E0u) { return; }
    }
    ctx->pc = 0x1E80E0u;
label_1e80e0:
    // 0x1e80e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e80e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e80e4:
    // 0x1e80e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e80e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e80e8: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1E80E8u;
    SET_GPR_U32(ctx, 31, 0x1E80F0u);
    ctx->pc = 0x1E80ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80E8u;
            // 0x1e80ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80F0u; }
        if (ctx->pc != 0x1E80F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80F0u; }
        if (ctx->pc != 0x1E80F0u) { return; }
    }
    ctx->pc = 0x1E80F0u;
    // 0x1e80f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E80F0u;
    {
        const bool branch_taken_0x1e80f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e80f0) {
            ctx->pc = 0x1E80F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80F0u;
            // 0x1e80f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8108u;
            goto label_1e8108;
        }
    }
    ctx->pc = 0x1E80F8u;
    // 0x1e80f8: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1E80F8u;
    SET_GPR_U32(ctx, 31, 0x1E8100u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8100u; }
        if (ctx->pc != 0x1E8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8100u; }
        if (ctx->pc != 0x1E8100u) { return; }
    }
    ctx->pc = 0x1E8100u;
    // 0x1e8100: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E8104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8100u;
            // 0x1e8104: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8108u;
            goto label_1e8108;
        }
    }
    ctx->pc = 0x1E8108u;
label_1e8108:
    // 0x1e8108: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8108u;
    {
        const bool branch_taken_0x1e8108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8108) {
            ctx->pc = 0x1E810Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8108u;
            // 0x1e810c: 0xc62c028c  lwc1        $f12, 0x28C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E812Cu;
            goto label_1e812c;
        }
    }
    ctx->pc = 0x1E8110u;
    // 0x1e8110: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x1e8110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8114: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e8114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8118: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e8118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e811c: 0x0  nop
    ctx->pc = 0x1e811cu;
    // NOP
    // 0x1e8120: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8120u;
    {
        const bool branch_taken_0x1e8120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8120) {
            ctx->pc = 0x1E8124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8120u;
            // 0x1e8124: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E813Cu;
            goto label_1e813c;
        }
    }
    ctx->pc = 0x1E8128u;
    // 0x1e8128: 0xc62c028c  lwc1        $f12, 0x28C($s1)
    ctx->pc = 0x1e8128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e812c:
    // 0x1e812c: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E812Cu;
    SET_GPR_U32(ctx, 31, 0x1E8134u);
    ctx->pc = 0x1E8130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E812Cu;
            // 0x1e8130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8134u; }
        if (ctx->pc != 0x1E8134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8134u; }
        if (ctx->pc != 0x1E8134u) { return; }
    }
    ctx->pc = 0x1E8134u;
    // 0x1e8134: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1E8134u;
    {
        const bool branch_taken_0x1e8134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8134u;
            // 0x1e8138: 0xc6210288  lwc1        $f1, 0x288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8134) {
            ctx->pc = 0x1E8324u;
            goto label_1e8324;
        }
    }
    ctx->pc = 0x1E813Cu;
label_1e813c:
    // 0x1e813c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1e8140: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e8140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8144: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E8144u;
    {
        const bool branch_taken_0x1e8144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8144) {
            ctx->pc = 0x1E8148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8144u;
            // 0x1e8148: 0xc6210288  lwc1        $f1, 0x288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8260u;
            goto label_1e8260;
        }
    }
    ctx->pc = 0x1E814Cu;
    // 0x1e814c: 0xc6200288  lwc1        $f0, 0x288($s1)
    ctx->pc = 0x1e814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8150: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1e8150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1e8154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8158: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e815c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8160: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x1E8160u;
    {
        const bool branch_taken_0x1e8160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8160u;
            // 0x1e8164: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8160) {
            ctx->pc = 0x1E8320u;
            goto label_1e8320;
        }
    }
    ctx->pc = 0x1E8168u;
    // 0x1e8168: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e816c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e8170: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1e8170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1e8174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e817c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1e8180: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8180u;
    {
        const bool branch_taken_0x1e8180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8180u;
            // 0x1e8184: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8180) {
            ctx->pc = 0x1E8198u;
            goto label_1e8198;
        }
    }
    ctx->pc = 0x1E8188u;
    // 0x1e8188: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1e8188u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e818c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E818Cu;
    {
        const bool branch_taken_0x1e818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E818Cu;
            // 0x1e8190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e818c) {
            ctx->pc = 0x1E819Cu;
            goto label_1e819c;
        }
    }
    ctx->pc = 0x1E8194u;
    // 0x1e8194: 0x0  nop
    ctx->pc = 0x1e8194u;
    // NOP
label_1e8198:
    // 0x1e8198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e8198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e819c:
    // 0x1e819c: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x1e819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x1e81a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E81A0u;
    {
        const bool branch_taken_0x1e81a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81A0u;
            // 0x1e81a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81a0) {
            ctx->pc = 0x1E81B8u;
            goto label_1e81b8;
        }
    }
    ctx->pc = 0x1E81A8u;
    // 0x1e81a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e81ac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1e81acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1e81b0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1e81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1e81b4: 0x0  nop
    ctx->pc = 0x1e81b4u;
    // NOP
label_1e81b8:
    // 0x1e81b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E81B8u;
    {
        const bool branch_taken_0x1e81b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E81BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81B8u;
            // 0x1e81bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81b8) {
            ctx->pc = 0x1E81D8u;
            goto label_1e81d8;
        }
    }
    ctx->pc = 0x1E81C0u;
    // 0x1e81c0: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e81c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e81c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e81cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e81ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e81d0: 0xc055a72  jal         func_1569C8
    ctx->pc = 0x1E81D0u;
    SET_GPR_U32(ctx, 31, 0x1E81D8u);
    ctx->pc = 0x1E81D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81D0u;
            // 0x1e81d4: 0xc2280a  movz        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1569C8u;
    if (runtime->hasFunction(0x1569C8u)) {
        auto targetFn = runtime->lookupFunction(0x1569C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81D8u; }
        if (ctx->pc != 0x1E81D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001569C8_0x1569c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81D8u; }
        if (ctx->pc != 0x1E81D8u) { return; }
    }
    ctx->pc = 0x1E81D8u;
label_1e81d8:
    // 0x1e81d8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1e81d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1e81dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e81dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e81e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e81e4: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x1e81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e81e8: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x1e81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e81ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e81ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e81f0: 0xc6210288  lwc1        $f1, 0x288($s1)
    ctx->pc = 0x1e81f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e81f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e81f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e81f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e81f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e81fc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1e81fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e8200: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x1e8200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8204: 0x0  nop
    ctx->pc = 0x1e8204u;
    // NOP
    // 0x1e8208: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8208u;
    {
        const bool branch_taken_0x1e8208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8208) {
            ctx->pc = 0x1E820Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8208u;
            // 0x1e820c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8210u;
            goto label_1e8210;
        }
    }
    ctx->pc = 0x1E8210u;
label_1e8210:
    // 0x1e8210: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E8210u;
    SET_GPR_U32(ctx, 31, 0x1E8218u);
    ctx->pc = 0x1E8214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8210u;
            // 0x1e8214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8218u; }
        if (ctx->pc != 0x1E8218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8218u; }
        if (ctx->pc != 0x1E8218u) { return; }
    }
    ctx->pc = 0x1E8218u;
    // 0x1e8218: 0xc6200288  lwc1        $f0, 0x288($s1)
    ctx->pc = 0x1e8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e821c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1e821cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8220: 0x0  nop
    ctx->pc = 0x1e8220u;
    // NOP
    // 0x1e8224: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1E8224u;
    {
        const bool branch_taken_0x1e8224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8224u;
            // 0x1e8228: 0x24020407  addiu       $v0, $zero, 0x407 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8224) {
            ctx->pc = 0x1E8320u;
            goto label_1e8320;
        }
    }
    ctx->pc = 0x1E822Cu;
    // 0x1e822c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e8230: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1e8230u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8234: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e8234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e8238: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e8238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e823c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1e823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1e8240: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e8244: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1e8244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1e8248: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e824c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1E824Cu;
    SET_GPR_U32(ctx, 31, 0x1E8254u);
    ctx->pc = 0x1E8250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E824Cu;
            // 0x1e8250: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8254u; }
        if (ctx->pc != 0x1E8254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8254u; }
        if (ctx->pc != 0x1E8254u) { return; }
    }
    ctx->pc = 0x1E8254u;
    // 0x1e8254: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E8254u;
    {
        const bool branch_taken_0x1e8254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8254u;
            // 0x1e8258: 0xc6210288  lwc1        $f1, 0x288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8254) {
            ctx->pc = 0x1E8324u;
            goto label_1e8324;
        }
    }
    ctx->pc = 0x1E825Cu;
    // 0x1e825c: 0x0  nop
    ctx->pc = 0x1e825cu;
    // NOP
label_1e8260:
    // 0x1e8260: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e8260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8264: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8264u;
    {
        const bool branch_taken_0x1e8264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8264) {
            ctx->pc = 0x1E82B4u;
            goto label_1e82b4;
        }
    }
    ctx->pc = 0x1E826Cu;
    // 0x1e826c: 0xc620028c  lwc1        $f0, 0x28C($s1)
    ctx->pc = 0x1e826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8270: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e8270u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8274: 0x0  nop
    ctx->pc = 0x1e8274u;
    // NOP
    // 0x1e8278: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1E8278u;
    {
        const bool branch_taken_0x1e8278 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8278u;
            // 0x1e827c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8278) {
            ctx->pc = 0x1E82B4u;
            goto label_1e82b4;
        }
    }
    ctx->pc = 0x1E8280u;
    // 0x1e8280: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1e8280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e8284: 0x9443d2a4  lhu         $v1, -0x2D5C($v0)
    ctx->pc = 0x1e8284u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955684)));
    // 0x1e8288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e828c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e8290: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1e8290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e8294: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1e8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8298: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e8298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e829c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1e829cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e82a0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e82a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1e82a4: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x1E82A4u;
    SET_GPR_U32(ctx, 31, 0x1E82ACu);
    ctx->pc = 0x1E82A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82A4u;
            // 0x1e82a8: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    }
    ctx->pc = 0x1E82ACu;
    // 0x1e82ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E82ACu;
    {
        const bool branch_taken_0x1e82ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82ACu;
            // 0x1e82b0: 0xc6210288  lwc1        $f1, 0x288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82ac) {
            ctx->pc = 0x1E8324u;
            goto label_1e8324;
        }
    }
    ctx->pc = 0x1E82B4u;
label_1e82b4:
    // 0x1e82b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e82b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e82b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e82b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e82bc: 0x0  nop
    ctx->pc = 0x1e82bcu;
    // NOP
    // 0x1e82c0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x1E82C0u;
    {
        const bool branch_taken_0x1e82c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e82c0) {
            ctx->pc = 0x1E82C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82C0u;
            // 0x1e82c4: 0xc6210288  lwc1        $f1, 0x288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8324u;
            goto label_1e8324;
        }
    }
    ctx->pc = 0x1E82C8u;
    // 0x1e82c8: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E82C8u;
    SET_GPR_U32(ctx, 31, 0x1E82D0u);
    ctx->pc = 0x1E82CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82C8u;
            // 0x1e82cc: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82D0u; }
        if (ctx->pc != 0x1E82D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82D0u; }
        if (ctx->pc != 0x1E82D0u) { return; }
    }
    ctx->pc = 0x1E82D0u;
    // 0x1e82d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e82d4: 0x94500270  lhu         $s0, 0x270($v0)
    ctx->pc = 0x1e82d4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1e82d8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1e82d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1e82dc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1e82e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1E82E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E82E8u);
        ctx->pc = 0x1E82E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82E0u;
            // 0x1e82e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E82E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E82E8u; }
            if (ctx->pc != 0x1E82E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E82E8u;
    // 0x1e82e8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1e82ec: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E82ECu;
    {
        const bool branch_taken_0x1e82ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E82F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82ECu;
            // 0x1e82f0: 0x24020407  addiu       $v0, $zero, 0x407 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82ec) {
            ctx->pc = 0x1E8320u;
            goto label_1e8320;
        }
    }
    ctx->pc = 0x1E82F4u;
    // 0x1e82f4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1e82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1e82f8: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x1e82f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e82fc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1e8300: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e8300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e8304: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1e8304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1e8308: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e830c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1e830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1e8310: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8314: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1E8314u;
    SET_GPR_U32(ctx, 31, 0x1E831Cu);
    ctx->pc = 0x1E8318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8314u;
            // 0x1e8318: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E831Cu; }
        if (ctx->pc != 0x1E831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E831Cu; }
        if (ctx->pc != 0x1E831Cu) { return; }
    }
    ctx->pc = 0x1E831Cu;
    // 0x1e831c: 0x0  nop
    ctx->pc = 0x1e831cu;
    // NOP
label_1e8320:
    // 0x1e8320: 0xc6210288  lwc1        $f1, 0x288($s1)
    ctx->pc = 0x1e8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8324:
    // 0x1e8324: 0xc620028c  lwc1        $f0, 0x28C($s1)
    ctx->pc = 0x1e8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8328: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e8328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e832c: 0x0  nop
    ctx->pc = 0x1e832cu;
    // NOP
    // 0x1e8330: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1E8330u;
    {
        const bool branch_taken_0x1e8330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8330u;
            // 0x1e8334: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8330) {
            ctx->pc = 0x1E836Cu;
            goto label_1e836c;
        }
    }
    ctx->pc = 0x1E8338u;
    // 0x1e8338: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e833c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1e833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1e8340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8348: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1e8348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1e834c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E834Cu;
    {
        const bool branch_taken_0x1e834c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E834Cu;
            // 0x1e8350: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e834c) {
            ctx->pc = 0x1E8360u;
            goto label_1e8360;
        }
    }
    ctx->pc = 0x1E8354u;
    // 0x1e8354: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1e8354u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e8358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8358u;
    {
        const bool branch_taken_0x1e8358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8358u;
            // 0x1e835c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8358) {
            ctx->pc = 0x1E8364u;
            goto label_1e8364;
        }
    }
    ctx->pc = 0x1E8360u;
label_1e8360:
    // 0x1e8360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e8360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8364:
    // 0x1e8364: 0xc055a8c  jal         func_156A30
    ctx->pc = 0x1E8364u;
    SET_GPR_U32(ctx, 31, 0x1E836Cu);
    ctx->pc = 0x156A30u;
    if (runtime->hasFunction(0x156A30u)) {
        auto targetFn = runtime->lookupFunction(0x156A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E836Cu; }
        if (ctx->pc != 0x1E836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A30_0x156a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E836Cu; }
        if (ctx->pc != 0x1E836Cu) { return; }
    }
    ctx->pc = 0x1E836Cu;
label_1e836c:
    // 0x1e836c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8370: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e8370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1e8374: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1e8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1e8378: 0x40f809  jalr        $v0
    ctx->pc = 0x1E8378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8380u);
        ctx->pc = 0x1E837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8378u;
            // 0x1e837c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8380u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8380u; }
            if (ctx->pc != 0x1E8380u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8380u;
    // 0x1e8380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8388: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e8388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e838c: 0x0  nop
    ctx->pc = 0x1e838cu;
    // NOP
    // 0x1e8390: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8390u;
    {
        const bool branch_taken_0x1e8390 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8390u;
            // 0x1e8394: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8390) {
            ctx->pc = 0x1E83B0u;
            goto label_1e83b0;
        }
    }
    ctx->pc = 0x1E8398u;
    // 0x1e8398: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
    // 0x1e839c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E839Cu;
    {
        const bool branch_taken_0x1e839c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e839c) {
            ctx->pc = 0x1E83A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E839Cu;
            // 0x1e83a0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E83B4u;
            goto label_1e83b4;
        }
    }
    ctx->pc = 0x1E83A4u;
    // 0x1e83a4: 0xc07f532  jal         func_1FD4C8
    ctx->pc = 0x1E83A4u;
    SET_GPR_U32(ctx, 31, 0x1E83ACu);
    ctx->pc = 0x1E83A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83A4u;
            // 0x1e83a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4C8u;
    if (runtime->hasFunction(0x1FD4C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83ACu; }
        if (ctx->pc != 0x1E83ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD4C8_0x1fd4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83ACu; }
        if (ctx->pc != 0x1E83ACu) { return; }
    }
    ctx->pc = 0x1E83ACu;
    // 0x1e83ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e83acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e83b0:
    // 0x1e83b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e83b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e83b4:
    // 0x1e83b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e83b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e83b8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e83bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E83BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E83C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83BCu;
            // 0x1e83c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E83C4u;
    // 0x1e83c4: 0x0  nop
    ctx->pc = 0x1e83c4u;
    // NOP
}
