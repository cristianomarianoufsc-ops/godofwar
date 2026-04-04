#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_227218
// Address: 0x227218 - 0x2274b8
void entry_227218_0x2274b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_227218_0x2274b8");
#endif

    ctx->pc = 0x227218u;

    // 0x227218: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x227218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x22721c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x22721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x227220: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x227220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x227224: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x227224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227228: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x227228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x22722c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x22722cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227230: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x227230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x227234: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x227234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x227238: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x227238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x22723c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x22723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x227240: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x227240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x227244: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x227244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x227248: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x227248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x22724c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x22724cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x227250: 0x1280008a  beqz        $s4, . + 4 + (0x8A << 2)
    ctx->pc = 0x227250u;
    {
        const bool branch_taken_0x227250 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x227254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227250u;
            // 0x227254: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227250) {
            ctx->pc = 0x22747Cu;
            goto label_22747c;
        }
    }
    ctx->pc = 0x227258u;
    // 0x227258: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x227258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x22725c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x22725cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227260: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x227260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x227264: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x227264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227268: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x227268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x22726c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227274: 0x0  nop
    ctx->pc = 0x227274u;
    // NOP
label_227278:
    // 0x227278: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x227278u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x22727c: 0x2fc20020  sltiu       $v0, $fp, 0x20
    ctx->pc = 0x22727cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x227280: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x227280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x227284: 0x0  nop
    ctx->pc = 0x227284u;
    // NOP
    // 0x227288: 0x0  nop
    ctx->pc = 0x227288u;
    // NOP
    // 0x22728c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22728Cu;
    {
        const bool branch_taken_0x22728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22728Cu;
            // 0x227290: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22728c) {
            ctx->pc = 0x227278u;
            runtime->cooperativeGuestYield();
            goto label_227278;
        }
    }
    ctx->pc = 0x227294u;
    // 0x227294: 0x9682005c  lhu         $v0, 0x5C($s4)
    ctx->pc = 0x227294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x227298: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x227298u;
    {
        const bool branch_taken_0x227298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227298u;
            // 0x22729c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227298) {
            ctx->pc = 0x227454u;
            goto label_227454;
        }
    }
    ctx->pc = 0x2272A0u;
    // 0x2272a0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2272a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x2272a4: 0x0  nop
    ctx->pc = 0x2272a4u;
    // NOP
label_2272a8:
    // 0x2272a8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2272ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2272acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272b0: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2272B0u;
    SET_GPR_U32(ctx, 31, 0x2272B8u);
    ctx->pc = 0x2272B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272B0u;
            // 0x2272b4: 0x24847670  addiu       $a0, $a0, 0x7670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272B8u; }
        if (ctx->pc != 0x2272B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272B8u; }
        if (ctx->pc != 0x2272B8u) { return; }
    }
    ctx->pc = 0x2272B8u;
    // 0x2272b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2272b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2272bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2272c0: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2272C0u;
    {
        const bool branch_taken_0x2272c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2272C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2272C0u;
            // 0x2272c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272c0) {
            ctx->pc = 0x227438u;
            goto label_227438;
        }
    }
    ctx->pc = 0x2272C8u;
    // 0x2272c8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2272cc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2272CCu;
    SET_GPR_U32(ctx, 31, 0x2272D4u);
    ctx->pc = 0x2272D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272CCu;
            // 0x2272d0: 0x24847680  addiu       $a0, $a0, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272D4u; }
        if (ctx->pc != 0x2272D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272D4u; }
        if (ctx->pc != 0x2272D4u) { return; }
    }
    ctx->pc = 0x2272D4u;
    // 0x2272d4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2272d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2272dc: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2272DCu;
    {
        const bool branch_taken_0x2272dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2272E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2272DCu;
            // 0x2272e0: 0x1e1900  sll         $v1, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272dc) {
            ctx->pc = 0x227438u;
            goto label_227438;
        }
    }
    ctx->pc = 0x2272E4u;
    // 0x2272e4: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2272e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2272e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2272ec: 0x84500008  lh          $s0, 0x8($v0)
    ctx->pc = 0x2272ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2272f0: 0x5a000052  blezl       $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2272F0u;
    {
        const bool branch_taken_0x2272f0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2272f0) {
            ctx->pc = 0x2272F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2272F0u;
            // 0x2272f4: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22743Cu;
            goto label_22743c;
        }
    }
    ctx->pc = 0x2272F8u;
    // 0x2272f8: 0x9682005c  lhu         $v0, 0x5C($s4)
    ctx->pc = 0x2272f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x2272fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2272fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227300: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x227300u;
    {
        const bool branch_taken_0x227300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227300u;
            // 0x227304: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227300) {
            ctx->pc = 0x227438u;
            goto label_227438;
        }
    }
    ctx->pc = 0x227308u;
    // 0x227308: 0xde820040  ld          $v0, 0x40($s4)
    ctx->pc = 0x227308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x22730c: 0xde25bdf8  ld          $a1, -0x4208($s1)
    ctx->pc = 0x22730cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 4294950392)));
    // 0x227310: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227310u;
    {
        const bool branch_taken_0x227310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x227310) {
            ctx->pc = 0x227314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227310u;
            // 0x227314: 0x8e82008c  lw          $v0, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227328u;
            goto label_227328;
        }
    }
    ctx->pc = 0x227318u;
    // 0x227318: 0xc04da64  jal         func_136990
    ctx->pc = 0x227318u;
    SET_GPR_U32(ctx, 31, 0x227320u);
    ctx->pc = 0x22731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227318u;
            // 0x22731c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227320u; }
        if (ctx->pc != 0x227320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227320u; }
        if (ctx->pc != 0x227320u) { return; }
    }
    ctx->pc = 0x227320u;
    // 0x227320: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x227320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x227324: 0x0  nop
    ctx->pc = 0x227324u;
    // NOP
label_227328:
    // 0x227328: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x227328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x22732c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227330: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x227330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x227334: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x227334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x227338: 0xde25bdf8  ld          $a1, -0x4208($s1)
    ctx->pc = 0x227338u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 4294950392)));
    // 0x22733c: 0xde820040  ld          $v0, 0x40($s4)
    ctx->pc = 0x22733cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x227340: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227340u;
    {
        const bool branch_taken_0x227340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x227340) {
            ctx->pc = 0x227344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227340u;
            // 0x227344: 0x8e82008c  lw          $v0, 0x8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227358u;
            goto label_227358;
        }
    }
    ctx->pc = 0x227348u;
    // 0x227348: 0xc04da64  jal         func_136990
    ctx->pc = 0x227348u;
    SET_GPR_U32(ctx, 31, 0x227350u);
    ctx->pc = 0x22734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227348u;
            // 0x22734c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227350u; }
        if (ctx->pc != 0x227350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227350u; }
        if (ctx->pc != 0x227350u) { return; }
    }
    ctx->pc = 0x227350u;
    // 0x227350: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x227350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x227354: 0x0  nop
    ctx->pc = 0x227354u;
    // NOP
label_227358:
    // 0x227358: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x227358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x22735c: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x22735cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x227360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227364: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x227364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x227368: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x227368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22736c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x22736cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x227370: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x227370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x227374: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x227374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x227378: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x227378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x22737c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x22737cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x227380: 0x26d70081  addiu       $s7, $s6, 0x81
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 129));
    // 0x227384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227388: 0x26d50080  addiu       $s5, $s6, 0x80
    ctx->pc = 0x227388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x22738c: 0x46000504  c1          0x504
    ctx->pc = 0x22738cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x227390: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x227394: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x227394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_227398:
    // 0x227398: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x227398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22739c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2273a0: 0x0  nop
    ctx->pc = 0x2273a0u;
    // NOP
    // 0x2273a4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2273A4u;
    {
        const bool branch_taken_0x2273a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2273A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2273A4u;
            // 0x2273a8: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273a4) {
            ctx->pc = 0x227418u;
            goto label_227418;
        }
    }
    ctx->pc = 0x2273ACu;
    // 0x2273ac: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x2273acu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2273b0: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x2273b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2273b4: 0xc6c0007c  lwc1        $f0, 0x7C($s6)
    ctx->pc = 0x2273b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2273b8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2273b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2273bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2273bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273c0: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2273c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2273c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2273c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273c8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x2273c8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2273cc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2273CCu;
    SET_GPR_U32(ctx, 31, 0x2273D4u);
    ctx->pc = 0x2273D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273CCu;
            // 0x2273d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273D4u; }
        if (ctx->pc != 0x2273D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273D4u; }
        if (ctx->pc != 0x2273D4u) { return; }
    }
    ctx->pc = 0x2273D4u;
    // 0x2273d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2273d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2273d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273dc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2273DCu;
    SET_GPR_U32(ctx, 31, 0x2273E4u);
    ctx->pc = 0x2273E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273DCu;
            // 0x2273e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273E4u; }
        if (ctx->pc != 0x2273E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273E4u; }
        if (ctx->pc != 0x2273E4u) { return; }
    }
    ctx->pc = 0x2273E4u;
    // 0x2273e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2273e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2273e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273ec: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2273ECu;
    SET_GPR_U32(ctx, 31, 0x2273F4u);
    ctx->pc = 0x2273F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273ECu;
            // 0x2273f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273F4u; }
        if (ctx->pc != 0x2273F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273F4u; }
        if (ctx->pc != 0x2273F4u) { return; }
    }
    ctx->pc = 0x2273F4u;
    // 0x2273f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2273f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2273f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273fc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2273FCu;
    SET_GPR_U32(ctx, 31, 0x227404u);
    ctx->pc = 0x227400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273FCu;
            // 0x227400: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227404u; }
        if (ctx->pc != 0x227404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227404u; }
        if (ctx->pc != 0x227404u) { return; }
    }
    ctx->pc = 0x227404u;
    // 0x227404: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x227404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x227408: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22740c: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x22740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x227410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x227410u;
    {
        const bool branch_taken_0x227410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227410u;
            // 0x227414: 0xa05e0080  sb          $fp, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227410) {
            ctx->pc = 0x227438u;
            goto label_227438;
        }
    }
    ctx->pc = 0x227418u;
label_227418:
    // 0x227418: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x22741c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22741cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x227420: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x227424: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x227424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x227428: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22742c: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x22742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x227430: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x227430u;
    {
        const bool branch_taken_0x227430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227430u;
            // 0x227434: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227430) {
            ctx->pc = 0x227398u;
            runtime->cooperativeGuestYield();
            goto label_227398;
        }
    }
    ctx->pc = 0x227438u;
label_227438:
    // 0x227438: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22743c:
    // 0x22743c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x227440: 0x9682005c  lhu         $v0, 0x5C($s4)
    ctx->pc = 0x227440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x227444: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x227448: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x227448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22744c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x22744Cu;
    {
        const bool branch_taken_0x22744c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22744Cu;
            // 0x227450: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22744c) {
            ctx->pc = 0x2272A8u;
            runtime->cooperativeGuestYield();
            goto label_2272a8;
        }
    }
    ctx->pc = 0x227454u;
label_227454:
    // 0x227454: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x227454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227458: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x227458u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22745c: 0x0  nop
    ctx->pc = 0x22745cu;
    // NOP
label_227460:
    // 0x227460: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x227460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227464: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x227468: 0x2fc20020  sltiu       $v0, $fp, 0x20
    ctx->pc = 0x227468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x22746c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x22746cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x227470: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x227470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x227474: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x227474u;
    {
        const bool branch_taken_0x227474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227474u;
            // 0x227478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227474) {
            ctx->pc = 0x227460u;
            runtime->cooperativeGuestYield();
            goto label_227460;
        }
    }
    ctx->pc = 0x22747Cu;
label_22747c:
    // 0x22747c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x22747cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x227480: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x227480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x227484: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x227484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x227488: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x227488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22748c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x22748cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x227490: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x227490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x227494: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x227494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x227498: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x227498u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22749c: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x22749cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2274a0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2274a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2274a4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2274a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2274a8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2274a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2274ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2274ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2274B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2274ACu;
            // 0x2274b0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227278u: goto label_227278;
            case 0x2272A8u: goto label_2272a8;
            case 0x227328u: goto label_227328;
            case 0x227358u: goto label_227358;
            case 0x227398u: goto label_227398;
            case 0x227418u: goto label_227418;
            case 0x227438u: goto label_227438;
            case 0x22743Cu: goto label_22743c;
            case 0x227454u: goto label_227454;
            case 0x227460u: goto label_227460;
            case 0x22747Cu: goto label_22747c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2274B4u;
    // 0x2274b4: 0x0  nop
    ctx->pc = 0x2274b4u;
    // NOP
}
