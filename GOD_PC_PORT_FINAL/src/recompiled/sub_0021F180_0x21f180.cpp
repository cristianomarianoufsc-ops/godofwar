#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F180
// Address: 0x21f180 - 0x21f328
void sub_0021F180_0x21f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F180_0x21f180");
#endif

    ctx->pc = 0x21f180u;

    // 0x21f180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21f184: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21f184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21f188: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21f188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21f18c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21f190: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F190u;
    SET_GPR_U32(ctx, 31, 0x21F198u);
    ctx->pc = 0x21F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F190u;
            // 0x21f194: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F198u; }
        if (ctx->pc != 0x21F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F198u; }
        if (ctx->pc != 0x21F198u) { return; }
    }
    ctx->pc = 0x21F198u;
    // 0x21f198: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f19c: 0x8c42e574  lw          $v0, -0x1A8C($v0)
    ctx->pc = 0x21f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960500)));
    // 0x21f1a0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21F1A0u;
    {
        const bool branch_taken_0x21f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1A0u;
            // 0x21f1a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1a0) {
            ctx->pc = 0x21F314u;
            goto label_21f314;
        }
    }
    ctx->pc = 0x21F1A8u;
    // 0x21f1a8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21f1ac: 0x8ca2cd58  lw          $v0, -0x32A8($a1)
    ctx->pc = 0x21f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954328)));
    // 0x21f1b0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x21F1B0u;
    {
        const bool branch_taken_0x21f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1B0u;
            // 0x21f1b4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1b0) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F1B8u;
    // 0x21f1b8: 0x8e02e580  lw          $v0, -0x1A80($s0)
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960512)));
    // 0x21f1bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F1BCu;
    {
        const bool branch_taken_0x21f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1BCu;
            // 0x21f1c0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1bc) {
            ctx->pc = 0x21F1E4u;
            goto label_21f1e4;
        }
    }
    ctx->pc = 0x21F1C4u;
    // 0x21f1c4: 0x8c42e57c  lw          $v0, -0x1A84($v0)
    ctx->pc = 0x21f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960508)));
    // 0x21f1c8: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x21F1C8u;
    {
        const bool branch_taken_0x21f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f1c8) {
            ctx->pc = 0x21F1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1C8u;
            // 0x21f1cc: 0xae00e580  sw          $zero, -0x1A80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F1D0u;
    // 0x21f1d0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f1d4: 0xc06af14  jal         func_1ABC50
    ctx->pc = 0x21F1D4u;
    SET_GPR_U32(ctx, 31, 0x21F1DCu);
    ctx->pc = 0x21F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1D4u;
            // 0x21f1d8: 0x2484e550  addiu       $a0, $a0, -0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC50u;
    if (runtime->hasFunction(0x1ABC50u)) {
        auto targetFn = runtime->lookupFunction(0x1ABC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1DCu; }
        if (ctx->pc != 0x21F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABC50_0x1abc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1DCu; }
        if (ctx->pc != 0x21F1DCu) { return; }
    }
    ctx->pc = 0x21F1DCu;
    // 0x21f1dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21F1DCu;
    {
        const bool branch_taken_0x21f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1DCu;
            // 0x21f1e0: 0xae00e580  sw          $zero, -0x1A80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1dc) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F1E4u;
label_21f1e4:
    // 0x21f1e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f1e8: 0x8c82e5e8  lw          $v0, -0x1A18($a0)
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960616)));
    // 0x21f1ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F1ECu;
    {
        const bool branch_taken_0x21f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1ECu;
            // 0x21f1f0: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1ec) {
            ctx->pc = 0x21F204u;
            goto label_21f204;
        }
    }
    ctx->pc = 0x21F1F4u;
    // 0x21f1f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21f1f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21f1fc: 0xac80e5e8  sw          $zero, -0x1A18($a0)
    ctx->pc = 0x21f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960616), GPR_U32(ctx, 0));
    // 0x21f200: 0xac622d10  sw          $v0, 0x2D10($v1)
    ctx->pc = 0x21f200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11536), GPR_U32(ctx, 2));
label_21f204:
    // 0x21f204: 0x8ca2cd58  lw          $v0, -0x32A8($a1)
    ctx->pc = 0x21f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954328)));
    // 0x21f208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f20c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21f210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f214: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21f214u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x21f218: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f21c: 0xae23e578  sw          $v1, -0x1A88($s1)
    ctx->pc = 0x21f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960504), GPR_U32(ctx, 3));
    // 0x21f220: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x21f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f228: 0x0  nop
    ctx->pc = 0x21f228u;
    // NOP
    // 0x21f22c: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x21F22Cu;
    {
        const bool branch_taken_0x21f22c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f22c) {
            ctx->pc = 0x21F230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F22Cu;
            // 0x21f230: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F314u;
            goto label_21f314;
        }
    }
    ctx->pc = 0x21F234u;
    // 0x21f234: 0xc087c4e  jal         func_21F138
    ctx->pc = 0x21F234u;
    SET_GPR_U32(ctx, 31, 0x21F23Cu);
    ctx->pc = 0x21F138u;
    if (runtime->hasFunction(0x21F138u)) {
        auto targetFn = runtime->lookupFunction(0x21F138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F23Cu; }
        if (ctx->pc != 0x21F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21f138_0x21f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F23Cu; }
        if (ctx->pc != 0x21F23Cu) { return; }
    }
    ctx->pc = 0x21F23Cu;
    // 0x21f23c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21F23Cu;
    {
        const bool branch_taken_0x21f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F23Cu;
            // 0x21f240: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f23c) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F244u;
    // 0x21f244: 0x8c83e59c  lw          $v1, -0x1A64($a0)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960540)));
    // 0x21f248: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F248u;
    {
        const bool branch_taken_0x21f248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f248) {
            ctx->pc = 0x21F24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F248u;
            // 0x21f24c: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F26Cu;
            goto label_21f26c;
        }
    }
    ctx->pc = 0x21F250u;
    // 0x21f250: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x21f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x21f254: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21f258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F258u;
    {
        const bool branch_taken_0x21f258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F258u;
            // 0x21f25c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f258) {
            ctx->pc = 0x21F268u;
            goto label_21f268;
        }
    }
    ctx->pc = 0x21F260u;
    // 0x21f260: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x21F260u;
    {
        const bool branch_taken_0x21f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F260u;
            // 0x21f264: 0xac82e59c  sw          $v0, -0x1A64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294960540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f260) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F268u;
label_21f268:
    // 0x21f268: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21f268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_21f26c:
    // 0x21f26c: 0x8c62e5a0  lw          $v0, -0x1A60($v1)
    ctx->pc = 0x21f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960544)));
    // 0x21f270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F270u;
    {
        const bool branch_taken_0x21f270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F270u;
            // 0x21f274: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f270) {
            ctx->pc = 0x21F280u;
            goto label_21f280;
        }
    }
    ctx->pc = 0x21F278u;
    // 0x21f278: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x21F278u;
    {
        const bool branch_taken_0x21f278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F278u;
            // 0x21f27c: 0xac62e5a0  sw          $v0, -0x1A60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f278) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F280u;
label_21f280:
    // 0x21f280: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f284: 0xae20e578  sw          $zero, -0x1A88($s1)
    ctx->pc = 0x21f284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960504), GPR_U32(ctx, 0));
    // 0x21f288: 0x8c82e58c  lw          $v0, -0x1A74($a0)
    ctx->pc = 0x21f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960524)));
    // 0x21f28c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F28Cu;
    {
        const bool branch_taken_0x21f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f28c) {
            ctx->pc = 0x21F2E0u;
            goto label_21f2e0;
        }
    }
    ctx->pc = 0x21F294u;
    // 0x21f294: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21f294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21f298: 0xac80e58c  sw          $zero, -0x1A74($a0)
    ctx->pc = 0x21f298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960524), GPR_U32(ctx, 0));
    // 0x21f29c: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x21f29cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21f2a0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21f2a4: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x21f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x21f2a8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x21f2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21f2ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21f2b0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x21f2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21f2b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x21f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x21f2b8: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x21f2b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x21f2bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x21f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x21f2c0: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x21f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
    // 0x21f2c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x21f2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f2c8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x21f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x21f2cc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21f2ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f2d0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x21f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x21f2d4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x21f2d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f2d8: 0xc08b234  jal         func_22C8D0
    ctx->pc = 0x21F2D8u;
    SET_GPR_U32(ctx, 31, 0x21F2E0u);
    ctx->pc = 0x21F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2D8u;
            // 0x21f2dc: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C8D0u;
    if (runtime->hasFunction(0x22C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x22C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2E0u; }
        if (ctx->pc != 0x21F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C8D0_0x22c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2E0u; }
        if (ctx->pc != 0x21F2E0u) { return; }
    }
    ctx->pc = 0x21F2E0u;
label_21f2e0:
    // 0x21f2e0: 0xc087622  jal         func_21D888
    ctx->pc = 0x21F2E0u;
    SET_GPR_U32(ctx, 31, 0x21F2E8u);
    ctx->pc = 0x21F2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2E0u;
            // 0x21f2e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D888u;
    if (runtime->hasFunction(0x21D888u)) {
        auto targetFn = runtime->lookupFunction(0x21D888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2E8u; }
        if (ctx->pc != 0x21F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D888_0x21d888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2E8u; }
        if (ctx->pc != 0x21F2E8u) { return; }
    }
    ctx->pc = 0x21F2E8u;
    // 0x21f2e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21f2ec: 0x8c62e57c  lw          $v0, -0x1A84($v1)
    ctx->pc = 0x21f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960508)));
    // 0x21f2f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21F2F0u;
    {
        const bool branch_taken_0x21f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f2f0) {
            ctx->pc = 0x21F2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2F0u;
            // 0x21f2f4: 0xac60e57c  sw          $zero, -0x1A84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F2F8u;
            goto label_21f2f8;
        }
    }
    ctx->pc = 0x21F2F8u;
label_21f2f8:
    // 0x21f2f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2fc: 0xc05d452  jal         func_175148
    ctx->pc = 0x21F2FCu;
    SET_GPR_U32(ctx, 31, 0x21F304u);
    ctx->pc = 0x21F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2FCu;
            // 0x21f300: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F304u; }
        if (ctx->pc != 0x21F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F304u; }
        if (ctx->pc != 0x21F304u) { return; }
    }
    ctx->pc = 0x21F304u;
    // 0x21f304: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21f308: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f30c: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
label_21f310:
    // 0x21f310: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21f310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21f314:
    // 0x21f314: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21f314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f318: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21f318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f31c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F31Cu;
            // 0x21f320: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F1E4u: goto label_21f1e4;
            case 0x21F204u: goto label_21f204;
            case 0x21F268u: goto label_21f268;
            case 0x21F26Cu: goto label_21f26c;
            case 0x21F280u: goto label_21f280;
            case 0x21F2E0u: goto label_21f2e0;
            case 0x21F2F8u: goto label_21f2f8;
            case 0x21F310u: goto label_21f310;
            case 0x21F314u: goto label_21f314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F324u;
    // 0x21f324: 0x0  nop
    ctx->pc = 0x21f324u;
    // NOP
}
