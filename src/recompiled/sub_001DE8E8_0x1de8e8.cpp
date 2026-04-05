#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE8E8
// Address: 0x1de8e8 - 0x1dea98
void sub_001DE8E8_0x1de8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE8E8_0x1de8e8");
#endif

    ctx->pc = 0x1de8e8u;

    // 0x1de8e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1de8ec: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1de8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1de8f0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1de8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1de8f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de8f8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1de8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1de8fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1de8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de900: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DE900u;
    {
        const bool branch_taken_0x1de900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE900u;
            // 0x1de904: 0xffbf00e0  sd          $ra, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de900) {
            ctx->pc = 0x1DE9C0u;
            goto label_1de9c0;
        }
    }
    ctx->pc = 0x1DE908u;
    // 0x1de908: 0xc62c00c4  lwc1        $f12, 0xC4($s1)
    ctx->pc = 0x1de908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de90c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de910: 0xc62d00c8  lwc1        $f13, 0xC8($s1)
    ctx->pc = 0x1de910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de914: 0xc05c130  jal         func_1704C0
    ctx->pc = 0x1DE914u;
    SET_GPR_U32(ctx, 31, 0x1DE91Cu);
    ctx->pc = 0x1DE918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE914u;
            // 0x1de918: 0x922500c0  lbu         $a1, 0xC0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1704C0u;
    if (runtime->hasFunction(0x1704C0u)) {
        auto targetFn = runtime->lookupFunction(0x1704C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE91Cu; }
        if (ctx->pc != 0x1DE91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001704C0_0x1704c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE91Cu; }
        if (ctx->pc != 0x1DE91Cu) { return; }
    }
    ctx->pc = 0x1DE91Cu;
    // 0x1de91c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1de91cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de920: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1de920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1de924: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1de924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1de928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1de92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de930: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1de930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de934: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1de934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de938: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1de938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1de93c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1de93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1de940: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1de944: 0x40f809  jalr        $v0
    ctx->pc = 0x1DE944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DE94Cu);
        ctx->pc = 0x1DE948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE944u;
            // 0x1de948: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE94Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE9C0u: goto label_1de9c0;
            case 0x1DEA40u: goto label_1dea40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE94Cu; }
            if (ctx->pc != 0x1DE94Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DE94Cu;
    // 0x1de94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de950: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1de950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1de954: 0xc05c46e  jal         func_1711B8
    ctx->pc = 0x1DE954u;
    SET_GPR_U32(ctx, 31, 0x1DE95Cu);
    ctx->pc = 0x1DE958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE954u;
            // 0x1de958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711B8u;
    if (runtime->hasFunction(0x1711B8u)) {
        auto targetFn = runtime->lookupFunction(0x1711B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE95Cu; }
        if (ctx->pc != 0x1DE95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001711b8_0x1711b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE95Cu; }
        if (ctx->pc != 0x1DE95Cu) { return; }
    }
    ctx->pc = 0x1DE95Cu;
    // 0x1de95c: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x1de95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1de960: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1de960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1de964: 0xdce4bdf8  ld          $a0, -0x4208($a3)
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x1de968: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1de968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de96c: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1de96cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1de970: 0x23027  nor         $a2, $zero, $v0
    ctx->pc = 0x1de970u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1de974: 0x64820001  daddiu      $v0, $a0, 0x1
    ctx->pc = 0x1de974u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1de978: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1de978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1de97c: 0xfce2bdf8  sd          $v0, -0x4208($a3)
    ctx->pc = 0x1de97cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 2));
    // 0x1de980: 0x46180a  movz        $v1, $v0, $a2
    ctx->pc = 0x1de980u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1de984: 0xfe030068  sd          $v1, 0x68($s0)
    ctx->pc = 0x1de984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
    // 0x1de988: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x1de988u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
    // 0x1de98c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1de98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de990: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1de990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1de994: 0x86180a  movz        $v1, $a0, $a2
    ctx->pc = 0x1de994u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1de998: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1de998u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1de99c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1de99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1de9a0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1de9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1de9a4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1de9a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1de9a8: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1de9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1de9ac: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1de9acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1de9b0: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1de9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1de9b4: 0xfce4bdf8  sd          $a0, -0x4208($a3)
    ctx->pc = 0x1de9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 4));
    // 0x1de9b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE9B8u;
    {
        const bool branch_taken_0x1de9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9B8u;
            // 0x1de9bc: 0xfe030068  sd          $v1, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9b8) {
            ctx->pc = 0x1DEA40u;
            goto label_1dea40;
        }
    }
    ctx->pc = 0x1DE9C0u;
label_1de9c0:
    // 0x1de9c0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1de9c4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1de9c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de9cc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1de9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1de9d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1de9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1de9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9d8: 0xc05c130  jal         func_1704C0
    ctx->pc = 0x1DE9D8u;
    SET_GPR_U32(ctx, 31, 0x1DE9E0u);
    ctx->pc = 0x1DE9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9D8u;
            // 0x1de9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1704C0u;
    if (runtime->hasFunction(0x1704C0u)) {
        auto targetFn = runtime->lookupFunction(0x1704C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9E0u; }
        if (ctx->pc != 0x1DE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001704C0_0x1704c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9E0u; }
        if (ctx->pc != 0x1DE9E0u) { return; }
    }
    ctx->pc = 0x1DE9E0u;
    // 0x1de9e0: 0x97a30070  lhu         $v1, 0x70($sp)
    ctx->pc = 0x1de9e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de9e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1de9e8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1de9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1de9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1de9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de9fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1de9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dea00: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1dea04: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1dea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1dea08: 0x40f809  jalr        $v0
    ctx->pc = 0x1DEA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEA10u);
        ctx->pc = 0x1DEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA08u;
            // 0x1dea0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE9C0u: goto label_1de9c0;
            case 0x1DEA40u: goto label_1dea40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA10u; }
            if (ctx->pc != 0x1DEA10u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA10u;
    // 0x1dea10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dea10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea14: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1dea18: 0xc05c46e  jal         func_1711B8
    ctx->pc = 0x1DEA18u;
    SET_GPR_U32(ctx, 31, 0x1DEA20u);
    ctx->pc = 0x1DEA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA18u;
            // 0x1dea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711B8u;
    if (runtime->hasFunction(0x1711B8u)) {
        auto targetFn = runtime->lookupFunction(0x1711B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA20u; }
        if (ctx->pc != 0x1DEA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001711b8_0x1711b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA20u; }
        if (ctx->pc != 0x1DEA20u) { return; }
    }
    ctx->pc = 0x1DEA20u;
    // 0x1dea20: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1dea24: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1dea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1dea28: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x1dea28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1dea2c: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x1dea2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dea30: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1dea30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1dea34: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x1dea34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x1dea38: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x1dea38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x1dea3c: 0x0  nop
    ctx->pc = 0x1dea3cu;
    // NOP
label_1dea40:
    // 0x1dea40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea44: 0xc04c492  jal         func_131248
    ctx->pc = 0x1DEA44u;
    SET_GPR_U32(ctx, 31, 0x1DEA4Cu);
    ctx->pc = 0x1DEA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA44u;
            // 0x1dea48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA4Cu; }
        if (ctx->pc != 0x1DEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA4Cu; }
        if (ctx->pc != 0x1DEA4Cu) { return; }
    }
    ctx->pc = 0x1DEA4Cu;
    // 0x1dea4c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1dea4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dea50: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dea54: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dea58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dea5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dea60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dea68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dea6c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dea70: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1dea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dea74: 0x40f809  jalr        $v0
    ctx->pc = 0x1DEA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEA7Cu);
        ctx->pc = 0x1DEA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA74u;
            // 0x1dea78: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE9C0u: goto label_1de9c0;
            case 0x1DEA40u: goto label_1dea40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA7Cu; }
            if (ctx->pc != 0x1DEA7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA7Cu;
    // 0x1dea7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dea7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea80: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1dea80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dea84: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1dea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dea88: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1dea88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dea8c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1dea8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dea90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA90u;
            // 0x1dea94: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE9C0u: goto label_1de9c0;
            case 0x1DEA40u: goto label_1dea40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEA98u;
}
