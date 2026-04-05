#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_126610
// Address: 0x126610 - 0x126828
void entry_126610_0x126828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_126610_0x126828");
#endif

    ctx->pc = 0x126610u;

    // 0x126610: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x126610u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126614: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x126614u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126618: 0x18b1823  subu        $v1, $t4, $t3
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x12661c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x12661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x126620: 0x246301ff  addiu       $v1, $v1, 0x1FF
    ctx->pc = 0x126620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x126624: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126624u;
    {
        const bool branch_taken_0x126624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126624) {
            ctx->pc = 0x126628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126624u;
            // 0x126628: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12662Cu;
            goto label_12662c;
        }
    }
    ctx->pc = 0x12662Cu;
label_12662c:
    // 0x12662c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12662cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x126630: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x126634: 0x8da3f168  lw          $v1, -0xE98($t5)
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x126638: 0x3c02412a  lui         $v0, 0x412A
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16682 << 16));
    // 0x12663c: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x12663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126640: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x126644: 0xc543000c  lwc1        $f3, 0xC($t2)
    ctx->pc = 0x126644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126648: 0x24045252  addiu       $a0, $zero, 0x5252
    ctx->pc = 0x126648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21074));
    // 0x12664c: 0xc524000c  lwc1        $f4, 0xC($t1)
    ctx->pc = 0x12664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126654: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x126654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x126658: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x126658u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12665c: 0xc5250004  lwc1        $f5, 0x4($t1)
    ctx->pc = 0x12665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126660: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x126660u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126664: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x126664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126668: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x126668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12666c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x12666cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x126670: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x126670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126674: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x126674u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x126678: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x126678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x12667c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x12667cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126680: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x126680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126684: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x126684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x126688: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x126688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12668c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x12668cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x126690: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x126690u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126694: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x126694u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x126698: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x126698u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12669c: 0x3012  mflo        $a2
    ctx->pc = 0x12669cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1266a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1266a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1266a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1266a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1266a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1266ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1266acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1266b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1266b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1266b4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1266b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x1266b8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1266b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x1266bc: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x1266bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x1266c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1266c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1266c4: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x1266c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x1266c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1266c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1266cc: 0xada2f168  sw          $v0, -0xE98($t5)
    ctx->pc = 0x1266ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 2));
    // 0x1266d0: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1266d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1266d4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1266d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1266d8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1266d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1266dc: 0x18c00031  blez        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1266DCu;
    {
        const bool branch_taken_0x1266dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1266E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1266DCu;
            // 0x1266e0: 0xe7a4000c  swc1        $f4, 0xC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266dc) {
            ctx->pc = 0x1267A4u;
            goto label_1267a4;
        }
    }
    ctx->pc = 0x1266E4u;
    // 0x1266e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1266e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1266e8:
    // 0x1266e8: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x1266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x1266ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1266ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1266f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1266f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1266f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1266f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1266f8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1266f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1266fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1266fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126700: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x126700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x126704: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x126704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126708: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x126708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x12670c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12670cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x126710: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x126710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x126714: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x126714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x126718: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x126718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12671c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x12671cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x126720: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x126720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x126724: 0xada6f168  sw          $a2, -0xE98($t5)
    ctx->pc = 0x126724u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 6));
    // 0x126728: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x126728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12672c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126730: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x126730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x126734: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x126734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x126738: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x126738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12673c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x12673cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x126740: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x126740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126744: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x126744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126748: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x126748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12674c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x12674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126750: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x126750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126754: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x126754u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x126758: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x126758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12675c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x12675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x126760: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x126760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126764: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x126764u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x126768: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x126768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12676c: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x12676cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x126770: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x126770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x126774: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x126774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x126778: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x126778u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12677c: 0xac4b0030  sw          $t3, 0x30($v0)
    ctx->pc = 0x12677cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 11));
    // 0x126780: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x126780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x126784: 0x256b0200  addiu       $t3, $t3, 0x200
    ctx->pc = 0x126784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x126788: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x126788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12678c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x12678cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x126790: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x126790u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x126794: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x126794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x126798: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x126798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x12679c: 0x14e0ffd2  bnez        $a3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x12679Cu;
    {
        const bool branch_taken_0x12679c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12679Cu;
            // 0x1267a0: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12679c) {
            ctx->pc = 0x1266E8u;
            runtime->cooperativeGuestYield();
            goto label_1266e8;
        }
    }
    ctx->pc = 0x1267A4u;
label_1267a4:
    // 0x1267a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1267a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1267a8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1267a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1267ac: 0x8ce2f168  lw          $v0, -0xE98($a3)
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x1267b0: 0x18b182a  slt         $v1, $t4, $t3
    ctx->pc = 0x1267b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1267b4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1267b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1267b8: 0x183580b  movn        $t3, $t4, $v1
    ctx->pc = 0x1267b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
    // 0x1267bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1267c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1267c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1267c4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1267c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1267c8: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x1267c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x1267cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1267ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1267d0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1267d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1267d4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1267d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1267d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1267d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1267dc: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x1267dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1267e0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1267e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1267e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1267e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1267e8: 0xace6f168  sw          $a2, -0xE98($a3)
    ctx->pc = 0x1267e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 6));
    // 0x1267ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1267ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1267f0: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1267f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1267f4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1267f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1267f8: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x1267f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x1267fc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1267fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126800: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x126800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x126804: 0xac4b0030  sw          $t3, 0x30($v0)
    ctx->pc = 0x126804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 11));
    // 0x126808: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x126808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12680c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x12680cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126810: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x126810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x126814: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x126814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x126818: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x126818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x12681c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x12681cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x126820: 0x3e00008  jr          $ra
    ctx->pc = 0x126820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126820u;
            // 0x126824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12662Cu: goto label_12662c;
            case 0x1266E8u: goto label_1266e8;
            case 0x1267A4u: goto label_1267a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126828u;
}
