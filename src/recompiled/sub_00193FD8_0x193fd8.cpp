#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193FD8
// Address: 0x193fd8 - 0x1940f8
void sub_00193FD8_0x193fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193FD8_0x193fd8");
#endif

    ctx->pc = 0x193fd8u;

    // 0x193fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193fe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193fe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x193fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193fec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x193fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_193ff0:
    // 0x193ff0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x193ff4: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x193ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x193ff8: 0x2442df70  addiu       $v0, $v0, -0x2090
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958960));
    // 0x193ffc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x193ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194000: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194004: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x194004u;
    {
        const bool branch_taken_0x194004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x194008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194004u;
            // 0x194008: 0x30a20007  andi        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194004) {
            ctx->pc = 0x194058u;
            goto label_194058;
        }
    }
    ctx->pc = 0x19400Cu;
    // 0x19400c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19400Cu;
    {
        const bool branch_taken_0x19400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19400c) {
            ctx->pc = 0x194010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19400Cu;
            // 0x194010: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19403Cu;
            goto label_19403c;
        }
    }
    ctx->pc = 0x194014u;
    // 0x194014: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x194014u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x194018: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19401c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x19401cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x194020: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x194020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x194024: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19402c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194030: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x194030u;
    {
        const bool branch_taken_0x194030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x194034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194030u;
            // 0x194034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194030) {
            ctx->pc = 0x19403Cu;
            goto label_19403c;
        }
    }
    ctx->pc = 0x194038u;
    // 0x194038: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x194038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19403c:
    // 0x19403c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19403Cu;
    {
        const bool branch_taken_0x19403c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19403c) {
            ctx->pc = 0x194040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19403Cu;
            // 0x194040: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x194058u;
            goto label_194058;
        }
    }
    ctx->pc = 0x194044u;
    // 0x194044: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x194044u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x194048: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19404c: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x19404Cu;
    SET_GPR_U32(ctx, 31, 0x194054u);
    ctx->pc = 0x194050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19404Cu;
            // 0x194050: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194054u; }
        if (ctx->pc != 0x194054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194054u; }
        if (ctx->pc != 0x194054u) { return; }
    }
    ctx->pc = 0x194054u;
    // 0x194054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194058:
    // 0x194058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19405c: 0xc064f18  jal         func_193C60
    ctx->pc = 0x19405Cu;
    SET_GPR_U32(ctx, 31, 0x194064u);
    ctx->pc = 0x194060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19405Cu;
            // 0x194060: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193C60u;
    if (runtime->hasFunction(0x193C60u)) {
        auto targetFn = runtime->lookupFunction(0x193C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194064u; }
        if (ctx->pc != 0x194064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193C60_0x193c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194064u; }
        if (ctx->pc != 0x194064u) { return; }
    }
    ctx->pc = 0x194064u;
    // 0x194064: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x194064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x194068: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x194068u;
    {
        const bool branch_taken_0x194068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194068u;
            // 0x19406c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194068) {
            ctx->pc = 0x193FF0u;
            runtime->cooperativeGuestYield();
            goto label_193ff0;
        }
    }
    ctx->pc = 0x194070u;
    // 0x194070: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194074: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x194074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_194078:
    // 0x194078: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19407c: 0x24425010  addiu       $v0, $v0, 0x5010
    ctx->pc = 0x19407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20496));
    // 0x194080: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194084: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194088: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194088u;
    {
        const bool branch_taken_0x194088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194088u;
            // 0x19408c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194088) {
            ctx->pc = 0x19409Cu;
            goto label_19409c;
        }
    }
    ctx->pc = 0x194090u;
    // 0x194090: 0xc04c9da  jal         func_132768
    ctx->pc = 0x194090u;
    SET_GPR_U32(ctx, 31, 0x194098u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194098u; }
        if (ctx->pc != 0x194098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194098u; }
        if (ctx->pc != 0x194098u) { return; }
    }
    ctx->pc = 0x194098u;
    // 0x194098: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x194098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19409c:
    // 0x19409c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x19409cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1940a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1940A0u;
    {
        const bool branch_taken_0x1940a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1940A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940A0u;
            // 0x1940a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940a0) {
            ctx->pc = 0x194078u;
            runtime->cooperativeGuestYield();
            goto label_194078;
        }
    }
    ctx->pc = 0x1940A8u;
    // 0x1940a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1940a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1940ac: 0x8e045020  lw          $a0, 0x5020($s0)
    ctx->pc = 0x1940acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20512)));
    // 0x1940b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1940B0u;
    {
        const bool branch_taken_0x1940b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940b0) {
            ctx->pc = 0x1940B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1940B0u;
            // 0x1940b4: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1940C8u;
            goto label_1940c8;
        }
    }
    ctx->pc = 0x1940B8u;
    // 0x1940b8: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1940B8u;
    SET_GPR_U32(ctx, 31, 0x1940C0u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940C0u; }
        if (ctx->pc != 0x1940C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940C0u; }
        if (ctx->pc != 0x1940C0u) { return; }
    }
    ctx->pc = 0x1940C0u;
    // 0x1940c0: 0xae005020  sw          $zero, 0x5020($s0)
    ctx->pc = 0x1940c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20512), GPR_U32(ctx, 0));
    // 0x1940c4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_1940c8:
    // 0x1940c8: 0x8e045024  lw          $a0, 0x5024($s0)
    ctx->pc = 0x1940c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
    // 0x1940cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1940CCu;
    {
        const bool branch_taken_0x1940cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940cc) {
            ctx->pc = 0x1940D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1940CCu;
            // 0x1940d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1940E4u;
            goto label_1940e4;
        }
    }
    ctx->pc = 0x1940D4u;
    // 0x1940d4: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1940D4u;
    SET_GPR_U32(ctx, 31, 0x1940DCu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940DCu; }
        if (ctx->pc != 0x1940DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940DCu; }
        if (ctx->pc != 0x1940DCu) { return; }
    }
    ctx->pc = 0x1940DCu;
    // 0x1940dc: 0xae005024  sw          $zero, 0x5024($s0)
    ctx->pc = 0x1940dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20516), GPR_U32(ctx, 0));
    // 0x1940e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1940e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1940e4:
    // 0x1940e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1940e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1940e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1940e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1940ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1940ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940ECu;
            // 0x1940f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193FF0u: goto label_193ff0;
            case 0x19403Cu: goto label_19403c;
            case 0x194058u: goto label_194058;
            case 0x194078u: goto label_194078;
            case 0x19409Cu: goto label_19409c;
            case 0x1940C8u: goto label_1940c8;
            case 0x1940E4u: goto label_1940e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1940F4u;
    // 0x1940f4: 0x0  nop
    ctx->pc = 0x1940f4u;
    // NOP
}
