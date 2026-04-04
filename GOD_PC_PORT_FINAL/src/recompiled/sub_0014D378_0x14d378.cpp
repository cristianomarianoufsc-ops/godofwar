#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D378
// Address: 0x14d378 - 0x14d860
void sub_0014D378_0x14d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D378_0x14d378");
#endif

    ctx->pc = 0x14d378u;

    // 0x14d378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d37c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x14d380: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14d384: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14d384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14d388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14d38c: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x14d38cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14d390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d394: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x14d394u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x14d398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14d39c: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x14d39cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x14d3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d3a4: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D3A4u;
    {
        const bool branch_taken_0x14d3a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3A4u;
            // 0x14d3a8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3a4) {
            ctx->pc = 0x14D3C0u;
            goto label_14d3c0;
        }
    }
    ctx->pc = 0x14D3ACu;
    // 0x14d3ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d3b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14d3b4: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x14d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 3));
    // 0x14d3b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D3B8u;
    {
        const bool branch_taken_0x14d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3B8u;
            // 0x14d3bc: 0x3c0c7000  lui         $t4, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3b8) {
            ctx->pc = 0x14D3DCu;
            goto label_14d3dc;
        }
    }
    ctx->pc = 0x14D3C0u;
label_14d3c0:
    // 0x14d3c0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14D3C0u;
    SET_GPR_U32(ctx, 31, 0x14D3C8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3C8u; }
        if (ctx->pc != 0x14D3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3C8u; }
        if (ctx->pc != 0x14D3C8u) { return; }
    }
    ctx->pc = 0x14D3C8u;
    // 0x14d3c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3cc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x14d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14d3d0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14D3D0u;
    SET_GPR_U32(ctx, 31, 0x14D3D8u);
    ctx->pc = 0x14D3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D3D0u;
            // 0x14d3d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3D8u; }
        if (ctx->pc != 0x14D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D3D8u; }
        if (ctx->pc != 0x14D3D8u) { return; }
    }
    ctx->pc = 0x14D3D8u;
    // 0x14d3d8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x14d3d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d3dc:
    // 0x14d3dc: 0x262a003f  addiu       $t2, $s1, 0x3F
    ctx->pc = 0x14d3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x14d3e0: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x14d3e4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x14d3e8: 0xa1983  sra         $v1, $t2, 6
    ctx->pc = 0x14d3e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 6));
    // 0x14d3ec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14d3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14d3f0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x14d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d3f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14d3f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d3fc: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x14d3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x14d400: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x14d400u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x14d404: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D404u;
    {
        const bool branch_taken_0x14d404 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x14D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D404u;
            // 0x14d408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d404) {
            ctx->pc = 0x14D434u;
            goto label_14d434;
        }
    }
    ctx->pc = 0x14D40Cu;
    // 0x14d40c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14d40cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d410: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x14d410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d414: 0x0  nop
    ctx->pc = 0x14d414u;
    // NOP
label_14d418:
    // 0x14d418: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14d41c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d420: 0x0  nop
    ctx->pc = 0x14d420u;
    // NOP
    // 0x14d424: 0x0  nop
    ctx->pc = 0x14d424u;
    // NOP
    // 0x14d428: 0x0  nop
    ctx->pc = 0x14d428u;
    // NOP
    // 0x14d42c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D42Cu;
    {
        const bool branch_taken_0x14d42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D42Cu;
            // 0x14d430: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d42c) {
            ctx->pc = 0x14D418u;
            runtime->cooperativeGuestYield();
            goto label_14d418;
        }
    }
    ctx->pc = 0x14D434u;
label_14d434:
    // 0x14d434: 0x2e42003b  sltiu       $v0, $s2, 0x3B
    ctx->pc = 0x14d434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x14d438: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x14D438u;
    {
        const bool branch_taken_0x14d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D438u;
            // 0x14d43c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d438) {
            ctx->pc = 0x14D83Cu;
            goto label_14d83c;
        }
    }
    ctx->pc = 0x14D440u;
    // 0x14d440: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14d444: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x14d448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d44c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d450: 0x400008  jr          $v0
    ctx->pc = 0x14D450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D458u: goto label_14d458;
            case 0x14D56Cu: goto label_14d56c;
            case 0x14D64Cu: goto label_14d64c;
            case 0x14D768u: goto label_14d768;
            case 0x14D83Cu: goto label_14d83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D458u;
label_14d458:
    // 0x14d458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d45c: 0x58a000f8  blezl       $a1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x14D45Cu;
    {
        const bool branch_taken_0x14d45c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14d45c) {
            ctx->pc = 0x14D460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D45Cu;
            // 0x14d460: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D464u;
    // 0x14d464: 0x0  nop
    ctx->pc = 0x14d464u;
    // NOP
label_14d468:
    // 0x14d468: 0x2622007f  addiu       $v0, $s1, 0x7F
    ctx->pc = 0x14d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
    // 0x14d46c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x14d46cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d470: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14d470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d474: 0x19000038  blez        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x14D474u;
    {
        const bool branch_taken_0x14d474 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x14D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D474u;
            // 0x14d478: 0x269c3  sra         $t5, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d474) {
            ctx->pc = 0x14D558u;
            goto label_14d558;
        }
    }
    ctx->pc = 0x14D47Cu;
    // 0x14d47c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x14d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14d480: 0x4c5021  addu        $t2, $v0, $t4
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14d484: 0x0  nop
    ctx->pc = 0x14d484u;
    // NOP
label_14d488:
    // 0x14d488: 0x29020080  slti        $v0, $t0, 0x80
    ctx->pc = 0x14d488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x14d48c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D48Cu;
    {
        const bool branch_taken_0x14d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D48Cu;
            // 0x14d490: 0x3102007f  andi        $v0, $t0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d48c) {
            ctx->pc = 0x14D49Cu;
            goto label_14d49c;
        }
    }
    ctx->pc = 0x14D494u;
    // 0x14d494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D494u;
    {
        const bool branch_taken_0x14d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D494u;
            // 0x14d498: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d494) {
            ctx->pc = 0x14D4B8u;
            goto label_14d4b8;
        }
    }
    ctx->pc = 0x14D49Cu;
label_14d49c:
    // 0x14d49c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d4a0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x14d4a4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x14d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14d4a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d4b0: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x14d4b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x14d4b4: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x14d4b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_14d4b8:
    // 0x14d4b8: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x14d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14d4bc: 0x28a40011  slti        $a0, $a1, 0x11
    ctx->pc = 0x14d4bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x14d4c0: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x14d4c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d4c4: 0x30e20202  andi        $v0, $a3, 0x202
    ctx->pc = 0x14d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)514);
    // 0x14d4c8: 0x30e30101  andi        $v1, $a3, 0x101
    ctx->pc = 0x14d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)257);
    // 0x14d4cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14d4d0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x14d4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d4d4: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14D4D4u;
    {
        const bool branch_taken_0x14d4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4D4u;
            // 0x14d4d8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4d4) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D4DCu;
    // 0x14d4dc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x14d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14d4e0: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x14d4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14d4e4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14D4E4u;
    {
        const bool branch_taken_0x14d4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4E4u;
            // 0x14d4e8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4e4) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D4ECu;
    // 0x14d4ec: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x14d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x14d4f0: 0x28a30031  slti        $v1, $a1, 0x31
    ctx->pc = 0x14d4f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x14d4f4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14D4F4u;
    {
        const bool branch_taken_0x14d4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4F4u;
            // 0x14d4f8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f4) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D4FCu;
    // 0x14d4fc: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x14d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14d500: 0x28a30041  slti        $v1, $a1, 0x41
    ctx->pc = 0x14d500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x14d504: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14D504u;
    {
        const bool branch_taken_0x14d504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D504u;
            // 0x14d508: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d504) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D50Cu;
    // 0x14d50c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x14d510: 0x28a30051  slti        $v1, $a1, 0x51
    ctx->pc = 0x14d510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x14d514: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D514u;
    {
        const bool branch_taken_0x14d514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D514u;
            // 0x14d518: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d514) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D51Cu;
    // 0x14d51c: 0x71440  sll         $v0, $a3, 17
    ctx->pc = 0x14d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 17));
    // 0x14d520: 0x28a30061  slti        $v1, $a1, 0x61
    ctx->pc = 0x14d520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x14d524: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D524u;
    {
        const bool branch_taken_0x14d524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D524u;
            // 0x14d528: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d524) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D52Cu;
    // 0x14d52c: 0x71500  sll         $v0, $a3, 20
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x14d530: 0x28a30071  slti        $v1, $a1, 0x71
    ctx->pc = 0x14d530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x14d534: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D534u;
    {
        const bool branch_taken_0x14d534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D534u;
            // 0x14d538: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d534) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D53Cu;
    // 0x14d53c: 0x71540  sll         $v0, $a3, 21
    ctx->pc = 0x14d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x14d540: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x14d540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_14d544:
    // 0x14d544: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x14d544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x14d548: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14d548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d54c: 0x2508ff80  addiu       $t0, $t0, -0x80
    ctx->pc = 0x14d54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x14d550: 0x1d00ffcd  bgtz        $t0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x14D550u;
    {
        const bool branch_taken_0x14d550 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x14D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D550u;
            // 0x14d554: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d550) {
            ctx->pc = 0x14D488u;
            runtime->cooperativeGuestYield();
            goto label_14d488;
        }
    }
    ctx->pc = 0x14D558u;
label_14d558:
    // 0x14d558: 0x24a5ff80  addiu       $a1, $a1, -0x80
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x14d55c: 0x1ca0ffc2  bgtz        $a1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x14D55Cu;
    {
        const bool branch_taken_0x14d55c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D55Cu;
            // 0x14d560: 0x16d5821  addu        $t3, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d55c) {
            ctx->pc = 0x14D468u;
            runtime->cooperativeGuestYield();
            goto label_14d468;
        }
    }
    ctx->pc = 0x14D564u;
    // 0x14d564: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x14D564u;
    {
        const bool branch_taken_0x14d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D564u;
            // 0x14d568: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d564) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D56Cu;
label_14d56c:
    // 0x14d56c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d570: 0x58a000b3  blezl       $a1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x14D570u;
    {
        const bool branch_taken_0x14d570 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14d570) {
            ctx->pc = 0x14D574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D570u;
            // 0x14d574: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D578u;
label_14d578:
    // 0x14d578: 0x2622007f  addiu       $v0, $s1, 0x7F
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
    // 0x14d57c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x14d57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d580: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14d580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d584: 0x1900002c  blez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14D584u;
    {
        const bool branch_taken_0x14d584 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x14D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D584u;
            // 0x14d588: 0x269c3  sra         $t5, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d584) {
            ctx->pc = 0x14D638u;
            goto label_14d638;
        }
    }
    ctx->pc = 0x14D58Cu;
    // 0x14d58c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x14d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14d590: 0x4c5021  addu        $t2, $v0, $t4
    ctx->pc = 0x14d590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14d594: 0x0  nop
    ctx->pc = 0x14d594u;
    // NOP
label_14d598:
    // 0x14d598: 0x29020080  slti        $v0, $t0, 0x80
    ctx->pc = 0x14d598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x14d59c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D59Cu;
    {
        const bool branch_taken_0x14d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D59Cu;
            // 0x14d5a0: 0x3102007f  andi        $v0, $t0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d59c) {
            ctx->pc = 0x14D5ACu;
            goto label_14d5ac;
        }
    }
    ctx->pc = 0x14D5A4u;
    // 0x14d5a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D5A4u;
    {
        const bool branch_taken_0x14d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5A4u;
            // 0x14d5a8: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5a4) {
            ctx->pc = 0x14D5C8u;
            goto label_14d5c8;
        }
    }
    ctx->pc = 0x14D5ACu;
label_14d5ac:
    // 0x14d5ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14d5b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x14d5b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x14d5b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14d5b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d5c0: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x14d5c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x14d5c4: 0x44200a  movz        $a0, $v0, $a0
    ctx->pc = 0x14d5c4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_14d5c8:
    // 0x14d5c8: 0x41b00  sll         $v1, $a0, 12
    ctx->pc = 0x14d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x14d5cc: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x14d5d0: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x14d5d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14d5d4: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x14d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x14d5d8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x14d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x14d5dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x14d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x14d5e0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x14d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x14d5e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d5e8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x14d5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x14d5ec: 0x28a40011  slti        $a0, $a1, 0x11
    ctx->pc = 0x14d5ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x14d5f0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x14d5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d5f4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D5F4u;
    {
        const bool branch_taken_0x14d5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5F4u;
            // 0x14d5f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5f4) {
            ctx->pc = 0x14D624u;
            goto label_14d624;
        }
    }
    ctx->pc = 0x14D5FCu;
    // 0x14d5fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14d600: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x14d600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14d604: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D604u;
            // 0x14d608: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D624u;
            goto label_14d624;
        }
    }
    ctx->pc = 0x14D60Cu;
    // 0x14d60c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x14d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x14d610: 0x28a30031  slti        $v1, $a1, 0x31
    ctx->pc = 0x14d610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x14d614: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D614u;
    {
        const bool branch_taken_0x14d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D614u;
            // 0x14d618: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d614) {
            ctx->pc = 0x14D624u;
            goto label_14d624;
        }
    }
    ctx->pc = 0x14D61Cu;
    // 0x14d61c: 0x71280  sll         $v0, $a3, 10
    ctx->pc = 0x14d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x14d620: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x14d620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_14d624:
    // 0x14d624: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x14d624u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x14d628: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14d628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d62c: 0x2508ff80  addiu       $t0, $t0, -0x80
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x14d630: 0x1d00ffd9  bgtz        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x14D630u;
    {
        const bool branch_taken_0x14d630 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x14D634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D630u;
            // 0x14d634: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d630) {
            ctx->pc = 0x14D598u;
            runtime->cooperativeGuestYield();
            goto label_14d598;
        }
    }
    ctx->pc = 0x14D638u;
label_14d638:
    // 0x14d638: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x14d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x14d63c: 0x1ca0ffce  bgtz        $a1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x14D63Cu;
    {
        const bool branch_taken_0x14d63c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D63Cu;
            // 0x14d640: 0x16d5821  addu        $t3, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d63c) {
            ctx->pc = 0x14D578u;
            runtime->cooperativeGuestYield();
            goto label_14d578;
        }
    }
    ctx->pc = 0x14D644u;
    // 0x14d644: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x14D644u;
    {
        const bool branch_taken_0x14d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D644u;
            // 0x14d648: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d644) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D64Cu;
label_14d64c:
    // 0x14d64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d650: 0x58a0007b  blezl       $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x14D650u;
    {
        const bool branch_taken_0x14d650 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14d650) {
            ctx->pc = 0x14D654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D650u;
            // 0x14d654: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D658u;
label_14d658:
    // 0x14d658: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x14d658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d65c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14d65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d660: 0x1900003c  blez        $t0, . + 4 + (0x3C << 2)
    ctx->pc = 0x14D660u;
    {
        const bool branch_taken_0x14d660 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x14D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D660u;
            // 0x14d664: 0xa6983  sra         $t5, $t2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 10), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d660) {
            ctx->pc = 0x14D754u;
            goto label_14d754;
        }
    }
    ctx->pc = 0x14D668u;
    // 0x14d668: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14d66c: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x14d66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_14d670:
    // 0x14d670: 0x29020040  slti        $v0, $t0, 0x40
    ctx->pc = 0x14d670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D674u;
    {
        const bool branch_taken_0x14d674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D674u;
            // 0x14d678: 0x3102003f  andi        $v0, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d674) {
            ctx->pc = 0x14D684u;
            goto label_14d684;
        }
    }
    ctx->pc = 0x14D67Cu;
    // 0x14d67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D67Cu;
    {
        const bool branch_taken_0x14d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D67Cu;
            // 0x14d680: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d67c) {
            ctx->pc = 0x14D6A0u;
            goto label_14d6a0;
        }
    }
    ctx->pc = 0x14D684u;
label_14d684:
    // 0x14d684: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d688: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x14d68c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14d690: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14d690u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d698: 0x643007  srav        $a2, $a0, $v1
    ctx->pc = 0x14d698u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x14d69c: 0x46300a  movz        $a2, $v0, $a2
    ctx->pc = 0x14d69cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_14d6a0:
    // 0x14d6a0: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x14d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x14d6a4: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x14d6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x14d6a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14d6ac: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x14d6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x14d6b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14d6b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14d6b8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x14d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x14d6bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14d6c0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x14d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x14d6c4: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x14d6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14d6c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14d6cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14d6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6d0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14D6D0u;
    {
        const bool branch_taken_0x14d6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6D0u;
            // 0x14d6d4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6d0) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D6D8u;
    // 0x14d6d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14d6dc: 0x28a30011  slti        $v1, $a1, 0x11
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x14d6e0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14D6E0u;
    {
        const bool branch_taken_0x14d6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6E0u;
            // 0x14d6e4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6e0) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D6E8u;
    // 0x14d6e8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x14d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14d6ec: 0x28a30019  slti        $v1, $a1, 0x19
    ctx->pc = 0x14d6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x14d6f0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14D6F0u;
    {
        const bool branch_taken_0x14d6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6F0u;
            // 0x14d6f4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6f0) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D6F8u;
    // 0x14d6f8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x14d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14d6fc: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x14d6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x14d700: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14D700u;
    {
        const bool branch_taken_0x14d700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D700u;
            // 0x14d704: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d700) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D708u;
    // 0x14d708: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x14d708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14d70c: 0x28a30029  slti        $v1, $a1, 0x29
    ctx->pc = 0x14d70cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x14d710: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D710u;
    {
        const bool branch_taken_0x14d710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D710u;
            // 0x14d714: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d710) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D718u;
    // 0x14d718: 0x61440  sll         $v0, $a2, 17
    ctx->pc = 0x14d718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x14d71c: 0x28a30031  slti        $v1, $a1, 0x31
    ctx->pc = 0x14d71cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x14d720: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D720u;
    {
        const bool branch_taken_0x14d720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D720u;
            // 0x14d724: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d720) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D728u;
    // 0x14d728: 0x61500  sll         $v0, $a2, 20
    ctx->pc = 0x14d728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x14d72c: 0x28a30039  slti        $v1, $a1, 0x39
    ctx->pc = 0x14d72cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x14d730: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D730u;
    {
        const bool branch_taken_0x14d730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D730u;
            // 0x14d734: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d730) {
            ctx->pc = 0x14D740u;
            goto label_14d740;
        }
    }
    ctx->pc = 0x14D738u;
    // 0x14d738: 0x61540  sll         $v0, $a2, 21
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 21));
    // 0x14d73c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14d73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_14d740:
    // 0x14d740: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x14d740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14d744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d748: 0x2508ffc0  addiu       $t0, $t0, -0x40
    ctx->pc = 0x14d748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
    // 0x14d74c: 0x1d00ffc8  bgtz        $t0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14D74Cu;
    {
        const bool branch_taken_0x14d74c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x14D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D74Cu;
            // 0x14d750: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d74c) {
            ctx->pc = 0x14D670u;
            runtime->cooperativeGuestYield();
            goto label_14d670;
        }
    }
    ctx->pc = 0x14D754u;
label_14d754:
    // 0x14d754: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x14d758: 0x1ca0ffbf  bgtz        $a1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x14D758u;
    {
        const bool branch_taken_0x14d758 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D758u;
            // 0x14d75c: 0x16d5821  addu        $t3, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d758) {
            ctx->pc = 0x14D658u;
            runtime->cooperativeGuestYield();
            goto label_14d658;
        }
    }
    ctx->pc = 0x14D760u;
    // 0x14d760: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x14D760u;
    {
        const bool branch_taken_0x14d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D760u;
            // 0x14d764: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d760) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D768u;
label_14d768:
    // 0x14d768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d76c: 0x58a00034  blezl       $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14D76Cu;
    {
        const bool branch_taken_0x14d76c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14d76c) {
            ctx->pc = 0x14D770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D76Cu;
            // 0x14d770: 0xae690000  sw          $t1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D774u;
    // 0x14d774: 0x0  nop
    ctx->pc = 0x14d774u;
    // NOP
label_14d778:
    // 0x14d778: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x14d778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d77c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d780: 0x1900002b  blez        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14D780u;
    {
        const bool branch_taken_0x14d780 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x14D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D780u;
            // 0x14d784: 0xa6983  sra         $t5, $t2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 10), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d780) {
            ctx->pc = 0x14D830u;
            goto label_14d830;
        }
    }
    ctx->pc = 0x14D788u;
    // 0x14d788: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x14d788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x14d78c: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x14d78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_14d790:
    // 0x14d790: 0x29020040  slti        $v0, $t0, 0x40
    ctx->pc = 0x14d790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d794: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D794u;
    {
        const bool branch_taken_0x14d794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D794u;
            // 0x14d798: 0x3102003f  andi        $v0, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d794) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D79Cu;
    // 0x14d79c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D79Cu;
    {
        const bool branch_taken_0x14d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D79Cu;
            // 0x14d7a0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d79c) {
            ctx->pc = 0x14D7C0u;
            goto label_14d7c0;
        }
    }
    ctx->pc = 0x14D7A4u;
label_14d7a4:
    // 0x14d7a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14d7a8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x14d7ac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14d7b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7b8: 0x643007  srav        $a2, $a0, $v1
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x14d7bc: 0x46300a  movz        $a2, $v0, $a2
    ctx->pc = 0x14d7bcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_14d7c0:
    // 0x14d7c0: 0x30c2000c  andi        $v0, $a2, 0xC
    ctx->pc = 0x14d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x14d7c4: 0x30c40003  andi        $a0, $a2, 0x3
    ctx->pc = 0x14d7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x14d7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d7cc: 0x30c30030  andi        $v1, $a2, 0x30
    ctx->pc = 0x14d7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x14d7d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14d7d4: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x14d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x14d7d8: 0x30c200c0  andi        $v0, $a2, 0xC0
    ctx->pc = 0x14d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)192);
    // 0x14d7dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14d7e0: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x14d7e4: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x14d7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14d7e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14d7ec: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D7ECu;
    {
        const bool branch_taken_0x14d7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D7ECu;
            // 0x14d7f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7ec) {
            ctx->pc = 0x14D81Cu;
            goto label_14d81c;
        }
    }
    ctx->pc = 0x14D7F4u;
    // 0x14d7f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14d7f8: 0x28a30011  slti        $v1, $a1, 0x11
    ctx->pc = 0x14d7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x14d7fc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D7FCu;
    {
        const bool branch_taken_0x14d7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D7FCu;
            // 0x14d800: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7fc) {
            ctx->pc = 0x14D81Cu;
            goto label_14d81c;
        }
    }
    ctx->pc = 0x14D804u;
    // 0x14d804: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x14d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x14d808: 0x28a30019  slti        $v1, $a1, 0x19
    ctx->pc = 0x14d808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x14d80c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D80Cu;
    {
        const bool branch_taken_0x14d80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D80Cu;
            // 0x14d810: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d80c) {
            ctx->pc = 0x14D81Cu;
            goto label_14d81c;
        }
    }
    ctx->pc = 0x14D814u;
    // 0x14d814: 0x61280  sll         $v0, $a2, 10
    ctx->pc = 0x14d814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x14d818: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14d818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_14d81c:
    // 0x14d81c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x14d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x14d820: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14d824: 0x2508ffc0  addiu       $t0, $t0, -0x40
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
    // 0x14d828: 0x1d00ffd9  bgtz        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x14D828u;
    {
        const bool branch_taken_0x14d828 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x14D82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D828u;
            // 0x14d82c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d828) {
            ctx->pc = 0x14D790u;
            runtime->cooperativeGuestYield();
            goto label_14d790;
        }
    }
    ctx->pc = 0x14D830u;
label_14d830:
    // 0x14d830: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x14d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x14d834: 0x1ca0ffd0  bgtz        $a1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x14D834u;
    {
        const bool branch_taken_0x14d834 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D834u;
            // 0x14d838: 0x16d5821  addu        $t3, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d834) {
            ctx->pc = 0x14D778u;
            runtime->cooperativeGuestYield();
            goto label_14d778;
        }
    }
    ctx->pc = 0x14D83Cu;
label_14d83c:
    // 0x14d83c: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x14d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
label_14d840:
    // 0x14d840: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x14d840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d844: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14d844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d848: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14d848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d850: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14d850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d858: 0x3e00008  jr          $ra
    ctx->pc = 0x14D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D858u;
            // 0x14d85c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D3C0u: goto label_14d3c0;
            case 0x14D3DCu: goto label_14d3dc;
            case 0x14D418u: goto label_14d418;
            case 0x14D434u: goto label_14d434;
            case 0x14D458u: goto label_14d458;
            case 0x14D468u: goto label_14d468;
            case 0x14D488u: goto label_14d488;
            case 0x14D49Cu: goto label_14d49c;
            case 0x14D4B8u: goto label_14d4b8;
            case 0x14D544u: goto label_14d544;
            case 0x14D558u: goto label_14d558;
            case 0x14D56Cu: goto label_14d56c;
            case 0x14D578u: goto label_14d578;
            case 0x14D598u: goto label_14d598;
            case 0x14D5ACu: goto label_14d5ac;
            case 0x14D5C8u: goto label_14d5c8;
            case 0x14D624u: goto label_14d624;
            case 0x14D638u: goto label_14d638;
            case 0x14D64Cu: goto label_14d64c;
            case 0x14D658u: goto label_14d658;
            case 0x14D670u: goto label_14d670;
            case 0x14D684u: goto label_14d684;
            case 0x14D6A0u: goto label_14d6a0;
            case 0x14D740u: goto label_14d740;
            case 0x14D754u: goto label_14d754;
            case 0x14D768u: goto label_14d768;
            case 0x14D778u: goto label_14d778;
            case 0x14D790u: goto label_14d790;
            case 0x14D7A4u: goto label_14d7a4;
            case 0x14D7C0u: goto label_14d7c0;
            case 0x14D81Cu: goto label_14d81c;
            case 0x14D830u: goto label_14d830;
            case 0x14D83Cu: goto label_14d83c;
            case 0x14D840u: goto label_14d840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D860u;
}
