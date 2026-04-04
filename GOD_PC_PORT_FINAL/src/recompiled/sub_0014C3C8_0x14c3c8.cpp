#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C3C8
// Address: 0x14c3c8 - 0x14c4e8
void sub_0014C3C8_0x14c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C3C8_0x14c3c8");
#endif

    ctx->pc = 0x14c3c8u;

    // 0x14c3c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14c3cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14c3d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14c3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14c3dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14c3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14c3e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14c3e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x14c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x14c3ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14c3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14c3f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c3fc: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x14C3FCu;
    SET_GPR_U32(ctx, 31, 0x14C404u);
    ctx->pc = 0x14C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3FCu;
            // 0x14c400: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C404u; }
        if (ctx->pc != 0x14C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C404u; }
        if (ctx->pc != 0x14C404u) { return; }
    }
    ctx->pc = 0x14C404u;
    // 0x14c404: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x14c408: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x14c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x14c40c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14c410: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x14c414: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14c418: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x14C418u;
    SET_GPR_U32(ctx, 31, 0x14C420u);
    ctx->pc = 0x14C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C418u;
            // 0x14c41c: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C420u; }
        if (ctx->pc != 0x14C420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C420u; }
        if (ctx->pc != 0x14C420u) { return; }
    }
    ctx->pc = 0x14C420u;
    // 0x14c420: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x14c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x14c424: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14c428: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14c428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c42c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x14c430: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14c430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14c434: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x14c434u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x14c438: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14c438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x14c43c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x14c43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14c440: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x14c440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x14c444: 0x2138025  or          $s0, $s0, $s3
    ctx->pc = 0x14c444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 19));
    // 0x14c448: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14c448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14c44c: 0x14a63c  dsll32      $s4, $s4, 24
    ctx->pc = 0x14c44cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 24));
    // 0x14c450: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x14c450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    // 0x14c454: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x14c454u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x14c458: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x14c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x14c45c: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x14c45cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x14c460: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x14c460u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x14c464: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x14c468: 0xfc500010  sd          $s0, 0x10($v0)
    ctx->pc = 0x14c468u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 16));
    // 0x14c46c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x14c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x14c470: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14c474: 0x2358825  or          $s1, $s1, $s5
    ctx->pc = 0x14c474u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 21));
    // 0x14c478: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x14c478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x14c47c: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x14c480: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x14c480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x14c484: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x14c484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x14c488: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x14c488u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x14c48c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x14c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x14c490: 0xae44f168  sw          $a0, -0xE98($s2)
    ctx->pc = 0x14c490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 4));
    // 0x14c494: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x14c494u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x14c498: 0xfc490008  sd          $t1, 0x8($v0)
    ctx->pc = 0x14c498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 9));
    // 0x14c49c: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x14c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x14c4a0: 0xfc510020  sd          $s1, 0x20($v0)
    ctx->pc = 0x14c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 17));
    // 0x14c4a4: 0xfc460028  sd          $a2, 0x28($v0)
    ctx->pc = 0x14c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 6));
    // 0x14c4a8: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x14c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x14c4ac: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x14c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x14c4b0: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x14c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x14c4b4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x14C4B4u;
    SET_GPR_U32(ctx, 31, 0x14C4BCu);
    ctx->pc = 0x14C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4B4u;
            // 0x14c4b8: 0xfc400030  sd          $zero, 0x30($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4BCu; }
        if (ctx->pc != 0x14C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4BCu; }
        if (ctx->pc != 0x14C4BCu) { return; }
    }
    ctx->pc = 0x14C4BCu;
    // 0x14c4bc: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x14C4BCu;
    SET_GPR_U32(ctx, 31, 0x14C4C4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4C4u; }
        if (ctx->pc != 0x14C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4C4u; }
        if (ctx->pc != 0x14C4C4u) { return; }
    }
    ctx->pc = 0x14C4C4u;
    // 0x14c4c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14c4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c4c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14c4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c4cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14c4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c4d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c4d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c4d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14c4d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c4d8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x14c4d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4E0u;
            // 0x14c4e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C4E8u;
}
