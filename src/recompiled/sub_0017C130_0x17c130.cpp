#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C130
// Address: 0x17c130 - 0x17c398
void sub_0017C130_0x17c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C130_0x17c130");
#endif

    ctx->pc = 0x17c130u;

    // 0x17c130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c134: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17c138: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17c13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c140: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17c144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17c148: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17c14c: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x17c150: 0xc09eee6  jal         func_27BB98
    ctx->pc = 0x17C150u;
    SET_GPR_U32(ctx, 31, 0x17C158u);
    ctx->pc = 0x17C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C150u;
            // 0x17c154: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BB98u;
    if (runtime->hasFunction(0x27BB98u)) {
        auto targetFn = runtime->lookupFunction(0x27BB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C158u; }
        if (ctx->pc != 0x17C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BB98_0x27bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C158u; }
        if (ctx->pc != 0x17C158u) { return; }
    }
    ctx->pc = 0x17C158u;
    // 0x17c158: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17c158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c160: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C160u;
    {
        const bool branch_taken_0x17c160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C160u;
            // 0x17c164: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c160) {
            ctx->pc = 0x17C188u;
            goto label_17c188;
        }
    }
    ctx->pc = 0x17C168u;
    // 0x17c168: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x17C168u;
    {
        const bool branch_taken_0x17c168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c168) {
            ctx->pc = 0x17C16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C168u;
            // 0x17c16c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C170u;
    // 0x17c170: 0x56200084  bnel        $s1, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x17C170u;
    {
        const bool branch_taken_0x17c170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c170) {
            ctx->pc = 0x17C174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C170u;
            // 0x17c174: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C178u;
    // 0x17c178: 0xc05f03e  jal         func_17C0F8
    ctx->pc = 0x17C178u;
    SET_GPR_U32(ctx, 31, 0x17C180u);
    ctx->pc = 0x17C17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C178u;
            // 0x17c17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C0F8u;
    if (runtime->hasFunction(0x17C0F8u)) {
        auto targetFn = runtime->lookupFunction(0x17C0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C180u; }
        if (ctx->pc != 0x17C180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C0F8_0x17c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C180u; }
        if (ctx->pc != 0x17C180u) { return; }
    }
    ctx->pc = 0x17C180u;
    // 0x17c180: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x17C180u;
    {
        const bool branch_taken_0x17c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C180u;
            // 0x17c184: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c180) {
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C188u;
label_17c188:
    // 0x17c188: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x17c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x17c18c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C18Cu;
    {
        const bool branch_taken_0x17c18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c18c) {
            ctx->pc = 0x17C190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C18Cu;
            // 0x17c190: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C1A4u;
            goto label_17c1a4;
        }
    }
    ctx->pc = 0x17C194u;
    // 0x17c194: 0x50510013  beql        $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C194u;
    {
        const bool branch_taken_0x17c194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x17c194) {
            ctx->pc = 0x17C198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C194u;
            // 0x17c198: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C1E4u;
            goto label_17c1e4;
        }
    }
    ctx->pc = 0x17C19Cu;
    // 0x17c19c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x17C19Cu;
    {
        const bool branch_taken_0x17c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C19Cu;
            // 0x17c1a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c19c) {
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C1A4u;
label_17c1a4:
    // 0x17c1a4: 0xc09eeb2  jal         func_27BAC8
    ctx->pc = 0x17C1A4u;
    SET_GPR_U32(ctx, 31, 0x17C1ACu);
    ctx->pc = 0x17C1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1A4u;
            // 0x17c1a8: 0x26050088  addiu       $a1, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BAC8u;
    if (runtime->hasFunction(0x27BAC8u)) {
        auto targetFn = runtime->lookupFunction(0x27BAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1ACu; }
        if (ctx->pc != 0x17C1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BAC8_0x27bac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1ACu; }
        if (ctx->pc != 0x17C1ACu) { return; }
    }
    ctx->pc = 0x17C1ACu;
    // 0x17c1ac: 0x92030088  lbu         $v1, 0x88($s0)
    ctx->pc = 0x17c1acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17c1b0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x17c1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17c1b4: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x17c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x17c1b8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x17c1bc: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x17c1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x17c1c0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x17c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x17c1c4: 0x223300b  movn        $a2, $s1, $v1
    ctx->pc = 0x17c1c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x17c1c8: 0xc09efe4  jal         func_27BF90
    ctx->pc = 0x17C1C8u;
    SET_GPR_U32(ctx, 31, 0x17C1D0u);
    ctx->pc = 0x17C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1C8u;
            // 0x17c1cc: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BF90u;
    if (runtime->hasFunction(0x27BF90u)) {
        auto targetFn = runtime->lookupFunction(0x27BF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1D0u; }
        if (ctx->pc != 0x17C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bf90_0x27c010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1D0u; }
        if (ctx->pc != 0x17C1D0u) { return; }
    }
    ctx->pc = 0x17C1D0u;
    // 0x17c1d0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x17c1d4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x17c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x17c1d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c1dc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x17C1DCu;
    {
        const bool branch_taken_0x17c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1DCu;
            // 0x17c1e0: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1dc) {
            ctx->pc = 0x17C380u;
            goto label_17c380;
        }
    }
    ctx->pc = 0x17C1E4u;
label_17c1e4:
    // 0x17c1e4: 0xc09ee7c  jal         func_27B9F0
    ctx->pc = 0x17C1E4u;
    SET_GPR_U32(ctx, 31, 0x17C1ECu);
    ctx->pc = 0x17C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1E4u;
            // 0x17c1e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B9F0u;
    if (runtime->hasFunction(0x27B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x27B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1ECu; }
        if (ctx->pc != 0x17C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B9F0_0x27b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1ECu; }
        if (ctx->pc != 0x17C1ECu) { return; }
    }
    ctx->pc = 0x17C1ECu;
    // 0x17c1ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1f0: 0x4c20064  bltzl       $a2, . + 4 + (0x64 << 2)
    ctx->pc = 0x17C1F0u;
    {
        const bool branch_taken_0x17c1f0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x17c1f0) {
            ctx->pc = 0x17C1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1F0u;
            // 0x17c1f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C1F8u;
    // 0x17c1f8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x17c1f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c1fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c200: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x17c200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x17c204: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17c208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17c20c: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x17c20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x17c210: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x17c210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x17c214: 0x0  nop
    ctx->pc = 0x17c214u;
    // NOP
label_17c218:
    // 0x17c218: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x17c218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17c21c: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x17c21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x17c220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c224: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x17c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17c228: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x17c228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x17c22c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17c22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17c230: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C230u;
    {
        const bool branch_taken_0x17c230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C230u;
            // 0x17c234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c230) {
            ctx->pc = 0x17C240u;
            goto label_17c240;
        }
    }
    ctx->pc = 0x17C238u;
    // 0x17c238: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17c23c: 0x0  nop
    ctx->pc = 0x17c23cu;
    // NOP
label_17c240:
    // 0x17c240: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17c244: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x17c244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17c248: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17C248u;
    {
        const bool branch_taken_0x17c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C248u;
            // 0x17c24c: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c248) {
            ctx->pc = 0x17C218u;
            runtime->cooperativeGuestYield();
            goto label_17c218;
        }
    }
    ctx->pc = 0x17C250u;
    // 0x17c250: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x17c250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c254: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17C254u;
    {
        const bool branch_taken_0x17c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C254u;
            // 0x17c258: 0x28c20007  slti        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c254) {
            ctx->pc = 0x17C280u;
            goto label_17c280;
        }
    }
    ctx->pc = 0x17C25Cu;
    // 0x17c25c: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x17c25cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17c260: 0x93a30005  lbu         $v1, 0x5($sp)
    ctx->pc = 0x17c260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x17c264: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x17c264u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x17c268: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x17c268u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x17c26c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x17c26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x17c270: 0xa2030021  sb          $v1, 0x21($s0)
    ctx->pc = 0x17c270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c274: 0xa2040022  sb          $a0, 0x22($s0)
    ctx->pc = 0x17c274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x17c278: 0xa2050023  sb          $a1, 0x23($s0)
    ctx->pc = 0x17c278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x17c27c: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x17c27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
label_17c280:
    // 0x17c280: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17C280u;
    {
        const bool branch_taken_0x17c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c280) {
            ctx->pc = 0x17C284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C280u;
            // 0x17c284: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C2C4u;
            goto label_17c2c4;
        }
    }
    ctx->pc = 0x17C288u;
    // 0x17c288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c28c: 0x27a50006  addiu       $a1, $sp, 0x6
    ctx->pc = 0x17c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6));
label_17c290:
    // 0x17c290: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17c294: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x17c294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17c298: 0x2442c610  addiu       $v0, $v0, -0x39F0
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x17c29c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x17c29cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c2a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c2a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17c2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17c2a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c2ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c2b0: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x17c2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17c2b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17c2b8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C2B8u;
    {
        const bool branch_taken_0x17c2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2B8u;
            // 0x17c2bc: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2b8) {
            ctx->pc = 0x17C290u;
            runtime->cooperativeGuestYield();
            goto label_17c290;
        }
    }
    ctx->pc = 0x17C2C0u;
    // 0x17c2c0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_17c2c4:
    // 0x17c2c4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x17C2C4u;
    {
        const bool branch_taken_0x17c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c2c4) {
            ctx->pc = 0x17C2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2C4u;
            // 0x17c2c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C2CCu;
    // 0x17c2cc: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x17c2ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17c2d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c2d4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x17c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c2dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c2dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c2e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c2e4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17c2e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x17c2e8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x17c2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17c2ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c2f0: 0x92040025  lbu         $a0, 0x25($s0)
    ctx->pc = 0x17c2f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x17c2f4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x17c2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c2f8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x17c2f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x17c2fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c300: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c300u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c308: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17c308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c30c: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x17c30cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x17c310: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17c314: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17c314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c318: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17c318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17c31c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17c31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17c320: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x17c320u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c324: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x17c324u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x17c328: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17c328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c32c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x17c32cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c330: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x17c330u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17c334: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17c334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17c338: 0x468825  or          $s1, $v0, $a2
    ctx->pc = 0x17c338u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17c33c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x17c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17c340: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x17C340u;
    {
        const bool branch_taken_0x17c340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x17C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C340u;
            // 0x17c344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c340) {
            ctx->pc = 0x17C378u;
            goto label_17c378;
        }
    }
    ctx->pc = 0x17C348u;
    // 0x17c348: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x17c34c: 0x111a02  srl         $v1, $s1, 8
    ctx->pc = 0x17c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x17c350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c354: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x17c354u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x17c358: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c35c: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x17c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c360: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17c360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c364: 0xa3b10020  sb          $s1, 0x20($sp)
    ctx->pc = 0x17c364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x17c368: 0xc09f004  jal         func_27C010
    ctx->pc = 0x17C368u;
    SET_GPR_U32(ctx, 31, 0x17C370u);
    ctx->pc = 0x17C36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C368u;
            // 0x17c36c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C010u;
    if (runtime->hasFunction(0x27C010u)) {
        auto targetFn = runtime->lookupFunction(0x27C010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C370u; }
        if (ctx->pc != 0x17C370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C010_0x27c010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C370u; }
        if (ctx->pc != 0x17C370u) { return; }
    }
    ctx->pc = 0x17C370u;
    // 0x17c370: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C370u;
    {
        const bool branch_taken_0x17c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x17c370) {
            ctx->pc = 0x17C374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C370u;
            // 0x17c374: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C378u;
            goto label_17c378;
        }
    }
    ctx->pc = 0x17C378u;
label_17c378:
    // 0x17c378: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x17c378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c37c: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x17c37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
label_17c380:
    // 0x17c380: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17c380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17c384:
    // 0x17c384: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17c384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c388: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17c388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c38c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c390: 0x3e00008  jr          $ra
    ctx->pc = 0x17C390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C390u;
            // 0x17c394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C188u: goto label_17c188;
            case 0x17C1A4u: goto label_17c1a4;
            case 0x17C1E4u: goto label_17c1e4;
            case 0x17C218u: goto label_17c218;
            case 0x17C240u: goto label_17c240;
            case 0x17C280u: goto label_17c280;
            case 0x17C290u: goto label_17c290;
            case 0x17C2C4u: goto label_17c2c4;
            case 0x17C378u: goto label_17c378;
            case 0x17C380u: goto label_17c380;
            case 0x17C384u: goto label_17c384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C398u;
}
