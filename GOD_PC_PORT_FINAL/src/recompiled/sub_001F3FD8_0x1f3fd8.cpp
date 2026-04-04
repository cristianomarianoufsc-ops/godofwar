#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3FD8
// Address: 0x1f3fd8 - 0x1f41a0
void sub_001F3FD8_0x1f3fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3FD8_0x1f3fd8");
#endif

    ctx->pc = 0x1f3fd8u;

    // 0x1f3fd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f3fdc: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f3fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f3fe0: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1f3fe4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1f3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1f3fe8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1f3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1f3fec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1f3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1f3ff0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f3ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f3ff4: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1f3ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1f3ff8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f3ff8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f3ffc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f3ffcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1f4000: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1F4000u;
    SET_GPR_U32(ctx, 31, 0x1F4008u);
    ctx->pc = 0x1F4004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4000u;
            // 0x1f4004: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4008u; }
        if (ctx->pc != 0x1F4008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4008u; }
        if (ctx->pc != 0x1F4008u) { return; }
    }
    ctx->pc = 0x1F4008u;
    // 0x1f4008: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f4008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f400c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f400cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4010: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f4010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f4014: 0xc07cfe0  jal         func_1F3F80
    ctx->pc = 0x1F4014u;
    SET_GPR_U32(ctx, 31, 0x1F401Cu);
    ctx->pc = 0x1F4018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4014u;
            // 0x1f4018: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F80u;
    if (runtime->hasFunction(0x1F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x1F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F401Cu; }
        if (ctx->pc != 0x1F401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3f80_0x1f3fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F401Cu; }
        if (ctx->pc != 0x1F401Cu) { return; }
    }
    ctx->pc = 0x1F401Cu;
    // 0x1f401c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1f4020: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f4020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f4024: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f4024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f4028: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F4028u;
    SET_GPR_U32(ctx, 31, 0x1F4030u);
    ctx->pc = 0x1F402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4028u;
            // 0x1f402c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4030u; }
        if (ctx->pc != 0x1F4030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4030u; }
        if (ctx->pc != 0x1F4030u) { return; }
    }
    ctx->pc = 0x1F4030u;
    // 0x1f4030: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F4030u;
    SET_GPR_U32(ctx, 31, 0x1F4038u);
    ctx->pc = 0x1F4034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4030u;
            // 0x1f4034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4038u; }
        if (ctx->pc != 0x1F4038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4038u; }
        if (ctx->pc != 0x1F4038u) { return; }
    }
    ctx->pc = 0x1F4038u;
    // 0x1f4038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f403c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f403cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4040: 0x24a57338  addiu       $a1, $a1, 0x7338
    ctx->pc = 0x1f4040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29496));
    // 0x1f4044: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1F4044u;
    SET_GPR_U32(ctx, 31, 0x1F404Cu);
    ctx->pc = 0x1F4048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4044u;
            // 0x1f4048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F404Cu; }
        if (ctx->pc != 0x1F404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F404Cu; }
        if (ctx->pc != 0x1F404Cu) { return; }
    }
    ctx->pc = 0x1F404Cu;
    // 0x1f404c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f4050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4054: 0x24428af0  addiu       $v0, $v0, -0x7510
    ctx->pc = 0x1f4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937328));
    // 0x1f4058: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1F4058u;
    SET_GPR_U32(ctx, 31, 0x1F4060u);
    ctx->pc = 0x1F405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4058u;
            // 0x1f405c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4060u; }
        if (ctx->pc != 0x1F4060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4060u; }
        if (ctx->pc != 0x1F4060u) { return; }
    }
    ctx->pc = 0x1F4060u;
    // 0x1f4060: 0x3c11002b  lui         $s1, 0x2B
    ctx->pc = 0x1f4060u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43 << 16));
    // 0x1f4064: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f4064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f4068: 0x26317348  addiu       $s1, $s1, 0x7348
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29512));
    // 0x1f406c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f406cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4070: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f4070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4078: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f4078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f407c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f407cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f4080: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f4080u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4084: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f4084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4088: 0xae506274  sw          $s0, 0x6274($s2)
    ctx->pc = 0x1f4088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 25204), GPR_U32(ctx, 16));
    // 0x1f408c: 0x34a5e3d5  ori         $a1, $a1, 0xE3D5
    ctx->pc = 0x1f408cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58325);
    // 0x1f4090: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f4090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f4094: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F4094u;
    SET_GPR_U32(ctx, 31, 0x1F409Cu);
    ctx->pc = 0x1F4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4094u;
            // 0x1f4098: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F409Cu; }
        if (ctx->pc != 0x1F409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F409Cu; }
        if (ctx->pc != 0x1F409Cu) { return; }
    }
    ctx->pc = 0x1F409Cu;
    // 0x1f409c: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f40a0: 0x3c05b7eb  lui         $a1, 0xB7EB
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47083 << 16));
    // 0x1f40a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f40a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40a8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f40ac: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f40acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f40b0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f40b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f40b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f40b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f40b8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40bc: 0x34a55695  ori         $a1, $a1, 0x5695
    ctx->pc = 0x1f40bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22165);
    // 0x1f40c0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f40c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f40c4: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F40C4u;
    SET_GPR_U32(ctx, 31, 0x1F40CCu);
    ctx->pc = 0x1F40C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40C4u;
            // 0x1f40c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40CCu; }
        if (ctx->pc != 0x1F40CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40CCu; }
        if (ctx->pc != 0x1F40CCu) { return; }
    }
    ctx->pc = 0x1F40CCu;
    // 0x1f40cc: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f40d0: 0x3c057947  lui         $a1, 0x7947
    ctx->pc = 0x1f40d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31047 << 16));
    // 0x1f40d4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f40d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f40d8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f40d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f40dc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f40dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f40e0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f40e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f40e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40e8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f40e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f40ec: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f40f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f40f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f4: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F40F4u;
    SET_GPR_U32(ctx, 31, 0x1F40FCu);
    ctx->pc = 0x1F40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40F4u;
            // 0x1f40f8: 0x34a5b8ab  ori         $a1, $a1, 0xB8AB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47275);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40FCu; }
        if (ctx->pc != 0x1F40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40FCu; }
        if (ctx->pc != 0x1F40FCu) { return; }
    }
    ctx->pc = 0x1F40FCu;
    // 0x1f40fc: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f4100: 0x3c050b1e  lui         $a1, 0xB1E
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2846 << 16));
    // 0x1f4104: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4108: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f4108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f410c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F410Cu;
    SET_GPR_U32(ctx, 31, 0x1F4114u);
    ctx->pc = 0x1F4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F410Cu;
            // 0x1f4110: 0x34a5c59b  ori         $a1, $a1, 0xC59B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50587);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4114u; }
        if (ctx->pc != 0x1F4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4114u; }
        if (ctx->pc != 0x1F4114u) { return; }
    }
    ctx->pc = 0x1F4114u;
    // 0x1f4114: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f4118: 0x3c055caa  lui         $a1, 0x5CAA
    ctx->pc = 0x1f4118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23722 << 16));
    // 0x1f411c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f411cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4120: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1f4120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1f4124: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F4124u;
    SET_GPR_U32(ctx, 31, 0x1F412Cu);
    ctx->pc = 0x1F4128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4124u;
            // 0x1f4128: 0x34a5e128  ori         $a1, $a1, 0xE128 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57640);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F412Cu; }
        if (ctx->pc != 0x1F412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F412Cu; }
        if (ctx->pc != 0x1F412Cu) { return; }
    }
    ctx->pc = 0x1F412Cu;
    // 0x1f412c: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f4130: 0x3c05b839  lui         $a1, 0xB839
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47161 << 16));
    // 0x1f4134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4138: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1f4138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1f413c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F413Cu;
    SET_GPR_U32(ctx, 31, 0x1F4144u);
    ctx->pc = 0x1F4140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F413Cu;
            // 0x1f4140: 0x34a547a5  ori         $a1, $a1, 0x47A5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18341);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4144u; }
        if (ctx->pc != 0x1F4144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4144u; }
        if (ctx->pc != 0x1F4144u) { return; }
    }
    ctx->pc = 0x1F4144u;
    // 0x1f4144: 0x8e446274  lw          $a0, 0x6274($s2)
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25204)));
    // 0x1f4148: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1f4148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1f414c: 0x3c058dc4  lui         $a1, 0x8DC4
    ctx->pc = 0x1f414cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36292 << 16));
    // 0x1f4150: 0x25086278  addiu       $t0, $t0, 0x6278
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25208));
    // 0x1f4154: 0x34a5c112  ori         $a1, $a1, 0xC112
    ctx->pc = 0x1f4154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49426);
    // 0x1f4158: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f415c: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x1f415cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1f4160: 0xc06074a  jal         func_181D28
    ctx->pc = 0x1F4160u;
    SET_GPR_U32(ctx, 31, 0x1F4168u);
    ctx->pc = 0x1F4164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4160u;
            // 0x1f4164: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4168u; }
        if (ctx->pc != 0x1F4168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4168u; }
        if (ctx->pc != 0x1F4168u) { return; }
    }
    ctx->pc = 0x1F4168u;
    // 0x1f4168: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1F4168u;
    SET_GPR_U32(ctx, 31, 0x1F4170u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4170u; }
        if (ctx->pc != 0x1F4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4170u; }
        if (ctx->pc != 0x1F4170u) { return; }
    }
    ctx->pc = 0x1F4170u;
    // 0x1f4170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4174: 0xc0912e2  jal         func_244B88
    ctx->pc = 0x1F4174u;
    SET_GPR_U32(ctx, 31, 0x1F417Cu);
    ctx->pc = 0x1F4178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4174u;
            // 0x1f4178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244B88u;
    if (runtime->hasFunction(0x244B88u)) {
        auto targetFn = runtime->lookupFunction(0x244B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F417Cu; }
        if (ctx->pc != 0x1F417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244B88_0x244b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F417Cu; }
        if (ctx->pc != 0x1F417Cu) { return; }
    }
    ctx->pc = 0x1F417Cu;
    // 0x1f417c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1f417cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f4180: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1f4180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f4184: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1f4184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f4188: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f4188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f418c: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f4190: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f4194: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1f4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4198: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4198u;
            // 0x1f419c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F41A0u;
}
