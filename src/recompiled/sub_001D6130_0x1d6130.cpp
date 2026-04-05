#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6130
// Address: 0x1d6130 - 0x1d6588
void sub_001D6130_0x1d6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6130_0x1d6130");
#endif

    ctx->pc = 0x1d6130u;

    // 0x1d6130: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d6134: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6138: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d6138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1d613c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d6140: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d6140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6144: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d6144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1d6148: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d6148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1d614c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1d6150: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1d6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1d6154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d6158: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d6158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1d615c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d615cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1d6160: 0x8c42cd5c  lw          $v0, -0x32A4($v0)
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954332)));
    // 0x1d6164: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d6164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d6168: 0x8c54004c  lw          $s4, 0x4C($v0)
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d616c: 0x128000fa  beqz        $s4, . + 4 + (0xFA << 2)
    ctx->pc = 0x1D616Cu;
    {
        const bool branch_taken_0x1d616c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D616Cu;
            // 0x1d6170: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d616c) {
            ctx->pc = 0x1D6558u;
            goto label_1d6558;
        }
    }
    ctx->pc = 0x1D6174u;
    // 0x1d6174: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1d6178: 0x8ec3e560  lw          $v1, -0x1AA0($s6)
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294960480)));
    // 0x1d617c: 0x3862000b  xori        $v0, $v1, 0xB
    ctx->pc = 0x1d617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
    // 0x1d6180: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6180u;
    {
        const bool branch_taken_0x1d6180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6180u;
            // 0x1d6184: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6180) {
            ctx->pc = 0x1D61A4u;
            goto label_1d61a4;
        }
    }
    ctx->pc = 0x1D6188u;
    // 0x1d6188: 0x8c42e578  lw          $v0, -0x1A88($v0)
    ctx->pc = 0x1d6188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960504)));
    // 0x1d618c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D618Cu;
    {
        const bool branch_taken_0x1d618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D618Cu;
            // 0x1d6190: 0x3862000e  xori        $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d618c) {
            ctx->pc = 0x1D61C8u;
            goto label_1d61c8;
        }
    }
    ctx->pc = 0x1D6194u;
    // 0x1d6194: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1D6194u;
    {
        const bool branch_taken_0x1d6194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6194u;
            // 0x1d6198: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6194) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D619Cu;
    // 0x1d619c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D619Cu;
    {
        const bool branch_taken_0x1d619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d619c) {
            ctx->pc = 0x1D61C8u;
            goto label_1d61c8;
        }
    }
    ctx->pc = 0x1D61A4u;
label_1d61a4:
    // 0x1d61a4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d61a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D61A8u;
    {
        const bool branch_taken_0x1d61a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61A8u;
            // 0x1d61ac: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61a8) {
            ctx->pc = 0x1D61C8u;
            goto label_1d61c8;
        }
    }
    ctx->pc = 0x1D61B0u;
    // 0x1d61b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d61b4: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d61b8: 0xc461c64c  lwc1        $f1, -0x39B4($v1)
    ctx->pc = 0x1d61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d61bc: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d61c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d61c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d61c4: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d61c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1d61c8:
    // 0x1d61c8: 0xc07559a  jal         func_1D5668
    ctx->pc = 0x1D61C8u;
    SET_GPR_U32(ctx, 31, 0x1D61D0u);
    ctx->pc = 0x1D61CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61C8u;
            // 0x1d61cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5668u;
    if (runtime->hasFunction(0x1D5668u)) {
        auto targetFn = runtime->lookupFunction(0x1D5668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D0u; }
        if (ctx->pc != 0x1D61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5668_0x1d5668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D0u; }
        if (ctx->pc != 0x1D61D0u) { return; }
    }
    ctx->pc = 0x1D61D0u;
    // 0x1d61d0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1d61d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d61d4: 0xc075f8e  jal         func_1D7E38
    ctx->pc = 0x1D61D4u;
    SET_GPR_U32(ctx, 31, 0x1D61DCu);
    ctx->pc = 0x1D61D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61D4u;
            // 0x1d61d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E38u;
    if (runtime->hasFunction(0x1D7E38u)) {
        auto targetFn = runtime->lookupFunction(0x1D7E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61DCu; }
        if (ctx->pc != 0x1D61DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7E38_0x1d7e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61DCu; }
        if (ctx->pc != 0x1D61DCu) { return; }
    }
    ctx->pc = 0x1D61DCu;
    // 0x1d61dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d61e0: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x1d61e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d61e4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1d61e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d61e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d61ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1D61ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D61F4u);
        ctx->pc = 0x1D61F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61ECu;
            // 0x1d61f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D61F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D61F4u; }
            if (ctx->pc != 0x1D61F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D61F4u;
    // 0x1d61f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d61f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61f8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D61F8u;
    SET_GPR_U32(ctx, 31, 0x1D6200u);
    ctx->pc = 0x1D61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61F8u;
            // 0x1d61fc: 0x700284a9  por         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6200u; }
        if (ctx->pc != 0x1D6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6200u; }
        if (ctx->pc != 0x1D6200u) { return; }
    }
    ctx->pc = 0x1D6200u;
    // 0x1d6200: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1d6200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d6204: 0x7e3000a0  sq          $s0, 0xA0($s1)
    ctx->pc = 0x1d6204u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 16));
    // 0x1d6208: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x1d6208u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
    // 0x1d620c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d6210: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d6214: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d6218: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d621c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D621Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6224u);
        ctx->pc = 0x1D6220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D621Cu;
            // 0x1d6220: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6224u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6224u; }
            if (ctx->pc != 0x1D6224u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6224u;
    // 0x1d6224: 0xda410070  lqc2        $vf1, 0x70($s2)
    ctx->pc = 0x1d6224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1d6228: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1d6228u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d622c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d6230: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d6230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d6234: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1d6234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d6238: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d623c: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1d623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d6240: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d6244: 0x786200c0  lq          $v0, 0xC0($v1)
    ctx->pc = 0x1d6244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1d6248: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1d6248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d624c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d6250: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1d6250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d6254: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d6254u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d6258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d625c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d625cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6260: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6260u;
    {
        const bool branch_taken_0x1d6260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6260) {
            ctx->pc = 0x1D6270u;
            goto label_1d6270;
        }
    }
    ctx->pc = 0x1D6268u;
    // 0x1d6268: 0x786300d0  lq          $v1, 0xD0($v1)
    ctx->pc = 0x1d6268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1d626c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1d626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1d6270:
    // 0x1d6270: 0xc075c94  jal         func_1D7250
    ctx->pc = 0x1D6270u;
    SET_GPR_U32(ctx, 31, 0x1D6278u);
    ctx->pc = 0x1D6274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6270u;
            // 0x1d6274: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7250u;
    if (runtime->hasFunction(0x1D7250u)) {
        auto targetFn = runtime->lookupFunction(0x1D7250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6278u; }
        if (ctx->pc != 0x1D6278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7250_0x1d7250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6278u; }
        if (ctx->pc != 0x1D6278u) { return; }
    }
    ctx->pc = 0x1D6278u;
    // 0x1d6278: 0xc075e0c  jal         func_1D7830
    ctx->pc = 0x1D6278u;
    SET_GPR_U32(ctx, 31, 0x1D6280u);
    ctx->pc = 0x1D627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6278u;
            // 0x1d627c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7830u;
    if (runtime->hasFunction(0x1D7830u)) {
        auto targetFn = runtime->lookupFunction(0x1D7830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6280u; }
        if (ctx->pc != 0x1D6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7830_0x1d7830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6280u; }
        if (ctx->pc != 0x1D6280u) { return; }
    }
    ctx->pc = 0x1D6280u;
    // 0x1d6280: 0xc075e2c  jal         func_1D78B0
    ctx->pc = 0x1D6280u;
    SET_GPR_U32(ctx, 31, 0x1D6288u);
    ctx->pc = 0x1D6284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6280u;
            // 0x1d6284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D78B0u;
    if (runtime->hasFunction(0x1D78B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D78B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6288u; }
        if (ctx->pc != 0x1D6288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78B0_0x1d78b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6288u; }
        if (ctx->pc != 0x1D6288u) { return; }
    }
    ctx->pc = 0x1D6288u;
    // 0x1d6288: 0xc075d04  jal         func_1D7410
    ctx->pc = 0x1D6288u;
    SET_GPR_U32(ctx, 31, 0x1D6290u);
    ctx->pc = 0x1D628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6288u;
            // 0x1d628c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7410u;
    if (runtime->hasFunction(0x1D7410u)) {
        auto targetFn = runtime->lookupFunction(0x1D7410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6290u; }
        if (ctx->pc != 0x1D6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7410_0x1d7410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6290u; }
        if (ctx->pc != 0x1D6290u) { return; }
    }
    ctx->pc = 0x1D6290u;
    // 0x1d6290: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d6290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d6294: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d6294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d6298: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1d6298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1d629c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D629Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D62A4u);
        ctx->pc = 0x1D62A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D629Cu;
            // 0x1d62a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D62A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D62A4u; }
            if (ctx->pc != 0x1D62A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D62A4u;
    // 0x1d62a4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D62A4u;
    SET_GPR_U32(ctx, 31, 0x1D62ACu);
    ctx->pc = 0x1D62A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62A4u;
            // 0x1d62a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62ACu; }
        if (ctx->pc != 0x1D62ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62ACu; }
        if (ctx->pc != 0x1D62ACu) { return; }
    }
    ctx->pc = 0x1D62ACu;
    // 0x1d62ac: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D62ACu;
    {
        const bool branch_taken_0x1d62ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d62ac) {
            ctx->pc = 0x1D62B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62ACu;
            // 0x1d62b0: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D62D4u;
            goto label_1d62d4;
        }
    }
    ctx->pc = 0x1D62B4u;
    // 0x1d62b4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d62b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D62B8u;
    {
        const bool branch_taken_0x1d62b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d62b8) {
            ctx->pc = 0x1D62BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62B8u;
            // 0x1d62bc: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D62D4u;
            goto label_1d62d4;
        }
    }
    ctx->pc = 0x1D62C0u;
    // 0x1d62c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1d62c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d62c4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1d62c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1d62c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1d62c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62cc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1d62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1d62d0: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1d62d4:
    // 0x1d62d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d62d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d62dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D62DCu;
    {
        const bool branch_taken_0x1d62dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D62E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62DCu;
            // 0x1d62e0: 0x8ec2e560  lw          $v0, -0x1AA0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62dc) {
            ctx->pc = 0x1D6314u;
            goto label_1d6314;
        }
    }
    ctx->pc = 0x1D62E4u;
    // 0x1d62e4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d62e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D62E8u;
    {
        const bool branch_taken_0x1d62e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62E8u;
            // 0x1d62ec: 0x8ec2e560  lw          $v0, -0x1AA0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62e8) {
            ctx->pc = 0x1D6314u;
            goto label_1d6314;
        }
    }
    ctx->pc = 0x1D62F0u;
    // 0x1d62f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d62f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d62f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d62f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d62fc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1d62fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d6300: 0x55280a  movz        $a1, $v0, $s5
    ctx->pc = 0x1d6300u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1d6304: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d6304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d6308: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6310u);
        ctx->pc = 0x1D630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6308u;
            // 0x1d630c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6310u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6310u; }
            if (ctx->pc != 0x1D6310u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6310u;
    // 0x1d6310: 0x8ec2e560  lw          $v0, -0x1AA0($s6)
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294960480)));
label_1d6314:
    // 0x1d6314: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1d6314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1d6318: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1D6318u;
    {
        const bool branch_taken_0x1d6318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6318) {
            ctx->pc = 0x1D631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6318u;
            // 0x1d631c: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D64A0u;
            goto label_1d64a0;
        }
    }
    ctx->pc = 0x1D6320u;
    // 0x1d6320: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D6320u;
    SET_GPR_U32(ctx, 31, 0x1D6328u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6328u; }
        if (ctx->pc != 0x1D6328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6328u; }
        if (ctx->pc != 0x1D6328u) { return; }
    }
    ctx->pc = 0x1D6328u;
    // 0x1d6328: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x1D6328u;
    {
        const bool branch_taken_0x1d6328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6328) {
            ctx->pc = 0x1D632Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6328u;
            // 0x1d632c: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D64A0u;
            goto label_1d64a0;
        }
    }
    ctx->pc = 0x1D6330u;
    // 0x1d6330: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d6334: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D6334u;
    {
        const bool branch_taken_0x1d6334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6334) {
            ctx->pc = 0x1D6338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6334u;
            // 0x1d6338: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D64A0u;
            goto label_1d64a0;
        }
    }
    ctx->pc = 0x1D633Cu;
    // 0x1d633c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d6340: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d6344: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1d6344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d6348: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1d634c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6350: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x1d6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1d6354: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1d6354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d6358: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1d635c: 0x60f809  jalr        $v1
    ctx->pc = 0x1D635Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6364u);
        ctx->pc = 0x1D6360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D635Cu;
            // 0x1d6360: 0xc6150064  lwc1        $f21, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6364u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6364u; }
            if (ctx->pc != 0x1D6364u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6364u;
    // 0x1d6364: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1d6368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d636c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1d6370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d6370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6374: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d6374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d6378: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x1d6378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d637c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1d637cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d6380: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d6380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d6384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d6384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d6388: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1d6388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d638c: 0x4614ad42  mul.s       $f21, $f21, $f20
    ctx->pc = 0x1d638cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1d6390: 0x4603a832  c.eq.s      $f21, $f3
    ctx->pc = 0x1d6390u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6394: 0x0  nop
    ctx->pc = 0x1d6394u;
    // NOP
    // 0x1d6398: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1D6398u;
    {
        const bool branch_taken_0x1d6398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6398) {
            ctx->pc = 0x1D639Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6398u;
            // 0x1d639c: 0xc6410178  lwc1        $f1, 0x178($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D63D0u;
            goto label_1d63d0;
        }
    }
    ctx->pc = 0x1D63A0u;
    // 0x1d63a0: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x1d63a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x1d63a4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d63a8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1d63a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d63ac: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d63b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d63b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d63b8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1d63b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1d63bc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1d63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d63c0: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1d63c0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1d63c4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1d63c4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1d63c8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1d63c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1d63cc: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1d63ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d63d0:
    // 0x1d63d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d63d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d63d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d63d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d63d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d63dc: 0x0  nop
    ctx->pc = 0x1d63dcu;
    // NOP
    // 0x1d63e0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1D63E0u;
    {
        const bool branch_taken_0x1d63e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D63E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63E0u;
            // 0x1d63e4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63e0) {
            ctx->pc = 0x1D649Cu;
            goto label_1d649c;
        }
    }
    ctx->pc = 0x1D63E8u;
    // 0x1d63e8: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x1d63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d63ec: 0xc4402914  lwc1        $f0, 0x2914($v0)
    ctx->pc = 0x1d63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d63f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d63f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d63f4: 0x0  nop
    ctx->pc = 0x1d63f4u;
    // NOP
    // 0x1d63f8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1D63F8u;
    {
        const bool branch_taken_0x1d63f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d63f8) {
            ctx->pc = 0x1D63FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63F8u;
            // 0x1d63fc: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6418u;
            goto label_1d6418;
        }
    }
    ctx->pc = 0x1D6400u;
    // 0x1d6400: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1d6404: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d6408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d640c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D640Cu;
    {
        const bool branch_taken_0x1d640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d640c) {
            ctx->pc = 0x1D6480u;
            goto label_1d6480;
        }
    }
    ctx->pc = 0x1D6414u;
    // 0x1d6414: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d6418:
    // 0x1d6418: 0xe663004c  swc1        $f3, 0x4C($s3)
    ctx->pc = 0x1d6418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x1d641c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6420: 0xc0872ee  jal         func_21CBB8
    ctx->pc = 0x1D6420u;
    SET_GPR_U32(ctx, 31, 0x1D6428u);
    ctx->pc = 0x1D6424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6420u;
            // 0x1d6424: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CBB8u;
    if (runtime->hasFunction(0x21CBB8u)) {
        auto targetFn = runtime->lookupFunction(0x21CBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6428u; }
        if (ctx->pc != 0x1D6428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CBB8_0x21cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6428u; }
        if (ctx->pc != 0x1D6428u) { return; }
    }
    ctx->pc = 0x1D6428u;
    // 0x1d6428: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1d642c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d642cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d6430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d6430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d6434: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6434u;
    {
        const bool branch_taken_0x1d6434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6434) {
            ctx->pc = 0x1D6438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6434u;
            // 0x1d6438: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D64A0u;
            goto label_1d64a0;
        }
    }
    ctx->pc = 0x1D643Cu;
    // 0x1d643c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d6440: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d6444: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d6444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d6448: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6450u);
        ctx->pc = 0x1D644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6448u;
            // 0x1d644c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6450u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6450u; }
            if (ctx->pc != 0x1D6450u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6450u;
    // 0x1d6450: 0xc080944  jal         func_202510
    ctx->pc = 0x1D6450u;
    SET_GPR_U32(ctx, 31, 0x1D6458u);
    ctx->pc = 0x1D6454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6450u;
            // 0x1d6454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202510u;
    if (runtime->hasFunction(0x202510u)) {
        auto targetFn = runtime->lookupFunction(0x202510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6458u; }
        if (ctx->pc != 0x1D6458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202510_0x202510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6458u; }
        if (ctx->pc != 0x1D6458u) { return; }
    }
    ctx->pc = 0x1D6458u;
    // 0x1d6458: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d6458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d645c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1d6460: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1d6464: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D646Cu);
        ctx->pc = 0x1D6468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6464u;
            // 0x1d6468: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D646Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D646Cu; }
            if (ctx->pc != 0x1D646Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D646Cu;
    // 0x1d646c: 0xc07dca4  jal         func_1F7290
    ctx->pc = 0x1D646Cu;
    SET_GPR_U32(ctx, 31, 0x1D6474u);
    ctx->pc = 0x1D6470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D646Cu;
            // 0x1d6470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7290u;
    if (runtime->hasFunction(0x1F7290u)) {
        auto targetFn = runtime->lookupFunction(0x1F7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6474u; }
        if (ctx->pc != 0x1D6474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7290_0x1f7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6474u; }
        if (ctx->pc != 0x1D6474u) { return; }
    }
    ctx->pc = 0x1D6474u;
    // 0x1d6474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6478: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6478u;
    {
        const bool branch_taken_0x1d6478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6478u;
            // 0x1d647c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6478) {
            ctx->pc = 0x1D649Cu;
            goto label_1d649c;
        }
    }
    ctx->pc = 0x1D6480u;
label_1d6480:
    // 0x1d6480: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1d6480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6484: 0x0  nop
    ctx->pc = 0x1d6484u;
    // NOP
    // 0x1d6488: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6488u;
    {
        const bool branch_taken_0x1d6488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6488u;
            // 0x1d648c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6488) {
            ctx->pc = 0x1D649Cu;
            goto label_1d649c;
        }
    }
    ctx->pc = 0x1D6490u;
    // 0x1d6490: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x1d6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6494: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6498: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x1d6498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_1d649c:
    // 0x1d649c: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1d649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1d64a0:
    // 0x1d64a0: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x1d64a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1d64a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D64A4u;
    {
        const bool branch_taken_0x1d64a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D64A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64A4u;
            // 0x1d64a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64a4) {
            ctx->pc = 0x1D64B8u;
            goto label_1d64b8;
        }
    }
    ctx->pc = 0x1D64ACu;
    // 0x1d64ac: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1d64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1d64b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D64B0u;
    {
        const bool branch_taken_0x1d64b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64B0u;
            // 0x1d64b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64b0) {
            ctx->pc = 0x1D64BCu;
            goto label_1d64bc;
        }
    }
    ctx->pc = 0x1D64B8u;
label_1d64b8:
    // 0x1d64b8: 0xae8208c0  sw          $v0, 0x8C0($s4)
    ctx->pc = 0x1d64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2240), GPR_U32(ctx, 2));
label_1d64bc:
    // 0x1d64bc: 0xc075ff6  jal         func_1D7FD8
    ctx->pc = 0x1D64BCu;
    SET_GPR_U32(ctx, 31, 0x1D64C4u);
    ctx->pc = 0x1D64C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64BCu;
            // 0x1d64c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7FD8u;
    if (runtime->hasFunction(0x1D7FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1D7FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64C4u; }
        if (ctx->pc != 0x1D64C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7FD8_0x1d7fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64C4u; }
        if (ctx->pc != 0x1D64C4u) { return; }
    }
    ctx->pc = 0x1D64C4u;
    // 0x1d64c4: 0xc076a92  jal         func_1DAA48
    ctx->pc = 0x1D64C4u;
    SET_GPR_U32(ctx, 31, 0x1D64CCu);
    ctx->pc = 0x1D64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64C4u;
            // 0x1d64c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA48u;
    if (runtime->hasFunction(0x1DAA48u)) {
        auto targetFn = runtime->lookupFunction(0x1DAA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64CCu; }
        if (ctx->pc != 0x1D64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAA48_0x1daa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64CCu; }
        if (ctx->pc != 0x1D64CCu) { return; }
    }
    ctx->pc = 0x1D64CCu;
    // 0x1d64cc: 0xc076af2  jal         func_1DABC8
    ctx->pc = 0x1D64CCu;
    SET_GPR_U32(ctx, 31, 0x1D64D4u);
    ctx->pc = 0x1D64D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64CCu;
            // 0x1d64d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DABC8u;
    if (runtime->hasFunction(0x1DABC8u)) {
        auto targetFn = runtime->lookupFunction(0x1DABC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64D4u; }
        if (ctx->pc != 0x1D64D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DABC8_0x1dabc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64D4u; }
        if (ctx->pc != 0x1D64D4u) { return; }
    }
    ctx->pc = 0x1D64D4u;
    // 0x1d64d4: 0xc076bd4  jal         func_1DAF50
    ctx->pc = 0x1D64D4u;
    SET_GPR_U32(ctx, 31, 0x1D64DCu);
    ctx->pc = 0x1D64D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64D4u;
            // 0x1d64d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAF50u;
    if (runtime->hasFunction(0x1DAF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DAF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64DCu; }
        if (ctx->pc != 0x1D64DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAF50_0x1daf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64DCu; }
        if (ctx->pc != 0x1D64DCu) { return; }
    }
    ctx->pc = 0x1D64DCu;
    // 0x1d64dc: 0xc075962  jal         func_1D6588
    ctx->pc = 0x1D64DCu;
    SET_GPR_U32(ctx, 31, 0x1D64E4u);
    ctx->pc = 0x1D64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64DCu;
            // 0x1d64e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6588u;
    if (runtime->hasFunction(0x1D6588u)) {
        auto targetFn = runtime->lookupFunction(0x1D6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64E4u; }
        if (ctx->pc != 0x1D64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6588_0x1d6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64E4u; }
        if (ctx->pc != 0x1D64E4u) { return; }
    }
    ctx->pc = 0x1D64E4u;
    // 0x1d64e4: 0xc076980  jal         func_1DA600
    ctx->pc = 0x1D64E4u;
    SET_GPR_U32(ctx, 31, 0x1D64ECu);
    ctx->pc = 0x1D64E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64E4u;
            // 0x1d64e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64ECu; }
        if (ctx->pc != 0x1D64ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64ECu; }
        if (ctx->pc != 0x1D64ECu) { return; }
    }
    ctx->pc = 0x1D64ECu;
    // 0x1d64ec: 0xc076e0e  jal         func_1DB838
    ctx->pc = 0x1D64ECu;
    SET_GPR_U32(ctx, 31, 0x1D64F4u);
    ctx->pc = 0x1D64F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64ECu;
            // 0x1d64f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB838u;
    if (runtime->hasFunction(0x1DB838u)) {
        auto targetFn = runtime->lookupFunction(0x1DB838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64F4u; }
        if (ctx->pc != 0x1D64F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB838_0x1db838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64F4u; }
        if (ctx->pc != 0x1D64F4u) { return; }
    }
    ctx->pc = 0x1D64F4u;
    // 0x1d64f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d64f8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D64F8u;
    {
        const bool branch_taken_0x1d64f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64F8u;
            // 0x1d64fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64f8) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D6500u;
    // 0x1d6500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6504: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d6504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d6508: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d6508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d650c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D650Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6514u);
        ctx->pc = 0x1D6510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D650Cu;
            // 0x1d6510: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6514u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6514u; }
            if (ctx->pc != 0x1D6514u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6514u;
    // 0x1d6514: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6514u;
    {
        const bool branch_taken_0x1d6514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6514u;
            // 0x1d6518: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6514) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D651Cu;
    // 0x1d651c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6520: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6524: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d6524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d6528: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d6528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d652c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D652Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6534u);
        ctx->pc = 0x1D6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D652Cu;
            // 0x1d6530: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6534u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6534u; }
            if (ctx->pc != 0x1D6534u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6534u;
    // 0x1d6534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6538: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d653c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D653Cu;
    {
        const bool branch_taken_0x1d653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D653Cu;
            // 0x1d6540: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d653c) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D6544u;
    // 0x1d6544: 0x904201a0  lbu         $v0, 0x1A0($v0)
    ctx->pc = 0x1d6544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1d6548: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6548u;
    {
        const bool branch_taken_0x1d6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6548u;
            // 0x1d654c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6548) {
            ctx->pc = 0x1D6560u;
            goto label_1d6560;
        }
    }
    ctx->pc = 0x1D6550u;
    // 0x1d6550: 0xc07fd2a  jal         func_1FF4A8
    ctx->pc = 0x1D6550u;
    SET_GPR_U32(ctx, 31, 0x1D6558u);
    ctx->pc = 0x1FF4A8u;
    if (runtime->hasFunction(0x1FF4A8u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6558u; }
        if (ctx->pc != 0x1D6558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF4A8_0x1ff4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6558u; }
        if (ctx->pc != 0x1D6558u) { return; }
    }
    ctx->pc = 0x1D6558u;
label_1d6558:
    // 0x1d6558: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d6558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d655c:
    // 0x1d655c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d6560:
    // 0x1d6560: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d6560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d6564: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d6564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6568: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d6568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d656c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d656cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6570: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1d6570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6574: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d6574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6578: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d657c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d6580: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6580u;
            // 0x1d6584: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61A4u: goto label_1d61a4;
            case 0x1D61C8u: goto label_1d61c8;
            case 0x1D6270u: goto label_1d6270;
            case 0x1D62D4u: goto label_1d62d4;
            case 0x1D6314u: goto label_1d6314;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D6418u: goto label_1d6418;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D649Cu: goto label_1d649c;
            case 0x1D64A0u: goto label_1d64a0;
            case 0x1D64B8u: goto label_1d64b8;
            case 0x1D64BCu: goto label_1d64bc;
            case 0x1D6558u: goto label_1d6558;
            case 0x1D655Cu: goto label_1d655c;
            case 0x1D6560u: goto label_1d6560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6588u;
}
