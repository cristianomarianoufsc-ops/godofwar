#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB0F0
// Address: 0x1db0f0 - 0x1db250
void sub_001DB0F0_0x1db0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB0F0_0x1db0f0");
#endif

    ctx->pc = 0x1db0f0u;

    // 0x1db0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db0f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1db0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1db0f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1db0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1db0fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1db0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db100: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1db100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1db104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db10c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db110: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1db110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1db114: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1db114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1db118: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1db118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1db11c: 0x40f809  jalr        $v0
    ctx->pc = 0x1DB11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB124u);
        ctx->pc = 0x1DB120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB11Cu;
            // 0x1db120: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB124u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB134u: goto label_1db134;
            case 0x1DB1E8u: goto label_1db1e8;
            case 0x1DB220u: goto label_1db220;
            case 0x1DB230u: goto label_1db230;
            case 0x1DB238u: goto label_1db238;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB124u; }
            if (ctx->pc != 0x1DB124u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB124u;
    // 0x1db124: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB124u;
    {
        const bool branch_taken_0x1db124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB124u;
            // 0x1db128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db124) {
            ctx->pc = 0x1DB134u;
            goto label_1db134;
        }
    }
    ctx->pc = 0x1DB12Cu;
    // 0x1db12c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1DB12Cu;
    SET_GPR_U32(ctx, 31, 0x1DB134u);
    ctx->pc = 0x1DB130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB12Cu;
            // 0x1db130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB134u; }
        if (ctx->pc != 0x1DB134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB134u; }
        if (ctx->pc != 0x1DB134u) { return; }
    }
    ctx->pc = 0x1DB134u;
label_1db134:
    // 0x1db134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db138: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1DB138u;
    SET_GPR_U32(ctx, 31, 0x1DB140u);
    ctx->pc = 0x1DB13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB138u;
            // 0x1db13c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB140u; }
        if (ctx->pc != 0x1DB140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB140u; }
        if (ctx->pc != 0x1DB140u) { return; }
    }
    ctx->pc = 0x1DB140u;
    // 0x1db140: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1db140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1db144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db148: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1db148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db150: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB150u;
            // 0x1db154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB134u: goto label_1db134;
            case 0x1DB1E8u: goto label_1db1e8;
            case 0x1DB220u: goto label_1db220;
            case 0x1DB230u: goto label_1db230;
            case 0x1DB238u: goto label_1db238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB158u;
    // 0x1db158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1db164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1db168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db16c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1db16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1db170: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db174: 0x8443cc9c  lh          $v1, -0x3364($v0)
    ctx->pc = 0x1db174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1db178: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1db178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1db17c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1db17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1db180: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1db180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1db184: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
    // 0x1db188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db18c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1db18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db190: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db194: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1db198: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1db198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1db19c: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1db19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1db1a0: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1db1a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1db1a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db1ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1db1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db1b0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1db1b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db1b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1db1b8: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x1db1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1db1bc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1db1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1db1c0: 0x2463fe20  addiu       $v1, $v1, -0x1E0
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966816));
    // 0x1db1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1c8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1db1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1db1cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db1d0: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DB1D0u;
    SET_GPR_U32(ctx, 31, 0x1DB1D8u);
    ctx->pc = 0x1DB1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1D0u;
            // 0x1db1d4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1D8u; }
        if (ctx->pc != 0x1DB1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1D8u; }
        if (ctx->pc != 0x1DB1D8u) { return; }
    }
    ctx->pc = 0x1DB1D8u;
    // 0x1db1d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB1D8u;
    {
        const bool branch_taken_0x1db1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1D8u;
            // 0x1db1dc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d8) {
            ctx->pc = 0x1DB1E8u;
            goto label_1db1e8;
        }
    }
    ctx->pc = 0x1DB1E0u;
    // 0x1db1e0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x1db1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db1e4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1db1e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1db1e8:
    // 0x1db1e8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1db1ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB1ECu;
    {
        const bool branch_taken_0x1db1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1ECu;
            // 0x1db1f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1ec) {
            ctx->pc = 0x1DB220u;
            goto label_1db220;
        }
    }
    ctx->pc = 0x1DB1F4u;
    // 0x1db1f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1db1f8: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1DB1F8u;
    SET_GPR_U32(ctx, 31, 0x1DB200u);
    ctx->pc = 0x1DB1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1F8u;
            // 0x1db1fc: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB200u; }
        if (ctx->pc != 0x1DB200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB200u; }
        if (ctx->pc != 0x1DB200u) { return; }
    }
    ctx->pc = 0x1DB200u;
    // 0x1db200: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1db204: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1db204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1db208: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1db208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1db20c: 0x2463e190  addiu       $v1, $v1, -0x1E70
    ctx->pc = 0x1db20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959504));
    // 0x1db210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB214u;
    {
        const bool branch_taken_0x1db214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB214u;
            // 0x1db218: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db214) {
            ctx->pc = 0x1DB230u;
            goto label_1db230;
        }
    }
    ctx->pc = 0x1DB21Cu;
    // 0x1db21c: 0x0  nop
    ctx->pc = 0x1db21cu;
    // NOP
label_1db220:
    // 0x1db220: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x1db220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1db224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB224u;
    {
        const bool branch_taken_0x1db224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB224u;
            // 0x1db228: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db224) {
            ctx->pc = 0x1DB238u;
            goto label_1db238;
        }
    }
    ctx->pc = 0x1DB22Cu;
    // 0x1db22c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1db22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db230:
    // 0x1db230: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1db230u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1db234: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1db234u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1db238:
    // 0x1db238: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1db238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db244: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1db244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db248: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB248u;
            // 0x1db24c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB134u: goto label_1db134;
            case 0x1DB1E8u: goto label_1db1e8;
            case 0x1DB220u: goto label_1db220;
            case 0x1DB230u: goto label_1db230;
            case 0x1DB238u: goto label_1db238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB250u;
}
