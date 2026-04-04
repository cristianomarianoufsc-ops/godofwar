#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DB418
// Address: 0x1db418 - 0x1db570
void sub_001DB418_0x1db418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB418_0x1db418");
#endif

    ctx->pc = 0x1db418u;

    // 0x1db418: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1db418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1db41c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db420: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1db420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1db424: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x1db424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1db428: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1db428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1db42c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1db42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1db430: 0x26222cc0  addiu       $v0, $s1, 0x2CC0
    ctx->pc = 0x1db430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11456));
    // 0x1db434: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1db434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1db438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db43c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1db43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1db440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db444: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1db444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1db448: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1db448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db44c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1db44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db450: 0x24a30080  addiu       $v1, $a1, 0x80
    ctx->pc = 0x1db450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1db454:
    // 0x1db454: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1db454u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db458: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x1db458u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db45c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1db45cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1db460: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x1db460u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x1db464: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1db468: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DB468u;
    {
        const bool branch_taken_0x1db468 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB468u;
            // 0x1db46c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db468) {
            ctx->pc = 0x1DB454u;
            runtime->cooperativeGuestYield();
            goto label_1db454;
        }
    }
    ctx->pc = 0x1DB470u;
    // 0x1db470: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1db470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db474: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1db474u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1db478: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1db47c: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x1db47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1db480: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x1db480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db484: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x1db484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1db488: 0xc089906  jal         func_226418
    ctx->pc = 0x1DB488u;
    SET_GPR_U32(ctx, 31, 0x1DB490u);
    ctx->pc = 0x1DB48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB488u;
            // 0x1db48c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x226418u;
    if (runtime->hasFunction(0x226418u)) {
        auto targetFn = runtime->lookupFunction(0x226418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB490u; }
        if (ctx->pc != 0x1DB490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226418_0x226418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB490u; }
        if (ctx->pc != 0x1DB490u) { return; }
    }
    ctx->pc = 0x1DB490u;
    // 0x1db490: 0x26222cc0  addiu       $v0, $s1, 0x2CC0
    ctx->pc = 0x1db490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11456));
    // 0x1db494: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1db494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1db498: 0x90420077  lbu         $v0, 0x77($v0)
    ctx->pc = 0x1db498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 119)));
    // 0x1db49c: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1db4a0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1db4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db4a4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1db4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1db4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db4ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1db4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db4b0: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x1db4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db4b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db4b8: 0x97a40068  lhu         $a0, 0x68($sp)
    ctx->pc = 0x1db4b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1db4bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1db4bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1db4c0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1db4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db4c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1db4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1db4c8: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x1db4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1db4cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1db4d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1db4d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1db4d4: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x1db4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x1db4d8: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x1db4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db4dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1db4dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1db4e0: 0xc600017c  lwc1        $f0, 0x17C($s0)
    ctx->pc = 0x1db4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db4e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1db4e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1db4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1db4ec: 0x35293bff  ori         $t1, $t1, 0x3BFF
    ctx->pc = 0x1db4ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15359);
    // 0x1db4f0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1db4f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1db4f4: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1db4f4u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x1db4f8: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x1db4f8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x1db4fc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1db4fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1db500: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x1db500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1db504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1db504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db508: 0xa7a30068  sh          $v1, 0x68($sp)
    ctx->pc = 0x1db508u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x1db50c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1db50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db510: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1db510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1db514: 0x7a080010  lq          $t0, 0x10($s0)
    ctx->pc = 0x1db514u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db518: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x1db518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x1db51c: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x1db51cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1db520: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x1db520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x1db524: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1db524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1db528: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1db528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1db52c: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x1db52cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1db530: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x1db530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x1db534: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x1db534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x1db538: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1db538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1db53c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1db53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1db540: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1db540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1db544: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1db544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1db548: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1db548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1db54c: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1DB54Cu;
    SET_GPR_U32(ctx, 31, 0x1DB554u);
    ctx->pc = 0x1DB550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB54Cu;
            // 0x1db550: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB554u; }
        if (ctx->pc != 0x1DB554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB554u; }
        if (ctx->pc != 0x1DB554u) { return; }
    }
    ctx->pc = 0x1DB554u;
    // 0x1db554: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1db554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1db558: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1db558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1db55c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1db55cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db560: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1db560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1db564: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB564u;
            // 0x1db568: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB454u: goto label_1db454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB56Cu;
    // 0x1db56c: 0x0  nop
    ctx->pc = 0x1db56cu;
    // NOP
}
