#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C1A8
// Address: 0x12c1a8 - 0x12c448
void sub_0012C1A8_0x12c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C1A8_0x12c1a8");
#endif

    ctx->pc = 0x12c1a8u;

    // 0x12c1a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x12c1ac: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x12c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x12c1b0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x12c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x12c1b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1b8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x12c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x12c1bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12c1bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1c0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x12c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x12c1c4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x12c1c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1c8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x12c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x12c1cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12c1ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1d0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x12c1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x12c1d4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x12c1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x12c1d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12c1dc: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x12c1dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x12c1e0: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x12c1e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x12c1e4: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12C1E4u;
    SET_GPR_U32(ctx, 31, 0x12C1ECu);
    ctx->pc = 0x12C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1E4u;
            // 0x12c1e8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C1ECu; }
        if (ctx->pc != 0x12C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C1ECu; }
        if (ctx->pc != 0x12C1ECu) { return; }
    }
    ctx->pc = 0x12C1ECu;
    // 0x12c1ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c1f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12c1f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12c1f4: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x12c1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x12c1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c1fc: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x12c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x12c200: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12c200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12c204: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c208: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12c208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c20c: 0x0  nop
    ctx->pc = 0x12c20cu;
    // NOP
    // 0x12c210: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12C210u;
    {
        const bool branch_taken_0x12c210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C210u;
            // 0x12c214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c210) {
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C218u;
    // 0x12c218: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12C218u;
    {
        const bool branch_taken_0x12c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C218u;
            // 0x12c21c: 0x90740080  lbu         $s4, 0x80($v1) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c218) {
            ctx->pc = 0x12C260u;
            goto label_12c260;
        }
    }
    ctx->pc = 0x12C220u;
label_12c220:
    // 0x12c220: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12c224:
    // 0x12c224: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c228: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c22c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c230: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x12c230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c234: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C234u;
    {
        const bool branch_taken_0x12c234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C234u;
            // 0x12c238: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c234) {
            ctx->pc = 0x12C260u;
            goto label_12c260;
        }
    }
    ctx->pc = 0x12C23Cu;
    // 0x12c23c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12c240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c248: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12c248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c24c: 0x0  nop
    ctx->pc = 0x12c24cu;
    // NOP
    // 0x12c250: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x12C250u;
    {
        const bool branch_taken_0x12c250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C250u;
            // 0x12c254: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c250) {
            ctx->pc = 0x12C224u;
            runtime->cooperativeGuestYield();
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C258u;
    // 0x12c258: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12c25c: 0x90540080  lbu         $s4, 0x80($v0)
    ctx->pc = 0x12c25cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
label_12c260:
    // 0x12c260: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x12c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12c264: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x12c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12c268: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C268u;
    {
        const bool branch_taken_0x12c268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c268) {
            ctx->pc = 0x12C26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C268u;
            // 0x12c26c: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C274u;
            goto label_12c274;
        }
    }
    ctx->pc = 0x12C270u;
    // 0x12c270: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x12c270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_12c274:
    // 0x12c274: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x12c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x12c278: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x12c278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x12c27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c280: 0x84510008  lh          $s1, 0x8($v0)
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12c284: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x12c284u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x12c288: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x12c288u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x12c28c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x12c28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x12c290: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C290u;
    {
        const bool branch_taken_0x12c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12c290) {
            ctx->pc = 0x12C294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C290u;
            // 0x12c294: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C2A8u;
            goto label_12c2a8;
        }
    }
    ctx->pc = 0x12C298u;
    // 0x12c298: 0xc04da64  jal         func_136990
    ctx->pc = 0x12C298u;
    SET_GPR_U32(ctx, 31, 0x12C2A0u);
    ctx->pc = 0x12C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C298u;
            // 0x12c29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2A0u; }
        if (ctx->pc != 0x12C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2A0u; }
        if (ctx->pc != 0x12C2A0u) { return; }
    }
    ctx->pc = 0x12C2A0u;
    // 0x12c2a0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x12c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12c2a4: 0x0  nop
    ctx->pc = 0x12c2a4u;
    // NOP
label_12c2a8:
    // 0x12c2a8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x12c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x12c2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c2b0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x12c2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12c2b4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x12c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x12c2b8: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x12c2b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x12c2bc: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x12c2bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x12c2c0: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C2C0u;
    {
        const bool branch_taken_0x12c2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12c2c0) {
            ctx->pc = 0x12C2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2C0u;
            // 0x12c2c4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C2D8u;
            goto label_12c2d8;
        }
    }
    ctx->pc = 0x12C2C8u;
    // 0x12c2c8: 0xc04da64  jal         func_136990
    ctx->pc = 0x12C2C8u;
    SET_GPR_U32(ctx, 31, 0x12C2D0u);
    ctx->pc = 0x12C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2C8u;
            // 0x12c2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2D0u; }
        if (ctx->pc != 0x12C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2D0u; }
        if (ctx->pc != 0x12C2D0u) { return; }
    }
    ctx->pc = 0x12C2D0u;
    // 0x12c2d0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x12c2d4: 0x0  nop
    ctx->pc = 0x12c2d4u;
    // NOP
label_12c2d8:
    // 0x12c2d8: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x12c2dc: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x12c2e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12c2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12c2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c2e8: 0xd8430030  lqc2        $vf3, 0x30($v0)
    ctx->pc = 0x12c2e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12c2ec: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12C2ECu;
    SET_GPR_U32(ctx, 31, 0x12C2F4u);
    ctx->pc = 0x12C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2ECu;
            // 0x12c2f0: 0xfba30080  sqc2        $vf3, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2F4u; }
        if (ctx->pc != 0x12C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2F4u; }
        if (ctx->pc != 0x12C2F4u) { return; }
    }
    ctx->pc = 0x12C2F4u;
    // 0x12c2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12c2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12c2fc: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x12c2fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c300: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x12c300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c304: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x12c304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12c308: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x12c308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x12c30c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12c30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12c310: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12c310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c314: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12c314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12c318: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x12c318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12c31c: 0xfaa30000  sqc2        $vf3, 0x0($s5)
    ctx->pc = 0x12c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12c320: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x12c324: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x12c324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12c328: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x12c328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c32c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x12c32cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x12c330: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x12c330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12c334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12c334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c338: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x12c338u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x12c33c: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x12c33cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12c340: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12c340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12c344: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c348: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x12c348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12c34c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x12c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c350: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x12c350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12c354: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x12c354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12c358: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12c358u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12c35c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12c35cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12c360: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x12c360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12c364: 0x4a0002ff  vnop
    ctx->pc = 0x12c364u;
    // NOP operation, no action needed for VU0
    // 0x12c368: 0x4a0002ff  vnop
    ctx->pc = 0x12c368u;
    // NOP operation, no action needed for VU0
    // 0x12c36c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x12c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c370: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x12c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x12c374: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12c374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c378: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x12c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c37c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x12c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c380: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x12c380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12c384: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12C384u;
    SET_GPR_U32(ctx, 31, 0x12C38Cu);
    ctx->pc = 0x12C388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C384u;
            // 0x12c388: 0xfba20070  sqc2        $vf2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C38Cu; }
        if (ctx->pc != 0x12C38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C38Cu; }
        if (ctx->pc != 0x12C38Cu) { return; }
    }
    ctx->pc = 0x12C38Cu;
    // 0x12c38c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12c38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12c390: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x12c390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x12c394: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x12c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x12c398: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x12c398u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x12c39c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x12c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c3a0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12C3A0u;
    SET_GPR_U32(ctx, 31, 0x12C3A8u);
    ctx->pc = 0x12C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3A0u;
            // 0x12c3a4: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3A8u; }
        if (ctx->pc != 0x12C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3A8u; }
        if (ctx->pc != 0x12C3A8u) { return; }
    }
    ctx->pc = 0x12C3A8u;
    // 0x12c3a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12c3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c3ac: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x12c3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x12c3b0: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x12c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x12c3b4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x12c3b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x12c3b8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x12c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c3bc: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12C3BCu;
    SET_GPR_U32(ctx, 31, 0x12C3C4u);
    ctx->pc = 0x12C3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3BCu;
            // 0x12c3c0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3C4u; }
        if (ctx->pc != 0x12C3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3C4u; }
        if (ctx->pc != 0x12C3C4u) { return; }
    }
    ctx->pc = 0x12C3C4u;
    // 0x12c3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c3c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12c3c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12c3cc: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x12c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x12c3d0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x12c3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x12c3d4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x12c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12c3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12c3dc: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x12c3dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12c3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3e4: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x12c3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x12c3e8: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x12c3e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12c3ec: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x12c3ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c3f0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x12c3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12c3f4: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x12c3f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x12c3f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12c3f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12c3fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12c3fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12c400: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12c400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x12c404: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12c404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12c408: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x12c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x12c40c: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x12c40cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12c410: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x12c410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12c414: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x12c414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12c418: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x12c418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12c41c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x12c41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12c420: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x12c420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12c424: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x12c424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12c428: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x12c428u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12c42c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c430: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x12c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12c434: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x12c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12c438: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x12c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C43Cu;
            // 0x12c440: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C220u: goto label_12c220;
            case 0x12C224u: goto label_12c224;
            case 0x12C260u: goto label_12c260;
            case 0x12C274u: goto label_12c274;
            case 0x12C2A8u: goto label_12c2a8;
            case 0x12C2D8u: goto label_12c2d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C444u;
    // 0x12c444: 0x0  nop
    ctx->pc = 0x12c444u;
    // NOP
}
