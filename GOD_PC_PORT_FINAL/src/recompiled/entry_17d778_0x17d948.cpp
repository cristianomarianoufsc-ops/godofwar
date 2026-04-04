#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17d778
// Address: 0x17d778 - 0x17d948
void entry_17d778_0x17d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17d778_0x17d948");
#endif

    ctx->pc = 0x17d778u;

    // 0x17d778: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17d778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17d77c: 0x3c0a002c  lui         $t2, 0x2C
    ctx->pc = 0x17d77cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)44 << 16));
    // 0x17d780: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d784: 0x8d427908  lw          $v0, 0x7908($t2)
    ctx->pc = 0x17d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 30984)));
    // 0x17d788: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x17d788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17d78c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D78Cu;
    {
        const bool branch_taken_0x17d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D78Cu;
            // 0x17d790: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d78c) {
            ctx->pc = 0x17D7A4u;
            goto label_17d7a4;
        }
    }
    ctx->pc = 0x17D794u;
    // 0x17d794: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x17d798: 0xdc823628  ld          $v0, 0x3628($a0)
    ctx->pc = 0x17d798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13864)));
    // 0x17d79c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x17d79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17d7a0: 0xfc823628  sd          $v0, 0x3628($a0)
    ctx->pc = 0x17d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13864), GPR_U64(ctx, 2));
label_17d7a4:
    // 0x17d7a4: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x17d7a8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x17d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17d7ac: 0xdd283628  ld          $t0, 0x3628($t1)
    ctx->pc = 0x17d7acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 13864)));
    // 0x17d7b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17d7b4: 0x3c0b002a  lui         $t3, 0x2A
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)42 << 16));
    // 0x17d7b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x17d7bc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d7c0: 0x102102d  daddu       $v0, $t0, $v0
    ctx->pc = 0x17d7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17d7c4: 0x8d63c674  lw          $v1, -0x398C($t3)
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294952564)));
    // 0x17d7c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17d7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d7cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17d7ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17d7d0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x17d7d4: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d7d8: 0xad457908  sw          $a1, 0x7908($t2)
    ctx->pc = 0x17d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 30984), GPR_U32(ctx, 5));
    // 0x17d7dc: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x17d7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17d7e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7E0u;
    {
        const bool branch_taken_0x17d7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7E0u;
            // 0x17d7e4: 0xac87c670  sw          $a3, -0x3990($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952560), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7e0) {
            ctx->pc = 0x17D7F4u;
            goto label_17d7f4;
        }
    }
    ctx->pc = 0x17D7E8u;
    // 0x17d7e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x17d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x17d7ec: 0x102102d  daddu       $v0, $t0, $v0
    ctx->pc = 0x17d7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17d7f0: 0xfd223628  sd          $v0, 0x3628($t1)
    ctx->pc = 0x17d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 13864), GPR_U64(ctx, 2));
label_17d7f4:
    // 0x17d7f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d7f8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17d7fc: 0x8c45c640  lw          $a1, -0x39C0($v0)
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952512)));
    // 0x17d800: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x17d800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x17d804: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x17d804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x17d808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d80c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17d810: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x17d810u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17d814: 0xdd223628  ld          $v0, 0x3628($t1)
    ctx->pc = 0x17d814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 13864)));
    // 0x17d818: 0xad467908  sw          $a2, 0x7908($t2)
    ctx->pc = 0x17d818u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 30984), GPR_U32(ctx, 6));
    // 0x17d81c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x17d81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17d820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17d824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17d828: 0xad62c674  sw          $v0, -0x398C($t3)
    ctx->pc = 0x17d828u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294952564), GPR_U32(ctx, 2));
    // 0x17d82c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D82Cu;
    {
        const bool branch_taken_0x17d82c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d82c) {
            ctx->pc = 0x17D830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D82Cu;
            // 0x17d830: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D834u;
            goto label_17d834;
        }
    }
    ctx->pc = 0x17D834u;
label_17d834:
    // 0x17d834: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d838: 0x8c43c65c  lw          $v1, -0x39A4($v0)
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952540)));
    // 0x17d83c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x17d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x17d840: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d844: 0x2012  mflo        $a0
    ctx->pc = 0x17d844u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x17d848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17d848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d84c: 0xaca4c654  sw          $a0, -0x39AC($a1)
    ctx->pc = 0x17d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952532), GPR_U32(ctx, 4));
    // 0x17d850: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d854: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17d854u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x17d858: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x17D858u;
    {
        const bool branch_taken_0x17d858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D858u;
            // 0x17d85c: 0xe440c650  swc1        $f0, -0x39B0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d858) {
            ctx->pc = 0x17D900u;
            goto label_17d900;
        }
    }
    ctx->pc = 0x17D860u;
    // 0x17d860: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d864: 0x8c42c660  lw          $v0, -0x39A0($v0)
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952544)));
    // 0x17d868: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17D868u;
    {
        const bool branch_taken_0x17d868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D868u;
            // 0x17d86c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d868) {
            ctx->pc = 0x17D904u;
            goto label_17d904;
        }
    }
    ctx->pc = 0x17D870u;
    // 0x17d870: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D870u;
    {
        const bool branch_taken_0x17d870 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x17D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D870u;
            // 0x17d874: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d870) {
            ctx->pc = 0x17D888u;
            goto label_17d888;
        }
    }
    ctx->pc = 0x17D878u;
    // 0x17d878: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17d878u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d87c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17d87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17d880: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D880u;
    {
        const bool branch_taken_0x17d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D880u;
            // 0x17d884: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d880) {
            ctx->pc = 0x17D8A8u;
            goto label_17d8a8;
        }
    }
    ctx->pc = 0x17D888u;
label_17d888:
    // 0x17d888: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x17d88c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x17d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x17d890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17d890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d898: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17d898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17d89c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17d89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x17d8a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17d8a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17d8a8:
    // 0x17d8a8: 0x8c421078  lw          $v0, 0x1078($v0)
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x17d8ac: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x17d8b0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17d8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17d8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d8b8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D8B8u;
    {
        const bool branch_taken_0x17d8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17d8b8) {
            ctx->pc = 0x17D8CCu;
            goto label_17d8cc;
        }
    }
    ctx->pc = 0x17D8C0u;
    // 0x17d8c0: 0x3c0142e6  lui         $at, 0x42E6
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17126 << 16));
    // 0x17d8c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x17d8c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d8cc:
    // 0x17d8cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17d8ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x17d8d0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x17d8d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17d8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17d8d8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x17d8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d8e0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x17d8e0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x17d8e4: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x17d8e4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x17d8e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17d8e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x17d8ec: 0xc4a2c654  lwc1        $f2, -0x39AC($a1)
    ctx->pc = 0x17d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d8f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17d8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17d8f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D8F4u;
    {
        const bool branch_taken_0x17d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8F4u;
            // 0x17d8f8: 0x460010a8  max.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8f4) {
            ctx->pc = 0x17D910u;
            goto label_17d910;
        }
    }
    ctx->pc = 0x17D8FCu;
    // 0x17d8fc: 0x0  nop
    ctx->pc = 0x17d8fcu;
    // NOP
label_17d900:
    // 0x17d900: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17d904:
    // 0x17d904: 0xc4a2c654  lwc1        $f2, -0x39AC($a1)
    ctx->pc = 0x17d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d908: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17d908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17d90c: 0xac40c660  sw          $zero, -0x39A0($v0)
    ctx->pc = 0x17d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952544), GPR_U32(ctx, 0));
label_17d910:
    // 0x17d910: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x17d914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17d914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d918: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d91c: 0xc440c644  lwc1        $f0, -0x39BC($v0)
    ctx->pc = 0x17d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d920: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17d924: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17d924u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x17d928: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d92c: 0xc442c648  lwc1        $f2, -0x39B8($v0)
    ctx->pc = 0x17d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d930: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17d934: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17d934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d938: 0xe441c64c  swc1        $f1, -0x39B4($v0)
    ctx->pc = 0x17d938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952524), bits); }
    // 0x17d93c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17d93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17d940: 0x3e00008  jr          $ra
    ctx->pc = 0x17D940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D940u;
            // 0x17d944: 0xe460c658  swc1        $f0, -0x39A8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294952536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D7A4u: goto label_17d7a4;
            case 0x17D7F4u: goto label_17d7f4;
            case 0x17D834u: goto label_17d834;
            case 0x17D888u: goto label_17d888;
            case 0x17D8A8u: goto label_17d8a8;
            case 0x17D8CCu: goto label_17d8cc;
            case 0x17D900u: goto label_17d900;
            case 0x17D904u: goto label_17d904;
            case 0x17D910u: goto label_17d910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D948u;
}
