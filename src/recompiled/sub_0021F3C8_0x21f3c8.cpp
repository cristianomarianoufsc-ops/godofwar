#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F3C8
// Address: 0x21f3c8 - 0x21f638
void sub_0021F3C8_0x21f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F3C8_0x21f3c8");
#endif

    ctx->pc = 0x21f3c8u;

    // 0x21f3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f3cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21f3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21f3d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21f3d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21f3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21f3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f3dc: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F3DCu;
    SET_GPR_U32(ctx, 31, 0x21F3E4u);
    ctx->pc = 0x21F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3DCu;
            // 0x21f3e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3E4u; }
        if (ctx->pc != 0x21F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3E4u; }
        if (ctx->pc != 0x21F3E4u) { return; }
    }
    ctx->pc = 0x21F3E4u;
    // 0x21f3e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21f3e8: 0x8c62f1f0  lw          $v0, -0xE10($v1)
    ctx->pc = 0x21f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963696)));
    // 0x21f3ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F3ECu;
    {
        const bool branch_taken_0x21f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3ECu;
            // 0x21f3f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3ec) {
            ctx->pc = 0x21F400u;
            goto label_21f400;
        }
    }
    ctx->pc = 0x21F3F4u;
    // 0x21f3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f3f8: 0xac62f1f0  sw          $v0, -0xE10($v1)
    ctx->pc = 0x21f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 2));
    // 0x21f3fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21f400:
    // 0x21f400: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x21f400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x21f404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21f404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f408: 0xc44cc658  lwc1        $f12, -0x39A8($v0)
    ctx->pc = 0x21f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f40c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x21f410: 0x26102d50  addiu       $s0, $s0, 0x2D50
    ctx->pc = 0x21f410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11600));
    // 0x21f414: 0xc0a14de  jal         func_285378
    ctx->pc = 0x21F414u;
    SET_GPR_U32(ctx, 31, 0x21F41Cu);
    ctx->pc = 0x21F418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F414u;
            // 0x21f418: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F41Cu; }
        if (ctx->pc != 0x21F41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F41Cu; }
        if (ctx->pc != 0x21F41Cu) { return; }
    }
    ctx->pc = 0x21F41Cu;
    // 0x21f41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f420: 0xc076f7a  jal         func_1DBDE8
    ctx->pc = 0x21F420u;
    SET_GPR_U32(ctx, 31, 0x21F428u);
    ctx->pc = 0x21F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F420u;
            // 0x21f424: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDE8u;
    if (runtime->hasFunction(0x1DBDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1DBDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F428u; }
        if (ctx->pc != 0x21F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dbde8_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F428u; }
        if (ctx->pc != 0x21F428u) { return; }
    }
    ctx->pc = 0x21F428u;
    // 0x21f428: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21f42c: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x21f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x21f430: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x21f430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21f434: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21f438: 0xa23026  xor         $a2, $a1, $v0
    ctx->pc = 0x21f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x21f43c: 0xa62024  and         $a0, $a1, $a2
    ctx->pc = 0x21f43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x21f440: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x21f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x21f444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F444u;
    {
        const bool branch_taken_0x21f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F444u;
            // 0x21f448: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f444) {
            ctx->pc = 0x21F458u;
            goto label_21f458;
        }
    }
    ctx->pc = 0x21F44Cu;
    // 0x21f44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f450: 0xac62e608  sw          $v0, -0x19F8($v1)
    ctx->pc = 0x21f450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960648), GPR_U32(ctx, 2));
    // 0x21f454: 0x0  nop
    ctx->pc = 0x21f454u;
    // NOP
label_21f458:
    // 0x21f458: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x21f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x21f45c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F45Cu;
    {
        const bool branch_taken_0x21f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F45Cu;
            // 0x21f460: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f45c) {
            ctx->pc = 0x21F470u;
            goto label_21f470;
        }
    }
    ctx->pc = 0x21F464u;
    // 0x21f464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f468: 0xac62e60c  sw          $v0, -0x19F4($v1)
    ctx->pc = 0x21f468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960652), GPR_U32(ctx, 2));
    // 0x21f46c: 0x0  nop
    ctx->pc = 0x21f46cu;
    // NOP
label_21f470:
    // 0x21f470: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f474: 0x8c42e5f0  lw          $v0, -0x1A10($v0)
    ctx->pc = 0x21f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960624)));
    // 0x21f478: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21F478u;
    {
        const bool branch_taken_0x21f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F478u;
            // 0x21f47c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f478) {
            ctx->pc = 0x21F4B0u;
            goto label_21f4b0;
        }
    }
    ctx->pc = 0x21F480u;
    // 0x21f480: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21f484: 0x8e02e608  lw          $v0, -0x19F8($s0)
    ctx->pc = 0x21f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960648)));
    // 0x21f488: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21F488u;
    {
        const bool branch_taken_0x21f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F488u;
            // 0x21f48c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f488) {
            ctx->pc = 0x21F55Cu;
            goto label_21f55c;
        }
    }
    ctx->pc = 0x21F490u;
    // 0x21f490: 0x8c42e60c  lw          $v0, -0x19F4($v0)
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960652)));
    // 0x21f494: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21F494u;
    {
        const bool branch_taken_0x21f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F494u;
            // 0x21f498: 0x8e02e608  lw          $v0, -0x19F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f494) {
            ctx->pc = 0x21F568u;
            goto label_21f568;
        }
    }
    ctx->pc = 0x21F49Cu;
    // 0x21f49c: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x21f49cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x21f4a0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x21f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x21f4a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x21f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x21f4a8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x21F4A8u;
    {
        const bool branch_taken_0x21f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4A8u;
            // 0x21f4ac: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4a8) {
            ctx->pc = 0x21F55Cu;
            goto label_21f55c;
        }
    }
    ctx->pc = 0x21F4B0u;
label_21f4b0:
    // 0x21f4b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21f4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_21f4b8:
    // 0x21f4b8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x21f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21f4bc: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x21f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x21f4c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f4c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f4cc: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x21f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x21f4d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21f4d4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21f4d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21f4d8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x21F4D8u;
    {
        const bool branch_taken_0x21f4d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4D8u;
            // 0x21f4dc: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d8) {
            ctx->pc = 0x21F514u;
            goto label_21f514;
        }
    }
    ctx->pc = 0x21F4E0u;
    // 0x21f4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4e4: 0x24a58018  addiu       $a1, $a1, -0x7FE8
    ctx->pc = 0x21f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
    // 0x21f4e8: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x21F4E8u;
    SET_GPR_U32(ctx, 31, 0x21F4F0u);
    ctx->pc = 0x21F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4E8u;
            // 0x21f4ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4F0u; }
        if (ctx->pc != 0x21F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4F0u; }
        if (ctx->pc != 0x21F4F0u) { return; }
    }
    ctx->pc = 0x21F4F0u;
    // 0x21f4f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F4F0u;
    {
        const bool branch_taken_0x21f4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4F0u;
            // 0x21f4f4: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4f0) {
            ctx->pc = 0x21F50Cu;
            goto label_21f50c;
        }
    }
    ctx->pc = 0x21F4F8u;
    // 0x21f4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4fc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21F4FCu;
    SET_GPR_U32(ctx, 31, 0x21F504u);
    ctx->pc = 0x21F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4FCu;
            // 0x21f500: 0x24a55860  addiu       $a1, $a1, 0x5860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F504u; }
        if (ctx->pc != 0x21F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F504u; }
        if (ctx->pc != 0x21F504u) { return; }
    }
    ctx->pc = 0x21F504u;
    // 0x21f504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F504u;
    {
        const bool branch_taken_0x21f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F504u;
            // 0x21f508: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f504) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F50Cu;
label_21f50c:
    // 0x21f50c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F50Cu;
    {
        const bool branch_taken_0x21f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F50Cu;
            // 0x21f510: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f50c) {
            ctx->pc = 0x21F524u;
            goto label_21f524;
        }
    }
    ctx->pc = 0x21F514u;
label_21f514:
    // 0x21f514: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21f518:
    // 0x21f518: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x21f518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f51c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x21F51Cu;
    {
        const bool branch_taken_0x21f51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F51Cu;
            // 0x21f520: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f51c) {
            ctx->pc = 0x21F4B8u;
            runtime->cooperativeGuestYield();
            goto label_21f4b8;
        }
    }
    ctx->pc = 0x21F524u;
label_21f524:
    // 0x21f524: 0xc087cda  jal         func_21F368
    ctx->pc = 0x21F524u;
    SET_GPR_U32(ctx, 31, 0x21F52Cu);
    ctx->pc = 0x21F368u;
    if (runtime->hasFunction(0x21F368u)) {
        auto targetFn = runtime->lookupFunction(0x21F368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F52Cu; }
        if (ctx->pc != 0x21F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F368_0x21f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F52Cu; }
        if (ctx->pc != 0x21F52Cu) { return; }
    }
    ctx->pc = 0x21F52Cu;
    // 0x21f52c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f530: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f534: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21F534u;
    SET_GPR_U32(ctx, 31, 0x21F53Cu);
    ctx->pc = 0x21F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F534u;
            // 0x21f538: 0xac920254  sw          $s2, 0x254($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F53Cu; }
        if (ctx->pc != 0x21F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F53Cu; }
        if (ctx->pc != 0x21F53Cu) { return; }
    }
    ctx->pc = 0x21F53Cu;
    // 0x21f53c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21f540: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f544: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21f548: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f54c: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21f550: 0xac80e60c  sw          $zero, -0x19F4($a0)
    ctx->pc = 0x21f550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960652), GPR_U32(ctx, 0));
    // 0x21f554: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x21F554u;
    {
        const bool branch_taken_0x21f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F554u;
            // 0x21f558: 0xaca0e608  sw          $zero, -0x19F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f554) {
            ctx->pc = 0x21F620u;
            goto label_21f620;
        }
    }
    ctx->pc = 0x21F55Cu;
label_21f55c:
    // 0x21f55c: 0x8c42e60c  lw          $v0, -0x19F4($v0)
    ctx->pc = 0x21f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960652)));
    // 0x21f560: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21F560u;
    {
        const bool branch_taken_0x21f560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F560u;
            // 0x21f564: 0x8e02e608  lw          $v0, -0x19F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f560) {
            ctx->pc = 0x21F5C8u;
            goto label_21f5c8;
        }
    }
    ctx->pc = 0x21F568u;
label_21f568:
    // 0x21f568: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21F568u;
    {
        const bool branch_taken_0x21f568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F568u;
            // 0x21f56c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f568) {
            ctx->pc = 0x21F5D0u;
            goto label_21f5d0;
        }
    }
    ctx->pc = 0x21F570u;
    // 0x21f570: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x21f574: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x21f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21f578: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21f57c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21f580: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21f584: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x21f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x21f588: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F588u;
    {
        const bool branch_taken_0x21f588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F588u;
            // 0x21f58c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f588) {
            ctx->pc = 0x21F5D0u;
            goto label_21f5d0;
        }
    }
    ctx->pc = 0x21F590u;
    // 0x21f590: 0xc087cda  jal         func_21F368
    ctx->pc = 0x21F590u;
    SET_GPR_U32(ctx, 31, 0x21F598u);
    ctx->pc = 0x21F368u;
    if (runtime->hasFunction(0x21F368u)) {
        auto targetFn = runtime->lookupFunction(0x21F368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F598u; }
        if (ctx->pc != 0x21F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F368_0x21f368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F598u; }
        if (ctx->pc != 0x21F598u) { return; }
    }
    ctx->pc = 0x21F598u;
    // 0x21f598: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f5a0: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f5a4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21F5A4u;
    SET_GPR_U32(ctx, 31, 0x21F5ACu);
    ctx->pc = 0x21F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5A4u;
            // 0x21f5a8: 0xac830258  sw          $v1, 0x258($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5ACu; }
        if (ctx->pc != 0x21F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5ACu; }
        if (ctx->pc != 0x21F5ACu) { return; }
    }
    ctx->pc = 0x21F5ACu;
    // 0x21f5ac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21f5b0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x21f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21f5b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f5b8: 0xac60e60c  sw          $zero, -0x19F4($v1)
    ctx->pc = 0x21f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960652), GPR_U32(ctx, 0));
    // 0x21f5bc: 0xac44e560  sw          $a0, -0x1AA0($v0)
    ctx->pc = 0x21f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
    // 0x21f5c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21F5C0u;
    {
        const bool branch_taken_0x21f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5C0u;
            // 0x21f5c4: 0xae00e608  sw          $zero, -0x19F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5c0) {
            ctx->pc = 0x21F620u;
            goto label_21f620;
        }
    }
    ctx->pc = 0x21F5C8u;
label_21f5c8:
    // 0x21f5c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21f5cc: 0x0  nop
    ctx->pc = 0x21f5ccu;
    // NOP
label_21f5d0:
    // 0x21f5d0: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x21f5d4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x21f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21f5d8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21f5dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21f5e0: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x21f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21f5e4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x21f5e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5E8u;
            // 0x21f5ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F5F8u;
            goto label_21f5f8;
        }
    }
    ctx->pc = 0x21F5F0u;
    // 0x21f5f0: 0xac40e608  sw          $zero, -0x19F8($v0)
    ctx->pc = 0x21f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960648), GPR_U32(ctx, 0));
    // 0x21f5f4: 0x0  nop
    ctx->pc = 0x21f5f4u;
    // NOP
label_21f5f8:
    // 0x21f5f8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x21f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x21f5fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F5FCu;
    {
        const bool branch_taken_0x21f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F5FCu;
            // 0x21f600: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5fc) {
            ctx->pc = 0x21F608u;
            goto label_21f608;
        }
    }
    ctx->pc = 0x21F604u;
    // 0x21f604: 0xac40e60c  sw          $zero, -0x19F4($v0)
    ctx->pc = 0x21f604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960652), GPR_U32(ctx, 0));
label_21f608:
    // 0x21f608: 0xc087656  jal         func_21D958
    ctx->pc = 0x21F608u;
    SET_GPR_U32(ctx, 31, 0x21F610u);
    ctx->pc = 0x21D958u;
    if (runtime->hasFunction(0x21D958u)) {
        auto targetFn = runtime->lookupFunction(0x21D958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F610u; }
        if (ctx->pc != 0x21F610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D958_0x21d958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F610u; }
        if (ctx->pc != 0x21F610u) { return; }
    }
    ctx->pc = 0x21F610u;
    // 0x21f610: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F610u;
    {
        const bool branch_taken_0x21f610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F610u;
            // 0x21f614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f610) {
            ctx->pc = 0x21F624u;
            goto label_21f624;
        }
    }
    ctx->pc = 0x21F618u;
    // 0x21f618: 0xc087750  jal         func_21DD40
    ctx->pc = 0x21F618u;
    SET_GPR_U32(ctx, 31, 0x21F620u);
    ctx->pc = 0x21DD40u;
    if (runtime->hasFunction(0x21DD40u)) {
        auto targetFn = runtime->lookupFunction(0x21DD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F620u; }
        if (ctx->pc != 0x21F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DD40_0x21dd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F620u; }
        if (ctx->pc != 0x21F620u) { return; }
    }
    ctx->pc = 0x21F620u;
label_21f620:
    // 0x21f620: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21f620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21f624:
    // 0x21f624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21f624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f628: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21f628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f630: 0x3e00008  jr          $ra
    ctx->pc = 0x21F630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F630u;
            // 0x21f634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F400u: goto label_21f400;
            case 0x21F458u: goto label_21f458;
            case 0x21F470u: goto label_21f470;
            case 0x21F4B0u: goto label_21f4b0;
            case 0x21F4B8u: goto label_21f4b8;
            case 0x21F50Cu: goto label_21f50c;
            case 0x21F514u: goto label_21f514;
            case 0x21F518u: goto label_21f518;
            case 0x21F524u: goto label_21f524;
            case 0x21F55Cu: goto label_21f55c;
            case 0x21F568u: goto label_21f568;
            case 0x21F5C8u: goto label_21f5c8;
            case 0x21F5D0u: goto label_21f5d0;
            case 0x21F5F8u: goto label_21f5f8;
            case 0x21F608u: goto label_21f608;
            case 0x21F620u: goto label_21f620;
            case 0x21F624u: goto label_21f624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F638u;
}
