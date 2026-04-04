#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E798
// Address: 0x26e798 - 0x26ebc8
void sub_0026E798_0x26e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E798_0x26e798");
#endif

    ctx->pc = 0x26e798u;

    // 0x26e798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26e798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26e79c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x26e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x26e7a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x26e7a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x26e7a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x26e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x26e7ac: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x26e7acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x26e7b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x26e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x26e7b4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x26e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x26e7b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x26e7bc: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x26e7c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x26e7c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26e7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e7c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e7d0: 0x8e481430  lw          $t0, 0x1430($s2)
    ctx->pc = 0x26e7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
    // 0x26e7d4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x26e7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e7d8: 0x8cc31434  lw          $v1, 0x1434($a2)
    ctx->pc = 0x26e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5172)));
    // 0x26e7dc: 0x8d050044  lw          $a1, 0x44($t0)
    ctx->pc = 0x26e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26e7e0: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x26e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x26e7e4: 0x8d130074  lw          $s3, 0x74($t0)
    ctx->pc = 0x26e7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
    // 0x26e7e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e7ec: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x26e7ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26e7f0: 0xacc31434  sw          $v1, 0x1434($a2)
    ctx->pc = 0x26e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5172), GPR_U32(ctx, 3));
    // 0x26e7f4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x26e7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x26e7f8: 0x8ce2a580  lw          $v0, -0x5A80($a3)
    ctx->pc = 0x26e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944128)));
    // 0x26e7fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E7FCu;
    {
        const bool branch_taken_0x26e7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E7FCu;
            // 0x26e800: 0xad050044  sw          $a1, 0x44($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7fc) {
            ctx->pc = 0x26E818u;
            goto label_26e818;
        }
    }
    ctx->pc = 0x26E804u;
    // 0x26e804: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x26e804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x26e808: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e80c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x26e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x26e810: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26E810u;
    {
        const bool branch_taken_0x26e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E810u;
            // 0x26e814: 0xace0a580  sw          $zero, -0x5A80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294944128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e810) {
            ctx->pc = 0x26E87Cu;
            goto label_26e87c;
        }
    }
    ctx->pc = 0x26E818u;
label_26e818:
    // 0x26e818: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x26e818u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26e81c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x26e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x26e820: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x26e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x26e824: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x26e828: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x26e828u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x26e82c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x26e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x26e830: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x26e830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x26e834: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x26e838: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x26e838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x26e83c: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x26e83cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x26e840: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x26e844: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x26e844u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x26e848: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x26e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x26e84c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x26e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x26e850: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x26e850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x26e854: 0xdd020010  ld          $v0, 0x10($t0)
    ctx->pc = 0x26e854u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x26e858: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x26e858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
    // 0x26e85c: 0x34630090  ori         $v1, $v1, 0x90
    ctx->pc = 0x26e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)144);
    // 0x26e860: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x26e860u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x26e864: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x26e864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x26e868: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x26e868u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x26e86c: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x26e86cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x26e870: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x26e870u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x26e874: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x26e874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x26e878: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x26e878u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_26e87c:
    // 0x26e87c: 0x8e421430  lw          $v0, 0x1430($s2)
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
    // 0x26e880: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26e884: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x26e884u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x26e888: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26e888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26e88c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26e890: 0x263013b8  addiu       $s0, $s1, 0x13B8
    ctx->pc = 0x26e890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    // 0x26e894: 0xdc63a5c8  ld          $v1, -0x5A38($v1)
    ctx->pc = 0x26e894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294944200)));
    // 0x26e898: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x26e898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26e89c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e8a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e8a4: 0xfc430080  sd          $v1, 0x80($v0)
    ctx->pc = 0x26e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
    // 0x26e8a8: 0x8e431430  lw          $v1, 0x1430($s2)
    ctx->pc = 0x26e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
    // 0x26e8ac: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26e8b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26E8B0u;
    {
        const bool branch_taken_0x26e8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E8B0u;
            // 0x26e8b4: 0x3c09002a  lui         $t1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8b0) {
            ctx->pc = 0x26E944u;
            goto label_26e944;
        }
    }
    ctx->pc = 0x26E8B8u;
    // 0x26e8b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26e8bc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26E8BCu;
    {
        const bool branch_taken_0x26e8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e8bc) {
            ctx->pc = 0x26E8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E8BCu;
            // 0x26e8c0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E8F4u;
            goto label_26e8f4;
        }
    }
    ctx->pc = 0x26E8C4u;
    // 0x26e8c4: 0x8e2413b8  lw          $a0, 0x13B8($s1)
    ctx->pc = 0x26e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5048)));
    // 0x26e8c8: 0x846a005e  lh          $t2, 0x5E($v1)
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x26e8cc: 0x84650042  lh          $a1, 0x42($v1)
    ctx->pc = 0x26e8ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x26e8d0: 0x84660058  lh          $a2, 0x58($v1)
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26e8d4: 0x8467005a  lh          $a3, 0x5A($v1)
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x26e8d8: 0x8468005c  lh          $t0, 0x5C($v1)
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26e8dc: 0xc09b62c  jal         func_26D8B0
    ctx->pc = 0x26E8DCu;
    SET_GPR_U32(ctx, 31, 0x26E8E4u);
    ctx->pc = 0x26E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E8DCu;
            // 0x26e8e0: 0x8469004c  lh          $t1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D8B0u;
    if (runtime->hasFunction(0x26D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x26D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8E4u; }
        if (ctx->pc != 0x26E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D8B0_0x26d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8E4u; }
        if (ctx->pc != 0x26E8E4u) { return; }
    }
    ctx->pc = 0x26E8E4u;
    // 0x26e8e4: 0xc09b616  jal         func_26D858
    ctx->pc = 0x26E8E4u;
    SET_GPR_U32(ctx, 31, 0x26E8ECu);
    ctx->pc = 0x26E8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E8E4u;
            // 0x26e8e8: 0x8e2413b8  lw          $a0, 0x13B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D858u;
    if (runtime->hasFunction(0x26D858u)) {
        auto targetFn = runtime->lookupFunction(0x26D858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8ECu; }
        if (ctx->pc != 0x26E8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26d858_0x26d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8ECu; }
        if (ctx->pc != 0x26E8ECu) { return; }
    }
    ctx->pc = 0x26E8ECu;
    // 0x26e8ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26E8ECu;
    {
        const bool branch_taken_0x26e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E8ECu;
            // 0x26e8f0: 0x8e441430  lw          $a0, 0x1430($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8ec) {
            ctx->pc = 0x26E91Cu;
            goto label_26e91c;
        }
    }
    ctx->pc = 0x26E8F4u;
label_26e8f4:
    // 0x26e8f4: 0x846a005e  lh          $t2, 0x5E($v1)
    ctx->pc = 0x26e8f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x26e8f8: 0x84650040  lh          $a1, 0x40($v1)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e8fc: 0x84660058  lh          $a2, 0x58($v1)
    ctx->pc = 0x26e8fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26e900: 0x8467005a  lh          $a3, 0x5A($v1)
    ctx->pc = 0x26e900u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x26e904: 0x8468005c  lh          $t0, 0x5C($v1)
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x26e908: 0xc09b62c  jal         func_26D8B0
    ctx->pc = 0x26E908u;
    SET_GPR_U32(ctx, 31, 0x26E910u);
    ctx->pc = 0x26E90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E908u;
            // 0x26e90c: 0x8469004c  lh          $t1, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D8B0u;
    if (runtime->hasFunction(0x26D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x26D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E910u; }
        if (ctx->pc != 0x26E910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D8B0_0x26d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E910u; }
        if (ctx->pc != 0x26E910u) { return; }
    }
    ctx->pc = 0x26E910u;
    // 0x26e910: 0xc09b616  jal         func_26D858
    ctx->pc = 0x26E910u;
    SET_GPR_U32(ctx, 31, 0x26E918u);
    ctx->pc = 0x26E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E910u;
            // 0x26e914: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D858u;
    if (runtime->hasFunction(0x26D858u)) {
        auto targetFn = runtime->lookupFunction(0x26D858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E918u; }
        if (ctx->pc != 0x26E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26d858_0x26d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E918u; }
        if (ctx->pc != 0x26E918u) { return; }
    }
    ctx->pc = 0x26E918u;
    // 0x26e918: 0x8e441430  lw          $a0, 0x1430($s2)
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
label_26e91c:
    // 0x26e91c: 0xc09b6b6  jal         func_26DAD8
    ctx->pc = 0x26E91Cu;
    SET_GPR_U32(ctx, 31, 0x26E924u);
    ctx->pc = 0x26E920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E91Cu;
            // 0x26e920: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DAD8u;
    if (runtime->hasFunction(0x26DAD8u)) {
        auto targetFn = runtime->lookupFunction(0x26DAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E924u; }
        if (ctx->pc != 0x26E924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DAD8_0x26dad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E924u; }
        if (ctx->pc != 0x26E924u) { return; }
    }
    ctx->pc = 0x26E924u;
    // 0x26e924: 0x8e441430  lw          $a0, 0x1430($s2)
    ctx->pc = 0x26e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
    // 0x26e928: 0xc09b752  jal         func_26DD48
    ctx->pc = 0x26E928u;
    SET_GPR_U32(ctx, 31, 0x26E930u);
    ctx->pc = 0x26E92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E928u;
            // 0x26e92c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DD48u;
    if (runtime->hasFunction(0x26DD48u)) {
        auto targetFn = runtime->lookupFunction(0x26DD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E930u; }
        if (ctx->pc != 0x26E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26dd48_0x26e270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E930u; }
        if (ctx->pc != 0x26E930u) { return; }
    }
    ctx->pc = 0x26E930u;
    // 0x26e930: 0x8e431430  lw          $v1, 0x1430($s2)
    ctx->pc = 0x26e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5168)));
    // 0x26e934: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26e938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26e93c: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x26e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x26e940: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
label_26e944:
    // 0x26e944: 0x8d281430  lw          $t0, 0x1430($t1)
    ctx->pc = 0x26e944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5168)));
    // 0x26e948: 0x8d020070  lw          $v0, 0x70($t0)
    ctx->pc = 0x26e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x26e94c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26E94Cu;
    {
        const bool branch_taken_0x26e94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E94Cu;
            // 0x26e950: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e94c) {
            ctx->pc = 0x26E9CCu;
            goto label_26e9cc;
        }
    }
    ctx->pc = 0x26E954u;
    // 0x26e954: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x26e954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26e958: 0x9502005a  lhu         $v0, 0x5A($t0)
    ctx->pc = 0x26e958u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 90)));
    // 0x26e95c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26e960: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x26e960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26e964: 0x262613b8  addiu       $a2, $s1, 0x13B8
    ctx->pc = 0x26e964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    // 0x26e968: 0x9503005c  lhu         $v1, 0x5C($t0)
    ctx->pc = 0x26e968u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x26e96c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26e970: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x26e970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x26e974: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26e978: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x26e978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26e97c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x26e97cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x26e980: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x26e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26e984: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x26e984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e988: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x26e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e98c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x26e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26e990: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E990u;
    {
        const bool branch_taken_0x26e990 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E990u;
            // 0x26e994: 0x21938  dsll        $v1, $v0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e990) {
            ctx->pc = 0x26E9A4u;
            goto label_26e9a4;
        }
    }
    ctx->pc = 0x26E998u;
    // 0x26e998: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x26e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x26e99c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E99Cu;
    {
        const bool branch_taken_0x26e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E99Cu;
            // 0x26e9a0: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e99c) {
            ctx->pc = 0x26E9A8u;
            goto label_26e9a8;
        }
    }
    ctx->pc = 0x26E9A4u;
label_26e9a4:
    // 0x26e9a4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x26e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_26e9a8:
    // 0x26e9a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e9ac: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x26e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x26e9b0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x26e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26e9b4: 0x262413b8  addiu       $a0, $s1, 0x13B8
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    // 0x26e9b8: 0x8d221430  lw          $v0, 0x1430($t1)
    ctx->pc = 0x26e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5168)));
    // 0x26e9bc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26e9c0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x26e9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26e9c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26E9C4u;
    {
        const bool branch_taken_0x26e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9C4u;
            // 0x26e9c8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9c4) {
            ctx->pc = 0x26EA28u;
            goto label_26ea28;
        }
    }
    ctx->pc = 0x26E9CCu;
label_26e9cc:
    // 0x26e9cc: 0x8d050044  lw          $a1, 0x44($t0)
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26e9d0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26e9d4: 0x9503005c  lhu         $v1, 0x5C($t0)
    ctx->pc = 0x26e9d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x26e9d8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x26e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26e9dc: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x26e9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26e9e0: 0x9504005a  lhu         $a0, 0x5A($t0)
    ctx->pc = 0x26e9e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 90)));
    // 0x26e9e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26e9e8: 0x262613b8  addiu       $a2, $s1, 0x13B8
    ctx->pc = 0x26e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    // 0x26e9ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x26e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x26e9f0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x26e9f4: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x26e9f8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x26e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e9fc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x26e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26ea00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x26ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26ea04: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x26ea08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x26ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26ea0c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x26ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x26ea10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ea14: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x26ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x26ea18: 0x8d221430  lw          $v0, 0x1430($t1)
    ctx->pc = 0x26ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5168)));
    // 0x26ea1c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26ea20: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x26ea20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26ea24: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x26ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_26ea28:
    // 0x26ea28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ea2c: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x26ea2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x26ea30: 0xfc6200c0  sd          $v0, 0xC0($v1)
    ctx->pc = 0x26ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
    // 0x26ea34: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x26ea34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x26ea38: 0x8d481430  lw          $t0, 0x1430($t2)
    ctx->pc = 0x26ea38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5168)));
    // 0x26ea3c: 0x8d02006c  lw          $v0, 0x6C($t0)
    ctx->pc = 0x26ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x26ea40: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x26EA40u;
    {
        const bool branch_taken_0x26ea40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA40u;
            // 0x26ea44: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea40) {
            ctx->pc = 0x26EB3Cu;
            goto label_26eb3c;
        }
    }
    ctx->pc = 0x26EA48u;
    // 0x26ea48: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x26ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26ea4c: 0x3c0c002a  lui         $t4, 0x2A
    ctx->pc = 0x26ea4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)42 << 16));
    // 0x26ea50: 0x8507005c  lh          $a3, 0x5C($t0)
    ctx->pc = 0x26ea50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x26ea54: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x26ea54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26ea58: 0x85060052  lh          $a2, 0x52($t0)
    ctx->pc = 0x26ea58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 82)));
    // 0x26ea5c: 0x258213b8  addiu       $v0, $t4, 0x13B8
    ctx->pc = 0x26ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 5048));
    // 0x26ea60: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x26ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26ea64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x26ea64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26ea68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea6c: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x26ea6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x26ea70: 0x8c4b0034  lw          $t3, 0x34($v0)
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x26ea74: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EA74u;
    {
        const bool branch_taken_0x26ea74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x26EA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA74u;
            // 0x26ea78: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea74) {
            ctx->pc = 0x26EA84u;
            goto label_26ea84;
        }
    }
    ctx->pc = 0x26EA7Cu;
    // 0x26ea7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26EA7Cu;
    {
        const bool branch_taken_0x26ea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA7Cu;
            // 0x26ea80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea7c) {
            ctx->pc = 0x26EA98u;
            goto label_26ea98;
        }
    }
    ctx->pc = 0x26EA84u;
label_26ea84:
    // 0x26ea84: 0x8d020064  lw          $v0, 0x64($t0)
    ctx->pc = 0x26ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x26ea88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EA88u;
    {
        const bool branch_taken_0x26ea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA88u;
            // 0x26ea8c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea88) {
            ctx->pc = 0x26EA98u;
            goto label_26ea98;
        }
    }
    ctx->pc = 0x26EA90u;
    // 0x26ea90: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26EA90u;
    {
        const bool branch_taken_0x26ea90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea90) {
            ctx->pc = 0x26EA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA90u;
            // 0x26ea94: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26EA98u;
            goto label_26ea98;
        }
    }
    ctx->pc = 0x26EA98u;
label_26ea98:
    // 0x26ea98: 0xad240034  sw          $a0, 0x34($t1)
    ctx->pc = 0x26ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 4));
    // 0x26ea9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eaa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26eaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26eaa4: 0x34630261  ori         $v1, $v1, 0x261
    ctx->pc = 0x26eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)609);
    // 0x26eaa8: 0x8d421430  lw          $v0, 0x1430($t2)
    ctx->pc = 0x26eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5168)));
    // 0x26eaac: 0x84420052  lh          $v0, 0x52($v0)
    ctx->pc = 0x26eaacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x26eab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26eab4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26eab8: 0xad220054  sw          $v0, 0x54($t1)
    ctx->pc = 0x26eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 2));
    // 0x26eabc: 0xad640034  sw          $a0, 0x34($t3)
    ctx->pc = 0x26eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 4));
    // 0x26eac0: 0x8d421430  lw          $v0, 0x1430($t2)
    ctx->pc = 0x26eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5168)));
    // 0x26eac4: 0x84420052  lh          $v0, 0x52($v0)
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x26eac8: 0xfca30060  sd          $v1, 0x60($a1)
    ctx->pc = 0x26eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 3));
    // 0x26eacc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26ead0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26ead4: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x26EAD4u;
    {
        const bool branch_taken_0x26ead4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAD4u;
            // 0x26ead8: 0xad620054  sw          $v0, 0x54($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ead4) {
            ctx->pc = 0x26EB0Cu;
            goto label_26eb0c;
        }
    }
    ctx->pc = 0x26EADCu;
    // 0x26eadc: 0x8d421430  lw          $v0, 0x1430($t2)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5168)));
    // 0x26eae0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x26eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26eae4: 0x258313b8  addiu       $v1, $t4, 0x13B8
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 5048));
    // 0x26eae8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26eaec: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x26eaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26eaf0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x26eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26eaf4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x26eaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eaf8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x26eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26eafc: 0xc09bb22  jal         func_26EC88
    ctx->pc = 0x26EAFCu;
    SET_GPR_U32(ctx, 31, 0x26EB04u);
    ctx->pc = 0x26EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAFCu;
            // 0x26eb00: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EC88u;
    if (runtime->hasFunction(0x26EC88u)) {
        auto targetFn = runtime->lookupFunction(0x26EC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB04u; }
        if (ctx->pc != 0x26EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ec88_0x26ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB04u; }
        if (ctx->pc != 0x26EB04u) { return; }
    }
    ctx->pc = 0x26EB04u;
    // 0x26eb04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26EB04u;
    {
        const bool branch_taken_0x26eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb04) {
            ctx->pc = 0x26EB94u;
            goto label_26eb94;
        }
    }
    ctx->pc = 0x26EB0Cu;
label_26eb0c:
    // 0x26eb0c: 0x8d421430  lw          $v0, 0x1430($t2)
    ctx->pc = 0x26eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5168)));
    // 0x26eb10: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26eb14: 0x258313b8  addiu       $v1, $t4, 0x13B8
    ctx->pc = 0x26eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 5048));
    // 0x26eb18: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26eb1c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x26eb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26eb20: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26eb24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb28: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x26eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26eb2c: 0xc09bb22  jal         func_26EC88
    ctx->pc = 0x26EB2Cu;
    SET_GPR_U32(ctx, 31, 0x26EB34u);
    ctx->pc = 0x26EB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB2Cu;
            // 0x26eb30: 0x8ca50018  lw          $a1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EC88u;
    if (runtime->hasFunction(0x26EC88u)) {
        auto targetFn = runtime->lookupFunction(0x26EC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB34u; }
        if (ctx->pc != 0x26EB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ec88_0x26ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB34u; }
        if (ctx->pc != 0x26EB34u) { return; }
    }
    ctx->pc = 0x26EB34u;
    // 0x26eb34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26EB34u;
    {
        const bool branch_taken_0x26eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb34) {
            ctx->pc = 0x26EB94u;
            goto label_26eb94;
        }
    }
    ctx->pc = 0x26EB3Cu;
label_26eb3c:
    // 0x26eb3c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x26EB3Cu;
    {
        const bool branch_taken_0x26eb3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB3Cu;
            // 0x26eb40: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb3c) {
            ctx->pc = 0x26EB70u;
            goto label_26eb70;
        }
    }
    ctx->pc = 0x26EB44u;
    // 0x26eb44: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x26eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26eb48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26eb4c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26eb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26eb50: 0x244213b8  addiu       $v0, $v0, 0x13B8
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5048));
    // 0x26eb54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26eb58: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26eb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb5c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x26eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26eb60: 0xc09bb22  jal         func_26EC88
    ctx->pc = 0x26EB60u;
    SET_GPR_U32(ctx, 31, 0x26EB68u);
    ctx->pc = 0x26EB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB60u;
            // 0x26eb64: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EC88u;
    if (runtime->hasFunction(0x26EC88u)) {
        auto targetFn = runtime->lookupFunction(0x26EC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB68u; }
        if (ctx->pc != 0x26EB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ec88_0x26ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB68u; }
        if (ctx->pc != 0x26EB68u) { return; }
    }
    ctx->pc = 0x26EB68u;
    // 0x26eb68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26EB68u;
    {
        const bool branch_taken_0x26eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb68) {
            ctx->pc = 0x26EB94u;
            goto label_26eb94;
        }
    }
    ctx->pc = 0x26EB70u;
label_26eb70:
    // 0x26eb70: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x26eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x26eb74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26eb78: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26eb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26eb7c: 0x244213b8  addiu       $v0, $v0, 0x13B8
    ctx->pc = 0x26eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5048));
    // 0x26eb80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26eb84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26eb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb88: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x26eb8c: 0xc09bb22  jal         func_26EC88
    ctx->pc = 0x26EB8Cu;
    SET_GPR_U32(ctx, 31, 0x26EB94u);
    ctx->pc = 0x26EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB8Cu;
            // 0x26eb90: 0x8ca50020  lw          $a1, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EC88u;
    if (runtime->hasFunction(0x26EC88u)) {
        auto targetFn = runtime->lookupFunction(0x26EC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB94u; }
        if (ctx->pc != 0x26EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ec88_0x26ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB94u; }
        if (ctx->pc != 0x26EB94u) { return; }
    }
    ctx->pc = 0x26EB94u;
label_26eb94:
    // 0x26eb94: 0xc09bb04  jal         func_26EC10
    ctx->pc = 0x26EB94u;
    SET_GPR_U32(ctx, 31, 0x26EB9Cu);
    ctx->pc = 0x26EC10u;
    if (runtime->hasFunction(0x26EC10u)) {
        auto targetFn = runtime->lookupFunction(0x26EC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB9Cu; }
        if (ctx->pc != 0x26EB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ec10_0x26ec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB9Cu; }
        if (ctx->pc != 0x26EB9Cu) { return; }
    }
    ctx->pc = 0x26EB9Cu;
    // 0x26eb9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26eb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26eba0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26eba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26eba4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26eba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26eba8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26eba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ebac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26ebacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ebb0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x26ebb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ebb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ebb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBB8u;
            // 0x26ebbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E818u: goto label_26e818;
            case 0x26E87Cu: goto label_26e87c;
            case 0x26E8F4u: goto label_26e8f4;
            case 0x26E91Cu: goto label_26e91c;
            case 0x26E944u: goto label_26e944;
            case 0x26E9A4u: goto label_26e9a4;
            case 0x26E9A8u: goto label_26e9a8;
            case 0x26E9CCu: goto label_26e9cc;
            case 0x26EA28u: goto label_26ea28;
            case 0x26EA84u: goto label_26ea84;
            case 0x26EA98u: goto label_26ea98;
            case 0x26EB0Cu: goto label_26eb0c;
            case 0x26EB3Cu: goto label_26eb3c;
            case 0x26EB70u: goto label_26eb70;
            case 0x26EB94u: goto label_26eb94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26EBC0u;
    // 0x26ebc0: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x26ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x26ebc4: 0x0  nop
    ctx->pc = 0x26ebc4u;
    // NOP
}
