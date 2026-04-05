#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D0A0
// Address: 0x17d0a0 - 0x17d778
void sub_0017D0A0_0x17d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D0A0_0x17d0a0");
#endif

    ctx->pc = 0x17d0a0u;

    // 0x17d0a0: 0x27bdf7b0  addiu       $sp, $sp, -0x850
    ctx->pc = 0x17d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965168));
    // 0x17d0a4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17d0a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x17d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d0ac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17d0b0: 0xaca04718  sw          $zero, 0x4718($a1)
    ctx->pc = 0x17d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 0));
    // 0x17d0b4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d0b8: 0x7fb00830  sq          $s0, 0x830($sp)
    ctx->pc = 0x17d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 16));
    // 0x17d0bc: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x17d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x17d0c0: 0x7fb10820  sq          $s1, 0x820($sp)
    ctx->pc = 0x17d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 17));
    // 0x17d0c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0c8: 0xffbf0810  sd          $ra, 0x810($sp)
    ctx->pc = 0x17d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 31));
    // 0x17d0cc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d0d0: 0xe7b50848  swc1        $f21, 0x848($sp)
    ctx->pc = 0x17d0d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2120), bits); }
    // 0x17d0d4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x17d0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d0d8: 0xe7b40840  swc1        $f20, 0x840($sp)
    ctx->pc = 0x17d0d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2112), bits); }
    // 0x17d0dc: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d0e0: 0xac434714  sw          $v1, 0x4714($v0)
    ctx->pc = 0x17d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18196), GPR_U32(ctx, 3));
    // 0x17d0e4: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D0E4u;
    SET_GPR_U32(ctx, 31, 0x17D0ECu);
    ctx->pc = 0x17D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0E4u;
            // 0x17d0e8: 0x24097fff  addiu       $t1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0ECu; }
        if (ctx->pc != 0x17D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0ECu; }
        if (ctx->pc != 0x17D0ECu) { return; }
    }
    ctx->pc = 0x17D0ECu;
    // 0x17d0ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17d0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17d0f0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d0f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d0f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0f8: 0x24842a50  addiu       $a0, $a0, 0x2A50
    ctx->pc = 0x17d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10832));
    // 0x17d0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17d0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d100: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d104: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x17d104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x17d108: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d10c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d114: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17d114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17d118: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D118u;
    SET_GPR_U32(ctx, 31, 0x17D120u);
    ctx->pc = 0x17D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D118u;
            // 0x17d11c: 0x24097f0f  addiu       $t1, $zero, 0x7F0F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32527));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D120u; }
        if (ctx->pc != 0x17D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D120u; }
        if (ctx->pc != 0x17D120u) { return; }
    }
    ctx->pc = 0x17D120u;
    // 0x17d120: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d124: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d128: 0x24842a60  addiu       $a0, $a0, 0x2A60
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10848));
    // 0x17d12c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17d130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17d130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d138: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D138u;
    SET_GPR_U32(ctx, 31, 0x17D140u);
    ctx->pc = 0x17D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D138u;
            // 0x17d13c: 0x24097fff  addiu       $t1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D140u; }
        if (ctx->pc != 0x17D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D140u; }
        if (ctx->pc != 0x17D140u) { return; }
    }
    ctx->pc = 0x17D140u;
    // 0x17d140: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d144: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d148: 0x24842a70  addiu       $a0, $a0, 0x2A70
    ctx->pc = 0x17d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10864));
    // 0x17d14c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17d14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d150: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x17d150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d154: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x17d154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d158: 0x24095f00  addiu       $t1, $zero, 0x5F00
    ctx->pc = 0x17d158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24320));
    // 0x17d15c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x17d15cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d160: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D160u;
    SET_GPR_U32(ctx, 31, 0x17D168u);
    ctx->pc = 0x17D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D160u;
            // 0x17d164: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    }
    ctx->pc = 0x17D168u;
    // 0x17d168: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d16c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d170: 0x24842a80  addiu       $a0, $a0, 0x2A80
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
    // 0x17d174: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d178: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d17c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d180: 0x24097100  addiu       $t1, $zero, 0x7100
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x17d184: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x17d184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17d188: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D188u;
    SET_GPR_U32(ctx, 31, 0x17D190u);
    ctx->pc = 0x17D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D188u;
            // 0x17d18c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D190u; }
        if (ctx->pc != 0x17D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D190u; }
        if (ctx->pc != 0x17D190u) { return; }
    }
    ctx->pc = 0x17D190u;
    // 0x17d190: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d194: 0x240a0082  addiu       $t2, $zero, 0x82
    ctx->pc = 0x17d194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x17d198: 0x24842a90  addiu       $a0, $a0, 0x2A90
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10896));
    // 0x17d19c: 0x240b0082  addiu       $t3, $zero, 0x82
    ctx->pc = 0x17d19cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x17d1a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d1a4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17d1a8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d1ac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d1b0: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D1B0u;
    SET_GPR_U32(ctx, 31, 0x17D1B8u);
    ctx->pc = 0x17D1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1B0u;
            // 0x17d1b4: 0x24097002  addiu       $t1, $zero, 0x7002 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28674));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B8u; }
        if (ctx->pc != 0x17D1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B8u; }
        if (ctx->pc != 0x17D1B8u) { return; }
    }
    ctx->pc = 0x17D1B8u;
    // 0x17d1b8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d1bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d1c0: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
    // 0x17d1c4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x17d1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17d1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d1ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1d0: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D1D0u;
    SET_GPR_U32(ctx, 31, 0x17D1D8u);
    ctx->pc = 0x17D1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1D0u;
            // 0x17d1d4: 0x24097001  addiu       $t1, $zero, 0x7001 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1D8u; }
        if (ctx->pc != 0x17D1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1D8u; }
        if (ctx->pc != 0x17D1D8u) { return; }
    }
    ctx->pc = 0x17D1D8u;
    // 0x17d1d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d1dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d1e0: 0x24842ab0  addiu       $a0, $a0, 0x2AB0
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10928));
    // 0x17d1e4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x17d1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17d1e8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d1ec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d1f0: 0x24096200  addiu       $t1, $zero, 0x6200
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x17d1f4: 0x240a00c8  addiu       $t2, $zero, 0xC8
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x17d1f8: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D1F8u;
    SET_GPR_U32(ctx, 31, 0x17D200u);
    ctx->pc = 0x17D1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1F8u;
            // 0x17d1fc: 0x240b00c8  addiu       $t3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D200u; }
        if (ctx->pc != 0x17D200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D200u; }
        if (ctx->pc != 0x17D200u) { return; }
    }
    ctx->pc = 0x17D200u;
    // 0x17d200: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d204: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d208: 0x24842ac0  addiu       $a0, $a0, 0x2AC0
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10944));
    // 0x17d20c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d210: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d214: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d218: 0x24096000  addiu       $t1, $zero, 0x6000
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x17d21c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x17d21cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17d220: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D220u;
    SET_GPR_U32(ctx, 31, 0x17D228u);
    ctx->pc = 0x17D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D220u;
            // 0x17d224: 0x240b0400  addiu       $t3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D228u; }
        if (ctx->pc != 0x17D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D228u; }
        if (ctx->pc != 0x17D228u) { return; }
    }
    ctx->pc = 0x17D228u;
    // 0x17d228: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d22c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d230: 0x24842ad0  addiu       $a0, $a0, 0x2AD0
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10960));
    // 0x17d234: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x17d234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d238: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d23c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d240: 0x24095e00  addiu       $t1, $zero, 0x5E00
    ctx->pc = 0x17d240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24064));
    // 0x17d244: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x17d244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17d248: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D248u;
    SET_GPR_U32(ctx, 31, 0x17D250u);
    ctx->pc = 0x17D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D248u;
            // 0x17d24c: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D250u; }
        if (ctx->pc != 0x17D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D250u; }
        if (ctx->pc != 0x17D250u) { return; }
    }
    ctx->pc = 0x17D250u;
    // 0x17d250: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d254: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d258: 0x24842ae0  addiu       $a0, $a0, 0x2AE0
    ctx->pc = 0x17d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10976));
    // 0x17d25c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x17d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17d260: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d264: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d268: 0x24095e00  addiu       $t1, $zero, 0x5E00
    ctx->pc = 0x17d268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24064));
    // 0x17d26c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x17d26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17d270: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D270u;
    SET_GPR_U32(ctx, 31, 0x17D278u);
    ctx->pc = 0x17D274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D270u;
            // 0x17d274: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D278u; }
        if (ctx->pc != 0x17D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D278u; }
        if (ctx->pc != 0x17D278u) { return; }
    }
    ctx->pc = 0x17D278u;
    // 0x17d278: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d27c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d280: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
    // 0x17d284: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x17d284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x17d288: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d28c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d290: 0x24095e00  addiu       $t1, $zero, 0x5E00
    ctx->pc = 0x17d290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24064));
    // 0x17d294: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x17d294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d298: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D298u;
    SET_GPR_U32(ctx, 31, 0x17D2A0u);
    ctx->pc = 0x17D29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D298u;
            // 0x17d29c: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2A0u; }
        if (ctx->pc != 0x17D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2A0u; }
        if (ctx->pc != 0x17D2A0u) { return; }
    }
    ctx->pc = 0x17D2A0u;
    // 0x17d2a0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d2a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d2a8: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x17d2ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x17d2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d2b0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x17d2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d2b4: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x17d2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d2b8: 0x24095d00  addiu       $t1, $zero, 0x5D00
    ctx->pc = 0x17d2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23808));
    // 0x17d2bc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x17d2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d2c0: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D2C0u;
    SET_GPR_U32(ctx, 31, 0x17D2C8u);
    ctx->pc = 0x17D2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2C0u;
            // 0x17d2c4: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2C8u; }
        if (ctx->pc != 0x17D2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2C8u; }
        if (ctx->pc != 0x17D2C8u) { return; }
    }
    ctx->pc = 0x17D2C8u;
    // 0x17d2c8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d2cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d2d0: 0x24842b10  addiu       $a0, $a0, 0x2B10
    ctx->pc = 0x17d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
    // 0x17d2d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d2d8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x17d2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d2dc: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x17d2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d2e0: 0x24095c00  addiu       $t1, $zero, 0x5C00
    ctx->pc = 0x17d2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x17d2e4: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x17d2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d2e8: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D2E8u;
    SET_GPR_U32(ctx, 31, 0x17D2F0u);
    ctx->pc = 0x17D2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2E8u;
            // 0x17d2ec: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2F0u; }
        if (ctx->pc != 0x17D2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2F0u; }
        if (ctx->pc != 0x17D2F0u) { return; }
    }
    ctx->pc = 0x17D2F0u;
    // 0x17d2f0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d2f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d2f8: 0x24842b20  addiu       $a0, $a0, 0x2B20
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
    // 0x17d2fc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x17d2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17d300: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d304: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d308: 0x24095b00  addiu       $t1, $zero, 0x5B00
    ctx->pc = 0x17d308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23296));
    // 0x17d30c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x17d30cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d310: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D310u;
    SET_GPR_U32(ctx, 31, 0x17D318u);
    ctx->pc = 0x17D314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D310u;
            // 0x17d314: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D318u; }
        if (ctx->pc != 0x17D318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D318u; }
        if (ctx->pc != 0x17D318u) { return; }
    }
    ctx->pc = 0x17D318u;
    // 0x17d318: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d31c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d320: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
    // 0x17d324: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17d324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17d328: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d32c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d330: 0x24095a00  addiu       $t1, $zero, 0x5A00
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x17d334: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x17d334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17d338: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D338u;
    SET_GPR_U32(ctx, 31, 0x17D340u);
    ctx->pc = 0x17D33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D338u;
            // 0x17d33c: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D340u; }
        if (ctx->pc != 0x17D340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D340u; }
        if (ctx->pc != 0x17D340u) { return; }
    }
    ctx->pc = 0x17D340u;
    // 0x17d340: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d344: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d348: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x17d348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x17d34c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x17d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x17d350: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d354: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d358: 0x24095902  addiu       $t1, $zero, 0x5902
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22786));
    // 0x17d35c: 0x240a03e8  addiu       $t2, $zero, 0x3E8
    ctx->pc = 0x17d35cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x17d360: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D360u;
    SET_GPR_U32(ctx, 31, 0x17D368u);
    ctx->pc = 0x17D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D360u;
            // 0x17d364: 0x240b03e8  addiu       $t3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D368u; }
        if (ctx->pc != 0x17D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D368u; }
        if (ctx->pc != 0x17D368u) { return; }
    }
    ctx->pc = 0x17D368u;
    // 0x17d368: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d36c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d370: 0x24842b50  addiu       $a0, $a0, 0x2B50
    ctx->pc = 0x17d370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11088));
    // 0x17d374: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d378: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d37c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d37cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d380: 0x24095901  addiu       $t1, $zero, 0x5901
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22785));
    // 0x17d384: 0x240a03e8  addiu       $t2, $zero, 0x3E8
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x17d388: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D388u;
    SET_GPR_U32(ctx, 31, 0x17D390u);
    ctx->pc = 0x17D38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D388u;
            // 0x17d38c: 0x240b03e8  addiu       $t3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D390u; }
        if (ctx->pc != 0x17D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D390u; }
        if (ctx->pc != 0x17D390u) { return; }
    }
    ctx->pc = 0x17D390u;
    // 0x17d390: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d394: 0x3c0b0004  lui         $t3, 0x4
    ctx->pc = 0x17d394u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4 << 16));
    // 0x17d398: 0x24842b60  addiu       $a0, $a0, 0x2B60
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11104));
    // 0x17d39c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d3a0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d3a4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d3a8: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x17d3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x17d3ac: 0x24095900  addiu       $t1, $zero, 0x5900
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22784));
    // 0x17d3b0: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17d3b4: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D3B4u;
    SET_GPR_U32(ctx, 31, 0x17D3BCu);
    ctx->pc = 0x17D3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3B4u;
            // 0x17d3b8: 0x356bb000  ori         $t3, $t3, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3BCu; }
        if (ctx->pc != 0x17D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3BCu; }
        if (ctx->pc != 0x17D3BCu) { return; }
    }
    ctx->pc = 0x17D3BCu;
    // 0x17d3bc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d3c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d3c4: 0x24842b70  addiu       $a0, $a0, 0x2B70
    ctx->pc = 0x17d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11120));
    // 0x17d3c8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17d3cc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d3d0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d3d4: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17d3d8: 0x240a01f4  addiu       $t2, $zero, 0x1F4
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x17d3dc: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D3DCu;
    SET_GPR_U32(ctx, 31, 0x17D3E4u);
    ctx->pc = 0x17D3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3DCu;
            // 0x17d3e0: 0x240b01f4  addiu       $t3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3E4u; }
        if (ctx->pc != 0x17D3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3E4u; }
        if (ctx->pc != 0x17D3E4u) { return; }
    }
    ctx->pc = 0x17D3E4u;
    // 0x17d3e4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d3e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d3ec: 0x24842b80  addiu       $a0, $a0, 0x2B80
    ctx->pc = 0x17d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11136));
    // 0x17d3f0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17d3f4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d3f8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d3fc: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17d400: 0x240a03e8  addiu       $t2, $zero, 0x3E8
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x17d404: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D404u;
    SET_GPR_U32(ctx, 31, 0x17D40Cu);
    ctx->pc = 0x17D408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D404u;
            // 0x17d408: 0x240b03e8  addiu       $t3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D40Cu; }
        if (ctx->pc != 0x17D40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D40Cu; }
        if (ctx->pc != 0x17D40Cu) { return; }
    }
    ctx->pc = 0x17D40Cu;
    // 0x17d40c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d410: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d414: 0x24842b90  addiu       $a0, $a0, 0x2B90
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11152));
    // 0x17d418: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17d41c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d420: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d424: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17d428: 0x240a01f4  addiu       $t2, $zero, 0x1F4
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x17d42c: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D42Cu;
    SET_GPR_U32(ctx, 31, 0x17D434u);
    ctx->pc = 0x17D430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D42Cu;
            // 0x17d430: 0x240b01f4  addiu       $t3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D434u; }
        if (ctx->pc != 0x17D434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D434u; }
        if (ctx->pc != 0x17D434u) { return; }
    }
    ctx->pc = 0x17D434u;
    // 0x17d434: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d438: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d43c: 0x24842ba0  addiu       $a0, $a0, 0x2BA0
    ctx->pc = 0x17d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11168));
    // 0x17d440: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17d444: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d448: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d44c: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17d44cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17d450: 0x240a01f4  addiu       $t2, $zero, 0x1F4
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x17d454: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D454u;
    SET_GPR_U32(ctx, 31, 0x17D45Cu);
    ctx->pc = 0x17D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D454u;
            // 0x17d458: 0x240b01f4  addiu       $t3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D45Cu; }
        if (ctx->pc != 0x17D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D45Cu; }
        if (ctx->pc != 0x17D45Cu) { return; }
    }
    ctx->pc = 0x17D45Cu;
    // 0x17d45c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d460: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d464: 0x24842bb0  addiu       $a0, $a0, 0x2BB0
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11184));
    // 0x17d468: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x17d468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x17d46c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d470: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d474: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17d474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17d478: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x17d478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17d47c: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D47Cu;
    SET_GPR_U32(ctx, 31, 0x17D484u);
    ctx->pc = 0x17D480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D47Cu;
            // 0x17d480: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D484u; }
        if (ctx->pc != 0x17D484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D484u; }
        if (ctx->pc != 0x17D484u) { return; }
    }
    ctx->pc = 0x17D484u;
    // 0x17d484: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d488: 0x240a01f4  addiu       $t2, $zero, 0x1F4
    ctx->pc = 0x17d488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x17d48c: 0x240b01f4  addiu       $t3, $zero, 0x1F4
    ctx->pc = 0x17d48cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x17d490: 0x24842bc0  addiu       $a0, $a0, 0x2BC0
    ctx->pc = 0x17d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11200));
    // 0x17d494: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17d498: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17d49c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4a0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4a4: 0xc05f32e  jal         func_17CCB8
    ctx->pc = 0x17D4A4u;
    SET_GPR_U32(ctx, 31, 0x17D4ACu);
    ctx->pc = 0x17D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4A4u;
            // 0x17d4a8: 0x24091000  addiu       $t1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB8u;
    if (runtime->hasFunction(0x17CCB8u)) {
        auto targetFn = runtime->lookupFunction(0x17CCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4ACu; }
        if (ctx->pc != 0x17D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CCB8_0x17ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4ACu; }
        if (ctx->pc != 0x17D4ACu) { return; }
    }
    ctx->pc = 0x17D4ACu;
    // 0x17d4ac: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d4b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17d4b4: 0x24842bd0  addiu       $a0, $a0, 0x2BD0
    ctx->pc = 0x17d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11216));
    // 0x17d4b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4c4: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D4C4u;
    SET_GPR_U32(ctx, 31, 0x17D4CCu);
    ctx->pc = 0x17D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4C4u;
            // 0x17d4c8: 0x24095700  addiu       $t1, $zero, 0x5700 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4CCu; }
        if (ctx->pc != 0x17D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4CCu; }
        if (ctx->pc != 0x17D4CCu) { return; }
    }
    ctx->pc = 0x17D4CCu;
    // 0x17d4cc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d4d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4d4: 0x24842be0  addiu       $a0, $a0, 0x2BE0
    ctx->pc = 0x17d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11232));
    // 0x17d4d8: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x17d4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x17d4dc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4e0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d4e4: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D4E4u;
    SET_GPR_U32(ctx, 31, 0x17D4ECu);
    ctx->pc = 0x17D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4E4u;
            // 0x17d4e8: 0x24093000  addiu       $t1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4ECu; }
        if (ctx->pc != 0x17D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4ECu; }
        if (ctx->pc != 0x17D4ECu) { return; }
    }
    ctx->pc = 0x17D4ECu;
    // 0x17d4ec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d4f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4f4: 0x24842bf0  addiu       $a0, $a0, 0x2BF0
    ctx->pc = 0x17d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11248));
    // 0x17d4f8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x17d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17d4fc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d500: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d504: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D504u;
    SET_GPR_U32(ctx, 31, 0x17D50Cu);
    ctx->pc = 0x17D508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D504u;
            // 0x17d508: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D50Cu; }
        if (ctx->pc != 0x17D50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D50Cu; }
        if (ctx->pc != 0x17D50Cu) { return; }
    }
    ctx->pc = 0x17D50Cu;
    // 0x17d50c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d510: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d514: 0x24842c00  addiu       $a0, $a0, 0x2C00
    ctx->pc = 0x17d514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    // 0x17d518: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17d518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17d51c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d520: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d524: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D524u;
    SET_GPR_U32(ctx, 31, 0x17D52Cu);
    ctx->pc = 0x17D528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D524u;
            // 0x17d528: 0x24091000  addiu       $t1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D52Cu; }
        if (ctx->pc != 0x17D52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D52Cu; }
        if (ctx->pc != 0x17D52Cu) { return; }
    }
    ctx->pc = 0x17D52Cu;
    // 0x17d52c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d534: 0x24842c10  addiu       $a0, $a0, 0x2C10
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
    // 0x17d538: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x17d538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17d53c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d540: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d544: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D544u;
    SET_GPR_U32(ctx, 31, 0x17D54Cu);
    ctx->pc = 0x17D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D544u;
            // 0x17d548: 0x24090800  addiu       $t1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D54Cu; }
        if (ctx->pc != 0x17D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D54Cu; }
        if (ctx->pc != 0x17D54Cu) { return; }
    }
    ctx->pc = 0x17D54Cu;
    // 0x17d54c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d554: 0x24842c20  addiu       $a0, $a0, 0x2C20
    ctx->pc = 0x17d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11296));
    // 0x17d558: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x17d558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x17d55c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x17d55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d560: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d564: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D564u;
    SET_GPR_U32(ctx, 31, 0x17D56Cu);
    ctx->pc = 0x17D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D564u;
            // 0x17d568: 0x24090500  addiu       $t1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D56Cu; }
        if (ctx->pc != 0x17D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D56Cu; }
        if (ctx->pc != 0x17D56Cu) { return; }
    }
    ctx->pc = 0x17D56Cu;
    // 0x17d56c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17d570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d578: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d57c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17d580: 0x24842c30  addiu       $a0, $a0, 0x2C30
    ctx->pc = 0x17d580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11312));
    // 0x17d584: 0xc05f2f4  jal         func_17CBD0
    ctx->pc = 0x17D584u;
    SET_GPR_U32(ctx, 31, 0x17D58Cu);
    ctx->pc = 0x17D588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D584u;
            // 0x17d588: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CBD0u;
    if (runtime->hasFunction(0x17CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D58Cu; }
        if (ctx->pc != 0x17D58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CBD0_0x17cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D58Cu; }
        if (ctx->pc != 0x17D58Cu) { return; }
    }
    ctx->pc = 0x17D58Cu;
    // 0x17d58c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d590: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17d594: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D594u;
    SET_GPR_U32(ctx, 31, 0x17D59Cu);
    ctx->pc = 0x17D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D594u;
            // 0x17d598: 0x24842c40  addiu       $a0, $a0, 0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D59Cu; }
        if (ctx->pc != 0x17D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D59Cu; }
        if (ctx->pc != 0x17D59Cu) { return; }
    }
    ctx->pc = 0x17D59Cu;
    // 0x17d59c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17d5a4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5A4u;
    SET_GPR_U32(ctx, 31, 0x17D5ACu);
    ctx->pc = 0x17D5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5A4u;
            // 0x17d5a8: 0x24842c48  addiu       $a0, $a0, 0x2C48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5ACu; }
        if (ctx->pc != 0x17D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5ACu; }
        if (ctx->pc != 0x17D5ACu) { return; }
    }
    ctx->pc = 0x17D5ACu;
    // 0x17d5ac: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17d5b4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5B4u;
    SET_GPR_U32(ctx, 31, 0x17D5BCu);
    ctx->pc = 0x17D5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5B4u;
            // 0x17d5b8: 0x24842c50  addiu       $a0, $a0, 0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5BCu; }
        if (ctx->pc != 0x17D5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5BCu; }
        if (ctx->pc != 0x17D5BCu) { return; }
    }
    ctx->pc = 0x17D5BCu;
    // 0x17d5bc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5c0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x17d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d5c4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5C4u;
    SET_GPR_U32(ctx, 31, 0x17D5CCu);
    ctx->pc = 0x17D5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5C4u;
            // 0x17d5c8: 0x24842c58  addiu       $a0, $a0, 0x2C58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5CCu; }
        if (ctx->pc != 0x17D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5CCu; }
        if (ctx->pc != 0x17D5CCu) { return; }
    }
    ctx->pc = 0x17D5CCu;
    // 0x17d5cc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d5d4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5D4u;
    SET_GPR_U32(ctx, 31, 0x17D5DCu);
    ctx->pc = 0x17D5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5D4u;
            // 0x17d5d8: 0x24842c60  addiu       $a0, $a0, 0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5DCu; }
        if (ctx->pc != 0x17D5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5DCu; }
        if (ctx->pc != 0x17D5DCu) { return; }
    }
    ctx->pc = 0x17D5DCu;
    // 0x17d5dc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5e0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x17d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17d5e4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5E4u;
    SET_GPR_U32(ctx, 31, 0x17D5ECu);
    ctx->pc = 0x17D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5E4u;
            // 0x17d5e8: 0x24842c68  addiu       $a0, $a0, 0x2C68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5ECu; }
        if (ctx->pc != 0x17D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5ECu; }
        if (ctx->pc != 0x17D5ECu) { return; }
    }
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d5f0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17d5f4: 0xc05f3de  jal         func_17CF78
    ctx->pc = 0x17D5F4u;
    SET_GPR_U32(ctx, 31, 0x17D5FCu);
    ctx->pc = 0x17D5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5F4u;
            // 0x17d5f8: 0x24842c70  addiu       $a0, $a0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF78u;
    if (runtime->hasFunction(0x17CF78u)) {
        auto targetFn = runtime->lookupFunction(0x17CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5FCu; }
        if (ctx->pc != 0x17D5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CF78_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5FCu; }
        if (ctx->pc != 0x17D5FCu) { return; }
    }
    ctx->pc = 0x17D5FCu;
    // 0x17d5fc: 0x3c11002b  lui         $s1, 0x2B
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43 << 16));
    // 0x17d600: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17d604: 0x26312a20  addiu       $s1, $s1, 0x2A20
    ctx->pc = 0x17d604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10784));
    // 0x17d608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d60c: 0xc05f1da  jal         func_17C768
    ctx->pc = 0x17D60Cu;
    SET_GPR_U32(ctx, 31, 0x17D614u);
    ctx->pc = 0x17D610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D60Cu;
            // 0x17d610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C768u;
    if (runtime->hasFunction(0x17C768u)) {
        auto targetFn = runtime->lookupFunction(0x17C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D614u; }
        if (ctx->pc != 0x17D614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C768_0x17c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D614u; }
        if (ctx->pc != 0x17D614u) { return; }
    }
    ctx->pc = 0x17D614u;
    // 0x17d614: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x17d614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x17d618: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17d618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17d61c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17d61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d620: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d624: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17d624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d628: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x17d628u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x17d62c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x17d62cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17d630: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x17d630u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x17d634: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x17d634u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x17d638: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d63c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x17d63cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x17d640: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x17d640u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x17d644: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x17d644u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x17d648: 0x24842c78  addiu       $a0, $a0, 0x2C78
    ctx->pc = 0x17d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11384));
    // 0x17d64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d650: 0xc05f218  jal         func_17C860
    ctx->pc = 0x17D650u;
    SET_GPR_U32(ctx, 31, 0x17D658u);
    ctx->pc = 0x17D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D650u;
            // 0x17d654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C860u;
    if (runtime->hasFunction(0x17C860u)) {
        auto targetFn = runtime->lookupFunction(0x17C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D658u; }
        if (ctx->pc != 0x17D658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C860_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D658u; }
        if (ctx->pc != 0x17D658u) { return; }
    }
    ctx->pc = 0x17D658u;
    // 0x17d658: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17d65c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17d65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d660: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x17d660u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x17d664: 0x26101300  addiu       $s0, $s0, 0x1300
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
    // 0x17d668: 0x3c07efff  lui         $a3, 0xEFFF
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61439 << 16));
    // 0x17d66c: 0x3c0800fe  lui         $t0, 0xFE
    ctx->pc = 0x17d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)254 << 16));
    // 0x17d670: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d670u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d674: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x17d674u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x17d678: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x17d678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x17d67c: 0x3508ff7b  ori         $t0, $t0, 0xFF7B
    ctx->pc = 0x17d67cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65403);
    // 0x17d680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d684: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x17d684u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x17d688: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x17d688u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x17d68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d690: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x17d694: 0xc05f28e  jal         func_17CA38
    ctx->pc = 0x17D694u;
    SET_GPR_U32(ctx, 31, 0x17D69Cu);
    ctx->pc = 0x17D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D694u;
            // 0x17d698: 0x3c064400  lui         $a2, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CA38u;
    if (runtime->hasFunction(0x17CA38u)) {
        auto targetFn = runtime->lookupFunction(0x17CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D69Cu; }
        if (ctx->pc != 0x17D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CA38_0x17ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D69Cu; }
        if (ctx->pc != 0x17D69Cu) { return; }
    }
    ctx->pc = 0x17D69Cu;
    // 0x17d69c: 0xc05f202  jal         func_17C808
    ctx->pc = 0x17D69Cu;
    SET_GPR_U32(ctx, 31, 0x17D6A4u);
    ctx->pc = 0x17C808u;
    if (runtime->hasFunction(0x17C808u)) {
        auto targetFn = runtime->lookupFunction(0x17C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6A4u; }
        if (ctx->pc != 0x17D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c808_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6A4u; }
        if (ctx->pc != 0x17D6A4u) { return; }
    }
    ctx->pc = 0x17D6A4u;
    // 0x17d6a4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d6a8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x17d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x17d6ac: 0x248423c0  addiu       $a0, $a0, 0x23C0
    ctx->pc = 0x17d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9152));
    // 0x17d6b0: 0xc05f1da  jal         func_17C768
    ctx->pc = 0x17D6B0u;
    SET_GPR_U32(ctx, 31, 0x17D6B8u);
    ctx->pc = 0x17D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6B0u;
            // 0x17d6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C768u;
    if (runtime->hasFunction(0x17C768u)) {
        auto targetFn = runtime->lookupFunction(0x17C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6B8u; }
        if (ctx->pc != 0x17D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C768_0x17c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6B8u; }
        if (ctx->pc != 0x17D6B8u) { return; }
    }
    ctx->pc = 0x17D6B8u;
    // 0x17d6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6bc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17d6c0: 0xc05f1da  jal         func_17C768
    ctx->pc = 0x17D6C0u;
    SET_GPR_U32(ctx, 31, 0x17D6C8u);
    ctx->pc = 0x17D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6C0u;
            // 0x17d6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C768u;
    if (runtime->hasFunction(0x17C768u)) {
        auto targetFn = runtime->lookupFunction(0x17C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6C8u; }
        if (ctx->pc != 0x17D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C768_0x17c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6C8u; }
        if (ctx->pc != 0x17D6C8u) { return; }
    }
    ctx->pc = 0x17D6C8u;
    // 0x17d6c8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x17d6c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x17d6cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17d6d0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x17d6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17d6d4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d6d8: 0x46008446  mov.s       $f17, $f16
    ctx->pc = 0x17d6d8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x17d6dc: 0x46008486  mov.s       $f18, $f16
    ctx->pc = 0x17d6dcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[16]);
    // 0x17d6e0: 0x460084c6  mov.s       $f19, $f16
    ctx->pc = 0x17d6e0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[16]);
    // 0x17d6e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17d6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d6e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17d6e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x17d6ec: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x17d6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17d6f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17d6f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x17d6f4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x17d6f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x17d6f8: 0x24842c80  addiu       $a0, $a0, 0x2C80
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11392));
    // 0x17d6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d700: 0xc05f218  jal         func_17C860
    ctx->pc = 0x17D700u;
    SET_GPR_U32(ctx, 31, 0x17D708u);
    ctx->pc = 0x17D704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D700u;
            // 0x17d704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C860u;
    if (runtime->hasFunction(0x17C860u)) {
        auto targetFn = runtime->lookupFunction(0x17C860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D708u; }
        if (ctx->pc != 0x17D708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C860_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D708u; }
        if (ctx->pc != 0x17D708u) { return; }
    }
    ctx->pc = 0x17D708u;
    // 0x17d708: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17d708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x17d70c: 0x3c0800f6  lui         $t0, 0xF6
    ctx->pc = 0x17d70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)246 << 16));
    // 0x17d710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d718: 0x3c064809  lui         $a2, 0x4809
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18441 << 16));
    // 0x17d71c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d71cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d720: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x17d720u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x17d724: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x17d724u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x17d728: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x17d728u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x17d72c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17d72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d730: 0x3508ff7b  ori         $t0, $t0, 0xFF7B
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65403);
    // 0x17d734: 0xc05f28e  jal         func_17CA38
    ctx->pc = 0x17D734u;
    SET_GPR_U32(ctx, 31, 0x17D73Cu);
    ctx->pc = 0x17D738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D734u;
            // 0x17d738: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CA38u;
    if (runtime->hasFunction(0x17CA38u)) {
        auto targetFn = runtime->lookupFunction(0x17CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D73Cu; }
        if (ctx->pc != 0x17D73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CA38_0x17ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D73Cu; }
        if (ctx->pc != 0x17D73Cu) { return; }
    }
    ctx->pc = 0x17D73Cu;
    // 0x17d73c: 0xc05f202  jal         func_17C808
    ctx->pc = 0x17D73Cu;
    SET_GPR_U32(ctx, 31, 0x17D744u);
    ctx->pc = 0x17C808u;
    if (runtime->hasFunction(0x17C808u)) {
        auto targetFn = runtime->lookupFunction(0x17C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D744u; }
        if (ctx->pc != 0x17D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c808_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D744u; }
        if (ctx->pc != 0x17D744u) { return; }
    }
    ctx->pc = 0x17D744u;
    // 0x17d744: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17d744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17d748: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x17d74c: 0x24841520  addiu       $a0, $a0, 0x1520
    ctx->pc = 0x17d74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    // 0x17d750: 0xc05f1da  jal         func_17C768
    ctx->pc = 0x17D750u;
    SET_GPR_U32(ctx, 31, 0x17D758u);
    ctx->pc = 0x17D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D750u;
            // 0x17d754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C768u;
    if (runtime->hasFunction(0x17C768u)) {
        auto targetFn = runtime->lookupFunction(0x17C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D758u; }
        if (ctx->pc != 0x17D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C768_0x17c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D758u; }
        if (ctx->pc != 0x17D758u) { return; }
    }
    ctx->pc = 0x17D758u;
    // 0x17d758: 0x7bb00830  lq          $s0, 0x830($sp)
    ctx->pc = 0x17d758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x17d75c: 0x7bb10820  lq          $s1, 0x820($sp)
    ctx->pc = 0x17d75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x17d760: 0xdfbf0810  ld          $ra, 0x810($sp)
    ctx->pc = 0x17d760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x17d764: 0xc7b50848  lwc1        $f21, 0x848($sp)
    ctx->pc = 0x17d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17d768: 0xc7b40840  lwc1        $f20, 0x840($sp)
    ctx->pc = 0x17d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d76c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D76Cu;
            // 0x17d770: 0x27bd0850  addiu       $sp, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D774u;
    // 0x17d774: 0x0  nop
    ctx->pc = 0x17d774u;
    // NOP
}
