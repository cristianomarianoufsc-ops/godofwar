#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157100
// Address: 0x157100 - 0x157370
void sub_00157100_0x157100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157100_0x157100");
#endif

    ctx->pc = 0x157100u;

    // 0x157100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x157104: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x157108: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x157108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15710c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x157110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x157110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157114: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x157114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x157118: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x157118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15711c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15711cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157120: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x157120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x157124: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x157124u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x157128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15712c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x15712cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x157130: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x157134: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x157138: 0x8c53001c  lw          $s3, 0x1C($v0)
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x15713c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x15713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x157140: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157140u;
            // 0x157144: 0x3062000c  andi        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x157254u;
            goto label_157254;
        }
    }
    ctx->pc = 0x157148u;
    // 0x157148: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x157148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15714c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x15714Cu;
    SET_GPR_U32(ctx, 31, 0x157154u);
    ctx->pc = 0x157150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15714Cu;
            // 0x157150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157154u; }
        if (ctx->pc != 0x157154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157154u; }
        if (ctx->pc != 0x157154u) { return; }
    }
    ctx->pc = 0x157154u;
    // 0x157154: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x157154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x157158: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x157158u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x15715c: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x15715cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x157160: 0xc6070030  lwc1        $f7, 0x30($s0)
    ctx->pc = 0x157160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x157164: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x157164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x157168: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x157168u;
    {
        const bool branch_taken_0x157168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157168u;
            // 0x15716c: 0xc606002c  lwc1        $f6, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157168) {
            ctx->pc = 0x157334u;
            goto label_157334;
        }
    }
    ctx->pc = 0x157170u;
    // 0x157170: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x157174: 0x0  nop
    ctx->pc = 0x157174u;
    // NOP
label_157178:
    // 0x157178: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15717c: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x15717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x157180: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x157180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x157184: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x157184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x157188: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15718c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15718cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157190: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157194: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x157198: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15719c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1571a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1571a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1571a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1571a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1571a8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x1571a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1571ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1571b0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1571B0u;
    {
        const bool branch_taken_0x1571b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571B0u;
            // 0x1571b4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571b0) {
            ctx->pc = 0x15723Cu;
            goto label_15723c;
        }
    }
    ctx->pc = 0x1571B8u;
    // 0x1571b8: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x1571b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1571bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1571bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1571c0: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1571c4: 0x0  nop
    ctx->pc = 0x1571c4u;
    // NOP
label_1571c8:
    // 0x1571c8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1571c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1571cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1571ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1571d0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1571d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1571d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1571d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1571d8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1571d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1571dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1571dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1571e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1571e4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1571e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1571e8: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x1571e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1571ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1571ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1571f0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1571f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1571f4: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x1571f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1571f8: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x1571f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1571fc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1571fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x157200: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x157200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x157204: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x157204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x157208: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x157208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15720c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x15720cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x157210: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x157210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x157214: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x157218: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x157218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15721c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15721cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x157220: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x157220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x157224: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x157224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x157228: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x157228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15722c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x15722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x157230: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x157230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x157234: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x157234u;
    {
        const bool branch_taken_0x157234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157234u;
            // 0x157238: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157234) {
            ctx->pc = 0x1571C8u;
            runtime->cooperativeGuestYield();
            goto label_1571c8;
        }
    }
    ctx->pc = 0x15723Cu;
label_15723c:
    // 0x15723c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15723cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x157240: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x157240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x157244: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x157244u;
    {
        const bool branch_taken_0x157244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157244u;
            // 0x157248: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157244) {
            ctx->pc = 0x157178u;
            runtime->cooperativeGuestYield();
            goto label_157178;
        }
    }
    ctx->pc = 0x15724Cu;
    // 0x15724c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15724Cu;
    {
        const bool branch_taken_0x15724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15724Cu;
            // 0x157250: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15724c) {
            ctx->pc = 0x157338u;
            goto label_157338;
        }
    }
    ctx->pc = 0x157254u;
label_157254:
    // 0x157254: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x157254u;
    {
        const bool branch_taken_0x157254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157254u;
            // 0x157258: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157254) {
            ctx->pc = 0x157334u;
            goto label_157334;
        }
    }
    ctx->pc = 0x15725Cu;
    // 0x15725c: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x157260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x157260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x157264: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x157264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157268: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x157268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15726c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15726cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x157270: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x157270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x157274: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x157274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157278: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x157278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x15727c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15727cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x157280: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x157280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x157284: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x157288: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x157288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15728c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x15728Cu;
    {
        const bool branch_taken_0x15728c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15728Cu;
            // 0x157290: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15728c) {
            ctx->pc = 0x157338u;
            goto label_157338;
        }
    }
    ctx->pc = 0x157294u;
    // 0x157294: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_157298:
    // 0x157298: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15729c: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x15729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x1572a0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1572a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1572a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1572a8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1572ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1572acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1572b0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1572b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1572b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1572b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1572bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1572c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1572c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1572c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1572c8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x1572c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1572cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1572ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1572d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1572D0u;
    {
        const bool branch_taken_0x1572d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572D0u;
            // 0x1572d4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572d0) {
            ctx->pc = 0x157324u;
            goto label_157324;
        }
    }
    ctx->pc = 0x1572D8u;
    // 0x1572d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1572dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1572e0:
    // 0x1572e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1572e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1572e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1572e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1572e8: 0x109182b  sltu        $v1, $t0, $t1
    ctx->pc = 0x1572e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1572ec: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x1572f0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1572f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1572f4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x1572f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1572f8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1572f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1572fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1572fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x157300: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x157300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157304: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x157304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x157308: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x157308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x15730c: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x15730cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157310: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x157314: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x157314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x157318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x157318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15731c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15731Cu;
    {
        const bool branch_taken_0x15731c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15731Cu;
            // 0x157320: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15731c) {
            ctx->pc = 0x1572E0u;
            runtime->cooperativeGuestYield();
            goto label_1572e0;
        }
    }
    ctx->pc = 0x157324u;
label_157324:
    // 0x157324: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x157324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x157328: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x157328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x15732c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15732Cu;
            // 0x157330: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15732c) {
            ctx->pc = 0x157298u;
            runtime->cooperativeGuestYield();
            goto label_157298;
        }
    }
    ctx->pc = 0x157334u;
label_157334:
    // 0x157334: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x157334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_157338:
    // 0x157338: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x157338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15733c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15733cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157340: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x157340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157348: 0x3e00008  jr          $ra
    ctx->pc = 0x157348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157348u;
            // 0x15734c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157178u: goto label_157178;
            case 0x1571C8u: goto label_1571c8;
            case 0x15723Cu: goto label_15723c;
            case 0x157254u: goto label_157254;
            case 0x157298u: goto label_157298;
            case 0x1572E0u: goto label_1572e0;
            case 0x157324u: goto label_157324;
            case 0x157334u: goto label_157334;
            case 0x157338u: goto label_157338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157350u;
    // 0x157350: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x157354: 0x0  nop
    ctx->pc = 0x157354u;
    // NOP
    // 0x157358: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15735c: 0xac404994  sw          $zero, 0x4994($v0)
    ctx->pc = 0x15735cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18836), GPR_U32(ctx, 0));
    // 0x157360: 0xf  sync
    ctx->pc = 0x157360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x157364: 0x42000038  ei
    ctx->pc = 0x157364u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x157368: 0x3e00008  jr          $ra
    ctx->pc = 0x157368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157368u;
            // 0x15736c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157178u: goto label_157178;
            case 0x1571C8u: goto label_1571c8;
            case 0x15723Cu: goto label_15723c;
            case 0x157254u: goto label_157254;
            case 0x157298u: goto label_157298;
            case 0x1572E0u: goto label_1572e0;
            case 0x157324u: goto label_157324;
            case 0x157334u: goto label_157334;
            case 0x157338u: goto label_157338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157370u;
}
