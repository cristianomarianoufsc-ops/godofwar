#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9758
// Address: 0x1c9758 - 0x1c9888
void sub_001C9758_0x1c9758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9758_0x1c9758");
#endif

    ctx->pc = 0x1c9758u;

    // 0x1c9758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c975c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c9760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9768: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C9768u;
    {
        const bool branch_taken_0x1c9768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9768u;
            // 0x1c976c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9768) {
            ctx->pc = 0x1C97D4u;
            goto label_1c97d4;
        }
    }
    ctx->pc = 0x1C9770u;
label_1c9770:
    // 0x1c9770: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9774: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1c9778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c977c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c977cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c9780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9788: 0x0  nop
    ctx->pc = 0x1c9788u;
    // NOP
    // 0x1c978c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1C978Cu;
    {
        const bool branch_taken_0x1c978c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c978c) {
            ctx->pc = 0x1C9790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C978Cu;
            // 0x1c9790: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C97BCu;
            goto label_1c97bc;
        }
    }
    ctx->pc = 0x1C9794u;
    // 0x1c9794: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c9798: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c979c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c979cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c97a0: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1c97a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c97a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c97a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c97a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c97ac: 0xc072346  jal         func_1C8D18
    ctx->pc = 0x1C97ACu;
    SET_GPR_U32(ctx, 31, 0x1C97B4u);
    ctx->pc = 0x1C97B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97ACu;
            // 0x1c97b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D18u;
    if (runtime->hasFunction(0x1C8D18u)) {
        auto targetFn = runtime->lookupFunction(0x1C8D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B4u; }
        if (ctx->pc != 0x1C97B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c8d18_0x1c8eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B4u; }
        if (ctx->pc != 0x1C97B4u) { return; }
    }
    ctx->pc = 0x1C97B4u;
    // 0x1c97b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C97B4u;
    {
        const bool branch_taken_0x1c97b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c97b4) {
            ctx->pc = 0x1C97B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97B4u;
            // 0x1c97b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C97BCu;
            goto label_1c97bc;
        }
    }
    ctx->pc = 0x1C97BCu;
label_1c97bc:
    // 0x1c97bc: 0x1620002c  bnez        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C97BCu;
    {
        const bool branch_taken_0x1c97bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C97C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97BCu;
            // 0x1c97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97bc) {
            ctx->pc = 0x1C9870u;
            goto label_1c9870;
        }
    }
    ctx->pc = 0x1C97C4u;
label_1c97c4:
    // 0x1c97c4: 0xc0722e4  jal         func_1C8B90
    ctx->pc = 0x1C97C4u;
    SET_GPR_U32(ctx, 31, 0x1C97CCu);
    ctx->pc = 0x1C97C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97C4u;
            // 0x1c97c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8B90u;
    if (runtime->hasFunction(0x1C8B90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97CCu; }
        if (ctx->pc != 0x1C97CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B90_0x1c8b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97CCu; }
        if (ctx->pc != 0x1C97CCu) { return; }
    }
    ctx->pc = 0x1C97CCu;
    // 0x1c97cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C97CCu;
    {
        const bool branch_taken_0x1c97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97CCu;
            // 0x1c97d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97cc) {
            ctx->pc = 0x1C9870u;
            goto label_1c9870;
        }
    }
    ctx->pc = 0x1C97D4u;
label_1c97d4:
    // 0x1c97d4: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c97d8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c97dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c97e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C97E0u;
    {
        const bool branch_taken_0x1c97e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C97E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97E0u;
            // 0x1c97e4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97e0) {
            ctx->pc = 0x1C97C4u;
            runtime->cooperativeGuestYield();
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C97E8u;
    // 0x1c97e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c97e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c97ec: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C97ECu;
    {
        const bool branch_taken_0x1c97ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97ECu;
            // 0x1c97f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97ec) {
            ctx->pc = 0x1C9870u;
            goto label_1c9870;
        }
    }
    ctx->pc = 0x1C97F4u;
    // 0x1c97f4: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c97f8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c97fc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C97FCu;
    {
        const bool branch_taken_0x1c97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97FCu;
            // 0x1c9800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97fc) {
            ctx->pc = 0x1C9870u;
            goto label_1c9870;
        }
    }
    ctx->pc = 0x1C9804u;
    // 0x1c9804: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c9808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c980c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9810: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9814: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9818: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c9818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c981c: 0xc46000c4  lwc1        $f0, 0xC4($v1)
    ctx->pc = 0x1c981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9820: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9820u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9828: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c9828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c982c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c982cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c9830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9834: 0x0  nop
    ctx->pc = 0x1c9834u;
    // NOP
    // 0x1c9838: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9838u;
    {
        const bool branch_taken_0x1c9838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9838) {
            ctx->pc = 0x1C983Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9838u;
            // 0x1c983c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9840u;
            goto label_1c9840;
        }
    }
    ctx->pc = 0x1C9840u;
label_1c9840:
    // 0x1c9840: 0x5080ffcb  beql        $a0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C9840u;
    {
        const bool branch_taken_0x1c9840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9840) {
            ctx->pc = 0x1C9844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9840u;
            // 0x1c9844: 0x7a020260  lq          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9770u;
            runtime->cooperativeGuestYield();
            goto label_1c9770;
        }
    }
    ctx->pc = 0x1C9848u;
    // 0x1c9848: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1c9848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1c984c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c984cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c9850: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9854: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9858: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c985c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9860: 0xc072346  jal         func_1C8D18
    ctx->pc = 0x1C9860u;
    SET_GPR_U32(ctx, 31, 0x1C9868u);
    ctx->pc = 0x1C9864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9860u;
            // 0x1c9864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D18u;
    if (runtime->hasFunction(0x1C8D18u)) {
        auto targetFn = runtime->lookupFunction(0x1C8D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9868u; }
        if (ctx->pc != 0x1C9868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c8d18_0x1c8eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9868u; }
        if (ctx->pc != 0x1C9868u) { return; }
    }
    ctx->pc = 0x1C9868u;
    // 0x1c9868: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C9868u;
    {
        const bool branch_taken_0x1c9868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9868u;
            // 0x1c986c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9868) {
            ctx->pc = 0x1C97C4u;
            runtime->cooperativeGuestYield();
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C9870u;
label_1c9870:
    // 0x1c9870: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c987c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C987Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C987Cu;
            // 0x1c9880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9770u: goto label_1c9770;
            case 0x1C97BCu: goto label_1c97bc;
            case 0x1C97C4u: goto label_1c97c4;
            case 0x1C97D4u: goto label_1c97d4;
            case 0x1C9840u: goto label_1c9840;
            case 0x1C9870u: goto label_1c9870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9884u;
    // 0x1c9884: 0x0  nop
    ctx->pc = 0x1c9884u;
    // NOP
}
