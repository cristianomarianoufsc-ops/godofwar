#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2984a0
// Address: 0x2984a0 - 0x298770
void entry_2984a0_0x298770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2984a0_0x298770");
#endif

    ctx->pc = 0x2984a0u;

    // 0x2984a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2984a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2984a4: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2984a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2984a8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2984a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2984ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2984acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984b0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2984b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2984b4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2984b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984b8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2984b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2984bc: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x2984bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x2984c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2984c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2984c4: 0x26b19340  addiu       $s1, $s5, -0x6CC0
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939456));
    // 0x2984c8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2984c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2984cc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2984ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2984d0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2984d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2984d4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2984d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2984d8: 0xc0a5e2e  jal         func_2978B8
    ctx->pc = 0x2984D8u;
    SET_GPR_U32(ctx, 31, 0x2984E0u);
    ctx->pc = 0x2984DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984D8u;
            // 0x2984dc: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2978B8u;
    if (runtime->hasFunction(0x2978B8u)) {
        auto targetFn = runtime->lookupFunction(0x2978B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984E0u; }
        if (ctx->pc != 0x2984E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002978B8_0x2978b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984E0u; }
        if (ctx->pc != 0x2984E0u) { return; }
    }
    ctx->pc = 0x2984E0u;
    // 0x2984e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2984e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984e4: 0xc0a5f4e  jal         func_297D38
    ctx->pc = 0x2984E4u;
    SET_GPR_U32(ctx, 31, 0x2984ECu);
    ctx->pc = 0x2984E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2984E4u;
            // 0x2984e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D38u;
    if (runtime->hasFunction(0x297D38u)) {
        auto targetFn = runtime->lookupFunction(0x297D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984ECu; }
        if (ctx->pc != 0x2984ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297D38_0x297d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2984ECu; }
        if (ctx->pc != 0x2984ECu) { return; }
    }
    ctx->pc = 0x2984ECu;
    // 0x2984ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2984ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2984f0: 0x8c624b44  lw          $v0, 0x4B44($v1)
    ctx->pc = 0x2984f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19268)));
    // 0x2984f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2984F4u;
    {
        const bool branch_taken_0x2984f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2984f4) {
            ctx->pc = 0x298510u;
            goto label_298510;
        }
    }
    ctx->pc = 0x2984FCu;
    // 0x2984fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2984FCu;
    {
        const bool branch_taken_0x2984fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2984fc) {
            ctx->pc = 0x298510u;
            goto label_298510;
        }
    }
    ctx->pc = 0x298504u;
    // 0x298504: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298508: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x298508u;
    {
        const bool branch_taken_0x298508 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x29850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298508u;
            // 0x29850c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298508) {
            ctx->pc = 0x298520u;
            goto label_298520;
        }
    }
    ctx->pc = 0x298510u;
label_298510:
    // 0x298510: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298510u;
    SET_GPR_U32(ctx, 31, 0x298518u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298518u; }
        if (ctx->pc != 0x298518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298518u; }
        if (ctx->pc != 0x298518u) { return; }
    }
    ctx->pc = 0x298518u;
    // 0x298518: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x298518u;
    {
        const bool branch_taken_0x298518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298518u;
            // 0x29851c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298518) {
            ctx->pc = 0x2986DCu;
            goto label_2986dc;
        }
    }
    ctx->pc = 0x298520u;
label_298520:
    // 0x298520: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298524: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x298524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x298528: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x298528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x29852c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x29852cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298530: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x298530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x298534: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x298534u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x298538: 0x24636b68  addiu       $v1, $v1, 0x6B68
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27496));
    // 0x29853c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x29853cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x298540: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298544: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x298544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x298548: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29854c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x29854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x298550: 0x32908000  andi        $s0, $s4, 0x8000
    ctx->pc = 0x298550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
    // 0x298554: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x298554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
    // 0x298558: 0xae3e0014  sw          $fp, 0x14($s1)
    ctx->pc = 0x298558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 30));
    // 0x29855c: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x29855Cu;
    SET_GPR_U32(ctx, 31, 0x298564u);
    ctx->pc = 0x298560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29855Cu;
            // 0x298560: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298564u; }
        if (ctx->pc != 0x298564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298564u; }
        if (ctx->pc != 0x298564u) { return; }
    }
    ctx->pc = 0x298564u;
    // 0x298564: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x298564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298568: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29856c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x29856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298570: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x298570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x298574: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x298574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x298578: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x298578u;
    {
        const bool branch_taken_0x298578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298578u;
            // 0x29857c: 0xaeb39340  sw          $s3, -0x6CC0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294939456), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298578) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298580u;
    // 0x298580: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x298580u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x298584: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x298584u;
    SET_GPR_U32(ctx, 31, 0x29858Cu);
    ctx->pc = 0x298588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298584u;
            // 0x298588: 0x8ec44b54  lw          $a0, 0x4B54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29858Cu; }
        if (ctx->pc != 0x29858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29858Cu; }
        if (ctx->pc != 0x29858Cu) { return; }
    }
    ctx->pc = 0x29858Cu;
    // 0x29858c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x29858cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x298590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298594: 0x8ce34ac0  lw          $v1, 0x4AC0($a3)
    ctx->pc = 0x298594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19136)));
    // 0x298598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x298598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29859c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29859Cu;
    {
        const bool branch_taken_0x29859c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2985A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29859Cu;
            // 0x2985a0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29859c) {
            ctx->pc = 0x2985C0u;
            goto label_2985c0;
        }
    }
    ctx->pc = 0x2985A4u;
    // 0x2985a4: 0x8ea39340  lw          $v1, -0x6CC0($s5)
    ctx->pc = 0x2985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939456)));
    // 0x2985a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2985ac: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2985acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2985b0: 0xace34ac0  sw          $v1, 0x4AC0($a3)
    ctx->pc = 0x2985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 19136), GPR_U32(ctx, 3));
    // 0x2985b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2985B4u;
    {
        const bool branch_taken_0x2985b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2985B4u;
            // 0x2985b8: 0xaea29340  sw          $v0, -0x6CC0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294939456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985b4) {
            ctx->pc = 0x2985FCu;
            goto label_2985fc;
        }
    }
    ctx->pc = 0x2985BCu;
    // 0x2985bc: 0x0  nop
    ctx->pc = 0x2985bcu;
    // NOP
label_2985c0:
    // 0x2985c0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2985c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2985c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2985c8:
    // 0x2985c8: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x2985c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2985cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2985CCu;
    {
        const bool branch_taken_0x2985cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2985CCu;
            // 0x2985d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985cc) {
            ctx->pc = 0x2985FCu;
            goto label_2985fc;
        }
    }
    ctx->pc = 0x2985D4u;
    // 0x2985d4: 0x24e34ac0  addiu       $v1, $a3, 0x4AC0
    ctx->pc = 0x2985d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 19136));
    // 0x2985d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2985d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2985dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2985dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2985e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2985e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2985e4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2985E4u;
    {
        const bool branch_taken_0x2985e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2985E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2985E4u;
            // 0x2985e8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985e4) {
            ctx->pc = 0x2985C8u;
            runtime->cooperativeGuestYield();
            goto label_2985c8;
        }
    }
    ctx->pc = 0x2985ECu;
    // 0x2985ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2985ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2985f0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2985f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2985f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2985f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2985f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2985f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2985fc:
    // 0x2985fc: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x2985FCu;
    SET_GPR_U32(ctx, 31, 0x298604u);
    ctx->pc = 0x298600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2985FCu;
            // 0x298600: 0x8ec44b54  lw          $a0, 0x4B54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298604u; }
        if (ctx->pc != 0x298604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298604u; }
        if (ctx->pc != 0x298604u) { return; }
    }
    ctx->pc = 0x298604u;
    // 0x298604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298604u;
    {
        const bool branch_taken_0x298604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298604u;
            // 0x298608: 0x3c162000  lui         $s6, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298604) {
            ctx->pc = 0x298618u;
            goto label_298618;
        }
    }
    ctx->pc = 0x29860Cu;
label_29860c:
    // 0x29860c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x29860cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x298610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x298610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298614: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x298614u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
label_298618:
    // 0x298618: 0x2961024  and         $v0, $s4, $s6
    ctx->pc = 0x298618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x29861c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29861Cu;
    {
        const bool branch_taken_0x29861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29861Cu;
            // 0x298620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29861c) {
            ctx->pc = 0x298634u;
            goto label_298634;
        }
    }
    ctx->pc = 0x298624u;
    // 0x298624: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x298624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298628: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x298628u;
    SET_GPR_U32(ctx, 31, 0x298630u);
    ctx->pc = 0x29862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298628u;
            // 0x29862c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298630u; }
        if (ctx->pc != 0x298630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298630u; }
        if (ctx->pc != 0x298630u) { return; }
    }
    ctx->pc = 0x298630u;
    // 0x298630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298634:
    // 0x298634: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x298634u;
    SET_GPR_U32(ctx, 31, 0x29863Cu);
    ctx->pc = 0x298638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298634u;
            // 0x298638: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29863Cu; }
        if (ctx->pc != 0x29863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29863Cu; }
        if (ctx->pc != 0x29863Cu) { return; }
    }
    ctx->pc = 0x29863Cu;
    // 0x29863c: 0x26109f80  addiu       $s0, $s0, -0x6080
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
    // 0x298640: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x298640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x298644: 0x26a79340  addiu       $a3, $s5, -0x6CC0
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939456));
    // 0x298648: 0x2444aa40  addiu       $a0, $v0, -0x55C0
    ctx->pc = 0x298648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x29864c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x298650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298654: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x298654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x298658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29865c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298660: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x298660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298664: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x298664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298668: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x298668u;
    SET_GPR_U32(ctx, 31, 0x298670u);
    ctx->pc = 0x29866Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298668u;
            // 0x29866c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (runtime->hasFunction(0x2977C8u)) {
        auto targetFn = runtime->lookupFunction(0x2977C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298670u; }
        if (ctx->pc != 0x298670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002977C8_0x2977c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298670u; }
        if (ctx->pc != 0x298670u) { return; }
    }
    ctx->pc = 0x298670u;
    // 0x298670: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298670u;
    {
        const bool branch_taken_0x298670 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298670u;
            // 0x298674: 0x2d01025  or          $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298670) {
            ctx->pc = 0x298690u;
            goto label_298690;
        }
    }
    ctx->pc = 0x298678u;
    // 0x298678: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298678u;
    SET_GPR_U32(ctx, 31, 0x298680u);
    ctx->pc = 0x29867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298678u;
            // 0x29867c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298680u; }
        if (ctx->pc != 0x298680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298680u; }
        if (ctx->pc != 0x298680u) { return; }
    }
    ctx->pc = 0x298680u;
    // 0x298680: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298680u;
    SET_GPR_U32(ctx, 31, 0x298688u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298688u; }
        if (ctx->pc != 0x298688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298688u; }
        if (ctx->pc != 0x298688u) { return; }
    }
    ctx->pc = 0x298688u;
    // 0x298688: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x298688u;
    {
        const bool branch_taken_0x298688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298688u;
            // 0x29868c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298688) {
            ctx->pc = 0x2986DCu;
            goto label_2986dc;
        }
    }
    ctx->pc = 0x298690u;
label_298690:
    // 0x298690: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298690u;
    SET_GPR_U32(ctx, 31, 0x298698u);
    ctx->pc = 0x298694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298690u;
            // 0x298694: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298698u; }
        if (ctx->pc != 0x298698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298698u; }
        if (ctx->pc != 0x298698u) { return; }
    }
    ctx->pc = 0x298698u;
    // 0x298698: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298698u;
    {
        const bool branch_taken_0x298698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298698) {
            ctx->pc = 0x2986B0u;
            goto label_2986b0;
        }
    }
    ctx->pc = 0x2986A0u;
    // 0x2986a0: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x2986A0u;
    SET_GPR_U32(ctx, 31, 0x2986A8u);
    ctx->pc = 0x2986A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986A0u;
            // 0x2986a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986A8u; }
        if (ctx->pc != 0x2986A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986A8u; }
        if (ctx->pc != 0x2986A8u) { return; }
    }
    ctx->pc = 0x2986A8u;
    // 0x2986a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2986A8u;
    {
        const bool branch_taken_0x2986a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2986A8u;
            // 0x2986ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986a8) {
            ctx->pc = 0x2986DCu;
            goto label_2986dc;
        }
    }
    ctx->pc = 0x2986B0u;
label_2986b0:
    // 0x2986b0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2986B0u;
    {
        const bool branch_taken_0x2986b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2986b0) {
            ctx->pc = 0x2986C8u;
            goto label_2986c8;
        }
    }
    ctx->pc = 0x2986B8u;
    // 0x2986b8: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x2986B8u;
    SET_GPR_U32(ctx, 31, 0x2986C0u);
    ctx->pc = 0x2986BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986B8u;
            // 0x2986bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986C0u; }
        if (ctx->pc != 0x2986C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986C0u; }
        if (ctx->pc != 0x2986C0u) { return; }
    }
    ctx->pc = 0x2986C0u;
    // 0x2986c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2986C0u;
    {
        const bool branch_taken_0x2986c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2986C0u;
            // 0x2986c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986c0) {
            ctx->pc = 0x2986DCu;
            goto label_2986dc;
        }
    }
    ctx->pc = 0x2986C8u;
label_2986c8:
    // 0x2986c8: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x2986C8u;
    SET_GPR_U32(ctx, 31, 0x2986D0u);
    ctx->pc = 0x2986CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986C8u;
            // 0x2986cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D0u; }
        if (ctx->pc != 0x2986D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D0u; }
        if (ctx->pc != 0x2986D0u) { return; }
    }
    ctx->pc = 0x2986D0u;
    // 0x2986d0: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x2986D0u;
    SET_GPR_U32(ctx, 31, 0x2986D8u);
    ctx->pc = 0x2986D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986D0u;
            // 0x2986d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D8u; }
        if (ctx->pc != 0x2986D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D8u; }
        if (ctx->pc != 0x2986D8u) { return; }
    }
    ctx->pc = 0x2986D8u;
    // 0x2986d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2986d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2986dc:
    // 0x2986dc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2986dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2986e0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2986e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2986e4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2986e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2986e8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2986e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2986ec: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2986ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2986f0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2986f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2986f4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2986f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2986f8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2986f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2986fc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2986fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298700: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x298700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298704: 0x3e00008  jr          $ra
    ctx->pc = 0x298704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298704u;
            // 0x298708: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298510u: goto label_298510;
            case 0x298520u: goto label_298520;
            case 0x2985C0u: goto label_2985c0;
            case 0x2985C8u: goto label_2985c8;
            case 0x2985FCu: goto label_2985fc;
            case 0x29860Cu: goto label_29860c;
            case 0x298618u: goto label_298618;
            case 0x298634u: goto label_298634;
            case 0x298690u: goto label_298690;
            case 0x2986B0u: goto label_2986b0;
            case 0x2986C8u: goto label_2986c8;
            case 0x2986DCu: goto label_2986dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29870Cu;
    // 0x29870c: 0x0  nop
    ctx->pc = 0x29870cu;
    // NOP
    // 0x298710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298714: 0x0  nop
    ctx->pc = 0x298714u;
    // NOP
    // 0x298718: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29871c: 0x0  nop
    ctx->pc = 0x29871cu;
    // NOP
    // 0x298720: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x298724: 0x0  nop
    ctx->pc = 0x298724u;
    // NOP
    // 0x298728: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29872c: 0x0  nop
    ctx->pc = 0x29872cu;
    // NOP
    // 0x298730: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x298730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x298734: 0x0  nop
    ctx->pc = 0x298734u;
    // NOP
    // 0x298738: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x298738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29873c: 0x0  nop
    ctx->pc = 0x29873cu;
    // NOP
    // 0x298740: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x298740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x298744: 0x0  nop
    ctx->pc = 0x298744u;
    // NOP
    // 0x298748: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x298748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29874c: 0x0  nop
    ctx->pc = 0x29874cu;
    // NOP
    // 0x298750: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298754: 0x0  nop
    ctx->pc = 0x298754u;
    // NOP
    // 0x298758: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x298758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29875c: 0x0  nop
    ctx->pc = 0x29875cu;
    // NOP
    // 0x298760: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298764: 0x0  nop
    ctx->pc = 0x298764u;
    // NOP
    // 0x298768: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x298768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29876c: 0x0  nop
    ctx->pc = 0x29876cu;
    // NOP
}
