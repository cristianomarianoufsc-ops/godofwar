#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4408
// Address: 0x1f4408 - 0x1f4640
void sub_001F4408_0x1f4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4408_0x1f4408");
#endif

    ctx->pc = 0x1f4408u;

    // 0x1f4408: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f4408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f440c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f440cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f4410: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1f4414: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1f4414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1f4418: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1f4418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1f441c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1f441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1f4420: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1f4424: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f4424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f4428: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1f4428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f442c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1f442cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1f4430: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1F4430u;
    SET_GPR_U32(ctx, 31, 0x1F4438u);
    ctx->pc = 0x1F4434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4430u;
            // 0x1f4434: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4438u; }
        if (ctx->pc != 0x1F4438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4438u; }
        if (ctx->pc != 0x1F4438u) { return; }
    }
    ctx->pc = 0x1F4438u;
    // 0x1f4438: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f4438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f443c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f443cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4440: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f4440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f4444: 0xc07d0c4  jal         func_1F4310
    ctx->pc = 0x1F4444u;
    SET_GPR_U32(ctx, 31, 0x1F444Cu);
    ctx->pc = 0x1F4448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4444u;
            // 0x1f4448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4310u;
    if (runtime->hasFunction(0x1F4310u)) {
        auto targetFn = runtime->lookupFunction(0x1F4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F444Cu; }
        if (ctx->pc != 0x1F444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4310_0x1f4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F444Cu; }
        if (ctx->pc != 0x1F444Cu) { return; }
    }
    ctx->pc = 0x1F444Cu;
    // 0x1f444c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1f444cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1f4450: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f4450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f4454: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f4454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f4458: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F4458u;
    SET_GPR_U32(ctx, 31, 0x1F4460u);
    ctx->pc = 0x1F445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4458u;
            // 0x1f445c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4460u; }
        if (ctx->pc != 0x1F4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4460u; }
        if (ctx->pc != 0x1F4460u) { return; }
    }
    ctx->pc = 0x1F4460u;
    // 0x1f4460: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F4460u;
    SET_GPR_U32(ctx, 31, 0x1F4468u);
    ctx->pc = 0x1F4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4460u;
            // 0x1f4464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4468u; }
        if (ctx->pc != 0x1F4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4468u; }
        if (ctx->pc != 0x1F4468u) { return; }
    }
    ctx->pc = 0x1F4468u;
    // 0x1f4468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f446c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f446cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4470: 0x24a57360  addiu       $a1, $a1, 0x7360
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29536));
    // 0x1f4474: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1F4474u;
    SET_GPR_U32(ctx, 31, 0x1F447Cu);
    ctx->pc = 0x1F4478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4474u;
            // 0x1f4478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F447Cu; }
        if (ctx->pc != 0x1F447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F447Cu; }
        if (ctx->pc != 0x1F447Cu) { return; }
    }
    ctx->pc = 0x1F447Cu;
    // 0x1f447c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f4480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4484: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x1f4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x1f4488: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1F4488u;
    SET_GPR_U32(ctx, 31, 0x1F4490u);
    ctx->pc = 0x1F448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4488u;
            // 0x1f448c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4490u; }
        if (ctx->pc != 0x1F4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4490u; }
        if (ctx->pc != 0x1F4490u) { return; }
    }
    ctx->pc = 0x1F4490u;
    // 0x1f4490: 0x3c12002b  lui         $s2, 0x2B
    ctx->pc = 0x1f4490u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43 << 16));
    // 0x1f4494: 0x3c05153d  lui         $a1, 0x153D
    ctx->pc = 0x1f4494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5437 << 16));
    // 0x1f4498: 0x26527348  addiu       $s2, $s2, 0x7348
    ctx->pc = 0x1f4498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29512));
    // 0x1f449c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44a0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f44a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f44a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f44a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f44a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f44ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f44acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f44b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f44b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f44b4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1f44b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44b8: 0xae306284  sw          $s0, 0x6284($s1)
    ctx->pc = 0x1f44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25220), GPR_U32(ctx, 16));
    // 0x1f44bc: 0x34a5a042  ori         $a1, $a1, 0xA042
    ctx->pc = 0x1f44bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41026);
    // 0x1f44c0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f44c4: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F44C4u;
    SET_GPR_U32(ctx, 31, 0x1F44CCu);
    ctx->pc = 0x1F44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44C4u;
            // 0x1f44c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44CCu; }
        if (ctx->pc != 0x1F44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44CCu; }
        if (ctx->pc != 0x1F44CCu) { return; }
    }
    ctx->pc = 0x1F44CCu;
    // 0x1f44cc: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f44d0: 0x3c053dbf  lui         $a1, 0x3DBF
    ctx->pc = 0x1f44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15807 << 16));
    // 0x1f44d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f44d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1f44d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f44dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f44dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f44e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f44e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f44e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f44e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f44e8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1f44e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44ec: 0x34a5f41c  ori         $a1, $a1, 0xF41C
    ctx->pc = 0x1f44ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62492);
    // 0x1f44f0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f44f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f44f4: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F44F4u;
    SET_GPR_U32(ctx, 31, 0x1F44FCu);
    ctx->pc = 0x1F44F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44F4u;
            // 0x1f44f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44FCu; }
        if (ctx->pc != 0x1F44FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44FCu; }
        if (ctx->pc != 0x1F44FCu) { return; }
    }
    ctx->pc = 0x1F44FCu;
    // 0x1f44fc: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f4500: 0x3c053dbf  lui         $a1, 0x3DBF
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15807 << 16));
    // 0x1f4504: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4508: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f4508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f450c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f450cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f4510: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f4510u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f4514: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f4514u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4518: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1f4518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f451c: 0x34a5f41d  ori         $a1, $a1, 0xF41D
    ctx->pc = 0x1f451cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62493);
    // 0x1f4520: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f4520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f4524: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F4524u;
    SET_GPR_U32(ctx, 31, 0x1F452Cu);
    ctx->pc = 0x1F4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4524u;
            // 0x1f4528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F452Cu; }
        if (ctx->pc != 0x1F452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F452Cu; }
        if (ctx->pc != 0x1F452Cu) { return; }
    }
    ctx->pc = 0x1F452Cu;
    // 0x1f452c: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f4530: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1f4530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1f4534: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f4534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f4538: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f4538u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1f453c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f453cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4540: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1f4540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4544: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4548: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f4548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f454c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1f454cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f4550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4554: 0xc0608a0  jal         func_182280
    ctx->pc = 0x1F4554u;
    SET_GPR_U32(ctx, 31, 0x1F455Cu);
    ctx->pc = 0x1F4558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4554u;
            // 0x1f4558: 0x34a5323b  ori         $a1, $a1, 0x323B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12859);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (runtime->hasFunction(0x182280u)) {
        auto targetFn = runtime->lookupFunction(0x182280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F455Cu; }
        if (ctx->pc != 0x1F455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182280_0x182280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F455Cu; }
        if (ctx->pc != 0x1F455Cu) { return; }
    }
    ctx->pc = 0x1F455Cu;
    // 0x1f455c: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f4560: 0x3c057462  lui         $a1, 0x7462
    ctx->pc = 0x1f4560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29794 << 16));
    // 0x1f4564: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4568: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f456c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F456Cu;
    SET_GPR_U32(ctx, 31, 0x1F4574u);
    ctx->pc = 0x1F4570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F456Cu;
            // 0x1f4570: 0x34a53d84  ori         $a1, $a1, 0x3D84 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15748);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4574u; }
        if (ctx->pc != 0x1F4574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4574u; }
        if (ctx->pc != 0x1F4574u) { return; }
    }
    ctx->pc = 0x1F4574u;
    // 0x1f4574: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f4578: 0x3c058777  lui         $a1, 0x8777
    ctx->pc = 0x1f4578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34679 << 16));
    // 0x1f457c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f457cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4580: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1f4584: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F4584u;
    SET_GPR_U32(ctx, 31, 0x1F458Cu);
    ctx->pc = 0x1F4588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4584u;
            // 0x1f4588: 0x34a5a60e  ori         $a1, $a1, 0xA60E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42510);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F458Cu; }
        if (ctx->pc != 0x1F458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F458Cu; }
        if (ctx->pc != 0x1F458Cu) { return; }
    }
    ctx->pc = 0x1F458Cu;
    // 0x1f458c: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f458cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f4590: 0x3c0534c7  lui         $a1, 0x34C7
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13511 << 16));
    // 0x1f4594: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4598: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1f4598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f459c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F459Cu;
    SET_GPR_U32(ctx, 31, 0x1F45A4u);
    ctx->pc = 0x1F45A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F459Cu;
            // 0x1f45a0: 0x34a526e3  ori         $a1, $a1, 0x26E3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9955);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A4u; }
        if (ctx->pc != 0x1F45A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A4u; }
        if (ctx->pc != 0x1F45A4u) { return; }
    }
    ctx->pc = 0x1F45A4u;
    // 0x1f45a4: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f45a8: 0x3c05f93f  lui         $a1, 0xF93F
    ctx->pc = 0x1f45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63807 << 16));
    // 0x1f45ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f45acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45b0: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1f45b4: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x1F45B4u;
    SET_GPR_U32(ctx, 31, 0x1F45BCu);
    ctx->pc = 0x1F45B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45B4u;
            // 0x1f45b8: 0x34a506b5  ori         $a1, $a1, 0x6B5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1717);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45BCu; }
        if (ctx->pc != 0x1F45BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45BCu; }
        if (ctx->pc != 0x1F45BCu) { return; }
    }
    ctx->pc = 0x1F45BCu;
    // 0x1f45bc: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f45c0: 0x3c0579f7  lui         $a1, 0x79F7
    ctx->pc = 0x1f45c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31223 << 16));
    // 0x1f45c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f45c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45c8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1f45c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f45cc: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x1F45CCu;
    SET_GPR_U32(ctx, 31, 0x1F45D4u);
    ctx->pc = 0x1F45D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45CCu;
            // 0x1f45d0: 0x34a5a78f  ori         $a1, $a1, 0xA78F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42895);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45D4u; }
        if (ctx->pc != 0x1F45D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45D4u; }
        if (ctx->pc != 0x1F45D4u) { return; }
    }
    ctx->pc = 0x1F45D4u;
    // 0x1f45d4: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f45d8: 0x3c0579f7  lui         $a1, 0x79F7
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31223 << 16));
    // 0x1f45dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f45dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45e0: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1f45e4: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x1F45E4u;
    SET_GPR_U32(ctx, 31, 0x1F45ECu);
    ctx->pc = 0x1F45E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45E4u;
            // 0x1f45e8: 0x34a5a790  ori         $a1, $a1, 0xA790 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42896);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45ECu; }
        if (ctx->pc != 0x1F45ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45ECu; }
        if (ctx->pc != 0x1F45ECu) { return; }
    }
    ctx->pc = 0x1F45ECu;
    // 0x1f45ec: 0x8e246284  lw          $a0, 0x6284($s1)
    ctx->pc = 0x1f45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25220)));
    // 0x1f45f0: 0x3c051bcf  lui         $a1, 0x1BCF
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7119 << 16));
    // 0x1f45f4: 0x34a54bae  ori         $a1, $a1, 0x4BAE
    ctx->pc = 0x1f45f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19374);
    // 0x1f45f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f45f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45fc: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x1F45FCu;
    SET_GPR_U32(ctx, 31, 0x1F4604u);
    ctx->pc = 0x1F4600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45FCu;
            // 0x1f4600: 0x27a70078  addiu       $a3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4604u; }
        if (ctx->pc != 0x1F4604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4604u; }
        if (ctx->pc != 0x1F4604u) { return; }
    }
    ctx->pc = 0x1F4604u;
    // 0x1f4604: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1F4604u;
    SET_GPR_U32(ctx, 31, 0x1F460Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F460Cu; }
        if (ctx->pc != 0x1F460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F460Cu; }
        if (ctx->pc != 0x1F460Cu) { return; }
    }
    ctx->pc = 0x1F460Cu;
    // 0x1f460c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4610: 0xc091312  jal         func_244C48
    ctx->pc = 0x1F4610u;
    SET_GPR_U32(ctx, 31, 0x1F4618u);
    ctx->pc = 0x1F4614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4610u;
            // 0x1f4614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244C48u;
    if (runtime->hasFunction(0x244C48u)) {
        auto targetFn = runtime->lookupFunction(0x244C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4618u; }
        if (ctx->pc != 0x1F4618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244C48_0x244c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4618u; }
        if (ctx->pc != 0x1F4618u) { return; }
    }
    ctx->pc = 0x1F4618u;
    // 0x1f4618: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1f4618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f461c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1f461cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f4620: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1f4620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f4624: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f4624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f4628: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1f4628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f462c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1f462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f4630: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1f4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4634: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4634u;
            // 0x1f4638: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F463Cu;
    // 0x1f463c: 0x0  nop
    ctx->pc = 0x1f463cu;
    // NOP
}
