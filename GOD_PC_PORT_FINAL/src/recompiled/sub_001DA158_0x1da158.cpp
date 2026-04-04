#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA158
// Address: 0x1da158 - 0x1da300
void sub_001DA158_0x1da158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA158_0x1da158");
#endif

    ctx->pc = 0x1da158u;

    // 0x1da158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da15c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da16c: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DA16Cu;
    {
        const bool branch_taken_0x1da16c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA16Cu;
            // 0x1da170: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da16c) {
            ctx->pc = 0x1DA23Cu;
            goto label_1da23c;
        }
    }
    ctx->pc = 0x1DA174u;
    // 0x1da174: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DA174u;
    SET_GPR_U32(ctx, 31, 0x1DA17Cu);
    ctx->pc = 0x1DA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA174u;
            // 0x1da178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA17Cu; }
        if (ctx->pc != 0x1DA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA17Cu; }
        if (ctx->pc != 0x1DA17Cu) { return; }
    }
    ctx->pc = 0x1DA17Cu;
    // 0x1da17c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DA17Cu;
    {
        const bool branch_taken_0x1da17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da17c) {
            ctx->pc = 0x1DA180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA17Cu;
            // 0x1da180: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA234u;
            goto label_1da234;
        }
    }
    ctx->pc = 0x1DA184u;
    // 0x1da184: 0xc0767d2  jal         func_1D9F48
    ctx->pc = 0x1DA184u;
    SET_GPR_U32(ctx, 31, 0x1DA18Cu);
    ctx->pc = 0x1DA188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA184u;
            // 0x1da188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F48u;
    if (runtime->hasFunction(0x1D9F48u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA18Cu; }
        if (ctx->pc != 0x1DA18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F48_0x1d9f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA18Cu; }
        if (ctx->pc != 0x1DA18Cu) { return; }
    }
    ctx->pc = 0x1DA18Cu;
    // 0x1da18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da190: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1da190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1da194: 0x24522be8  addiu       $s2, $v0, 0x2BE8
    ctx->pc = 0x1da194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11240));
    // 0x1da198: 0x8c7101a0  lw          $s1, 0x1A0($v1)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1da19c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1DA19Cu;
    SET_GPR_U32(ctx, 31, 0x1DA1A4u);
    ctx->pc = 0x1DA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA19Cu;
            // 0x1da1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A4u; }
        if (ctx->pc != 0x1DA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A4u; }
        if (ctx->pc != 0x1DA1A4u) { return; }
    }
    ctx->pc = 0x1DA1A4u;
    // 0x1da1a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA1A4u;
    {
        const bool branch_taken_0x1da1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da1a4) {
            ctx->pc = 0x1DA1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1A4u;
            // 0x1da1a8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA1C0u;
            goto label_1da1c0;
        }
    }
    ctx->pc = 0x1DA1ACu;
    // 0x1da1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da1b0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1DA1B0u;
    SET_GPR_U32(ctx, 31, 0x1DA1B8u);
    ctx->pc = 0x1DA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1B0u;
            // 0x1da1b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B8u; }
        if (ctx->pc != 0x1DA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B8u; }
        if (ctx->pc != 0x1DA1B8u) { return; }
    }
    ctx->pc = 0x1DA1B8u;
    // 0x1da1b8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1da1bc: 0x0  nop
    ctx->pc = 0x1da1bcu;
    // NOP
label_1da1c0:
    // 0x1da1c0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1da1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1da1c4: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x1da1c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1da1c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da1cc: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1da1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1da1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da1d4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x1da1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1da1d8: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1DA1D8u;
    SET_GPR_U32(ctx, 31, 0x1DA1E0u);
    ctx->pc = 0x1DA1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1D8u;
            // 0x1da1dc: 0x7845fd78  lq          $a1, -0x288($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 4294966648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1E0u; }
        if (ctx->pc != 0x1DA1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1E0u; }
        if (ctx->pc != 0x1DA1E0u) { return; }
    }
    ctx->pc = 0x1DA1E0u;
    // 0x1da1e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da1e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1da1e8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1da1ec: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1da1f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA1F8u);
        ctx->pc = 0x1DA1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1F0u;
            // 0x1da1f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA1F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA1C0u: goto label_1da1c0;
            case 0x1DA214u: goto label_1da214;
            case 0x1DA224u: goto label_1da224;
            case 0x1DA234u: goto label_1da234;
            case 0x1DA23Cu: goto label_1da23c;
            case 0x1DA280u: goto label_1da280;
            case 0x1DA2C4u: goto label_1da2c4;
            case 0x1DA2D8u: goto label_1da2d8;
            case 0x1DA2E0u: goto label_1da2e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1F8u; }
            if (ctx->pc != 0x1DA1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA1F8u;
    // 0x1da1f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da1fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da200: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA200u;
    {
        const bool branch_taken_0x1da200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da200) {
            ctx->pc = 0x1DA204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA200u;
            // 0x1da204: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA214u;
            goto label_1da214;
        }
    }
    ctx->pc = 0x1DA208u;
    // 0x1da208: 0xc07e77a  jal         func_1F9DE8
    ctx->pc = 0x1DA208u;
    SET_GPR_U32(ctx, 31, 0x1DA210u);
    ctx->pc = 0x1F9DE8u;
    if (runtime->hasFunction(0x1F9DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F9DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA210u; }
        if (ctx->pc != 0x1DA210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9DE8_0x1f9de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA210u; }
        if (ctx->pc != 0x1DA210u) { return; }
    }
    ctx->pc = 0x1DA210u;
    // 0x1da210: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1da214:
    // 0x1da214: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA21Cu;
    // 0x1da21c: 0xc07e77a  jal         func_1F9DE8
    ctx->pc = 0x1DA21Cu;
    SET_GPR_U32(ctx, 31, 0x1DA224u);
    ctx->pc = 0x1F9DE8u;
    if (runtime->hasFunction(0x1F9DE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F9DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA224u; }
        if (ctx->pc != 0x1DA224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9DE8_0x1f9de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA224u; }
        if (ctx->pc != 0x1DA224u) { return; }
    }
    ctx->pc = 0x1DA224u;
label_1da224:
    // 0x1da224: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1da224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1da228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da22c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1da22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1da230: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da234:
    // 0x1da234: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DA234u;
    {
        const bool branch_taken_0x1da234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA234u;
            // 0x1da238: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da234) {
            ctx->pc = 0x1DA2E0u;
            goto label_1da2e0;
        }
    }
    ctx->pc = 0x1DA23Cu;
label_1da23c:
    // 0x1da23c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da240: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1da240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1da244: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DA244u;
    {
        const bool branch_taken_0x1da244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da244) {
            ctx->pc = 0x1DA248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA244u;
            // 0x1da248: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA2D8u;
            goto label_1da2d8;
        }
    }
    ctx->pc = 0x1DA24Cu;
    // 0x1da24c: 0xc07680e  jal         func_1DA038
    ctx->pc = 0x1DA24Cu;
    SET_GPR_U32(ctx, 31, 0x1DA254u);
    ctx->pc = 0x1DA250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA24Cu;
            // 0x1da250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA038u;
    if (runtime->hasFunction(0x1DA038u)) {
        auto targetFn = runtime->lookupFunction(0x1DA038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA254u; }
        if (ctx->pc != 0x1DA254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA038_0x1da038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA254u; }
        if (ctx->pc != 0x1DA254u) { return; }
    }
    ctx->pc = 0x1DA254u;
    // 0x1da254: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da258: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1da25c: 0x24842be8  addiu       $a0, $a0, 0x2BE8
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11240));
    // 0x1da260: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1DA260u;
    SET_GPR_U32(ctx, 31, 0x1DA268u);
    ctx->pc = 0x1DA264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA260u;
            // 0x1da264: 0x8c5101a0  lw          $s1, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA268u; }
        if (ctx->pc != 0x1DA268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA268u; }
        if (ctx->pc != 0x1DA268u) { return; }
    }
    ctx->pc = 0x1DA268u;
    // 0x1da268: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA268u;
    {
        const bool branch_taken_0x1da268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da268) {
            ctx->pc = 0x1DA26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA268u;
            // 0x1da26c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA280u;
            goto label_1da280;
        }
    }
    ctx->pc = 0x1DA270u;
    // 0x1da270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da274: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1DA274u;
    SET_GPR_U32(ctx, 31, 0x1DA27Cu);
    ctx->pc = 0x1DA278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA274u;
            // 0x1da278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA27Cu; }
        if (ctx->pc != 0x1DA27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA27Cu; }
        if (ctx->pc != 0x1DA27Cu) { return; }
    }
    ctx->pc = 0x1DA27Cu;
    // 0x1da27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da280:
    // 0x1da280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da284: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x1da284u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1da288: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1DA288u;
    SET_GPR_U32(ctx, 31, 0x1DA290u);
    ctx->pc = 0x1DA28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA288u;
            // 0x1da28c: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA290u; }
        if (ctx->pc != 0x1DA290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1df800_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA290u; }
        if (ctx->pc != 0x1DA290u) { return; }
    }
    ctx->pc = 0x1DA290u;
    // 0x1da290: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da294: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1da298: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1da29c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1da29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1da2a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DA2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA2A8u);
        ctx->pc = 0x1DA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2A0u;
            // 0x1da2a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA2A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA1C0u: goto label_1da1c0;
            case 0x1DA214u: goto label_1da214;
            case 0x1DA224u: goto label_1da224;
            case 0x1DA234u: goto label_1da234;
            case 0x1DA23Cu: goto label_1da23c;
            case 0x1DA280u: goto label_1da280;
            case 0x1DA2C4u: goto label_1da2c4;
            case 0x1DA2D8u: goto label_1da2d8;
            case 0x1DA2E0u: goto label_1da2e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2A8u; }
            if (ctx->pc != 0x1DA2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA2A8u;
    // 0x1da2a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1da2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da2b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA2B0u;
    {
        const bool branch_taken_0x1da2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2b0) {
            ctx->pc = 0x1DA2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2B0u;
            // 0x1da2b4: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA2C4u;
            goto label_1da2c4;
        }
    }
    ctx->pc = 0x1DA2B8u;
    // 0x1da2b8: 0xc07e788  jal         func_1F9E20
    ctx->pc = 0x1DA2B8u;
    SET_GPR_U32(ctx, 31, 0x1DA2C0u);
    ctx->pc = 0x1F9E20u;
    if (runtime->hasFunction(0x1F9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2C0u; }
        if (ctx->pc != 0x1DA2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9E20_0x1f9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2C0u; }
        if (ctx->pc != 0x1DA2C0u) { return; }
    }
    ctx->pc = 0x1DA2C0u;
    // 0x1da2c0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1da2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1da2c4:
    // 0x1da2c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA2C4u;
    {
        const bool branch_taken_0x1da2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2c4) {
            ctx->pc = 0x1DA2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2C4u;
            // 0x1da2c8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA2D8u;
            goto label_1da2d8;
        }
    }
    ctx->pc = 0x1DA2CCu;
    // 0x1da2cc: 0xc07e788  jal         func_1F9E20
    ctx->pc = 0x1DA2CCu;
    SET_GPR_U32(ctx, 31, 0x1DA2D4u);
    ctx->pc = 0x1F9E20u;
    if (runtime->hasFunction(0x1F9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2D4u; }
        if (ctx->pc != 0x1DA2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9E20_0x1f9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2D4u; }
        if (ctx->pc != 0x1DA2D4u) { return; }
    }
    ctx->pc = 0x1DA2D4u;
    // 0x1da2d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1da2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da2d8:
    // 0x1da2d8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1da2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1da2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1da2e0:
    // 0x1da2e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da2e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da2ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2F4u;
            // 0x1da2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA1C0u: goto label_1da1c0;
            case 0x1DA214u: goto label_1da214;
            case 0x1DA224u: goto label_1da224;
            case 0x1DA234u: goto label_1da234;
            case 0x1DA23Cu: goto label_1da23c;
            case 0x1DA280u: goto label_1da280;
            case 0x1DA2C4u: goto label_1da2c4;
            case 0x1DA2D8u: goto label_1da2d8;
            case 0x1DA2E0u: goto label_1da2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA2FCu;
    // 0x1da2fc: 0x0  nop
    ctx->pc = 0x1da2fcu;
    // NOP
}
