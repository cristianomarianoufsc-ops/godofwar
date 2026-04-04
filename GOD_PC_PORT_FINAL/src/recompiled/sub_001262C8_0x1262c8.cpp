#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001262C8
// Address: 0x1262c8 - 0x126610
void sub_001262C8_0x1262c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001262C8_0x1262c8");
#endif

    ctx->pc = 0x1262c8u;

    // 0x1262c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1262c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1262cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1262d0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1262d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1262d4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1262d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1262d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1262d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262dc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1262dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1262e0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1262e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262e4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1262e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1262e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1262e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262ec: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1262ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1262f0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262f4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1262f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1262f8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1262f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262fc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1262fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x126300: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x126300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126304: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x126304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x126308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12630c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126310:
    // 0x126310: 0x0  nop
    ctx->pc = 0x126310u;
    // NOP
    // 0x126314: 0x0  nop
    ctx->pc = 0x126314u;
    // NOP
    // 0x126318: 0x0  nop
    ctx->pc = 0x126318u;
    // NOP
    // 0x12631c: 0x0  nop
    ctx->pc = 0x12631cu;
    // NOP
    // 0x126320: 0x0  nop
    ctx->pc = 0x126320u;
    // NOP
    // 0x126324: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126324u;
    {
        const bool branch_taken_0x126324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x126328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126324u;
            // 0x126328: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126324) {
            ctx->pc = 0x126310u;
            runtime->cooperativeGuestYield();
            goto label_126310;
        }
    }
    ctx->pc = 0x12632Cu;
    // 0x12632c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x12632cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126330: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x126330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126334: 0xc048232  jal         func_1208C8
    ctx->pc = 0x126334u;
    SET_GPR_U32(ctx, 31, 0x12633Cu);
    ctx->pc = 0x126338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126334u;
            // 0x126338: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1208C8u;
    if (runtime->hasFunction(0x1208C8u)) {
        auto targetFn = runtime->lookupFunction(0x1208C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12633Cu; }
        if (ctx->pc != 0x12633Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001208C8_0x1208c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12633Cu; }
        if (ctx->pc != 0x12633Cu) { return; }
    }
    ctx->pc = 0x12633Cu;
    // 0x12633c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x12633cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126340: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x126340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126344: 0x2588ffff  addiu       $t0, $t4, -0x1
    ctx->pc = 0x126344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x126348: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x126348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
    // 0x12634c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x12634cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x126350: 0x2587fffe  addiu       $a3, $t4, -0x2
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x126354: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x126354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x126358: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12635c: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x12635Cu;
    {
        const bool branch_taken_0x12635c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12635Cu;
            // 0x126360: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12635c) {
            ctx->pc = 0x1263B8u;
            goto label_1263b8;
        }
    }
    ctx->pc = 0x126364u;
    // 0x126364: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x126364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_126368:
    // 0x126368: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x126368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12636c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x126370: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x126374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126378: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x126378u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12637c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12637cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x126380: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x126380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x126384: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x126384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x126388: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12638c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126394: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126398: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x126398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12639c: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x12639cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1263a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1263a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1263a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1263a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1263a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1263a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1263ac: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1263acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1263b0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1263B0u;
    {
        const bool branch_taken_0x1263b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263B0u;
            // 0x1263b4: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263b0) {
            ctx->pc = 0x126368u;
            runtime->cooperativeGuestYield();
            goto label_126368;
        }
    }
    ctx->pc = 0x1263B8u;
label_1263b8:
    // 0x1263b8: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1263bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1263bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1263c0: 0x244401ff  addiu       $a0, $v0, 0x1FF
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x1263c4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1263c8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1263cc: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x1263ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x1263d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1263d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1263d4: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x1263d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x1263d8: 0x23a43  sra         $a3, $v0, 9
    ctx->pc = 0x1263d8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1263dc: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1263e0: 0xec2018  mult        $a0, $a3, $t4
    ctx->pc = 0x1263e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1263e4: 0x3c0251ae  lui         $v0, 0x51AE
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20910 << 16));
    // 0x1263e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1263e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1263ec: 0x34633531  ori         $v1, $v1, 0x3531
    ctx->pc = 0x1263ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13617);
    // 0x1263f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1263f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1263f4: 0x280682d  daddu       $t5, $s4, $zero
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263f8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1263f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1263fc: 0x25ab0200  addiu       $t3, $t5, 0x200
    ctx->pc = 0x1263fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 512));
    // 0x126400: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x126404: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x126404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x126408: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x126408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x12640c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126410: 0x8cc2f168  lw          $v0, -0xE98($a2)
    ctx->pc = 0x126410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x126414: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x126414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126418: 0x19800013  blez        $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x126418u;
    {
        const bool branch_taken_0x126418 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x12641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126418u;
            // 0x12641c: 0xacc2f168  sw          $v0, -0xE98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126418) {
            ctx->pc = 0x126468u;
            goto label_126468;
        }
    }
    ctx->pc = 0x126420u;
    // 0x126420: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126424: 0x0  nop
    ctx->pc = 0x126424u;
    // NOP
label_126428:
    // 0x126428: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x126428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12642c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x126430: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126430u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x126434: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x126434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126438: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x126438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12643c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x12643cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x126440: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x126440u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126444: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x126444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x126448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12644c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12644cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x126450: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126454: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x126458: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12645c: 0x14c182a  slt         $v1, $t2, $t4
    ctx->pc = 0x12645cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x126460: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x126460u;
    {
        const bool branch_taken_0x126460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126460u;
            // 0x126464: 0xac820090  sw          $v0, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126460) {
            ctx->pc = 0x126428u;
            runtime->cooperativeGuestYield();
            goto label_126428;
        }
    }
    ctx->pc = 0x126468u;
label_126468:
    // 0x126468: 0x18e00061  blez        $a3, . + 4 + (0x61 << 2)
    ctx->pc = 0x126468u;
    {
        const bool branch_taken_0x126468 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x12646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126468u;
            // 0x12646c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126468) {
            ctx->pc = 0x1265F0u;
            goto label_1265f0;
        }
    }
    ctx->pc = 0x126470u;
    // 0x126470: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126474: 0x0  nop
    ctx->pc = 0x126474u;
    // NOP
label_126478:
    // 0x126478: 0x3c0f0033  lui         $t7, 0x33
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)51 << 16));
    // 0x12647c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x12647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x126480: 0x8de2f168  lw          $v0, -0xE98($t7)
    ctx->pc = 0x126480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963560)));
    // 0x126484: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x126484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x126488: 0x25b10008  addiu       $s1, $t5, 0x8
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12648c: 0x3408f000  ori         $t0, $zero, 0xF000
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x126490: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x126490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x126494: 0x25700008  addiu       $s0, $t3, 0x8
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x126498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12649c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1264a0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1264a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1264a4: 0x14c482a  slt         $t1, $t2, $t4
    ctx->pc = 0x1264a4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1264a8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1264a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1264ac: 0x8de4f168  lw          $a0, -0xE98($t7)
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963560)));
    // 0x1264b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1264b4: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x1264b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x1264b8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1264b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1264bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1264bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1264c0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1264c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1264c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1264c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1264c8: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1264c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1264cc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1264ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1264d0: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x1264d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1264d4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1264d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1264d8: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1264dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1264dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1264e0: 0xac8d0020  sw          $t5, 0x20($a0)
    ctx->pc = 0x1264e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 13));
    // 0x1264e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1264e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1264e8: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x1264e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x1264ec: 0xacb30008  sw          $s3, 0x8($a1)
    ctx->pc = 0x1264ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 19));
    // 0x1264f0: 0xade7f168  sw          $a3, -0xE98($t7)
    ctx->pc = 0x1264f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963560), GPR_U32(ctx, 7));
    // 0x1264f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1264f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1264f8: 0xac900030  sw          $s0, 0x30($a0)
    ctx->pc = 0x1264f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 16));
    // 0x1264fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x126500: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x126500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126504: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x126504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x126508: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x126508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12650c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126510: 0xac8b0040  sw          $t3, 0x40($a0)
    ctx->pc = 0x126510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 11));
    // 0x126514: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x126514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x126518: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x126518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x12651c: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12651Cu;
    {
        const bool branch_taken_0x12651c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x126520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12651Cu;
            // 0x126520: 0xacd30008  sw          $s3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12651c) {
            ctx->pc = 0x1265D4u;
            goto label_1265d4;
        }
    }
    ctx->pc = 0x126524u;
    // 0x126524: 0x0  nop
    ctx->pc = 0x126524u;
    // NOP
label_126528:
    // 0x126528: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x126528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x12652c: 0x8de3f168  lw          $v1, -0xE98($t7)
    ctx->pc = 0x12652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963560)));
    // 0x126530: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x126534: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x126534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x126538: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x126538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x12653c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x12653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126540: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x126540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x126544: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x126544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x126548: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x126548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12654c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12654cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x126550: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x126550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x126554: 0x14c482a  slt         $t1, $t2, $t4
    ctx->pc = 0x126554u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x126558: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x126558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12655c: 0x8de4f168  lw          $a0, -0xE98($t7)
    ctx->pc = 0x12655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963560)));
    // 0x126560: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x126560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126564: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x126564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x126568: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x126568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12656c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x126570: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x126570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126574: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x126574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x126578: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x126578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12657c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12657cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x126580: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x126580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x126584: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x126588: 0x24880050  addiu       $t0, $a0, 0x50
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x12658c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126590: 0xac8d0020  sw          $t5, 0x20($a0)
    ctx->pc = 0x126590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 13));
    // 0x126594: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x126594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x126598: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x126598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x12659c: 0xacb30008  sw          $s3, 0x8($a1)
    ctx->pc = 0x12659cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 19));
    // 0x1265a0: 0xade8f168  sw          $t0, -0xE98($t7)
    ctx->pc = 0x1265a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963560), GPR_U32(ctx, 8));
    // 0x1265a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1265a8: 0xac900030  sw          $s0, 0x30($a0)
    ctx->pc = 0x1265a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 16));
    // 0x1265ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1265acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1265b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1265b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1265b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1265b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1265b8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1265b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1265bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1265bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1265c0: 0xac8b0040  sw          $t3, 0x40($a0)
    ctx->pc = 0x1265c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 11));
    // 0x1265c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1265c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1265c8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1265c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1265cc: 0x1520ffd6  bnez        $t1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1265CCu;
    {
        const bool branch_taken_0x1265cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265CCu;
            // 0x1265d0: 0xacd30008  sw          $s3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265cc) {
            ctx->pc = 0x126528u;
            runtime->cooperativeGuestYield();
            goto label_126528;
        }
    }
    ctx->pc = 0x1265D4u;
label_1265d4:
    // 0x1265d4: 0x256b0200  addiu       $t3, $t3, 0x200
    ctx->pc = 0x1265d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x1265d8: 0x25ad0200  addiu       $t5, $t5, 0x200
    ctx->pc = 0x1265d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 512));
    // 0x1265dc: 0x2ab102a  slt         $v0, $s5, $t3
    ctx->pc = 0x1265dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1265e0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1265e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1265e4: 0x15c0ffa4  bnez        $t6, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1265E4u;
    {
        const bool branch_taken_0x1265e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1265E4u;
            // 0x1265e8: 0x2a2580b  movn        $t3, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265e4) {
            ctx->pc = 0x126478u;
            runtime->cooperativeGuestYield();
            goto label_126478;
        }
    }
    ctx->pc = 0x1265ECu;
    // 0x1265ec: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1265ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1265f0:
    // 0x1265f0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1265f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1265f4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1265f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1265f8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1265f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1265fc: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1265fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x126600: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x126600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x126604: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x126604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x126608: 0x3e00008  jr          $ra
    ctx->pc = 0x126608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126608u;
            // 0x12660c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126310u: goto label_126310;
            case 0x126368u: goto label_126368;
            case 0x1263B8u: goto label_1263b8;
            case 0x126428u: goto label_126428;
            case 0x126468u: goto label_126468;
            case 0x126478u: goto label_126478;
            case 0x126528u: goto label_126528;
            case 0x1265D4u: goto label_1265d4;
            case 0x1265F0u: goto label_1265f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126610u;
}
