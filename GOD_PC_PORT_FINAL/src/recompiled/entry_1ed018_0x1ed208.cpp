#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ed018
// Address: 0x1ed018 - 0x1ed208
void entry_1ed018_0x1ed208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ed018_0x1ed208");
#endif

    ctx->pc = 0x1ed018u;

    // 0x1ed018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed01c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed024: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed02c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ed02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ed030: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed034: 0x26300190  addiu       $s0, $s1, 0x190
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1ed038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed03c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ed03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed040: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ed040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1ed044: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ed048: 0xc07c642  jal         func_1F1908
    ctx->pc = 0x1ED048u;
    SET_GPR_U32(ctx, 31, 0x1ED050u);
    ctx->pc = 0x1ED04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED048u;
            // 0x1ed04c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1908u;
    if (runtime->hasFunction(0x1F1908u)) {
        auto targetFn = runtime->lookupFunction(0x1F1908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED050u; }
        if (ctx->pc != 0x1ED050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1908_0x1f1908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED050u; }
        if (ctx->pc != 0x1ED050u) { return; }
    }
    ctx->pc = 0x1ED050u;
label_1ed050:
    // 0x1ed050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed054: 0xc07c642  jal         func_1F1908
    ctx->pc = 0x1ED054u;
    SET_GPR_U32(ctx, 31, 0x1ED05Cu);
    ctx->pc = 0x1ED058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED054u;
            // 0x1ed058: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1908u;
    if (runtime->hasFunction(0x1F1908u)) {
        auto targetFn = runtime->lookupFunction(0x1F1908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED05Cu; }
        if (ctx->pc != 0x1ED05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1908_0x1f1908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED05Cu; }
        if (ctx->pc != 0x1ED05Cu) { return; }
    }
    ctx->pc = 0x1ED05Cu;
    // 0x1ed05c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed060: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ED060u;
    {
        const bool branch_taken_0x1ed060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED060u;
            // 0x1ed064: 0x26100170  addiu       $s0, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed060) {
            ctx->pc = 0x1ED050u;
            runtime->cooperativeGuestYield();
            goto label_1ed050;
        }
    }
    ctx->pc = 0x1ED068u;
    // 0x1ed068: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1ed068u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ed06c: 0xfa210760  sqc2        $vf1, 0x760($s1)
    ctx->pc = 0x1ed06cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1888), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ed070: 0xae200838  sw          $zero, 0x838($s1)
    ctx->pc = 0x1ed070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 0));
    // 0x1ed074: 0xae2008bc  sw          $zero, 0x8BC($s1)
    ctx->pc = 0x1ed074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2236), GPR_U32(ctx, 0));
    // 0x1ed078: 0xae3208c0  sw          $s2, 0x8C0($s1)
    ctx->pc = 0x1ed078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2240), GPR_U32(ctx, 18));
    // 0x1ed07c: 0xae2008c4  sw          $zero, 0x8C4($s1)
    ctx->pc = 0x1ed07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2244), GPR_U32(ctx, 0));
    // 0x1ed080: 0xae2008c8  sw          $zero, 0x8C8($s1)
    ctx->pc = 0x1ed080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2248), GPR_U32(ctx, 0));
    // 0x1ed084: 0xae2008cc  sw          $zero, 0x8CC($s1)
    ctx->pc = 0x1ed084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2252), GPR_U32(ctx, 0));
    // 0x1ed088: 0xae320910  sw          $s2, 0x910($s1)
    ctx->pc = 0x1ed088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 18));
    // 0x1ed08c: 0xc07bd9e  jal         func_1EF678
    ctx->pc = 0x1ED08Cu;
    SET_GPR_U32(ctx, 31, 0x1ED094u);
    ctx->pc = 0x1ED090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED08Cu;
            // 0x1ed090: 0x26240920  addiu       $a0, $s1, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF678u;
    if (runtime->hasFunction(0x1EF678u)) {
        auto targetFn = runtime->lookupFunction(0x1EF678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED094u; }
        if (ctx->pc != 0x1ED094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ef678_0x1ef6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED094u; }
        if (ctx->pc != 0x1ED094u) { return; }
    }
    ctx->pc = 0x1ED094u;
    // 0x1ed094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed09c: 0x26240950  addiu       $a0, $s1, 0x950
    ctx->pc = 0x1ed09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
    // 0x1ed0a0: 0xae200950  sw          $zero, 0x950($s1)
    ctx->pc = 0x1ed0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2384), GPR_U32(ctx, 0));
    // 0x1ed0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed0a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ed0ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ed0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ed0b0: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x1ed0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed0b4: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1ed0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed0b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ed0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ed0bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed0c0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED0C0u;
    {
        const bool branch_taken_0x1ed0c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0C0u;
            // 0x1ed0c4: 0xac51e2a4  sw          $s1, -0x1D5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959780), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0c0) {
            ctx->pc = 0x1ED0D8u;
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED0C8u;
    // 0x1ed0c8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ed0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed0cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0d0: 0xe62007a8  swc1        $f0, 0x7A8($s1)
    ctx->pc = 0x1ed0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1960), bits); }
    // 0x1ed0d4: 0x0  nop
    ctx->pc = 0x1ed0d4u;
    // NOP
label_1ed0d8:
    // 0x1ed0d8: 0xc07b3dc  jal         func_1ECF70
    ctx->pc = 0x1ED0D8u;
    SET_GPR_U32(ctx, 31, 0x1ED0E0u);
    ctx->pc = 0x1ED0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0D8u;
            // 0x1ed0dc: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECF70u;
    if (runtime->hasFunction(0x1ECF70u)) {
        auto targetFn = runtime->lookupFunction(0x1ECF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0E0u; }
        if (ctx->pc != 0x1ED0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECF70_0x1ecf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0E0u; }
        if (ctx->pc != 0x1ED0E0u) { return; }
    }
    ctx->pc = 0x1ED0E0u;
    // 0x1ed0e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed0e4: 0xae320750  sw          $s2, 0x750($s1)
    ctx->pc = 0x1ed0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1872), GPR_U32(ctx, 18));
    // 0x1ed0e8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ed0ec: 0xae320754  sw          $s2, 0x754($s1)
    ctx->pc = 0x1ed0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1876), GPR_U32(ctx, 18));
    // 0x1ed0f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ed0f4: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1ed0f8: 0xc04fa88  jal         func_13EA20
    ctx->pc = 0x1ED0F8u;
    SET_GPR_U32(ctx, 31, 0x1ED100u);
    ctx->pc = 0x1ED0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0F8u;
            // 0x1ed0fc: 0xae2208c4  sw          $v0, 0x8C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA20u;
    if (runtime->hasFunction(0x13EA20u)) {
        auto targetFn = runtime->lookupFunction(0x13EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED100u; }
        if (ctx->pc != 0x1ED100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EA20_0x13ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED100u; }
        if (ctx->pc != 0x1ED100u) { return; }
    }
    ctx->pc = 0x1ED100u;
    // 0x1ed100: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1ed104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed108: 0xc04fa96  jal         func_13EA58
    ctx->pc = 0x1ED108u;
    SET_GPR_U32(ctx, 31, 0x1ED110u);
    ctx->pc = 0x1ED10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED108u;
            // 0x1ed10c: 0x24a5baf0  addiu       $a1, $a1, -0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA58u;
    if (runtime->hasFunction(0x13EA58u)) {
        auto targetFn = runtime->lookupFunction(0x13EA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED110u; }
        if (ctx->pc != 0x1ED110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EA58_0x13ea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED110u; }
        if (ctx->pc != 0x1ED110u) { return; }
    }
    ctx->pc = 0x1ED110u;
    // 0x1ed110: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1ed110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1ed114: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ed114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed118: 0xc04c492  jal         func_131248
    ctx->pc = 0x1ED118u;
    SET_GPR_U32(ctx, 31, 0x1ED120u);
    ctx->pc = 0x1ED11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED118u;
            // 0x1ed11c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED120u; }
        if (ctx->pc != 0x1ED120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED120u; }
        if (ctx->pc != 0x1ED120u) { return; }
    }
    ctx->pc = 0x1ED120u;
    // 0x1ed120: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1ed124: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ed128: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed12c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1ed130: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1ed134: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED13Cu);
        ctx->pc = 0x1ED138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED134u;
            // 0x1ed138: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED13Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED050u: goto label_1ed050;
            case 0x1ED0D8u: goto label_1ed0d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED13Cu; }
            if (ctx->pc != 0x1ED13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1ED13Cu;
    // 0x1ed13c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ed140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed144: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed148: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1ed148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1ed14c: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1ed150: 0x60f809  jalr        $v1
    ctx->pc = 0x1ED150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED158u);
        ctx->pc = 0x1ED154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED150u;
            // 0x1ed154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED158u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED050u: goto label_1ed050;
            case 0x1ED0D8u: goto label_1ed0d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED158u; }
            if (ctx->pc != 0x1ED158u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED158u;
    // 0x1ed158: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ed158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed15c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1ed15cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed164: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ed168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed16c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed170: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ed170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ed174: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ed178: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED180u);
        ctx->pc = 0x1ED17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED178u;
            // 0x1ed17c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED180u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED050u: goto label_1ed050;
            case 0x1ED0D8u: goto label_1ed0d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED180u; }
            if (ctx->pc != 0x1ED180u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED180u;
    // 0x1ed180: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1ed180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1ed184: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1ED184u;
    SET_GPR_U32(ctx, 31, 0x1ED18Cu);
    ctx->pc = 0x1ED188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED184u;
            // 0x1ed188: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED18Cu; }
        if (ctx->pc != 0x1ED18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED18Cu; }
        if (ctx->pc != 0x1ED18Cu) { return; }
    }
    ctx->pc = 0x1ED18Cu;
    // 0x1ed18c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1ed18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1ed190: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1ed194: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed19c: 0xac4303ac  sw          $v1, 0x3AC($v0)
    ctx->pc = 0x1ed19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 940), GPR_U32(ctx, 3));
    // 0x1ed1a0: 0xc05a3c0  jal         func_168F00
    ctx->pc = 0x1ED1A0u;
    SET_GPR_U32(ctx, 31, 0x1ED1A8u);
    ctx->pc = 0x1ED1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1A0u;
            // 0x1ed1a4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168F00u;
    if (runtime->hasFunction(0x168F00u)) {
        auto targetFn = runtime->lookupFunction(0x168F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1A8u; }
        if (ctx->pc != 0x1ED1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F00_0x168f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1A8u; }
        if (ctx->pc != 0x1ED1A8u) { return; }
    }
    ctx->pc = 0x1ED1A8u;
    // 0x1ed1a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ed1ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed1b0: 0x8c4253ec  lw          $v0, 0x53EC($v0)
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21484)));
    // 0x1ed1b4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1ed1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1ed1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1bc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1ed1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1ed1c0: 0xae2208c8  sw          $v0, 0x8C8($s1)
    ctx->pc = 0x1ed1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2248), GPR_U32(ctx, 2));
    // 0x1ed1c4: 0x24c813d8  addiu       $t0, $a2, 0x13D8
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 5080));
    // 0x1ed1c8: 0x89020003  lwl         $v0, 0x3($t0)
    ctx->pc = 0x1ed1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1ed1cc: 0x99020000  lwr         $v0, 0x0($t0)
    ctx->pc = 0x1ed1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1ed1d0: 0x81030004  lb          $v1, 0x4($t0)
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ed1d4: 0xaa22080b  swl         $v0, 0x80B($s1)
    ctx->pc = 0x1ed1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2059); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ed1d8: 0xba220808  swr         $v0, 0x808($s1)
    ctx->pc = 0x1ed1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 2056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ed1dc: 0xa223080c  sb          $v1, 0x80C($s1)
    ctx->pc = 0x1ed1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2060), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed1e0: 0xc07b4e4  jal         func_1ED390
    ctx->pc = 0x1ED1E0u;
    SET_GPR_U32(ctx, 31, 0x1ED1E8u);
    ctx->pc = 0x1ED1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1E0u;
            // 0x1ed1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED390u;
    if (runtime->hasFunction(0x1ED390u)) {
        auto targetFn = runtime->lookupFunction(0x1ED390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E8u; }
        if (ctx->pc != 0x1ED1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED390_0x1ed390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E8u; }
        if (ctx->pc != 0x1ED1E8u) { return; }
    }
    ctx->pc = 0x1ED1E8u;
    // 0x1ed1e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ed1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ed1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed1f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed1f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ed1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed200: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED200u;
            // 0x1ed204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED050u: goto label_1ed050;
            case 0x1ED0D8u: goto label_1ed0d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED208u;
}
