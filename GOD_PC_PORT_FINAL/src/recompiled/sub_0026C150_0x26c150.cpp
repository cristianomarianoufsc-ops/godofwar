#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C150
// Address: 0x26c150 - 0x26c478
void sub_0026C150_0x26c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C150_0x26c150");
#endif

    ctx->pc = 0x26c150u;

    // 0x26c150: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26c154: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x26c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x26c158: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x26c158u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x26c15c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x26c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x26c160: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x26c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x26c164: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26c164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c168: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x26c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x26c16c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26c16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c170: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x26c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x26c174: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26c174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c178: 0x8e82137c  lw          $v0, 0x137C($s4)
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4988)));
    // 0x26c17c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26c17cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c180: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x26c180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x26c184: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x26c188: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x26c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x26c18c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x26c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x26c190: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c194: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x26c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x26c198: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26C198u;
    {
        const bool branch_taken_0x26c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C198u;
            // 0x26c19c: 0xffa80018  sd          $t0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c198) {
            ctx->pc = 0x26C23Cu;
            goto label_26c23c;
        }
    }
    ctx->pc = 0x26C1A0u;
    // 0x26c1a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26c1a4: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x26c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x26c1a8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26C1A8u;
    {
        const bool branch_taken_0x26c1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1A8u;
            // 0x26c1ac: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1a8) {
            ctx->pc = 0x26C240u;
            goto label_26c240;
        }
    }
    ctx->pc = 0x26C1B0u;
    // 0x26c1b0: 0x16200024  bnez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x26C1B0u;
    {
        const bool branch_taken_0x26c1b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1B0u;
            // 0x26c1b4: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1b0) {
            ctx->pc = 0x26C244u;
            goto label_26c244;
        }
    }
    ctx->pc = 0x26C1B8u;
    // 0x26c1b8: 0x14e00022  bnez        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x26C1B8u;
    {
        const bool branch_taken_0x26c1b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1B8u;
            // 0x26c1bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1b8) {
            ctx->pc = 0x26C244u;
            goto label_26c244;
        }
    }
    ctx->pc = 0x26C1C0u;
    // 0x26c1c0: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x26c1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x26c1c4: 0xc09af10  jal         func_26BC40
    ctx->pc = 0x26C1C4u;
    SET_GPR_U32(ctx, 31, 0x26C1CCu);
    ctx->pc = 0x26C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1C4u;
            // 0x26c1c8: 0x26245600  addiu       $a0, $s1, 0x5600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC40u;
    if (runtime->hasFunction(0x26BC40u)) {
        auto targetFn = runtime->lookupFunction(0x26BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1CCu; }
        if (ctx->pc != 0x26C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BC40_0x26bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1CCu; }
        if (ctx->pc != 0x26C1CCu) { return; }
    }
    ctx->pc = 0x26C1CCu;
    // 0x26c1cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26C1CCu;
    {
        const bool branch_taken_0x26c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1CCu;
            // 0x26c1d0: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1cc) {
            ctx->pc = 0x26C1FCu;
            goto label_26c1fc;
        }
    }
    ctx->pc = 0x26C1D4u;
    // 0x26c1d4: 0x0  nop
    ctx->pc = 0x26c1d4u;
    // NOP
label_26c1d8:
    // 0x26c1d8: 0x8c4213b0  lw          $v0, 0x13B0($v0)
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x26c1dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C1DCu;
    {
        const bool branch_taken_0x26c1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1DCu;
            // 0x26c1e0: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c1dc) {
            ctx->pc = 0x26C1ECu;
            goto label_26c1ec;
        }
    }
    ctx->pc = 0x26C1E4u;
    // 0x26c1e4: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26C1E4u;
    SET_GPR_U32(ctx, 31, 0x26C1ECu);
    ctx->pc = 0x26C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1E4u;
            // 0x26c1e8: 0x24843e40  addiu       $a0, $a0, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1ECu; }
        if (ctx->pc != 0x26C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1ECu; }
        if (ctx->pc != 0x26C1ECu) { return; }
    }
    ctx->pc = 0x26C1ECu;
label_26c1ec:
    // 0x26c1ec: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C1ECu;
    SET_GPR_U32(ctx, 31, 0x26C1F4u);
    ctx->pc = 0x26C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1ECu;
            // 0x26c1f0: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F4u; }
        if (ctx->pc != 0x26C1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1F4u; }
        if (ctx->pc != 0x26C1F4u) { return; }
    }
    ctx->pc = 0x26C1F4u;
    // 0x26c1f4: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26C1F4u;
    SET_GPR_U32(ctx, 31, 0x26C1FCu);
    ctx->pc = 0x26C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1F4u;
            // 0x26c1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1FCu; }
        if (ctx->pc != 0x26C1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C1FCu; }
        if (ctx->pc != 0x26C1FCu) { return; }
    }
    ctx->pc = 0x26C1FCu;
label_26c1fc:
    // 0x26c1fc: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x26C1FCu;
    SET_GPR_U32(ctx, 31, 0x26C204u);
    ctx->pc = 0x26C200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C1FCu;
            // 0x26c200: 0x260455c8  addiu       $a0, $s0, 0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C204u; }
        if (ctx->pc != 0x26C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C204u; }
        if (ctx->pc != 0x26C204u) { return; }
    }
    ctx->pc = 0x26C204u;
    // 0x26c204: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26C204u;
    {
        const bool branch_taken_0x26c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C204u;
            // 0x26c208: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c204) {
            ctx->pc = 0x26C1D8u;
            runtime->cooperativeGuestYield();
            goto label_26c1d8;
        }
    }
    ctx->pc = 0x26C20Cu;
    // 0x26c20c: 0x260455c8  addiu       $a0, $s0, 0x55C8
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
    // 0x26c210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26c210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c214: 0x26295600  addiu       $t1, $s1, 0x5600
    ctx->pc = 0x26c214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 22016));
    // 0x26c218: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c21c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c228: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x26c228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c22c: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x26C22Cu;
    SET_GPR_U32(ctx, 31, 0x26C234u);
    ctx->pc = 0x26C230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C22Cu;
            // 0x26c230: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C234u; }
        if (ctx->pc != 0x26C234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C234u; }
        if (ctx->pc != 0x26C234u) { return; }
    }
    ctx->pc = 0x26C234u;
    // 0x26c234: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x26C234u;
    {
        const bool branch_taken_0x26c234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C234u;
            // 0x26c238: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c234) {
            ctx->pc = 0x26C448u;
            goto label_26c448;
        }
    }
    ctx->pc = 0x26C23Cu;
label_26c23c:
    // 0x26c23c: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x26c23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26c240:
    // 0x26c240: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x26c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_26c244:
    // 0x26c244: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C244u;
    {
        const bool branch_taken_0x26c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C244u;
            // 0x26c248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c244) {
            ctx->pc = 0x26C26Cu;
            goto label_26c26c;
        }
    }
    ctx->pc = 0x26C24Cu;
    // 0x26c24c: 0x26230007  addiu       $v1, $s1, 0x7
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x26c250: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c254: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26c258: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x26c258u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x26c25c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x26c25cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26c260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26c260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c264: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x26c264u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x26c268: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_26c26c:
    // 0x26c26c: 0x2a020201  slti        $v0, $s0, 0x201
    ctx->pc = 0x26c26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x26c270: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C270u;
    {
        const bool branch_taken_0x26c270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C270u;
            // 0x26c274: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c270) {
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C278u;
    // 0x26c278: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x26c278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x26c27c: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26C27Cu;
    SET_GPR_U32(ctx, 31, 0x26C284u);
    ctx->pc = 0x26C280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C27Cu;
            // 0x26c280: 0x24844260  addiu       $a0, $a0, 0x4260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C284u; }
        if (ctx->pc != 0x26C284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C284u; }
        if (ctx->pc != 0x26C284u) { return; }
    }
    ctx->pc = 0x26C284u;
    // 0x26c284: 0x0  nop
    ctx->pc = 0x26c284u;
    // NOP
label_26c288:
    // 0x26c288: 0x0  nop
    ctx->pc = 0x26c288u;
    // NOP
    // 0x26c28c: 0x0  nop
    ctx->pc = 0x26c28cu;
    // NOP
    // 0x26c290: 0x0  nop
    ctx->pc = 0x26c290u;
    // NOP
    // 0x26c294: 0x0  nop
    ctx->pc = 0x26c294u;
    // NOP
    // 0x26c298: 0x0  nop
    ctx->pc = 0x26c298u;
    // NOP
    // 0x26c29c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C29Cu;
    {
        const bool branch_taken_0x26c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c29c) {
            ctx->pc = 0x26C288u;
            runtime->cooperativeGuestYield();
            goto label_26c288;
        }
    }
    ctx->pc = 0x26C2A4u;
label_26c2a4:
    // 0x26c2a4: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x26c2a8: 0x8ee31378  lw          $v1, 0x1378($s7)
    ctx->pc = 0x26c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4984)));
    // 0x26c2ac: 0x26c21358  addiu       $v0, $s6, 0x1358
    ctx->pc = 0x26c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4952));
    // 0x26c2b0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x26c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c2b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c2b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c2bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c2c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c2c4: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C2C4u;
    {
        const bool branch_taken_0x26c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x26c2c4) {
            ctx->pc = 0x26C2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2C4u;
            // 0x26c2c8: 0x8e82137c  lw          $v0, 0x137C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4988)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26C2E0u;
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26C2CCu;
    // 0x26c2cc: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x26c2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x26c2d0: 0x26a21360  addiu       $v0, $s5, 0x1360
    ctx->pc = 0x26c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4960));
    // 0x26c2d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26C2D4u;
    {
        const bool branch_taken_0x26c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2D4u;
            // 0x26c2d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2d4) {
            ctx->pc = 0x26C32Cu;
            goto label_26c32c;
        }
    }
    ctx->pc = 0x26C2DCu;
    // 0x26c2dc: 0x0  nop
    ctx->pc = 0x26c2dcu;
    // NOP
label_26c2e0:
    // 0x26c2e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C2E0u;
    {
        const bool branch_taken_0x26c2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2e0) {
            ctx->pc = 0x26C2F0u;
            goto label_26c2f0;
        }
    }
    ctx->pc = 0x26C2E8u;
    // 0x26c2e8: 0xae80137c  sw          $zero, 0x137C($s4)
    ctx->pc = 0x26c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4988), GPR_U32(ctx, 0));
    // 0x26c2ec: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x26c2ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c2f0:
    // 0x26c2f0: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C2F0u;
    SET_GPR_U32(ctx, 31, 0x26C2F8u);
    ctx->pc = 0x26C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2F0u;
            // 0x26c2f4: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2F8u; }
        if (ctx->pc != 0x26C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2F8u; }
        if (ctx->pc != 0x26C2F8u) { return; }
    }
    ctx->pc = 0x26C2F8u;
    // 0x26c2f8: 0x8ee31378  lw          $v1, 0x1378($s7)
    ctx->pc = 0x26c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4984)));
    // 0x26c2fc: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x26c300: 0x26c21358  addiu       $v0, $s6, 0x1358
    ctx->pc = 0x26c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4952));
    // 0x26c304: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x26c304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c308: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c30c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x26c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c318: 0x1043fff1  beq         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x26C318u;
    {
        const bool branch_taken_0x26c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C318u;
            // 0x26c31c: 0x8e82137c  lw          $v0, 0x137C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c318) {
            ctx->pc = 0x26C2E0u;
            runtime->cooperativeGuestYield();
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26C320u;
    // 0x26c320: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x26c324: 0x26a21360  addiu       $v0, $s5, 0x1360
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4960));
    // 0x26c328: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c32c:
    // 0x26c32c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c330: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26c330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26c334: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x26C334u;
    {
        const bool branch_taken_0x26c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C334u;
            // 0x26c338: 0x8e82137c  lw          $v0, 0x137C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c334) {
            ctx->pc = 0x26C2E0u;
            runtime->cooperativeGuestYield();
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26C33Cu;
    // 0x26c33c: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C33Cu;
    {
        const bool branch_taken_0x26c33c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C33Cu;
            // 0x26c340: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c33c) {
            ctx->pc = 0x26C34Cu;
            goto label_26c34c;
        }
    }
    ctx->pc = 0x26C344u;
    // 0x26c344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c348: 0xac62137c  sw          $v0, 0x137C($v1)
    ctx->pc = 0x26c348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4988), GPR_U32(ctx, 2));
label_26c34c:
    // 0x26c34c: 0x8ee31378  lw          $v1, 0x1378($s7)
    ctx->pc = 0x26c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4984)));
    // 0x26c350: 0x26a21360  addiu       $v0, $s5, 0x1360
    ctx->pc = 0x26c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4960));
    // 0x26c354: 0x26c41358  addiu       $a0, $s6, 0x1358
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4952));
    // 0x26c358: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x26c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x26c35c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26c360: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c36c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c370: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x26c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x26c374: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x26c374u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c378: 0xa4f30000  sh          $s3, 0x0($a3)
    ctx->pc = 0x26c378u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x26c37c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x26c37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x26c380: 0xa4f10000  sh          $s1, 0x0($a3)
    ctx->pc = 0x26c380u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x26c384: 0x1265000d  beq         $s3, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x26C384u;
    {
        const bool branch_taken_0x26c384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x26C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C384u;
            // 0x26c388: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c384) {
            ctx->pc = 0x26C3BCu;
            goto label_26c3bc;
        }
    }
    ctx->pc = 0x26C38Cu;
    // 0x26c38c: 0x1a200017  blez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x26C38Cu;
    {
        const bool branch_taken_0x26c38c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C38Cu;
            // 0x26c390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c38c) {
            ctx->pc = 0x26C3ECu;
            goto label_26c3ec;
        }
    }
    ctx->pc = 0x26C394u;
    // 0x26c394: 0x0  nop
    ctx->pc = 0x26c394u;
    // NOP
label_26c398:
    // 0x26c398: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x26c39c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x26c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x26c3a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x26c3a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c3a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26c3a8: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x26c3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26c3ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C3ACu;
    {
        const bool branch_taken_0x26c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3ACu;
            // 0x26c3b0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3ac) {
            ctx->pc = 0x26C398u;
            runtime->cooperativeGuestYield();
            goto label_26c398;
        }
    }
    ctx->pc = 0x26C3B4u;
    // 0x26c3b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26C3B4u;
    {
        const bool branch_taken_0x26c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3B4u;
            // 0x26c3b8: 0x8ee21378  lw          $v0, 0x1378($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3b4) {
            ctx->pc = 0x26C3F0u;
            goto label_26c3f0;
        }
    }
    ctx->pc = 0x26C3BCu;
label_26c3bc:
    // 0x26c3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c3c0:
    // 0x26c3c0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x26c3c4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x26c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x26c3c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x26c3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c3cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26c3d0: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x26c3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x26c3d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C3D4u;
    {
        const bool branch_taken_0x26c3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3D4u;
            // 0x26c3d8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3d4) {
            ctx->pc = 0x26C3C0u;
            runtime->cooperativeGuestYield();
            goto label_26c3c0;
        }
    }
    ctx->pc = 0x26C3DCu;
    // 0x26c3dc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x26c3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26c3e0: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x26c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x26c3e4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x26C3E4u;
    SET_GPR_U32(ctx, 31, 0x26C3ECu);
    ctx->pc = 0x26C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3E4u;
            // 0x26c3e8: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3ECu; }
        if (ctx->pc != 0x26C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3ECu; }
        if (ctx->pc != 0x26C3ECu) { return; }
    }
    ctx->pc = 0x26C3ECu;
label_26c3ec:
    // 0x26c3ec: 0x8ee21378  lw          $v0, 0x1378($s7)
    ctx->pc = 0x26c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4984)));
label_26c3f0:
    // 0x26c3f0: 0x26a61360  addiu       $a2, $s5, 0x1360
    ctx->pc = 0x26c3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4960));
    // 0x26c3f4: 0x26c51358  addiu       $a1, $s6, 0x1358
    ctx->pc = 0x26c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4952));
    // 0x26c3f8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x26c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x26c3fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c400: 0x24841368  addiu       $a0, $a0, 0x1368
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x26c404: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x26c404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26c408: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x26c408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26c40c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26c410: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26c414: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x26c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c418: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x26c418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26c41c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c420: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x26c420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x26c424: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x26c424u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c42c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26c430: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26c434: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x26c434u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x26c438: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c43c: 0xc09b11e  jal         func_26C478
    ctx->pc = 0x26C43Cu;
    SET_GPR_U32(ctx, 31, 0x26C444u);
    ctx->pc = 0x26C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C43Cu;
            // 0x26c440: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C478u;
    if (runtime->hasFunction(0x26C478u)) {
        auto targetFn = runtime->lookupFunction(0x26C478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C444u; }
        if (ctx->pc != 0x26C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C478_0x26c478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C444u; }
        if (ctx->pc != 0x26C444u) { return; }
    }
    ctx->pc = 0x26C444u;
    // 0x26c444: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x26c444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26c448:
    // 0x26c448: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x26c448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c44c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x26c44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c450: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x26c450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c454: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x26c454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c458: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26c458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c45c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x26c45cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c460: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x26c460u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c464: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x26c464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c46c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C46Cu;
            // 0x26c470: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C1D8u: goto label_26c1d8;
            case 0x26C1ECu: goto label_26c1ec;
            case 0x26C1FCu: goto label_26c1fc;
            case 0x26C23Cu: goto label_26c23c;
            case 0x26C240u: goto label_26c240;
            case 0x26C244u: goto label_26c244;
            case 0x26C26Cu: goto label_26c26c;
            case 0x26C288u: goto label_26c288;
            case 0x26C2A4u: goto label_26c2a4;
            case 0x26C2E0u: goto label_26c2e0;
            case 0x26C2F0u: goto label_26c2f0;
            case 0x26C32Cu: goto label_26c32c;
            case 0x26C34Cu: goto label_26c34c;
            case 0x26C398u: goto label_26c398;
            case 0x26C3BCu: goto label_26c3bc;
            case 0x26C3C0u: goto label_26c3c0;
            case 0x26C3ECu: goto label_26c3ec;
            case 0x26C3F0u: goto label_26c3f0;
            case 0x26C448u: goto label_26c448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C474u;
    // 0x26c474: 0x0  nop
    ctx->pc = 0x26c474u;
    // NOP
}
