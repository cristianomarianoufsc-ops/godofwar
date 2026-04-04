#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213068
// Address: 0x213068 - 0x213290
void sub_00213068_0x213068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213068_0x213068");
#endif

    ctx->pc = 0x213068u;

    // 0x213068: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x213068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x21306c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x21306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x213070: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x213070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x213074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213078: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x213078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x21307c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21307cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213080: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x213080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x213084: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x213084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213088: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x213088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x21308c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213090: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x213090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x213094: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x213094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x213098: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x213098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21309c: 0x0  nop
    ctx->pc = 0x21309cu;
    // NOP
label_2130a0:
    // 0x2130a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2130a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2130a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2130a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2130a8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2130ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2130acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2130b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2130b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2130b4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2130B4u;
    {
        const bool branch_taken_0x2130b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2130B4u;
            // 0x2130b8: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130b4) {
            ctx->pc = 0x2130A0u;
            runtime->cooperativeGuestYield();
            goto label_2130a0;
        }
    }
    ctx->pc = 0x2130BCu;
    // 0x2130bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2130bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130c0: 0xc077988  jal         func_1DE620
    ctx->pc = 0x2130C0u;
    SET_GPR_U32(ctx, 31, 0x2130C8u);
    ctx->pc = 0x2130C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2130C0u;
            // 0x2130c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE620u;
    if (runtime->hasFunction(0x1DE620u)) {
        auto targetFn = runtime->lookupFunction(0x1DE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130C8u; }
        if (ctx->pc != 0x2130C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE620_0x1de620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130C8u; }
        if (ctx->pc != 0x2130C8u) { return; }
    }
    ctx->pc = 0x2130C8u;
    // 0x2130c8: 0x8e330104  lw          $s3, 0x104($s1)
    ctx->pc = 0x2130c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2130cc: 0x920301f8  lbu         $v1, 0x1F8($s0)
    ctx->pc = 0x2130ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x2130d0: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x2130d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2130d4: 0xae1201c0  sw          $s2, 0x1C0($s0)
    ctx->pc = 0x2130d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 18));
    // 0x2130d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2130D8u;
    {
        const bool branch_taken_0x2130d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2130D8u;
            // 0x2130dc: 0xae0201dc  sw          $v0, 0x1DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130d8) {
            ctx->pc = 0x2130F4u;
            goto label_2130f4;
        }
    }
    ctx->pc = 0x2130E0u;
    // 0x2130e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2130e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2130e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2130e8: 0xc06d1f8  jal         func_1B47E0
    ctx->pc = 0x2130E8u;
    SET_GPR_U32(ctx, 31, 0x2130F0u);
    ctx->pc = 0x2130ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2130E8u;
            // 0x2130ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47E0u;
    if (runtime->hasFunction(0x1B47E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130F0u; }
        if (ctx->pc != 0x2130F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47E0_0x1b47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130F0u; }
        if (ctx->pc != 0x2130F0u) { return; }
    }
    ctx->pc = 0x2130F0u;
    // 0x2130f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2130f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2130f4:
    // 0x2130f4: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x2130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x2130f8: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x2130f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x2130fc: 0x7a250020  lq          $a1, 0x20($s1)
    ctx->pc = 0x2130fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x213100: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x213104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213108: 0x8e0701ac  lw          $a3, 0x1AC($s0)
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x21310c: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x21310cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x213110: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x213110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x213114: 0x78c40010  lq          $a0, 0x10($a2)
    ctx->pc = 0x213114u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x213118: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x213118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x21311c: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x21311cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x213120: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x213120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x213124: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x213124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x213128: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x213128u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
    // 0x21312c: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x21312cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x213130: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x213130u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x213134: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x213134u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x213138: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x213138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x21313c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x21313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x213140: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x213140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x213144: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x213144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x213148: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x213148u;
    {
        const bool branch_taken_0x213148 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213148u;
            // 0x21314c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213148) {
            ctx->pc = 0x21315Cu;
            goto label_21315c;
        }
    }
    ctx->pc = 0x213150u;
    // 0x213150: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x213150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x213154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213158: 0xe4e00140  swc1        $f0, 0x140($a3)
    ctx->pc = 0x213158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 320), bits); }
label_21315c:
    // 0x21315c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x21315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x213160: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x213160u;
    {
        const bool branch_taken_0x213160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213160) {
            ctx->pc = 0x213164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213160u;
            // 0x213164: 0x8e0401e0  lw          $a0, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213184u;
            goto label_213184;
        }
    }
    ctx->pc = 0x213168u;
    // 0x213168: 0xc07ff7a  jal         func_1FFDE8
    ctx->pc = 0x213168u;
    SET_GPR_U32(ctx, 31, 0x213170u);
    ctx->pc = 0x21316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213168u;
            // 0x21316c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDE8u;
    if (runtime->hasFunction(0x1FFDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213170u; }
        if (ctx->pc != 0x213170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFDE8_0x1ffde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213170u; }
        if (ctx->pc != 0x213170u) { return; }
    }
    ctx->pc = 0x213170u;
    // 0x213170: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x213174: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x213174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x213178: 0x24638a18  addiu       $v1, $v1, -0x75E8
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937112));
    // 0x21317c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x21317cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x213180: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x213180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_213184:
    // 0x213184: 0xc07ffaa  jal         func_1FFEA8
    ctx->pc = 0x213184u;
    SET_GPR_U32(ctx, 31, 0x21318Cu);
    ctx->pc = 0x213188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213184u;
            // 0x213188: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFEA8u;
    if (runtime->hasFunction(0x1FFEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21318Cu; }
        if (ctx->pc != 0x21318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ffea8_0x1fffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21318Cu; }
        if (ctx->pc != 0x21318Cu) { return; }
    }
    ctx->pc = 0x21318Cu;
    // 0x21318c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213194: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x213194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x213198: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x213198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21319c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x21319cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2131a0: 0x60f809  jalr        $v1
    ctx->pc = 0x2131A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2131A8u);
        ctx->pc = 0x2131A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2131A0u;
            // 0x2131a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2131A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2130A0u: goto label_2130a0;
            case 0x2130F4u: goto label_2130f4;
            case 0x21315Cu: goto label_21315c;
            case 0x213184u: goto label_213184;
            case 0x2131E0u: goto label_2131e0;
            case 0x2131F0u: goto label_2131f0;
            case 0x2131F4u: goto label_2131f4;
            case 0x21321Cu: goto label_21321c;
            case 0x21326Cu: goto label_21326c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2131A8u; }
            if (ctx->pc != 0x2131A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2131A8u;
    // 0x2131a8: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x2131ac: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2131ACu;
    {
        const bool branch_taken_0x2131ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2131ac) {
            ctx->pc = 0x2131B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2131ACu;
            // 0x2131b0: 0x8e0201a4  lw          $v0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2131F4u;
            goto label_2131f4;
        }
    }
    ctx->pc = 0x2131B4u;
    // 0x2131b4: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x2131b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2131b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2131bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2131BCu;
    {
        const bool branch_taken_0x2131bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2131BCu;
            // 0x2131c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131bc) {
            ctx->pc = 0x2131E0u;
            goto label_2131e0;
        }
    }
    ctx->pc = 0x2131C4u;
    // 0x2131c4: 0xc084be2  jal         func_212F88
    ctx->pc = 0x2131C4u;
    SET_GPR_U32(ctx, 31, 0x2131CCu);
    ctx->pc = 0x2131C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131C4u;
            // 0x2131c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131CCu; }
        if (ctx->pc != 0x2131CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131CCu; }
        if (ctx->pc != 0x2131CCu) { return; }
    }
    ctx->pc = 0x2131CCu;
    // 0x2131cc: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x2131ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x2131d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2131d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2131d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2131d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2131d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2131D8u;
    {
        const bool branch_taken_0x2131d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2131D8u;
            // 0x2131dc: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131d8) {
            ctx->pc = 0x2131F0u;
            goto label_2131f0;
        }
    }
    ctx->pc = 0x2131E0u;
label_2131e0:
    // 0x2131e0: 0xc084be2  jal         func_212F88
    ctx->pc = 0x2131E0u;
    SET_GPR_U32(ctx, 31, 0x2131E8u);
    ctx->pc = 0x2131E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2131E0u;
            // 0x2131e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131E8u; }
        if (ctx->pc != 0x2131E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131E8u; }
        if (ctx->pc != 0x2131E8u) { return; }
    }
    ctx->pc = 0x2131E8u;
    // 0x2131e8: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x2131ec: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2131ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_2131f0:
    // 0x2131f0: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_2131f4:
    // 0x2131f4: 0xae1401d0  sw          $s4, 0x1D0($s0)
    ctx->pc = 0x2131f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 20));
    // 0x2131f8: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x2131f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x2131fc: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x2131fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x213200: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x213200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x213204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213204u;
    {
        const bool branch_taken_0x213204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213204u;
            // 0x213208: 0xae0001f0  sw          $zero, 0x1F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213204) {
            ctx->pc = 0x21321Cu;
            goto label_21321c;
        }
    }
    ctx->pc = 0x21320Cu;
    // 0x21320c: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x21320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x213210: 0xc077a3a  jal         func_1DE8E8
    ctx->pc = 0x213210u;
    SET_GPR_U32(ctx, 31, 0x213218u);
    ctx->pc = 0x213214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213210u;
            // 0x213214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE8E8u;
    if (runtime->hasFunction(0x1DE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213218u; }
        if (ctx->pc != 0x213218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE8E8_0x1de8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213218u; }
        if (ctx->pc != 0x213218u) { return; }
    }
    ctx->pc = 0x213218u;
    // 0x213218: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x213218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
label_21321c:
    // 0x21321c: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x21321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x213220: 0xc05c476  jal         func_1711D8
    ctx->pc = 0x213220u;
    SET_GPR_U32(ctx, 31, 0x213228u);
    ctx->pc = 0x213224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213220u;
            // 0x213224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711D8u;
    if (runtime->hasFunction(0x1711D8u)) {
        auto targetFn = runtime->lookupFunction(0x1711D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213228u; }
        if (ctx->pc != 0x213228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001711D8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213228u; }
        if (ctx->pc != 0x213228u) { return; }
    }
    ctx->pc = 0x213228u;
    // 0x213228: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x213228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x21322c: 0xc05c476  jal         func_1711D8
    ctx->pc = 0x21322Cu;
    SET_GPR_U32(ctx, 31, 0x213234u);
    ctx->pc = 0x213230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21322Cu;
            // 0x213230: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711D8u;
    if (runtime->hasFunction(0x1711D8u)) {
        auto targetFn = runtime->lookupFunction(0x1711D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213234u; }
        if (ctx->pc != 0x213234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001711D8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213234u; }
        if (ctx->pc != 0x213234u) { return; }
    }
    ctx->pc = 0x213234u;
    // 0x213234: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x213234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x213238: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x213238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21323c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x21323cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x213240: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x213240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x213244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213248: 0xc4807da0  lwc1        $f0, 0x7DA0($a0)
    ctx->pc = 0x213248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21324c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x21324cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x213250: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x213250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x213254: 0xe60001e8  swc1        $f0, 0x1E8($s0)
    ctx->pc = 0x213254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
    // 0x213258: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x213258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x21325c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x21325Cu;
    {
        const bool branch_taken_0x21325c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x213260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21325Cu;
            // 0x213260: 0xae0001e4  sw          $zero, 0x1E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21325c) {
            ctx->pc = 0x21326Cu;
            goto label_21326c;
        }
    }
    ctx->pc = 0x213264u;
    // 0x213264: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x213264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213268: 0xe60001e4  swc1        $f0, 0x1E4($s0)
    ctx->pc = 0x213268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
label_21326c:
    // 0x21326c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x21326cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x213270: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x213270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x213274: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x213274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x213278: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x213278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21327c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x21327cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x213280: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x213280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x213284: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x213284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213288: 0x3e00008  jr          $ra
    ctx->pc = 0x213288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213288u;
            // 0x21328c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2130A0u: goto label_2130a0;
            case 0x2130F4u: goto label_2130f4;
            case 0x21315Cu: goto label_21315c;
            case 0x213184u: goto label_213184;
            case 0x2131E0u: goto label_2131e0;
            case 0x2131F0u: goto label_2131f0;
            case 0x2131F4u: goto label_2131f4;
            case 0x21321Cu: goto label_21321c;
            case 0x21326Cu: goto label_21326c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213290u;
}
