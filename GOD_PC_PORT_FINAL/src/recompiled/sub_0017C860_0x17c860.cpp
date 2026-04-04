#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C860
// Address: 0x17c860 - 0x17ca38
void sub_0017C860_0x17c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C860_0x17c860");
#endif

    ctx->pc = 0x17c860u;

    // 0x17c860: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17c864: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c868: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17c86c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c870: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17c874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c878: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x17c878u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x17c87c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17c880: 0xe7bc00a0  swc1        $f28, 0xA0($sp)
    ctx->pc = 0x17c880u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x17c884: 0x46007f46  mov.s       $f29, $f15
    ctx->pc = 0x17c884u;
    ctx->f[29] = FPU_MOV_S(ctx->f[15]);
    // 0x17c888: 0xe7bb0098  swc1        $f27, 0x98($sp)
    ctx->pc = 0x17c888u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17c88c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17c88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c890: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x17c890u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17c894: 0x46009ec6  mov.s       $f27, $f19
    ctx->pc = 0x17c894u;
    ctx->f[27] = FPU_MOV_S(ctx->f[19]);
    // 0x17c898: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x17c898u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17c89c: 0x46009686  mov.s       $f26, $f18
    ctx->pc = 0x17c89cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[18]);
    // 0x17c8a0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x17c8a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17c8a4: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x17c8a4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
    // 0x17c8a8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x17c8a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x17c8ac: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x17c8acu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x17c8b0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x17c8b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17c8b4: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x17c8b4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x17c8b8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x17c8b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17c8bc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x17c8bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x17c8c0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x17c8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17c8c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17c8c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x17c8cc: 0xc7b500b0  lwc1        $f21, 0xB0($sp)
    ctx->pc = 0x17c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17c8d0: 0xc7bc00b8  lwc1        $f28, 0xB8($sp)
    ctx->pc = 0x17c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x17c8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c8d8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17C8D8u;
    SET_GPR_U32(ctx, 31, 0x17C8E0u);
    ctx->pc = 0x17C8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8D8u;
            // 0x17c8dc: 0x24a52a30  addiu       $a1, $a1, 0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8E0u; }
        if (ctx->pc != 0x17C8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8E0u; }
        if (ctx->pc != 0x17C8E0u) { return; }
    }
    ctx->pc = 0x17C8E0u;
    // 0x17c8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8e4: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x17C8E4u;
    SET_GPR_U32(ctx, 31, 0x17C8ECu);
    ctx->pc = 0x17C8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8E4u;
            // 0x17c8e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8ECu; }
        if (ctx->pc != 0x17C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8ECu; }
        if (ctx->pc != 0x17C8ECu) { return; }
    }
    ctx->pc = 0x17C8ECu;
    // 0x17c8ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17c8f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f8: 0xc05f1e4  jal         func_17C790
    ctx->pc = 0x17C8F8u;
    SET_GPR_U32(ctx, 31, 0x17C900u);
    ctx->pc = 0x17C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8F8u;
            // 0x17c8fc: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C790u;
    if (runtime->hasFunction(0x17C790u)) {
        auto targetFn = runtime->lookupFunction(0x17C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C900u; }
        if (ctx->pc != 0x17C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C790_0x17c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C900u; }
        if (ctx->pc != 0x17C900u) { return; }
    }
    ctx->pc = 0x17C900u;
    // 0x17c900: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17c900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17c904: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17c904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17c908: 0x8cc34718  lw          $v1, 0x4718($a2)
    ctx->pc = 0x17c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17c90c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17c90cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17c910: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c918: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17c918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17c91c: 0x8cc44718  lw          $a0, 0x4718($a2)
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17c920: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c924: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17c928: 0x2488002c  addiu       $t0, $a0, 0x2C
    ctx->pc = 0x17c928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x17c92c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c930: 0xacc84718  sw          $t0, 0x4718($a2)
    ctx->pc = 0x17c930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 8));
    // 0x17c934: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x17c934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17c938: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x17c93c: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17c940: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c944: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c948: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x17c948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17c94c: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c950: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c954: 0xe457000c  swc1        $f23, 0xC($v0)
    ctx->pc = 0x17c954u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17c958: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c95c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c960: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x17c960u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x17c964: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c968: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c96c: 0xe4580014  swc1        $f24, 0x14($v0)
    ctx->pc = 0x17c96cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x17c970: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c974: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c978: 0xe4590018  swc1        $f25, 0x18($v0)
    ctx->pc = 0x17c978u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x17c97c: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c980: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c984: 0xe45a001c  swc1        $f26, 0x1C($v0)
    ctx->pc = 0x17c984u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x17c988: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c98c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c990: 0xe45b0020  swc1        $f27, 0x20($v0)
    ctx->pc = 0x17c990u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x17c994: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c998: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c99c: 0xe45d0024  swc1        $f29, 0x24($v0)
    ctx->pc = 0x17c99cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x17c9a0: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c9a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c9a8: 0xe49c0028  swc1        $f28, 0x28($a0)
    ctx->pc = 0x17c9a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17c9ac: 0x8ca24714  lw          $v0, 0x4714($a1)
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c9b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x17c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17c9b4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x17c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x17c9b8: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17c9bc: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17c9c0: 0x8ca44714  lw          $a0, 0x4714($a1)
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18196)));
    // 0x17c9c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c9c8: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17c9cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c9d0: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17c9d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17c9d8: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17c9dc: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17c9e0: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17c9e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c9e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17c9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c9ec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c9f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17c9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c9f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c9f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c9fc: 0xc7bd00a8  lwc1        $f29, 0xA8($sp)
    ctx->pc = 0x17c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x17ca00: 0xc7bc00a0  lwc1        $f28, 0xA0($sp)
    ctx->pc = 0x17ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x17ca04: 0xc7bb0098  lwc1        $f27, 0x98($sp)
    ctx->pc = 0x17ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x17ca08: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x17ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x17ca0c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x17ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x17ca10: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x17ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17ca14: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x17ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17ca18: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x17ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17ca1c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x17ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17ca20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x17ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ca24: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17ca28: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17ca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA2Cu;
            // 0x17ca30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CA34u;
    // 0x17ca34: 0x0  nop
    ctx->pc = 0x17ca34u;
    // NOP
}
