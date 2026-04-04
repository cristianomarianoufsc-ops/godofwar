#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF0A8
// Address: 0x1af0a8 - 0x1af6b8
void sub_001AF0A8_0x1af0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF0A8_0x1af0a8");
#endif

    ctx->pc = 0x1af0a8u;

    // 0x1af0a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af0ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af0b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1af0b4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1af0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1af0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af0bc: 0x261025d4  addiu       $s0, $s0, 0x25D4
    ctx->pc = 0x1af0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9684));
    // 0x1af0c0: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0C0u;
    SET_GPR_U32(ctx, 31, 0x1AF0C8u);
    ctx->pc = 0x1AF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0C0u;
            // 0x1af0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C8u; }
        if (ctx->pc != 0x1AF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0C8u; }
        if (ctx->pc != 0x1AF0C8u) { return; }
    }
    ctx->pc = 0x1AF0C8u;
    // 0x1af0c8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1af0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1af0cc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0CCu;
    SET_GPR_U32(ctx, 31, 0x1AF0D4u);
    ctx->pc = 0x1AF0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0CCu;
            // 0x1af0d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D4u; }
        if (ctx->pc != 0x1AF0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0D4u; }
        if (ctx->pc != 0x1AF0D4u) { return; }
    }
    ctx->pc = 0x1AF0D4u;
    // 0x1af0d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1af0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1af0d8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0D8u;
    SET_GPR_U32(ctx, 31, 0x1AF0E0u);
    ctx->pc = 0x1AF0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0D8u;
            // 0x1af0dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E0u; }
        if (ctx->pc != 0x1AF0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E0u; }
        if (ctx->pc != 0x1AF0E0u) { return; }
    }
    ctx->pc = 0x1AF0E0u;
    // 0x1af0e0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1af0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af0e4: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0E4u;
    SET_GPR_U32(ctx, 31, 0x1AF0ECu);
    ctx->pc = 0x1AF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0E4u;
            // 0x1af0e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0ECu; }
        if (ctx->pc != 0x1AF0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0ECu; }
        if (ctx->pc != 0x1AF0ECu) { return; }
    }
    ctx->pc = 0x1AF0ECu;
    // 0x1af0ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1af0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1af0f0: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0F0u;
    SET_GPR_U32(ctx, 31, 0x1AF0F8u);
    ctx->pc = 0x1AF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0F0u;
            // 0x1af0f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0F8u; }
        if (ctx->pc != 0x1AF0F8u) { return; }
    }
    ctx->pc = 0x1AF0F8u;
    // 0x1af0f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0fc: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1AF0FCu;
    SET_GPR_U32(ctx, 31, 0x1AF104u);
    ctx->pc = 0x1AF100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0FCu;
            // 0x1af100: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF104u; }
        if (ctx->pc != 0x1AF104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF104u; }
        if (ctx->pc != 0x1AF104u) { return; }
    }
    ctx->pc = 0x1AF104u;
    // 0x1af104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af10c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1af10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1af110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af114: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF114u;
            // 0x1af118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF190u: goto label_1af190;
            case 0x1AF1D0u: goto label_1af1d0;
            case 0x1AF1DCu: goto label_1af1dc;
            case 0x1AF218u: goto label_1af218;
            case 0x1AF224u: goto label_1af224;
            case 0x1AF270u: goto label_1af270;
            case 0x1AF288u: goto label_1af288;
            case 0x1AF2D8u: goto label_1af2d8;
            case 0x1AF2F8u: goto label_1af2f8;
            case 0x1AF300u: goto label_1af300;
            case 0x1AF308u: goto label_1af308;
            case 0x1AF394u: goto label_1af394;
            case 0x1AF3B0u: goto label_1af3b0;
            case 0x1AF3B4u: goto label_1af3b4;
            case 0x1AF3BCu: goto label_1af3bc;
            case 0x1AF410u: goto label_1af410;
            case 0x1AF428u: goto label_1af428;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF434u: goto label_1af434;
            case 0x1AF488u: goto label_1af488;
            case 0x1AF4A4u: goto label_1af4a4;
            case 0x1AF4B8u: goto label_1af4b8;
            case 0x1AF4E8u: goto label_1af4e8;
            case 0x1AF50Cu: goto label_1af50c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF11Cu;
    // 0x1af11c: 0x0  nop
    ctx->pc = 0x1af11cu;
    // NOP
    // 0x1af120: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF120u;
            // 0x1af124: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF190u: goto label_1af190;
            case 0x1AF1D0u: goto label_1af1d0;
            case 0x1AF1DCu: goto label_1af1dc;
            case 0x1AF218u: goto label_1af218;
            case 0x1AF224u: goto label_1af224;
            case 0x1AF270u: goto label_1af270;
            case 0x1AF288u: goto label_1af288;
            case 0x1AF2D8u: goto label_1af2d8;
            case 0x1AF2F8u: goto label_1af2f8;
            case 0x1AF300u: goto label_1af300;
            case 0x1AF308u: goto label_1af308;
            case 0x1AF394u: goto label_1af394;
            case 0x1AF3B0u: goto label_1af3b0;
            case 0x1AF3B4u: goto label_1af3b4;
            case 0x1AF3BCu: goto label_1af3bc;
            case 0x1AF410u: goto label_1af410;
            case 0x1AF428u: goto label_1af428;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF434u: goto label_1af434;
            case 0x1AF488u: goto label_1af488;
            case 0x1AF4A4u: goto label_1af4a4;
            case 0x1AF4B8u: goto label_1af4b8;
            case 0x1AF4E8u: goto label_1af4e8;
            case 0x1AF50Cu: goto label_1af50c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF128u;
    // 0x1af128: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF190u: goto label_1af190;
            case 0x1AF1D0u: goto label_1af1d0;
            case 0x1AF1DCu: goto label_1af1dc;
            case 0x1AF218u: goto label_1af218;
            case 0x1AF224u: goto label_1af224;
            case 0x1AF270u: goto label_1af270;
            case 0x1AF288u: goto label_1af288;
            case 0x1AF2D8u: goto label_1af2d8;
            case 0x1AF2F8u: goto label_1af2f8;
            case 0x1AF300u: goto label_1af300;
            case 0x1AF308u: goto label_1af308;
            case 0x1AF394u: goto label_1af394;
            case 0x1AF3B0u: goto label_1af3b0;
            case 0x1AF3B4u: goto label_1af3b4;
            case 0x1AF3BCu: goto label_1af3bc;
            case 0x1AF410u: goto label_1af410;
            case 0x1AF428u: goto label_1af428;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF434u: goto label_1af434;
            case 0x1AF488u: goto label_1af488;
            case 0x1AF4A4u: goto label_1af4a4;
            case 0x1AF4B8u: goto label_1af4b8;
            case 0x1AF4E8u: goto label_1af4e8;
            case 0x1AF50Cu: goto label_1af50c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF130u;
    // 0x1af130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1af134: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1af134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1af138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af13c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af13cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af140: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1af140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af144: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1af144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1af148: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1af148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1af14c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1af14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af150: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1af150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1af154: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1af154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1af158: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1af158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1af15c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1af15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1af160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af164: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1af164u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1af168: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1af168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1af16c: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x1AF16Cu;
    {
        const bool branch_taken_0x1af16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF16Cu;
            // 0x1af170: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af16c) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF174u;
    // 0x1af174: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1af178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af17c: 0x24424470  addiu       $v0, $v0, 0x4470
    ctx->pc = 0x1af17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17520));
    // 0x1af180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af188: 0x400008  jr          $v0
    ctx->pc = 0x1AF188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF190u: goto label_1af190;
            case 0x1AF1DCu: goto label_1af1dc;
            case 0x1AF224u: goto label_1af224;
            case 0x1AF288u: goto label_1af288;
            case 0x1AF2D8u: goto label_1af2d8;
            case 0x1AF308u: goto label_1af308;
            case 0x1AF3BCu: goto label_1af3bc;
            case 0x1AF434u: goto label_1af434;
            case 0x1AF50Cu: goto label_1af50c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF658u: goto label_1af658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF190u;
label_1af190:
    // 0x1af190: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af194: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af19c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af1a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1af1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af1a4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1af1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1af1a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af1ac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af1b0: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af1b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1af1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1af1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af1bc: 0x0  nop
    ctx->pc = 0x1af1bcu;
    // NOP
    // 0x1af1c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF1C0u;
    {
        const bool branch_taken_0x1af1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1C0u;
            // 0x1af1c4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1c0) {
            ctx->pc = 0x1AF1D0u;
            goto label_1af1d0;
        }
    }
    ctx->pc = 0x1AF1C8u;
    // 0x1af1c8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1af1c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x1af1cc: 0x0  nop
    ctx->pc = 0x1af1ccu;
    // NOP
label_1af1d0:
    // 0x1af1d0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1af1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af1d4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1AF1D4u;
    {
        const bool branch_taken_0x1af1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1D4u;
            // 0x1af1d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1d4) {
            ctx->pc = 0x1AF300u;
            goto label_1af300;
        }
    }
    ctx->pc = 0x1AF1DCu;
label_1af1dc:
    // 0x1af1dc: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af1e0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af1e8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af1ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1af1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af1f0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1af1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1af1f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af1f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af1fc: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af200: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1af200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af204: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1af204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af208: 0x0  nop
    ctx->pc = 0x1af208u;
    // NOP
    // 0x1af20c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF20Cu;
    {
        const bool branch_taken_0x1af20c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF20Cu;
            // 0x1af210: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af20c) {
            ctx->pc = 0x1AF218u;
            goto label_1af218;
        }
    }
    ctx->pc = 0x1AF214u;
    // 0x1af214: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1af214u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1af218:
    // 0x1af218: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1af218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af21c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1AF21Cu;
    {
        const bool branch_taken_0x1af21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF21Cu;
            // 0x1af220: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af21c) {
            ctx->pc = 0x1AF300u;
            goto label_1af300;
        }
    }
    ctx->pc = 0x1AF224u;
label_1af224:
    // 0x1af224: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af228: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af22c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af230: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af234: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1af234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af238: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1af238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1af23c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af240: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1af244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af248: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1af24c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af250: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af254: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af254u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af258: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1af258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af25c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1af25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af260: 0x0  nop
    ctx->pc = 0x1af260u;
    // NOP
    // 0x1af264: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF264u;
    {
        const bool branch_taken_0x1af264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF264u;
            // 0x1af268: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af264) {
            ctx->pc = 0x1AF270u;
            goto label_1af270;
        }
    }
    ctx->pc = 0x1AF26Cu;
    // 0x1af26c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1af26cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1af270:
    // 0x1af270: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1af270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1af274: 0x0  nop
    ctx->pc = 0x1af274u;
    // NOP
    // 0x1af278: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF278u;
            // 0x1af27c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF2F8u;
            goto label_1af2f8;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AF280u;
    {
        const bool branch_taken_0x1af280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF280u;
            // 0x1af284: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af280) {
            ctx->pc = 0x1AF2F8u;
            goto label_1af2f8;
        }
    }
    ctx->pc = 0x1AF288u;
label_1af288:
    // 0x1af288: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af28c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af294: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af298: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1af298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af29c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1af2a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af2a4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1af2a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af2ac: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1af2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1af2b0: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1af2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1af2b4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1AF2B4u;
    SET_GPR_U32(ctx, 31, 0x1AF2BCu);
    ctx->pc = 0x1AF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2B4u;
            // 0x1af2b8: 0xad630140  sw          $v1, 0x140($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2BCu; }
        if (ctx->pc != 0x1AF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2BCu; }
        if (ctx->pc != 0x1AF2BCu) { return; }
    }
    ctx->pc = 0x1AF2BCu;
    // 0x1af2bc: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1af2bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1af2c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1af2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1af2c4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1af2c4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1af2c8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1af2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1af2cc: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1AF2CCu;
    {
        const bool branch_taken_0x1af2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2CCu;
            // 0x1af2d0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2cc) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF2D4u;
    // 0x1af2d4: 0x0  nop
    ctx->pc = 0x1af2d4u;
    // NOP
label_1af2d8:
    // 0x1af2d8: 0x8d620140  lw          $v0, 0x140($t3)
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af2dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af2e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af2e4: 0xad620140  sw          $v0, 0x140($t3)
    ctx->pc = 0x1af2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 2));
    // 0x1af2e8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1af2ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1af2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af2f0: 0x46000004  c1          0x4
    ctx->pc = 0x1af2f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1af2f4: 0x0  nop
    ctx->pc = 0x1af2f4u;
    // NOP
label_1af2f8:
    // 0x1af2f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af2fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1af300:
    // 0x1af300: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1AF300u;
    {
        const bool branch_taken_0x1af300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF300u;
            // 0x1af304: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af300) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF308u;
label_1af308:
    // 0x1af308: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af30c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af314: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af318: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x1af318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1af31c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1af31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1af320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af324: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af328: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1af328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af32c: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1af330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af334: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af338: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1af338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af33c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1af340: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af344: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x1af344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1af348: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af34c: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af34cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af354: 0x108500cc  beq         $a0, $a1, . + 4 + (0xCC << 2)
    ctx->pc = 0x1AF354u;
    {
        const bool branch_taken_0x1af354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AF358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF354u;
            // 0x1af358: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af354) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF35Cu;
    // 0x1af35c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1af35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1af360: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1af360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1af364: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1af364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af368: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1af368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1af36c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1af36cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x1af370: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x1af370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1af374: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1af374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1af378: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1af37c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1af37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1af380: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AF380u;
    {
        const bool branch_taken_0x1af380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF380u;
            // 0x1af384: 0xacc50018  sw          $a1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af380) {
            ctx->pc = 0x1AF3B0u;
            goto label_1af3b0;
        }
    }
    ctx->pc = 0x1AF388u;
    // 0x1af388: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1af38c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AF38Cu;
    {
        const bool branch_taken_0x1af38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af38c) {
            ctx->pc = 0x1AF390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF38Cu;
            // 0x1af390: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF394u;
            goto label_1af394;
        }
    }
    ctx->pc = 0x1AF394u;
label_1af394:
    // 0x1af394: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1af394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af398: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1af398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1af39c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1af39cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1af3a0: 0x1012  mflo        $v0
    ctx->pc = 0x1af3a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1af3a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF3A4u;
    {
        const bool branch_taken_0x1af3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3A4u;
            // 0x1af3a8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3a4) {
            ctx->pc = 0x1AF3B4u;
            goto label_1af3b4;
        }
    }
    ctx->pc = 0x1AF3ACu;
    // 0x1af3ac: 0x0  nop
    ctx->pc = 0x1af3acu;
    // NOP
label_1af3b0:
    // 0x1af3b0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1af3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_1af3b4:
    // 0x1af3b4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1AF3B4u;
    {
        const bool branch_taken_0x1af3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3B4u;
            // 0x1af3b8: 0xacc40014  sw          $a0, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3b4) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF3BCu;
label_1af3bc:
    // 0x1af3bc: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af3c4: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1af3c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af3cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af3d0: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af3d4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af3d8: 0x148500ab  bne         $a0, $a1, . + 4 + (0xAB << 2)
    ctx->pc = 0x1AF3D8u;
    {
        const bool branch_taken_0x1af3d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AF3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3D8u;
            // 0x1af3dc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3d8) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF3E0u;
    // 0x1af3e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1af3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1af3e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af3e8: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1af3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3ec: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1af3f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1af3f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1af3f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1af3f8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1af3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1af3fc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF3FCu;
    {
        const bool branch_taken_0x1af3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3FCu;
            // 0x1af400: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3fc) {
            ctx->pc = 0x1AF428u;
            goto label_1af428;
        }
    }
    ctx->pc = 0x1AF404u;
    // 0x1af404: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1af404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1af408: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AF408u;
    {
        const bool branch_taken_0x1af408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af408) {
            ctx->pc = 0x1AF40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF408u;
            // 0x1af40c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF410u;
            goto label_1af410;
        }
    }
    ctx->pc = 0x1AF410u;
label_1af410:
    // 0x1af410: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1af410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1af414: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x1af414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1af418: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1af418u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1af41c: 0x1012  mflo        $v0
    ctx->pc = 0x1af41cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1af420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF420u;
    {
        const bool branch_taken_0x1af420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF420u;
            // 0x1af424: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af420) {
            ctx->pc = 0x1AF42Cu;
            goto label_1af42c;
        }
    }
    ctx->pc = 0x1AF428u;
label_1af428:
    // 0x1af428: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1af428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_1af42c:
    // 0x1af42c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1AF42Cu;
    {
        const bool branch_taken_0x1af42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF42Cu;
            // 0x1af430: 0xacc70014  sw          $a3, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af42c) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF434u;
label_1af434:
    // 0x1af434: 0x8d620140  lw          $v0, 0x140($t3)
    ctx->pc = 0x1af434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af43c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1af43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af440: 0xad620140  sw          $v0, 0x140($t3)
    ctx->pc = 0x1af440u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 2));
    // 0x1af444: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1af444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1af448: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x1af448u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af44c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1af450: 0x8c51e84c  lw          $s1, -0x17B4($v0)
    ctx->pc = 0x1af450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1af454: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1af454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1af458: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1af45c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1af45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af460: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1af460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1af464: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af468: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1af468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1af46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af470: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af474: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1af474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1af478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af47c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1af47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1af480: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF480u;
    {
        const bool branch_taken_0x1af480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF480u;
            // 0x1af484: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af480) {
            ctx->pc = 0x1AF4A4u;
            goto label_1af4a4;
        }
    }
    ctx->pc = 0x1AF488u;
label_1af488:
    // 0x1af488: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1af488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1af48c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1af48cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1af490: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1af494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1af494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af498: 0x0  nop
    ctx->pc = 0x1af498u;
    // NOP
    // 0x1af49c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF49Cu;
    {
        const bool branch_taken_0x1af49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF49Cu;
            // 0x1af4a0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af49c) {
            ctx->pc = 0x1AF488u;
            runtime->cooperativeGuestYield();
            goto label_1af488;
        }
    }
    ctx->pc = 0x1AF4A4u;
label_1af4a4:
    // 0x1af4a4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1af4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1af4a8: 0x1a800077  blez        $s4, . + 4 + (0x77 << 2)
    ctx->pc = 0x1AF4A8u;
    {
        const bool branch_taken_0x1af4a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1AF4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4A8u;
            // 0x1af4ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4a8) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF4B0u;
    // 0x1af4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b4: 0x0  nop
    ctx->pc = 0x1af4b4u;
    // NOP
label_1af4b8:
    // 0x1af4b8: 0xc04d814  jal         func_136050
    ctx->pc = 0x1AF4B8u;
    SET_GPR_U32(ctx, 31, 0x1AF4C0u);
    ctx->pc = 0x1AF4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4B8u;
            // 0x1af4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136050u;
    if (runtime->hasFunction(0x136050u)) {
        auto targetFn = runtime->lookupFunction(0x136050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4C0u; }
        if (ctx->pc != 0x1AF4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_136050_0x136260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4C0u; }
        if (ctx->pc != 0x1AF4C0u) { return; }
    }
    ctx->pc = 0x1AF4C0u;
    // 0x1af4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1af4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4c4: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x1af4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1af4c8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1af4cc: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x1af4ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1af4d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF4D0u;
    {
        const bool branch_taken_0x1af4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4D0u;
            // 0x1af4d4: 0x2485000c  addiu       $a1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4d0) {
            ctx->pc = 0x1AF4E8u;
            goto label_1af4e8;
        }
    }
    ctx->pc = 0x1AF4D8u;
    // 0x1af4d8: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x1af4d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1af4dc: 0x2483000e  addiu       $v1, $a0, 0xE
    ctx->pc = 0x1af4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x1af4e0: 0x3842006f  xori        $v0, $v0, 0x6F
    ctx->pc = 0x1af4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)111);
    // 0x1af4e4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1af4e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1af4e8:
    // 0x1af4e8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1AF4E8u;
    SET_GPR_U32(ctx, 31, 0x1AF4F0u);
    ctx->pc = 0x1AF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4E8u;
            // 0x1af4ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F0u; }
        if (ctx->pc != 0x1AF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4F0u; }
        if (ctx->pc != 0x1AF4F0u) { return; }
    }
    ctx->pc = 0x1AF4F0u;
    // 0x1af4f0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1AF4F0u;
    {
        const bool branch_taken_0x1af4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4F0u;
            // 0x1af4f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4f0) {
            ctx->pc = 0x1AF650u;
            goto label_1af650;
        }
    }
    ctx->pc = 0x1AF4F8u;
    // 0x1af4f8: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1af4fc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AF4FCu;
    {
        const bool branch_taken_0x1af4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af4fc) {
            ctx->pc = 0x1AF500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4FCu;
            // 0x1af500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF4B8u;
            runtime->cooperativeGuestYield();
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF504u;
    // 0x1af504: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1AF504u;
    {
        const bool branch_taken_0x1af504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF504u;
            // 0x1af508: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af504) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF50Cu;
label_1af50c:
    // 0x1af50c: 0x8d650140  lw          $a1, 0x140($t3)
    ctx->pc = 0x1af50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af510: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1af510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1af514: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af518: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af518u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af51c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af520: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1af520u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af524: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x1af524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1af528: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af52c: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af52cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af530: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af534: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1af534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af538: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x1af538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1af53c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af540: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af540u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af544: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af548: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1af548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af54c: 0x24a3fffc  addiu       $v1, $a1, -0x4
    ctx->pc = 0x1af54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1af550: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af554: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af554u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af558: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af55c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1af55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af560: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x1af560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x1af564: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1af564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1af568: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1af568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1af56c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af570: 0x8c64cac8  lw          $a0, -0x3538($v1)
    ctx->pc = 0x1af570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953672)));
    // 0x1af574: 0xad650140  sw          $a1, 0x140($t3)
    ctx->pc = 0x1af574u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 5));
    // 0x1af578: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1af578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af57c: 0xc091258  jal         func_244960
    ctx->pc = 0x1AF57Cu;
    SET_GPR_U32(ctx, 31, 0x1AF584u);
    ctx->pc = 0x1AF580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF57Cu;
            // 0x1af580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF584u; }
        if (ctx->pc != 0x1AF584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF584u; }
        if (ctx->pc != 0x1AF584u) { return; }
    }
    ctx->pc = 0x1AF584u;
    // 0x1af584: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AF584u;
    {
        const bool branch_taken_0x1af584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF584u;
            // 0x1af588: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af584) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF58Cu;
    // 0x1af58c: 0x0  nop
    ctx->pc = 0x1af58cu;
    // NOP
label_1af590:
    // 0x1af590: 0x8d620140  lw          $v0, 0x140($t3)
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af598: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af59c: 0xad620140  sw          $v0, 0x140($t3)
    ctx->pc = 0x1af59cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 2));
    // 0x1af5a0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1af5a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af5a8: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1af5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1af5ac: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1AF5ACu;
    {
        const bool branch_taken_0x1af5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5ACu;
            // 0x1af5b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5ac) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF5B4u;
    // 0x1af5b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1af5b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af5bc: 0x8c42cac8  lw          $v0, -0x3538($v0)
    ctx->pc = 0x1af5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953672)));
    // 0x1af5c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af5c4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1af5c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1AF5C8u;
    {
        const bool branch_taken_0x1af5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5C8u;
            // 0x1af5cc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5c8) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF5D0u;
label_1af5d0:
    // 0x1af5d0: 0x8d630140  lw          $v1, 0x140($t3)
    ctx->pc = 0x1af5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1af5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1af5e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af5e4: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af5e8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af5ec: 0xc06cb48  jal         func_1B2D20
    ctx->pc = 0x1AF5ECu;
    SET_GPR_U32(ctx, 31, 0x1AF5F4u);
    ctx->pc = 0x1AF5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5ECu;
            // 0x1af5f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D20u;
    if (runtime->hasFunction(0x1B2D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5F4u; }
        if (ctx->pc != 0x1AF5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D20_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5F4u; }
        if (ctx->pc != 0x1AF5F4u) { return; }
    }
    ctx->pc = 0x1AF5F4u;
    // 0x1af5f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AF5F4u;
    {
        const bool branch_taken_0x1af5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5F4u;
            // 0x1af5f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5f4) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF5FCu;
    // 0x1af5fc: 0x0  nop
    ctx->pc = 0x1af5fcu;
    // NOP
label_1af600:
    // 0x1af600: 0x8d660140  lw          $a2, 0x140($t3)
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af604: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1af604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1af608: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af60c: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af60cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af610: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1af614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af618: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1af61c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1af61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1af620: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af624: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af628: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x1af628u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1af62c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af630: 0xc06cb5c  jal         func_1B2D70
    ctx->pc = 0x1AF630u;
    SET_GPR_U32(ctx, 31, 0x1AF638u);
    ctx->pc = 0x1AF634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF630u;
            // 0x1af634: 0xad660140  sw          $a2, 0x140($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D70u;
    if (runtime->hasFunction(0x1B2D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF638u; }
        if (ctx->pc != 0x1AF638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D70_0x1b2d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF638u; }
        if (ctx->pc != 0x1AF638u) { return; }
    }
    ctx->pc = 0x1AF638u;
    // 0x1af638: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AF638u;
    {
        const bool branch_taken_0x1af638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF638u;
            // 0x1af63c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af638) {
            ctx->pc = 0x1AF68Cu;
            goto label_1af68c;
        }
    }
    ctx->pc = 0x1AF640u;
label_1af640:
    // 0x1af640: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1af640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1af644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af648: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AF648u;
    {
        const bool branch_taken_0x1af648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF648u;
            // 0x1af64c: 0xac62caf4  sw          $v0, -0x350C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af648) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF650u;
label_1af650:
    // 0x1af650: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AF650u;
    {
        const bool branch_taken_0x1af650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF650u;
            // 0x1af654: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af650) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF658u;
label_1af658:
    // 0x1af658: 0x8d640140  lw          $a0, 0x140($t3)
    ctx->pc = 0x1af658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x1af65c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1af65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1af660: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1af660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af664: 0xad630140  sw          $v1, 0x140($t3)
    ctx->pc = 0x1af664u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 3));
    // 0x1af668: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af66c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1af66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af670: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1af670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1af674: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1af674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af678: 0xad640140  sw          $a0, 0x140($t3)
    ctx->pc = 0x1af678u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 4));
    // 0x1af67c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1af680: 0xc06cb5c  jal         func_1B2D70
    ctx->pc = 0x1AF680u;
    SET_GPR_U32(ctx, 31, 0x1AF688u);
    ctx->pc = 0x1AF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF680u;
            // 0x1af684: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D70u;
    if (runtime->hasFunction(0x1B2D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF688u; }
        if (ctx->pc != 0x1AF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D70_0x1b2d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF688u; }
        if (ctx->pc != 0x1AF688u) { return; }
    }
    ctx->pc = 0x1AF688u;
label_1af688:
    // 0x1af688: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1af688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1af68c:
    // 0x1af68c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1af68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af690: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1af690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af698: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1af698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af69c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1af69cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af6a4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1af6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1af6a8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1af6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ACu;
            // 0x1af6b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF190u: goto label_1af190;
            case 0x1AF1D0u: goto label_1af1d0;
            case 0x1AF1DCu: goto label_1af1dc;
            case 0x1AF218u: goto label_1af218;
            case 0x1AF224u: goto label_1af224;
            case 0x1AF270u: goto label_1af270;
            case 0x1AF288u: goto label_1af288;
            case 0x1AF2D8u: goto label_1af2d8;
            case 0x1AF2F8u: goto label_1af2f8;
            case 0x1AF300u: goto label_1af300;
            case 0x1AF308u: goto label_1af308;
            case 0x1AF394u: goto label_1af394;
            case 0x1AF3B0u: goto label_1af3b0;
            case 0x1AF3B4u: goto label_1af3b4;
            case 0x1AF3BCu: goto label_1af3bc;
            case 0x1AF410u: goto label_1af410;
            case 0x1AF428u: goto label_1af428;
            case 0x1AF42Cu: goto label_1af42c;
            case 0x1AF434u: goto label_1af434;
            case 0x1AF488u: goto label_1af488;
            case 0x1AF4A4u: goto label_1af4a4;
            case 0x1AF4B8u: goto label_1af4b8;
            case 0x1AF4E8u: goto label_1af4e8;
            case 0x1AF50Cu: goto label_1af50c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF6B4u;
    // 0x1af6b4: 0x0  nop
    ctx->pc = 0x1af6b4u;
    // NOP
}
