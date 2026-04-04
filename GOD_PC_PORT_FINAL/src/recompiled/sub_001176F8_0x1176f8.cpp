#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001176F8
// Address: 0x1176f8 - 0x117888
void sub_001176F8_0x1176f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001176F8_0x1176f8");
#endif

    ctx->pc = 0x1176f8u;

    // 0x1176f8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1176f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1176fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1176fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117700: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x117700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x117704: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x117704u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x117708: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x117708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11770c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x11770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x117710: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x117710u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x117714: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x117714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x117718: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x117718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x11771c: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x11771cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x117720: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x117720u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x117724: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x117724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x117728: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x117728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11772c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11772Cu;
    {
        const bool branch_taken_0x11772c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11772Cu;
            // 0x117730: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11772c) {
            ctx->pc = 0x117754u;
            goto label_117754;
        }
    }
    ctx->pc = 0x117734u;
    // 0x117734: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x117734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_117738:
    // 0x117738: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x117738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x11773c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x117740: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x117744: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x117744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x117748: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11774c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11774Cu;
    {
        const bool branch_taken_0x11774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11774Cu;
            // 0x117750: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11774c) {
            ctx->pc = 0x117738u;
            runtime->cooperativeGuestYield();
            goto label_117738;
        }
    }
    ctx->pc = 0x117754u;
label_117754:
    // 0x117754: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x117754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x117758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11775c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11775Cu;
    {
        const bool branch_taken_0x11775c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x117760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11775Cu;
            // 0x117760: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11775c) {
            ctx->pc = 0x117774u;
            goto label_117774;
        }
    }
    ctx->pc = 0x117764u;
    // 0x117764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x117764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117768: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x117768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11776c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11776Cu;
    {
        const bool branch_taken_0x11776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11776Cu;
            // 0x117770: 0x46016842  mul.s       $f1, $f13, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11776c) {
            ctx->pc = 0x11778Cu;
            goto label_11778c;
        }
    }
    ctx->pc = 0x117774u;
label_117774:
    // 0x117774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11777c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x117780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x117784: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x117784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x117788: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x117788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_11778c:
    // 0x11778c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11778cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117790: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x117790u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x117794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117798: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x117798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11779c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11779cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1177a0: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1177a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1177a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1177a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1177a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1177a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1177ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1177acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1177b0: 0x46011581  sub.s       $f22, $f2, $f1
    ctx->pc = 0x1177b0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1177b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1177b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1177b8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1177b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1177bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1177bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1177c0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1177c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1177c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1177c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1177c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1177C8u;
    {
        const bool branch_taken_0x1177c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1177C8u;
            // 0x1177cc: 0xe6160018  swc1        $f22, 0x18($s0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177c8) {
            ctx->pc = 0x1177D8u;
            goto label_1177d8;
        }
    }
    ctx->pc = 0x1177D0u;
    // 0x1177d0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1177d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1177d4: 0x0  nop
    ctx->pc = 0x1177d4u;
    // NOP
label_1177d8:
    // 0x1177d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1177d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1177dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1177DCu;
    {
        const bool branch_taken_0x1177dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1177DCu;
            // 0x1177e0: 0x46170542  mul.s       $f21, $f0, $f23 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177dc) {
            ctx->pc = 0x1177E8u;
            goto label_1177e8;
        }
    }
    ctx->pc = 0x1177E4u;
    // 0x1177e4: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x1177e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1177e8:
    // 0x1177e8: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1177E8u;
    SET_GPR_U32(ctx, 31, 0x1177F0u);
    ctx->pc = 0x1177ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1177E8u;
            // 0x1177ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1177F0u; }
        if (ctx->pc != 0x1177F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1177F0u; }
        if (ctx->pc != 0x1177F0u) { return; }
    }
    ctx->pc = 0x1177F0u;
    // 0x1177f0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1177f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1177f4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1177f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1177f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1177fc: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x1177fcu;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x117800: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x117800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x117804: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x117804u;
    {
        const bool branch_taken_0x117804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117804u;
            // 0x117808: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117804) {
            ctx->pc = 0x117860u;
            goto label_117860;
        }
    }
    ctx->pc = 0x11780Cu;
    // 0x11780c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x11780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x117810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11781c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x117820: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x117820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x117824: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117828: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11782c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x11782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x117830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x117830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117834: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x117834u;
    {
        const bool branch_taken_0x117834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117834) {
            ctx->pc = 0x117838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117834u;
            // 0x117838: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x11783Cu;
            goto label_11783c;
        }
    }
    ctx->pc = 0x11783Cu;
label_11783c:
    // 0x11783c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11783cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117840: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117840u;
    {
        const bool branch_taken_0x117840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117840u;
            // 0x117844: 0x46170542  mul.s       $f21, $f0, $f23 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117840) {
            ctx->pc = 0x11784Cu;
            goto label_11784c;
        }
    }
    ctx->pc = 0x117848u;
    // 0x117848: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x117848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11784c:
    // 0x11784c: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x11784Cu;
    SET_GPR_U32(ctx, 31, 0x117854u);
    ctx->pc = 0x117850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11784Cu;
            // 0x117850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117854u; }
        if (ctx->pc != 0x117854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117854u; }
        if (ctx->pc != 0x117854u) { return; }
    }
    ctx->pc = 0x117854u;
    // 0x117854: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x117854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x117858: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x117858u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x11785c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x11785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_117860:
    // 0x117860: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x117860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x117864: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x117864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x117868: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x117868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11786c: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x11786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x117870: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x117870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x117874: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x117874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x117878: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x117878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11787c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x11787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117880: 0x3e00008  jr          $ra
    ctx->pc = 0x117880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117880u;
            // 0x117884: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117738u: goto label_117738;
            case 0x117754u: goto label_117754;
            case 0x117774u: goto label_117774;
            case 0x11778Cu: goto label_11778c;
            case 0x1177D8u: goto label_1177d8;
            case 0x1177E8u: goto label_1177e8;
            case 0x11783Cu: goto label_11783c;
            case 0x11784Cu: goto label_11784c;
            case 0x117860u: goto label_117860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117888u;
}
