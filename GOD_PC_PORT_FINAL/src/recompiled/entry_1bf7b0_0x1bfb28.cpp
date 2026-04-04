#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bf7b0
// Address: 0x1bf7b0 - 0x1bfb28
void entry_1bf7b0_0x1bfb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bf7b0_0x1bfb28");
#endif

    ctx->pc = 0x1bf7b0u;

    // 0x1bf7b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1bf7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7b8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bf7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1bf7bc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1bf7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1bf7c0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bf7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1bf7c4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1bf7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1bf7c8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bf7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1bf7cc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bf7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1bf7d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bf7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bf7d4: 0xc079c9a  jal         func_1E7268
    ctx->pc = 0x1BF7D4u;
    SET_GPR_U32(ctx, 31, 0x1BF7DCu);
    ctx->pc = 0x1BF7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7D4u;
            // 0x1bf7d8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7268u;
    if (runtime->hasFunction(0x1E7268u)) {
        auto targetFn = runtime->lookupFunction(0x1E7268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7DCu; }
        if (ctx->pc != 0x1BF7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7268_0x1e7268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7DCu; }
        if (ctx->pc != 0x1BF7DCu) { return; }
    }
    ctx->pc = 0x1BF7DCu;
    // 0x1bf7dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1bf7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1bf7e0: 0x24429c88  addiu       $v0, $v0, -0x6378
    ctx->pc = 0x1bf7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941832));
    // 0x1bf7e4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1bf7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1bf7e8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1BF7E8u;
    SET_GPR_U32(ctx, 31, 0x1BF7F0u);
    ctx->pc = 0x1BF7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7E8u;
            // 0x1bf7ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7F0u; }
        if (ctx->pc != 0x1BF7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF7F0u; }
        if (ctx->pc != 0x1BF7F0u) { return; }
    }
    ctx->pc = 0x1BF7F0u;
    // 0x1bf7f0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1bf7f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1bf7f4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1bf7f8: 0xae6503e4  sw          $a1, 0x3E4($s3)
    ctx->pc = 0x1bf7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 5));
    // 0x1bf7fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bf7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf800: 0x7e620360  sq          $v0, 0x360($s3)
    ctx->pc = 0x1bf800u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 864), GPR_VEC(ctx, 2));
    // 0x1bf804: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf808: 0xae630380  sw          $v1, 0x380($s3)
    ctx->pc = 0x1bf808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 896), GPR_U32(ctx, 3));
    // 0x1bf80c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bf810: 0xae64037c  sw          $a0, 0x37C($s3)
    ctx->pc = 0x1bf810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 892), GPR_U32(ctx, 4));
    // 0x1bf814: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1bf818: 0xae600374  sw          $zero, 0x374($s3)
    ctx->pc = 0x1bf818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 884), GPR_U32(ctx, 0));
    // 0x1bf81c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1bf81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x1bf820: 0xae600378  sw          $zero, 0x378($s3)
    ctx->pc = 0x1bf820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 888), GPR_U32(ctx, 0));
    // 0x1bf824: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf828: 0x8e6501ac  lw          $a1, 0x1AC($s3)
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x1bf82c: 0x8c47cd1c  lw          $a3, -0x32E4($v0)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954268)));
    // 0x1bf830: 0x8ca20148  lw          $v0, 0x148($a1)
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x1bf834: 0x8e6401a8  lw          $a0, 0x1A8($s3)
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
    // 0x1bf838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bf838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bf83c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bf840: 0xae600370  sw          $zero, 0x370($s3)
    ctx->pc = 0x1bf840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
    // 0x1bf844: 0xa4860120  sh          $a2, 0x120($a0)
    ctx->pc = 0x1bf844u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 6));
    // 0x1bf848: 0xaca20148  sw          $v0, 0x148($a1)
    ctx->pc = 0x1bf848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 2));
    // 0x1bf84c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF84Cu;
    {
        const bool branch_taken_0x1bf84c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF84Cu;
            // 0x1bf850: 0xae6003e8  sw          $zero, 0x3E8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf84c) {
            ctx->pc = 0x1BF878u;
            goto label_1bf878;
        }
    }
    ctx->pc = 0x1BF854u;
    // 0x1bf854: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1bf854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf858: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1bf85c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1BF85Cu;
    SET_GPR_U32(ctx, 31, 0x1BF864u);
    ctx->pc = 0x1BF860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF85Cu;
            // 0x1bf860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF864u; }
        if (ctx->pc != 0x1BF864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF864u; }
        if (ctx->pc != 0x1BF864u) { return; }
    }
    ctx->pc = 0x1BF864u;
    // 0x1bf864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf868: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1BF868u;
    SET_GPR_U32(ctx, 31, 0x1BF870u);
    ctx->pc = 0x1BF86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF868u;
            // 0x1bf86c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF870u; }
        if (ctx->pc != 0x1BF870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF870u; }
        if (ctx->pc != 0x1BF870u) { return; }
    }
    ctx->pc = 0x1BF870u;
    // 0x1bf870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF870u;
    {
        const bool branch_taken_0x1bf870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF870u;
            // 0x1bf874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf870) {
            ctx->pc = 0x1BF880u;
            goto label_1bf880;
        }
    }
    ctx->pc = 0x1BF878u;
label_1bf878:
    // 0x1bf878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf880:
    // 0x1bf880: 0xc07ccf0  jal         func_1F33C0
    ctx->pc = 0x1BF880u;
    SET_GPR_U32(ctx, 31, 0x1BF888u);
    ctx->pc = 0x1BF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF880u;
            // 0x1bf884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F33C0u;
    if (runtime->hasFunction(0x1F33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF888u; }
        if (ctx->pc != 0x1BF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F33C0_0x1f33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF888u; }
        if (ctx->pc != 0x1BF888u) { return; }
    }
    ctx->pc = 0x1BF888u;
    // 0x1bf888: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf88c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bf890: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf898: 0xc460cd14  lwc1        $f0, -0x32EC($v1)
    ctx->pc = 0x1bf898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf89c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bf8a0: 0xc461cd18  lwc1        $f1, -0x32E8($v1)
    ctx->pc = 0x1bf8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf8a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1bf8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1bf8a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bf8ac: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x1bf8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1bf8b0: 0x8c750104  lw          $s5, 0x104($v1)
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1bf8b4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1bf8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1bf8b8: 0xae6203ec  sw          $v0, 0x3EC($s3)
    ctx->pc = 0x1bf8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1004), GPR_U32(ctx, 2));
    // 0x1bf8bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bf8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1bf8c0:
    // 0x1bf8c0: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bf8c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bf8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8cc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BF8CCu;
    SET_GPR_U32(ctx, 31, 0x1BF8D4u);
    ctx->pc = 0x1BF8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8CCu;
            // 0x1bf8d0: 0x24a55c50  addiu       $a1, $a1, 0x5C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8D4u; }
        if (ctx->pc != 0x1BF8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8D4u; }
        if (ctx->pc != 0x1BF8D4u) { return; }
    }
    ctx->pc = 0x1BF8D4u;
    // 0x1bf8d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8d8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1BF8D8u;
    SET_GPR_U32(ctx, 31, 0x1BF8E0u);
    ctx->pc = 0x1BF8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8D8u;
            // 0x1bf8dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8E0u; }
        if (ctx->pc != 0x1BF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8E0u; }
        if (ctx->pc != 0x1BF8E0u) { return; }
    }
    ctx->pc = 0x1BF8E0u;
    // 0x1bf8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1BF8E4u;
    SET_GPR_U32(ctx, 31, 0x1BF8ECu);
    ctx->pc = 0x1BF8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8E4u;
            // 0x1bf8e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8ECu; }
        if (ctx->pc != 0x1BF8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8ECu; }
        if (ctx->pc != 0x1BF8ECu) { return; }
    }
    ctx->pc = 0x1BF8ECu;
    // 0x1bf8ec: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1bf8f0: 0x26710384  addiu       $s1, $s3, 0x384
    ctx->pc = 0x1bf8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 900));
    // 0x1bf8f4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1bf8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1bf8f8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1bf8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bf8fc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1bf8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1bf900: 0xc04c992  jal         func_132648
    ctx->pc = 0x1BF900u;
    SET_GPR_U32(ctx, 31, 0x1BF908u);
    ctx->pc = 0x1BF904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF900u;
            // 0x1bf904: 0x24845c60  addiu       $a0, $a0, 0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF908u; }
        if (ctx->pc != 0x1BF908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF908u; }
        if (ctx->pc != 0x1BF908u) { return; }
    }
    ctx->pc = 0x1BF908u;
    // 0x1bf908: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1bf908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1bf90c: 0x26700394  addiu       $s0, $s3, 0x394
    ctx->pc = 0x1bf90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 916));
    // 0x1bf910: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1bf910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bf914: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bf914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bf918: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bf91c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bf920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf924: 0xc04c518  jal         func_131460
    ctx->pc = 0x1BF924u;
    SET_GPR_U32(ctx, 31, 0x1BF92Cu);
    ctx->pc = 0x1BF928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF924u;
            // 0x1bf928: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF92Cu; }
        if (ctx->pc != 0x1BF92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF92Cu; }
        if (ctx->pc != 0x1BF92Cu) { return; }
    }
    ctx->pc = 0x1BF92Cu;
    // 0x1bf92c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf930: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf934: 0xc06ff8c  jal         func_1BFE30
    ctx->pc = 0x1BF934u;
    SET_GPR_U32(ctx, 31, 0x1BF93Cu);
    ctx->pc = 0x1BF938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF934u;
            // 0x1bf938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFE30u;
    if (runtime->hasFunction(0x1BFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1BFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF93Cu; }
        if (ctx->pc != 0x1BF93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bfe30_0x1bfe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF93Cu; }
        if (ctx->pc != 0x1BF93Cu) { return; }
    }
    ctx->pc = 0x1BF93Cu;
    // 0x1bf93c: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x1bf93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf940: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1BF940u;
    {
        const bool branch_taken_0x1bf940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF940u;
            // 0x1bf944: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf940) {
            ctx->pc = 0x1BF8C0u;
            runtime->cooperativeGuestYield();
            goto label_1bf8c0;
        }
    }
    ctx->pc = 0x1BF948u;
    // 0x1bf948: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1bf94c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1bf94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1bf950: 0x24475ce0  addiu       $a3, $v0, 0x5CE0
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23776));
    // 0x1bf954: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1bf954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1bf958: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1bf958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1bf95c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1bf95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1bf960: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1bf960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1bf964: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1bf964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bf968: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1bf968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bf96c: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1bf96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf970: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1bf970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf974: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1bf974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf978: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1bf978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf97c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1bf97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf980: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1bf980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf984: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1bf984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1bf988: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1bf988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1bf98c: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x1bf98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf990: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x1bf990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf998: 0x24665d90  addiu       $a2, $v1, 0x5D90
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23952));
    // 0x1bf99c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1bf99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1bf9a0: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1bf9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1bf9a4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1bf9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1bf9a8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1bf9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1bf9ac: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1bf9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1bf9b0: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1bf9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1bf9b4: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1bf9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9b8: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1bf9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9bc: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x1bf9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9c0: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x1bf9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9c4: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x1bf9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9c8: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x1bf9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9cc: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x1bf9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1bf9d0: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x1bf9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1bf9d4: 0xb3a2005f  sdl         $v0, 0x5F($sp)
    ctx->pc = 0x1bf9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9d8: 0xb7a20058  sdr         $v0, 0x58($sp)
    ctx->pc = 0x1bf9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bf9dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf9e0:
    // 0x1bf9e0: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1bf9e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9e8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1BF9E8u;
    SET_GPR_U32(ctx, 31, 0x1BF9F0u);
    ctx->pc = 0x1BF9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9E8u;
            // 0x1bf9ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F0u; }
        if (ctx->pc != 0x1BF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F0u; }
        if (ctx->pc != 0x1BF9F0u) { return; }
    }
    ctx->pc = 0x1BF9F0u;
    // 0x1bf9f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9f4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1BF9F4u;
    SET_GPR_U32(ctx, 31, 0x1BF9FCu);
    ctx->pc = 0x1BF9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9F4u;
            // 0x1bf9f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9FCu; }
        if (ctx->pc != 0x1BF9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9FCu; }
        if (ctx->pc != 0x1BF9FCu) { return; }
    }
    ctx->pc = 0x1BF9FCu;
    // 0x1bf9fc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfa00: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1bfa04: 0xa46203b4  sh          $v0, 0x3B4($v1)
    ctx->pc = 0x1bfa04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bfa08: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1bfa0c: 0xc04c992  jal         func_132648
    ctx->pc = 0x1BFA0Cu;
    SET_GPR_U32(ctx, 31, 0x1BFA14u);
    ctx->pc = 0x1BFA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA0Cu;
            // 0x1bfa10: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA14u; }
        if (ctx->pc != 0x1BFA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA14u; }
        if (ctx->pc != 0x1BFA14u) { return; }
    }
    ctx->pc = 0x1BFA14u;
    // 0x1bfa14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bfa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa18: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1bfa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bfa1c: 0xac4503c4  sw          $a1, 0x3C4($v0)
    ctx->pc = 0x1bfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 964), GPR_U32(ctx, 5));
    // 0x1bfa20: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1bfa20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bfa24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bfa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bfa28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFA28u;
    {
        const bool branch_taken_0x1bfa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA28u;
            // 0x1bfa2c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa28) {
            ctx->pc = 0x1BFA58u;
            goto label_1bfa58;
        }
    }
    ctx->pc = 0x1BFA30u;
    // 0x1bfa30: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bfa30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfa34: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bfa38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfa3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfa40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfa44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bfa48: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1bfa48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1bfa4c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1bfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1bfa50: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFA58u);
        ctx->pc = 0x1BFA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA50u;
            // 0x1bfa54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFA58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF878u: goto label_1bf878;
            case 0x1BF880u: goto label_1bf880;
            case 0x1BF8C0u: goto label_1bf8c0;
            case 0x1BF9E0u: goto label_1bf9e0;
            case 0x1BFA58u: goto label_1bfa58;
            case 0x1BFA98u: goto label_1bfa98;
            case 0x1BFAC0u: goto label_1bfac0;
            case 0x1BFACCu: goto label_1bfacc;
            case 0x1BFAD0u: goto label_1bfad0;
            case 0x1BFAE8u: goto label_1bfae8;
            case 0x1BFB04u: goto label_1bfb04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA58u; }
            if (ctx->pc != 0x1BFA58u) { return; }
        }
        }
    }
    ctx->pc = 0x1BFA58u;
label_1bfa58:
    // 0x1bfa58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfa58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bfa5c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1bfa5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bfa60: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1BFA60u;
    {
        const bool branch_taken_0x1bfa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA60u;
            // 0x1bfa64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa60) {
            ctx->pc = 0x1BF9E0u;
            runtime->cooperativeGuestYield();
            goto label_1bf9e0;
        }
    }
    ctx->pc = 0x1BFA68u;
    // 0x1bfa68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa6c: 0xc070364  jal         func_1C0D90
    ctx->pc = 0x1BFA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFA74u);
    ctx->pc = 0x1BFA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA6Cu;
            // 0x1bfa70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0D90u;
    if (runtime->hasFunction(0x1C0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA74u; }
        if (ctx->pc != 0x1BFA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0d90_0x1c0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA74u; }
        if (ctx->pc != 0x1BFA74u) { return; }
    }
    ctx->pc = 0x1BFA74u;
    // 0x1bfa74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bfa78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bfa7c: 0x8c42ecc0  lw          $v0, -0x1340($v0)
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962368)));
    // 0x1bfa80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfa84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfa88: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bfa8c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BFA8Cu;
    {
        const bool branch_taken_0x1bfa8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA8Cu;
            // 0x1bfa90: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa8c) {
            ctx->pc = 0x1BFAD0u;
            goto label_1bfad0;
        }
    }
    ctx->pc = 0x1BFA94u;
    // 0x1bfa94: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1bfa98:
    // 0x1bfa98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bfa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa9c: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x1bfa9cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1bfaa0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1bfaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1bfaa4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFAA4u;
    {
        const bool branch_taken_0x1bfaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAA4u;
            // 0x1bfaa8: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa4) {
            ctx->pc = 0x1BFAC0u;
            goto label_1bfac0;
        }
    }
    ctx->pc = 0x1BFAACu;
    // 0x1bfaac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bfaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bfab0: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BFAB0u;
    SET_GPR_U32(ctx, 31, 0x1BFAB8u);
    ctx->pc = 0x1BFAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAB0u;
            // 0x1bfab4: 0x24a55db0  addiu       $a1, $a1, 0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    }
    ctx->pc = 0x1BFAB8u;
    // 0x1bfab8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFAB8u;
    {
        const bool branch_taken_0x1bfab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfab8) {
            ctx->pc = 0x1BFABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAB8u;
            // 0x1bfabc: 0xae7103f0  sw          $s1, 0x3F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1008), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFACCu;
            goto label_1bfacc;
        }
    }
    ctx->pc = 0x1BFAC0u;
label_1bfac0:
    // 0x1bfac0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfac4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BFAC4u;
    {
        const bool branch_taken_0x1bfac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAC4u;
            // 0x1bfac8: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfac4) {
            ctx->pc = 0x1BFA98u;
            runtime->cooperativeGuestYield();
            goto label_1bfa98;
        }
    }
    ctx->pc = 0x1BFACCu;
label_1bfacc:
    // 0x1bfacc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bfad0:
    // 0x1bfad0: 0x8c42c4dc  lw          $v0, -0x3B24($v0)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952156)));
    // 0x1bfad4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFAD4u;
    {
        const bool branch_taken_0x1bfad4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAD4u;
            // 0x1bfad8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfad4) {
            ctx->pc = 0x1BFAE8u;
            goto label_1bfae8;
        }
    }
    ctx->pc = 0x1BFADCu;
    // 0x1bfadc: 0x8c42c4e0  lw          $v0, -0x3B20($v0)
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952160)));
    // 0x1bfae0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFAE0u;
    {
        const bool branch_taken_0x1bfae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAE0u;
            // 0x1bfae4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfae0) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFAE8u;
label_1bfae8:
    // 0x1bfae8: 0x0  nop
    ctx->pc = 0x1bfae8u;
    // NOP
    // 0x1bfaec: 0x0  nop
    ctx->pc = 0x1bfaecu;
    // NOP
    // 0x1bfaf0: 0x0  nop
    ctx->pc = 0x1bfaf0u;
    // NOP
    // 0x1bfaf4: 0x0  nop
    ctx->pc = 0x1bfaf4u;
    // NOP
    // 0x1bfaf8: 0x0  nop
    ctx->pc = 0x1bfaf8u;
    // NOP
    // 0x1bfafc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BFAFCu;
    {
        const bool branch_taken_0x1bfafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfafc) {
            ctx->pc = 0x1BFAE8u;
            runtime->cooperativeGuestYield();
            goto label_1bfae8;
        }
    }
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bfb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bfb08: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bfb08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bfb0c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfb10: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bfb10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfb14: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bfb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfb18: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bfb18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfb1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfb20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB20u;
            // 0x1bfb24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF878u: goto label_1bf878;
            case 0x1BF880u: goto label_1bf880;
            case 0x1BF8C0u: goto label_1bf8c0;
            case 0x1BF9E0u: goto label_1bf9e0;
            case 0x1BFA58u: goto label_1bfa58;
            case 0x1BFA98u: goto label_1bfa98;
            case 0x1BFAC0u: goto label_1bfac0;
            case 0x1BFACCu: goto label_1bfacc;
            case 0x1BFAD0u: goto label_1bfad0;
            case 0x1BFAE8u: goto label_1bfae8;
            case 0x1BFB04u: goto label_1bfb04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFB28u;
}
