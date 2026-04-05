#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126828
// Address: 0x126828 - 0x126cf8
void sub_00126828_0x126828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126828_0x126828");
#endif

    ctx->pc = 0x126828u;

    // 0x126828: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x126828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x12682c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126830: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x126830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x126834: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x126834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x126838: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x126838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x12683c: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x12683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x126840: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x126840u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126844: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x126844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x126848: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x126848u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12684c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x12684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x126850: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x126850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126854: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x126854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x126858: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x126858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12685c: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x12685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x126860: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x126860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126864: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x126864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x126868: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x126868u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12686c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x12686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x126870: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x126870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126874: 0x8fb401d0  lw          $s4, 0x1D0($sp)
    ctx->pc = 0x126874u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x126878: 0x24100200  addiu       $s0, $zero, 0x200
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12687c: 0x8fb501d8  lw          $s5, 0x1D8($sp)
    ctx->pc = 0x12687cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x126880: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x126880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x126884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x126884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126888:
    // 0x126888: 0x0  nop
    ctx->pc = 0x126888u;
    // NOP
    // 0x12688c: 0x0  nop
    ctx->pc = 0x12688cu;
    // NOP
    // 0x126890: 0x0  nop
    ctx->pc = 0x126890u;
    // NOP
    // 0x126894: 0x0  nop
    ctx->pc = 0x126894u;
    // NOP
    // 0x126898: 0x0  nop
    ctx->pc = 0x126898u;
    // NOP
    // 0x12689c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12689Cu;
    {
        const bool branch_taken_0x12689c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1268A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12689Cu;
            // 0x1268a0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12689c) {
            ctx->pc = 0x126888u;
            runtime->cooperativeGuestYield();
            goto label_126888;
        }
    }
    ctx->pc = 0x1268A4u;
    // 0x1268a4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1268a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1268a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1268a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268ac: 0xc048232  jal         func_1208C8
    ctx->pc = 0x1268ACu;
    SET_GPR_U32(ctx, 31, 0x1268B4u);
    ctx->pc = 0x1268B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1268ACu;
            // 0x1268b0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1208C8u;
    if (runtime->hasFunction(0x1208C8u)) {
        auto targetFn = runtime->lookupFunction(0x1208C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268B4u; }
        if (ctx->pc != 0x1268B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001208C8_0x1208c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1268B4u; }
        if (ctx->pc != 0x1268B4u) { return; }
    }
    ctx->pc = 0x1268B4u;
    // 0x1268b4: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1268b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1268b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1268bc: 0x25a8ffff  addiu       $t0, $t5, -0x1
    ctx->pc = 0x1268bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1268c0: 0xafb20070  sw          $s2, 0x70($sp)
    ctx->pc = 0x1268c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 18));
    // 0x1268c4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1268c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1268c8: 0x25a7fffe  addiu       $a3, $t5, -0x2
    ctx->pc = 0x1268c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x1268cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1268ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1268d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1268d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1268d4: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1268D4u;
    {
        const bool branch_taken_0x1268d4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1268D4u;
            // 0x1268d8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d4) {
            ctx->pc = 0x126930u;
            goto label_126930;
        }
    }
    ctx->pc = 0x1268DCu;
    // 0x1268dc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1268dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1268e0:
    // 0x1268e0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1268e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1268e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1268e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1268e8: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1268ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1268ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1268f0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1268f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1268f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1268f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1268f8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1268fc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x126900: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126904: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x126904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12690c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12690cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126910: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x126910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x126914: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x126914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x126918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x126918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12691c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12691cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x126920: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x126924: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x126924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x126928: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x126928u;
    {
        const bool branch_taken_0x126928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126928u;
            // 0x12692c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126928) {
            ctx->pc = 0x1268E0u;
            runtime->cooperativeGuestYield();
            goto label_1268e0;
        }
    }
    ctx->pc = 0x126930u;
label_126930:
    // 0x126930: 0x3d61023  subu        $v0, $fp, $s6
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x126934: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126934u;
    {
        const bool branch_taken_0x126934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x126934) {
            ctx->pc = 0x126938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126934u;
            // 0x126938: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12693Cu;
            goto label_12693c;
        }
    }
    ctx->pc = 0x12693Cu;
label_12693c:
    // 0x12693c: 0x244201ff  addiu       $v0, $v0, 0x1FF
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x126940: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x126944: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x126944u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x126948: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x12694c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x126950: 0x3c02512e  lui         $v0, 0x512E
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20782 << 16));
    // 0x126954: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x126954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126958: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12695c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x12695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126960: 0x34632521  ori         $v1, $v1, 0x2521
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9505);
    // 0x126964: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x126964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x126968: 0x2c0782d  daddu       $t7, $s6, $zero
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12696c: 0xc684000c  lwc1        $f4, 0xC($s4)
    ctx->pc = 0x12696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126970: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x126970u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x126974: 0xc6870000  lwc1        $f7, 0x0($s4)
    ctx->pc = 0x126974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x126978: 0x25ec01ff  addiu       $t4, $t7, 0x1FF
    ctx->pc = 0x126978u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 511));
    // 0x12697c: 0xc6a60000  lwc1        $f6, 0x0($s5)
    ctx->pc = 0x12697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x126980: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x126980u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126984: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x126984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126988: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x126988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12698c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x12698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126990: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x126990u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x126994: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x126994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x126998: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x126998u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x12699c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12699cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1269a0: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x1269a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1269a4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1269a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1269a8: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x1269a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1269ac: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x1269acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1269b0: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x1269b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1269b4: 0x3012  mflo        $a2
    ctx->pc = 0x1269b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1269b8: 0xcd1018  mult        $v0, $a2, $t5
    ctx->pc = 0x1269b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1269bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1269bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1269c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1269c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1269c4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1269c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x1269c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1269c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1269cc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1269ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x1269d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1269d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1269d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1269d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1269d8: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x1269d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x1269dc: 0x8ca2f168  lw          $v0, -0xE98($a1)
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x1269e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1269e4: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x1269e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1269e8: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x1269e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x1269ec: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1269ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1269f0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1269f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1269f4: 0x19a00030  blez        $t5, . + 4 + (0x30 << 2)
    ctx->pc = 0x1269F4u;
    {
        const bool branch_taken_0x1269f4 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1269F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1269F4u;
            // 0x1269f8: 0xe7a4009c  swc1        $f4, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269f4) {
            ctx->pc = 0x126AB8u;
            goto label_126ab8;
        }
    }
    ctx->pc = 0x1269FCu;
    // 0x1269fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1269fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a00: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x126a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126a04: 0x0  nop
    ctx->pc = 0x126a04u;
    // NOP
label_126a08:
    // 0x126a08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x126a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x126a0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126a0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x126a10: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x126a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126a14: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x126a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126a18: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x126a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x126a1c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x126a1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126a20: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x126a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a28: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x126a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x126a2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x126a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126a34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126a38: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x126a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x126a3c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x126a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126a40: 0x4a420858  vmulx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x126a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126a44: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x126a44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126a48: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x126a48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x126a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126a54: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x126a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x126a58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126a5c: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x126a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x126a60: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x126a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126a64: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x126a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126a68: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x126a68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126a6c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x126a6cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x126a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126a78: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x126a7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126a80: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x126a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x126a84: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x126a84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126a88: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x126a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126a8c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x126a8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126a90: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x126a90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x126a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a98: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x126a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x126a9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126a9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126aa0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x126aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x126aa4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126aa8: 0xac620110  sw          $v0, 0x110($v1)
    ctx->pc = 0x126aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
    // 0x126aac: 0x16d102a  slt         $v0, $t3, $t5
    ctx->pc = 0x126aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x126ab0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x126AB0u;
    {
        const bool branch_taken_0x126ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ab0) {
            ctx->pc = 0x126AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126AB0u;
            // 0x126ab4: 0xd8a10000  lqc2        $vf1, 0x0($a1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126A08u;
            runtime->cooperativeGuestYield();
            goto label_126a08;
        }
    }
    ctx->pc = 0x126AB8u;
label_126ab8:
    // 0x126ab8: 0x18c00084  blez        $a2, . + 4 + (0x84 << 2)
    ctx->pc = 0x126AB8u;
    {
        const bool branch_taken_0x126ab8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x126ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126AB8u;
            // 0x126abc: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ab8) {
            ctx->pc = 0x126CCCu;
            goto label_126ccc;
        }
    }
    ctx->pc = 0x126AC0u;
    // 0x126ac0: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x126ac0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac4: 0x0  nop
    ctx->pc = 0x126ac4u;
    // NOP
label_126ac8:
    // 0x126ac8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x126acc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x126accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x126ad0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x126ad4: 0x3409f000  ori         $t1, $zero, 0xF000
    ctx->pc = 0x126ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x126ad8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x126adc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x126adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126ae0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x126ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x126ae4: 0x16d502a  slt         $t2, $t3, $t5
    ctx->pc = 0x126ae4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x126ae8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x126ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x126aec: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x126aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x126af0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x126af4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x126af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x126af8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x126af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x126afc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x126afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b00: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x126b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126b04: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x126b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126b08: 0x46001a00  add.s       $f8, $f3, $f0
    ctx->pc = 0x126b08u;
    ctx->f[8] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x126b0c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x126b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126b10: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x126b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b14: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x126b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126b18: 0x460021c0  add.s       $f7, $f4, $f0
    ctx->pc = 0x126b18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x126b1c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x126b20: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x126b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b24: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x126b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126b28: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x126b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126b2c: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x126b2cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x126b30: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x126b34: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x126b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b38: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x126b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x126b3c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x126b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x126b40: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x126b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x126b44: 0x46001240  add.s       $f9, $f2, $f0
    ctx->pc = 0x126b44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x126b48: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x126b48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x126b4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126b54: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x126b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x126b58: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x126b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126b5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x126b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x126b60: 0xac4f0020  sw          $t7, 0x20($v0)
    ctx->pc = 0x126b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 15));
    // 0x126b64: 0xe4480030  swc1        $f8, 0x30($v0)
    ctx->pc = 0x126b64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x126b68: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x126b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x126b6c: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x126b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    // 0x126b70: 0xac970008  sw          $s7, 0x8($a0)
    ctx->pc = 0x126b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 23));
    // 0x126b74: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x126b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126b78: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x126b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x126b7c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x126b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x126b80: 0xe4a70004  swc1        $f7, 0x4($a1)
    ctx->pc = 0x126b80u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x126b84: 0xac4c0040  sw          $t4, 0x40($v0)
    ctx->pc = 0x126b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 12));
    // 0x126b88: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x126b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x126b8c: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x126b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x126b90: 0xae08f168  sw          $t0, -0xE98($s0)
    ctx->pc = 0x126b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 8));
    // 0x126b94: 0x11400042  beqz        $t2, . + 4 + (0x42 << 2)
    ctx->pc = 0x126B94u;
    {
        const bool branch_taken_0x126b94 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B94u;
            // 0x126b98: 0xacd70008  sw          $s7, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b94) {
            ctx->pc = 0x126CA0u;
            goto label_126ca0;
        }
    }
    ctx->pc = 0x126B9Cu;
    // 0x126b9c: 0x0  nop
    ctx->pc = 0x126b9cu;
    // NOP
label_126ba0:
    // 0x126ba0: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x126ba4: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x126ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x126ba8: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x126bac: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x126bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126bb0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x126bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bb4: 0xc7a600a0  lwc1        $f6, 0xA0($sp)
    ctx->pc = 0x126bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x126bb8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x126bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x126bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bc0: 0x8c8800b0  lw          $t0, 0xB0($a0)
    ctx->pc = 0x126bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x126bc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x126bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bc8: 0x8c4900d0  lw          $t1, 0xD0($v0)
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x126bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bd0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x126bd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x126bd4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x126bd8: 0xc4c10050  lwc1        $f1, 0x50($a2)
    ctx->pc = 0x126bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126bdc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x126bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x126be0: 0x8ce40110  lw          $a0, 0x110($a3)
    ctx->pc = 0x126be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x126be4: 0x46085101  sub.s       $f4, $f10, $f8
    ctx->pc = 0x126be4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[8]);
    // 0x126be8: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x126be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x126bec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x126becu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x126bf0: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x126bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x126bf4: 0x460748c1  sub.s       $f3, $f9, $f7
    ctx->pc = 0x126bf4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x126bf8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x126bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x126bfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126c00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x126c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x126c04: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x126c08: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x126c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x126c0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x126c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x126c10: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x126c10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x126c14: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x126c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x126c18: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x126c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x126c1c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x126c1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x126c20: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x126c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126c24: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x126c24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x126c28: 0xac6f0020  sw          $t7, 0x20($v1)
    ctx->pc = 0x126c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 15));
    // 0x126c2c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x126c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x126c30: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x126c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x126c34: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x126c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x126c38: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x126c3c: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x126c3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x126c40: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x126c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
    // 0x126c44: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x126c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x126c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126c4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126c50: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x126c50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x126c54: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x126c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x126c58: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126c5c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x126c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x126c60: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x126c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x126c64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x126c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x126c68: 0x24680050  addiu       $t0, $v1, 0x50
    ctx->pc = 0x126c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x126c6c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x126c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126c70: 0x16d382a  slt         $a3, $t3, $t5
    ctx->pc = 0x126c70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x126c74: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x126c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126c78: 0xe4640030  swc1        $f4, 0x30($v1)
    ctx->pc = 0x126c78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x126c7c: 0xac6c0040  sw          $t4, 0x40($v1)
    ctx->pc = 0x126c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 12));
    // 0x126c80: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x126c80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x126c84: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x126c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x126c88: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x126c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x126c8c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x126c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x126c90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x126c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x126c94: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x126c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
    // 0x126c98: 0x14e0ffc1  bnez        $a3, . + 4 + (-0x3F << 2)
    ctx->pc = 0x126C98u;
    {
        const bool branch_taken_0x126c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C98u;
            // 0x126c9c: 0xae08f168  sw          $t0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c98) {
            ctx->pc = 0x126BA0u;
            runtime->cooperativeGuestYield();
            goto label_126ba0;
        }
    }
    ctx->pc = 0x126CA0u;
label_126ca0:
    // 0x126ca0: 0x258c0200  addiu       $t4, $t4, 0x200
    ctx->pc = 0x126ca0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 512));
    // 0x126ca4: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x126ca4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x126ca8: 0x3cc102a  slt         $v0, $fp, $t4
    ctx->pc = 0x126ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x126cac: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x126cacu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x126cb0: 0xe7a700a0  swc1        $f7, 0xA0($sp)
    ctx->pc = 0x126cb0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x126cb4: 0x3c2600b  movn        $t4, $fp, $v0
    ctx->pc = 0x126cb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 30));
    // 0x126cb8: 0xe7a900a4  swc1        $f9, 0xA4($sp)
    ctx->pc = 0x126cb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x126cbc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x126cc0: 0x15c0ff81  bnez        $t6, . + 4 + (-0x7F << 2)
    ctx->pc = 0x126CC0u;
    {
        const bool branch_taken_0x126cc0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CC0u;
            // 0x126cc4: 0x25ef0200  addiu       $t7, $t7, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cc0) {
            ctx->pc = 0x126AC8u;
            runtime->cooperativeGuestYield();
            goto label_126ac8;
        }
    }
    ctx->pc = 0x126CC8u;
    // 0x126cc8: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x126cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_126ccc:
    // 0x126ccc: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x126cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x126cd0: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x126cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x126cd4: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x126cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x126cd8: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x126cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x126cdc: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x126cdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x126ce0: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x126ce0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x126ce4: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x126ce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x126ce8: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x126ce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x126cec: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x126cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x126cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x126CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CF0u;
            // 0x126cf4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126888u: goto label_126888;
            case 0x1268E0u: goto label_1268e0;
            case 0x126930u: goto label_126930;
            case 0x12693Cu: goto label_12693c;
            case 0x126A08u: goto label_126a08;
            case 0x126AB8u: goto label_126ab8;
            case 0x126AC8u: goto label_126ac8;
            case 0x126BA0u: goto label_126ba0;
            case 0x126CA0u: goto label_126ca0;
            case 0x126CCCu: goto label_126ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126CF8u;
}
