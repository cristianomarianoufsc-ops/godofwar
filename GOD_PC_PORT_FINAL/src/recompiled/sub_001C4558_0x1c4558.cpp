#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4558
// Address: 0x1c4558 - 0x1c4780
void sub_001C4558_0x1c4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4558_0x1c4558");
#endif

    ctx->pc = 0x1c4558u;

    // 0x1c4558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c455c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c455cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4564: 0x3463efff  ori         $v1, $v1, 0xEFFF
    ctx->pc = 0x1c4564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61439);
    // 0x1c4568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c456c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c456cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4570: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4574: 0x8e050320  lw          $a1, 0x320($s0)
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c4578: 0x3484f800  ori         $a0, $a0, 0xF800
    ctx->pc = 0x1c4578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63488);
    // 0x1c457c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c4580: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1c4580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c4584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c4588: 0x8e0602d8  lw          $a2, 0x2D8($s0)
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c458c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c458cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4590: 0xc4e00138  lwc1        $f0, 0x138($a3)
    ctx->pc = 0x1c4590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4594: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c4594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c4598: 0x34a5fcff  ori         $a1, $a1, 0xFCFF
    ctx->pc = 0x1c4598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64767);
    // 0x1c459c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1c459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1c45a0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1c45a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1c45a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1c45a8: 0xae0602d8  sw          $a2, 0x2D8($s0)
    ctx->pc = 0x1c45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 6));
    // 0x1c45ac: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c45b0: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1c45b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1c45b4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C45B4u;
    {
        const bool branch_taken_0x1c45b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45B4u;
            // 0x1c45b8: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45b4) {
            ctx->pc = 0x1C4618u;
            goto label_1c4618;
        }
    }
    ctx->pc = 0x1C45BCu;
    // 0x1c45bc: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c45c0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c45c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C45C4u;
    {
        const bool branch_taken_0x1c45c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45C4u;
            // 0x1c45c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45c4) {
            ctx->pc = 0x1C45DCu;
            goto label_1c45dc;
        }
    }
    ctx->pc = 0x1C45CCu;
    // 0x1c45cc: 0xc090d5a  jal         func_243568
    ctx->pc = 0x1C45CCu;
    SET_GPR_U32(ctx, 31, 0x1C45D4u);
    ctx->pc = 0x243568u;
    if (runtime->hasFunction(0x243568u)) {
        auto targetFn = runtime->lookupFunction(0x243568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45D4u; }
        if (ctx->pc != 0x1C45D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243568_0x243570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45D4u; }
        if (ctx->pc != 0x1C45D4u) { return; }
    }
    ctx->pc = 0x1C45D4u;
    // 0x1c45d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1c45d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c45d8: 0x219fa  dsrl        $v1, $v0, 7
    ctx->pc = 0x1c45d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 7);
label_1c45dc:
    // 0x1c45dc: 0x54600064  bnel        $v1, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1C45DCu;
    {
        const bool branch_taken_0x1c45dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45dc) {
            ctx->pc = 0x1C45E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45DCu;
            // 0x1c45e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4770u;
            goto label_1c4770;
        }
    }
    ctx->pc = 0x1C45E4u;
    // 0x1c45e4: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C45E4u;
    SET_GPR_U32(ctx, 31, 0x1C45ECu);
    ctx->pc = 0x1C45E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45E4u;
            // 0x1c45e8: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45ECu; }
        if (ctx->pc != 0x1C45ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45ECu; }
        if (ctx->pc != 0x1C45ECu) { return; }
    }
    ctx->pc = 0x1C45ECu;
    // 0x1c45ec: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c45ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c45f0: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1c45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c45f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c45f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c45f8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c45f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c45fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c45fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4600: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c4600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4604: 0x0  nop
    ctx->pc = 0x1c4604u;
    // NOP
    // 0x1c4608: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x1C4608u;
    {
        const bool branch_taken_0x1c4608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4608) {
            ctx->pc = 0x1C460Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4608u;
            // 0x1c460c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4610u;
    // 0x1c4610: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1C4610u;
    {
        const bool branch_taken_0x1c4610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4610u;
            // 0x1c4614: 0x8e020328  lw          $v0, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4610) {
            ctx->pc = 0x1C4768u;
            goto label_1c4768;
        }
    }
    ctx->pc = 0x1C4618u;
label_1c4618:
    // 0x1c4618: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C4618u;
    SET_GPR_U32(ctx, 31, 0x1C4620u);
    ctx->pc = 0x1C461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4618u;
            // 0x1c461c: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4620u; }
        if (ctx->pc != 0x1C4620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4620u; }
        if (ctx->pc != 0x1C4620u) { return; }
    }
    ctx->pc = 0x1C4620u;
    // 0x1c4620: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c4624: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c4628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c462c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C462Cu;
    {
        const bool branch_taken_0x1c462c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C462Cu;
            // 0x1c4630: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c462c) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4634u;
    // 0x1c4634: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c4638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c463c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C463Cu;
    {
        const bool branch_taken_0x1c463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C463Cu;
            // 0x1c4640: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c463c) {
            ctx->pc = 0x1C4688u;
            goto label_1c4688;
        }
    }
    ctx->pc = 0x1C4644u;
    // 0x1c4644: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1c4644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1c4648: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C4648u;
    {
        const bool branch_taken_0x1c4648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4648u;
            // 0x1c464c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4648) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4650u;
    // 0x1c4650: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c4650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c4654: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4658: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c4658u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c465c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c465cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4664: 0x0  nop
    ctx->pc = 0x1c4664u;
    // NOP
    // 0x1c4668: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x1C4668u;
    {
        const bool branch_taken_0x1c4668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4668u;
            // 0x1c466c: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4668) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4670u;
    // 0x1c4670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4674: 0x0  nop
    ctx->pc = 0x1c4674u;
    // NOP
    // 0x1c4678: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4678u;
    {
        const bool branch_taken_0x1c4678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4678u;
            // 0x1c467c: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4678) {
            ctx->pc = 0x1C46D0u;
            goto label_1c46d0;
        }
    }
    ctx->pc = 0x1C4680u;
    // 0x1c4680: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C4680u;
    {
        const bool branch_taken_0x1c4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4680u;
            // 0x1c4684: 0x8e020328  lw          $v0, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4680) {
            ctx->pc = 0x1C4768u;
            goto label_1c4768;
        }
    }
    ctx->pc = 0x1C4688u;
label_1c4688:
    // 0x1c4688: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1c4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1c468c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C468Cu;
    {
        const bool branch_taken_0x1c468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C468Cu;
            // 0x1c4690: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c468c) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4694u;
    // 0x1c4694: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c4694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c4698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c469c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c469cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c46a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c46a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c46a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c46a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c46a8: 0x0  nop
    ctx->pc = 0x1c46a8u;
    // NOP
    // 0x1c46ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C46ACu;
    {
        const bool branch_taken_0x1c46ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C46B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46ACu;
            // 0x1c46b0: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46ac) {
            ctx->pc = 0x1C46C0u;
            goto label_1c46c0;
        }
    }
    ctx->pc = 0x1C46B4u;
    // 0x1c46b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c46b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C46B8u;
    {
        const bool branch_taken_0x1c46b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46B8u;
            // 0x1c46bc: 0x3442bfff  ori         $v0, $v0, 0xBFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46b8) {
            ctx->pc = 0x1C46DCu;
            goto label_1c46dc;
        }
    }
    ctx->pc = 0x1C46C0u;
label_1c46c0:
    // 0x1c46c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c46c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c46c4: 0x0  nop
    ctx->pc = 0x1c46c4u;
    // NOP
    // 0x1c46c8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1C46C8u;
    {
        const bool branch_taken_0x1c46c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c46c8) {
            ctx->pc = 0x1C46CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46C8u;
            // 0x1c46cc: 0x8e040328  lw          $a0, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C46E8u;
            goto label_1c46e8;
        }
    }
    ctx->pc = 0x1C46D0u;
label_1c46d0:
    // 0x1c46d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c46d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c46d8: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x1c46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
label_1c46dc:
    // 0x1c46dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c46dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c46e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C46E0u;
    {
        const bool branch_taken_0x1c46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46E0u;
            // 0x1c46e4: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46e0) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C46E8u;
label_1c46e8:
    // 0x1c46e8: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1c46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c46ec: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1c46ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1c46f0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C46F0u;
    {
        const bool branch_taken_0x1c46f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46F0u;
            // 0x1c46f4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46f0) {
            ctx->pc = 0x1C4734u;
            goto label_1c4734;
        }
    }
    ctx->pc = 0x1C46F8u;
    // 0x1c46f8: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1c46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1c46fc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c4700: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4700u;
    {
        const bool branch_taken_0x1c4700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4700u;
            // 0x1c4704: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4700) {
            ctx->pc = 0x1C470Cu;
            goto label_1c470c;
        }
    }
    ctx->pc = 0x1C4708u;
    // 0x1c4708: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c470c:
    // 0x1c470c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c470cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1c4710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c471c: 0x0  nop
    ctx->pc = 0x1c471cu;
    // NOP
    // 0x1c4720: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4720u;
    {
        const bool branch_taken_0x1c4720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4720u;
            // 0x1c4724: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4720) {
            ctx->pc = 0x1C4730u;
            goto label_1c4730;
        }
    }
    ctx->pc = 0x1C4728u;
    // 0x1c4728: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c472c: 0xac62cd38  sw          $v0, -0x32C8($v1)
    ctx->pc = 0x1c472cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954296), GPR_U32(ctx, 2));
label_1c4730:
    // 0x1c4730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c4730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1c4734:
    // 0x1c4734: 0x8c43cd38  lw          $v1, -0x32C8($v0)
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954296)));
    // 0x1c4738: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4738u;
    {
        const bool branch_taken_0x1c4738 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4738u;
            // 0x1c473c: 0x2464003f  addiu       $a0, $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4738) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4740u;
    // 0x1c4740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4744: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4744u;
    {
        const bool branch_taken_0x1c4744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4744u;
            // 0x1c4748: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4744) {
            ctx->pc = 0x1C4754u;
            goto label_1c4754;
        }
    }
    ctx->pc = 0x1C474Cu;
    // 0x1c474c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C474Cu;
    {
        const bool branch_taken_0x1c474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C474Cu;
            // 0x1c4750: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c474c) {
            ctx->pc = 0x1C4764u;
            goto label_1c4764;
        }
    }
    ctx->pc = 0x1C4754u;
label_1c4754:
    // 0x1c4754: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x1c4754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c4758: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1c4758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c475c: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1c475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1c4760: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1c4760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c4764:
    // 0x1c4764: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_1c4768:
    // 0x1c4768: 0xa44400e0  sh          $a0, 0xE0($v0)
    ctx->pc = 0x1c4768u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c476c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c476cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4770:
    // 0x1c4770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4774: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4774u;
            // 0x1c4778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C45DCu: goto label_1c45dc;
            case 0x1C4618u: goto label_1c4618;
            case 0x1C4688u: goto label_1c4688;
            case 0x1C46C0u: goto label_1c46c0;
            case 0x1C46D0u: goto label_1c46d0;
            case 0x1C46DCu: goto label_1c46dc;
            case 0x1C46E8u: goto label_1c46e8;
            case 0x1C470Cu: goto label_1c470c;
            case 0x1C4730u: goto label_1c4730;
            case 0x1C4734u: goto label_1c4734;
            case 0x1C4754u: goto label_1c4754;
            case 0x1C4764u: goto label_1c4764;
            case 0x1C4768u: goto label_1c4768;
            case 0x1C4770u: goto label_1c4770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C477Cu;
    // 0x1c477c: 0x0  nop
    ctx->pc = 0x1c477cu;
    // NOP
}
