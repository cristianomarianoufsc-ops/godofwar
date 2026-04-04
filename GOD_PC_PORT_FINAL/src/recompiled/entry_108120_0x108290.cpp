#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_108120
// Address: 0x108120 - 0x108290
void entry_108120_0x108290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_108120_0x108290");
#endif

    ctx->pc = 0x108120u;

    // 0x108120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108128: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10812c: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x10812cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x108130: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x108130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x108134: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x108134u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x108138: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x108138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10813c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x10813cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x108140: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x108140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x108144: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x108144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x108148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10814c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x10814cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x108150: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x108150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x108154: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x108154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x108158: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10815c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10815cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108160: 0x8cb30014  lw          $s3, 0x14($a1)
    ctx->pc = 0x108160u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x108164: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x108168: 0x46006dc2  mul.s       $f23, $f13, $f0
    ctx->pc = 0x108168u;
    ctx->f[23] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x10816c: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x10816Cu;
    {
        const bool branch_taken_0x10816c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x108170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10816Cu;
            // 0x108170: 0x46006582  mul.s       $f22, $f12, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10816c) {
            ctx->pc = 0x1081D0u;
            goto label_1081d0;
        }
    }
    ctx->pc = 0x108174u;
    // 0x108174: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x108174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108178: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x108178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10817c: 0x0  nop
    ctx->pc = 0x10817cu;
    // NOP
label_108180:
    // 0x108180: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x108180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x108184: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x108184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x108188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108188u;
    {
        const bool branch_taken_0x108188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108188u;
            // 0x10818c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108188) {
            ctx->pc = 0x108198u;
            goto label_108198;
        }
    }
    ctx->pc = 0x108190u;
    // 0x108190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108190u;
    {
        const bool branch_taken_0x108190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108190u;
            // 0x108194: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108190) {
            ctx->pc = 0x10819Cu;
            goto label_10819c;
        }
    }
    ctx->pc = 0x108198u;
label_108198:
    // 0x108198: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x108198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10819c:
    // 0x10819c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10819cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1081a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1081A0u;
    {
        const bool branch_taken_0x1081a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1081A0u;
            // 0x1081a4: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081a0) {
            ctx->pc = 0x1081ACu;
            goto label_1081ac;
        }
    }
    ctx->pc = 0x1081A8u;
    // 0x1081a8: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x1081a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1081ac:
    // 0x1081ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1081acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081b0: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1081B0u;
    SET_GPR_U32(ctx, 31, 0x1081B8u);
    ctx->pc = 0x1081B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1081B0u;
            // 0x1081b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081B8u; }
        if (ctx->pc != 0x1081B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1081B8u; }
        if (ctx->pc != 0x1081B8u) { return; }
    }
    ctx->pc = 0x1081B8u;
    // 0x1081b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1081b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1081bc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1081bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1081c0: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x1081c0u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x1081c4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1081c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1081c8: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1081C8u;
    {
        const bool branch_taken_0x1081c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1081CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1081C8u;
            // 0x1081cc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081c8) {
            ctx->pc = 0x108180u;
            runtime->cooperativeGuestYield();
            goto label_108180;
        }
    }
    ctx->pc = 0x1081D0u;
label_1081d0:
    // 0x1081d0: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1081d4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1081D4u;
            // 0x1081d8: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1081DCu;
    // 0x1081dc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1081dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1081e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1081e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1081e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1081E4u;
    {
        const bool branch_taken_0x1081e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1081E4u;
            // 0x1081e8: 0x4601b842  mul.s       $f1, $f23, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081e4) {
            ctx->pc = 0x108204u;
            goto label_108204;
        }
    }
    ctx->pc = 0x1081ECu;
label_1081ec:
    // 0x1081ec: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1081f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1081f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1081f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1081f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1081f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1081f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1081fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1081fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x108200: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x108200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
label_108204:
    // 0x108204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108208: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x108208u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x10820c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108210: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108214: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x108218: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x108218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10821c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x10821cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108224: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x108224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x108228: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x108228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x10822c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x10822cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x108230: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x108230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108234: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x108234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x108238: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10823c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10823Cu;
    {
        const bool branch_taken_0x10823c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10823Cu;
            // 0x108240: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10823c) {
            ctx->pc = 0x108260u;
            goto label_108260;
        }
    }
    ctx->pc = 0x108244u;
    // 0x108244: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x108248: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x108248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x10824c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10824cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108250: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x108250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108254: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108258: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x108258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x10825c: 0x0  nop
    ctx->pc = 0x10825cu;
    // NOP
label_108260:
    // 0x108260: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x108260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108264: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x108264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108268: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x108268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10826c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10826cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108270: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108274: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x108274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x108278: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x108278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10827c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x10827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x108280: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x108280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x108284: 0x3e00008  jr          $ra
    ctx->pc = 0x108284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108284u;
            // 0x108288: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108180u: goto label_108180;
            case 0x108198u: goto label_108198;
            case 0x10819Cu: goto label_10819c;
            case 0x1081ACu: goto label_1081ac;
            case 0x1081D0u: goto label_1081d0;
            case 0x1081ECu: goto label_1081ec;
            case 0x108204u: goto label_108204;
            case 0x108260u: goto label_108260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10828Cu;
    // 0x10828c: 0x0  nop
    ctx->pc = 0x10828cu;
    // NOP
}
