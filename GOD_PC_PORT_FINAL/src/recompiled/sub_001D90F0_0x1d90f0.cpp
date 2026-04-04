#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D90F0
// Address: 0x1d90f0 - 0x1d93b0
void sub_001D90F0_0x1d90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D90F0_0x1d90f0");
#endif

    ctx->pc = 0x1d90f0u;

    // 0x1d90f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d90f4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1d90f8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d90f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1d90fc: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1d9100: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d9100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1d9104: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9108: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d9108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1d910c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1d910cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1d9110: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d9110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1d9114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d9114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9118: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d9118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d911c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d911cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d9120: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d9120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d9124: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1d9124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9128: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1d912c: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1d912cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1d9130: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1d9130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1d9134: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1d9134u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1d9138: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d9138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d913c: 0x3c1e002b  lui         $fp, 0x2B
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)43 << 16));
    // 0x1d9140: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d9140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1d9144: 0x46800b  movn        $s0, $v0, $a2
    ctx->pc = 0x1d9144u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1d9148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d9148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d914c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1d914cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9150: 0xace34f64  sw          $v1, 0x4F64($a3)
    ctx->pc = 0x1d9150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20324), GPR_U32(ctx, 3));
    // 0x1d9154: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d9154u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d9158: 0xc7c06b34  lwc1        $f0, 0x6B34($fp)
    ctx->pc = 0x1d9158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 27444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d915c: 0x26312db0  addiu       $s1, $s1, 0x2DB0
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11696));
    // 0x1d9160: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d9164: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9168: 0xe4804f58  swc1        $f0, 0x4F58($a0)
    ctx->pc = 0x1d9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20312), bits); }
    // 0x1d916c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d916cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9170: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1d9170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9174: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9178: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D9178u;
    SET_GPR_U32(ctx, 31, 0x1D9180u);
    ctx->pc = 0x1D917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9178u;
            // 0x1d917c: 0xaec04f60  sw          $zero, 0x4F60($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 20320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9180u; }
        if (ctx->pc != 0x1D9180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9180u; }
        if (ctx->pc != 0x1D9180u) { return; }
    }
    ctx->pc = 0x1D9180u;
    // 0x1d9180: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x1d9180u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9184: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1d9188: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d918c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d918cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9190: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d9194: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1d9198: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d919c: 0xacb0f170  sw          $s0, -0xE90($a1)
    ctx->pc = 0x1d919cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 16));
    // 0x1d91a0: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1d91a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1d91a4: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1d91a8: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x1d91a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x1d91ac: 0x24638fc8  addiu       $v1, $v1, -0x7038
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938568));
    // 0x1d91b0: 0x70062ca9  por         $a1, $zero, $a2
    ctx->pc = 0x1d91b0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1d91b4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1d91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1d91b8: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x1d91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x1d91bc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d91c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d91c4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d91c8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d91cc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d91d0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d91d4: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1D91D4u;
    SET_GPR_U32(ctx, 31, 0x1D91DCu);
    ctx->pc = 0x1D91D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91D4u;
            // 0x1d91d8: 0xac520020  sw          $s2, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91DCu; }
        if (ctx->pc != 0x1D91DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91DCu; }
        if (ctx->pc != 0x1D91DCu) { return; }
    }
    ctx->pc = 0x1D91DCu;
    // 0x1d91dc: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D91DCu;
    SET_GPR_U32(ctx, 31, 0x1D91E4u);
    ctx->pc = 0x1D91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91DCu;
            // 0x1d91e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91E4u; }
        if (ctx->pc != 0x1D91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91E4u; }
        if (ctx->pc != 0x1D91E4u) { return; }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1d91e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d91e8: 0x8ec34f60  lw          $v1, 0x4F60($s6)
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20320)));
    // 0x1d91ec: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d91ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1d91f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d91f4: 0x784400a0  lq          $a0, 0xA0($v0)
    ctx->pc = 0x1d91f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1d91f8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1d91f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x1d91fc: 0x784200f0  lq          $v0, 0xF0($v0)
    ctx->pc = 0x1d91fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d9200: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D9200u;
    {
        const bool branch_taken_0x1d9200 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D9204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9200u;
            // 0x1d9204: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9200) {
            ctx->pc = 0x1D923Cu;
            goto label_1d923c;
        }
    }
    ctx->pc = 0x1D9208u;
    // 0x1d9208: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d920c: 0x0  nop
    ctx->pc = 0x1d920cu;
    // NOP
label_1d9210:
    // 0x1d9210: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1d9210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d9214: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9218: 0x8ec44f60  lw          $a0, 0x4F60($s6)
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20320)));
    // 0x1d921c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9224: 0x571026  xor         $v0, $v0, $s7
    ctx->pc = 0x1d9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 23));
    // 0x1d9228: 0x282a80a  movz        $s5, $s4, $v0
    ctx->pc = 0x1d9228u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 20));
    // 0x1d922c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d9230: 0x284202a  slt         $a0, $s4, $a0
    ctx->pc = 0x1d9230u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d9234: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9234u;
    {
        const bool branch_taken_0x1d9234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9234u;
            // 0x1d9238: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9234) {
            ctx->pc = 0x1D9210u;
            runtime->cooperativeGuestYield();
            goto label_1d9210;
        }
    }
    ctx->pc = 0x1D923Cu;
label_1d923c:
    // 0x1d923c: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1d923cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9240: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9244: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1d9244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9248: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1d924c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d924cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d9250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d9250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9254: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d9254u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d925c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d925cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9260: 0x0  nop
    ctx->pc = 0x1d9260u;
    // NOP
    // 0x1d9264: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9264u;
    {
        const bool branch_taken_0x1d9264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9264) {
            ctx->pc = 0x1D9268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9264u;
            // 0x1d9268: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9278u;
            goto label_1d9278;
        }
    }
    ctx->pc = 0x1D926Cu;
    // 0x1d926c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9270: 0x52a20001  beql        $s5, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9270u;
    {
        const bool branch_taken_0x1d9270 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9270) {
            ctx->pc = 0x1D9274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9270u;
            // 0x1d9274: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9278u;
            goto label_1d9278;
        }
    }
    ctx->pc = 0x1D9278u;
label_1d9278:
    // 0x1d9278: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D9278u;
    {
        const bool branch_taken_0x1d9278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9278u;
            // 0x1d927c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9278) {
            ctx->pc = 0x1D9354u;
            goto label_1d9354;
        }
    }
    ctx->pc = 0x1D9280u;
    // 0x1d9280: 0xc7d46b34  lwc1        $f20, 0x6B34($fp)
    ctx->pc = 0x1d9280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 27444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9284: 0x8e024f60  lw          $v0, 0x4F60($s0)
    ctx->pc = 0x1d9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20320)));
    // 0x1d9288: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d928c: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D928Cu;
    {
        const bool branch_taken_0x1d928c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D928Cu;
            // 0x1d9290: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d928c) {
            ctx->pc = 0x1D9354u;
            goto label_1d9354;
        }
    }
    ctx->pc = 0x1D9294u;
    // 0x1d9294: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1d9298:
    // 0x1d9298: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d929c: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d92a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d92a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d92a8: 0xc0763be  jal         func_1D8EF8
    ctx->pc = 0x1D92A8u;
    SET_GPR_U32(ctx, 31, 0x1D92B0u);
    ctx->pc = 0x1D92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92A8u;
            // 0x1d92ac: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF8u;
    if (runtime->hasFunction(0x1D8EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1D8EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92B0u; }
        if (ctx->pc != 0x1D92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8EF8_0x1d8ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92B0u; }
        if (ctx->pc != 0x1D92B0u) { return; }
    }
    ctx->pc = 0x1D92B0u;
    // 0x1d92b0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D92B0u;
    {
        const bool branch_taken_0x1d92b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92B0u;
            // 0x1d92b4: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92b0) {
            ctx->pc = 0x1D9340u;
            goto label_1d9340;
        }
    }
    ctx->pc = 0x1D92B8u;
    // 0x1d92b8: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1d92b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d92bc: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1d92bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d92c0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1d92c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d92c4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1d92c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92c8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1d92c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92cc: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1d92ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d92d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d92d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d92d4: 0x4be220ea  vmul.xyzw   $vf3, $vf4, $vf2
    ctx->pc = 0x1d92d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d92d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d92d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d92dc: 0x46020084  c1          0x20084
    ctx->pc = 0x1d92dcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d92e0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1d92e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92e4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1d92e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92e8: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1d92e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92ec: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d92ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d92f0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d92f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d92f4: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1d92f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d92f8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d92f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d92fc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d92fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9300: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9304: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d9304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d9308: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d9308u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d930c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d930cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9310: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1d9310u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1d9314: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1d9314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d9318: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d9318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d931c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1d931cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x1d9320: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9320u;
    {
        const bool branch_taken_0x1d9320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9320u;
            // 0x1d9324: 0x8e024f60  lw          $v0, 0x4F60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9320) {
            ctx->pc = 0x1D9344u;
            goto label_1d9344;
        }
    }
    ctx->pc = 0x1D9328u;
    // 0x1d9328: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1d9328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d932c: 0x0  nop
    ctx->pc = 0x1d932cu;
    // NOP
    // 0x1d9330: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9330u;
    {
        const bool branch_taken_0x1d9330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9330) {
            ctx->pc = 0x1D9334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9330u;
            // 0x1d9334: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9348u;
            goto label_1d9348;
        }
    }
    ctx->pc = 0x1D9338u;
    // 0x1d9338: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1d9338u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1d933c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1d933cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9340:
    // 0x1d9340: 0x8e024f60  lw          $v0, 0x4F60($s0)
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20320)));
label_1d9344:
    // 0x1d9344: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d9348:
    // 0x1d9348: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d9348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d934c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D934Cu;
    {
        const bool branch_taken_0x1d934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D934Cu;
            // 0x1d9350: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d934c) {
            ctx->pc = 0x1D9298u;
            runtime->cooperativeGuestYield();
            goto label_1d9298;
        }
    }
    ctx->pc = 0x1D9354u;
label_1d9354:
    // 0x1d9354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9358: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9358u;
    {
        const bool branch_taken_0x1d9358 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9358u;
            // 0x1d935c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9358) {
            ctx->pc = 0x1D9368u;
            goto label_1d9368;
        }
    }
    ctx->pc = 0x1D9360u;
    // 0x1d9360: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9360u;
    {
        const bool branch_taken_0x1d9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9360u;
            // 0x1d9364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9360) {
            ctx->pc = 0x1D9378u;
            goto label_1d9378;
        }
    }
    ctx->pc = 0x1D9368u;
label_1d9368:
    // 0x1d9368: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1d936c: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1d9370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9378:
    // 0x1d9378: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d9378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d937c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d937cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d9380: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d9380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d9384: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d9384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d9388: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d9388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d938c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d938cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d9390: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d9390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9394: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d9394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d9398: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1d9398u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d939c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d93a0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d93a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d93a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93A4u;
            // 0x1d93a8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9210u: goto label_1d9210;
            case 0x1D923Cu: goto label_1d923c;
            case 0x1D9278u: goto label_1d9278;
            case 0x1D9298u: goto label_1d9298;
            case 0x1D9340u: goto label_1d9340;
            case 0x1D9344u: goto label_1d9344;
            case 0x1D9348u: goto label_1d9348;
            case 0x1D9354u: goto label_1d9354;
            case 0x1D9368u: goto label_1d9368;
            case 0x1D9378u: goto label_1d9378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D93ACu;
    // 0x1d93ac: 0x0  nop
    ctx->pc = 0x1d93acu;
    // NOP
}
