#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA4F8
// Address: 0x1ba4f8 - 0x1ba8f8
void sub_001BA4F8_0x1ba4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA4F8_0x1ba4f8");
#endif

    ctx->pc = 0x1ba4f8u;

    // 0x1ba4f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ba4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ba4fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ba4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ba500: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1ba500u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1ba504: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ba504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ba508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ba508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ba50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba510: 0x8e42cbf4  lw          $v0, -0x340C($s2)
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953972)));
    // 0x1ba514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA518u;
    {
        const bool branch_taken_0x1ba518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA518u;
            // 0x1ba51c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba518) {
            ctx->pc = 0x1BA534u;
            goto label_1ba534;
        }
    }
    ctx->pc = 0x1BA520u;
    // 0x1ba520: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA524u;
            // 0x1ba528: 0xae42cbf4  sw          $v0, -0x340C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA534u;
            goto label_1ba534;
        }
    }
    ctx->pc = 0x1BA52Cu;
    // 0x1ba52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba530: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x1ba530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_1ba534:
    // 0x1ba534: 0x8e021514  lw          $v0, 0x1514($s0)
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
    // 0x1ba538: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1BA538u;
    {
        const bool branch_taken_0x1ba538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA538u;
            // 0x1ba53c: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba538) {
            ctx->pc = 0x1BA644u;
            goto label_1ba644;
        }
    }
    ctx->pc = 0x1BA540u;
    // 0x1ba540: 0x248477d0  addiu       $a0, $a0, 0x77D0
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    // 0x1ba544: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ba548: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1ba548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ba54c: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x1ba54cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1ba550: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba554: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1ba554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ba558: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x1ba558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1ba55c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ba55cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ba560: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1ba560u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1ba564: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1ba564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1ba568: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x1BA568u;
    SET_GPR_U32(ctx, 31, 0x1BA570u);
    ctx->pc = 0x1BA56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA568u;
            // 0x1ba56c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188EF0u;
    if (runtime->hasFunction(0x188EF0u)) {
        auto targetFn = runtime->lookupFunction(0x188EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA570u; }
        if (ctx->pc != 0x1BA570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00188ef0_0x188ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA570u; }
        if (ctx->pc != 0x1BA570u) { return; }
    }
    ctx->pc = 0x1BA570u;
    // 0x1ba570: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1BA570u;
    {
        const bool branch_taken_0x1ba570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA570u;
            // 0x1ba574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba570) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA578u;
    // 0x1ba578: 0x8e031514  lw          $v1, 0x1514($s0)
    ctx->pc = 0x1ba578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
    // 0x1ba57c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA57Cu;
    {
        const bool branch_taken_0x1ba57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA57Cu;
            // 0x1ba580: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba57c) {
            ctx->pc = 0x1BA5C0u;
            goto label_1ba5c0;
        }
    }
    ctx->pc = 0x1BA584u;
    // 0x1ba584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba588: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1ba588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x1ba58c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba590: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba594: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x1BA594u;
    SET_GPR_U32(ctx, 31, 0x1BA59Cu);
    ctx->pc = 0x1BA598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA594u;
            // 0x1ba598: 0x8c4411d0  lw          $a0, 0x11D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA59Cu; }
        if (ctx->pc != 0x1BA59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA59Cu; }
        if (ctx->pc != 0x1BA59Cu) { return; }
    }
    ctx->pc = 0x1BA59Cu;
    // 0x1ba59c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba5a0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1ba5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1ba5a4: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1ba5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1ba5a8: 0x24c658e8  addiu       $a2, $a2, 0x58E8
    ctx->pc = 0x1ba5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
    // 0x1ba5ac: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1BA5ACu;
    SET_GPR_U32(ctx, 31, 0x1BA5B4u);
    ctx->pc = 0x1BA5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5ACu;
            // 0x1ba5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5B4u; }
        if (ctx->pc != 0x1BA5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5B4u; }
        if (ctx->pc != 0x1BA5B4u) { return; }
    }
    ctx->pc = 0x1BA5B4u;
    // 0x1ba5b4: 0x8e031514  lw          $v1, 0x1514($s0)
    ctx->pc = 0x1ba5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
    // 0x1ba5b8: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1ba5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1ba5bc: 0x0  nop
    ctx->pc = 0x1ba5bcu;
    // NOP
label_1ba5c0:
    // 0x1ba5c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA5C0u;
    {
        const bool branch_taken_0x1ba5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5C0u;
            // 0x1ba5c4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5c0) {
            ctx->pc = 0x1BA5E0u;
            goto label_1ba5e0;
        }
    }
    ctx->pc = 0x1BA5C8u;
    // 0x1ba5c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA5C8u;
    {
        const bool branch_taken_0x1ba5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5c8) {
            ctx->pc = 0x1BA5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5C8u;
            // 0x1ba5cc: 0x8e021514  lw          $v0, 0x1514($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA5D0u;
    // 0x1ba5d0: 0xc0623c4  jal         func_188F10
    ctx->pc = 0x1BA5D0u;
    SET_GPR_U32(ctx, 31, 0x1BA5D8u);
    ctx->pc = 0x188F10u;
    if (runtime->hasFunction(0x188F10u)) {
        auto targetFn = runtime->lookupFunction(0x188F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5D8u; }
        if (ctx->pc != 0x1BA5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00188f10_0x188f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5D8u; }
        if (ctx->pc != 0x1BA5D8u) { return; }
    }
    ctx->pc = 0x1BA5D8u;
    // 0x1ba5d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1BA5D8u;
    {
        const bool branch_taken_0x1ba5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5d8) {
            ctx->pc = 0x1BA5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5D8u;
            // 0x1ba5dc: 0x8e021514  lw          $v0, 0x1514($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA5E0u;
label_1ba5e0:
    // 0x1ba5e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba5e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ba5e8: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x1ba5ec: 0x24a558f8  addiu       $a1, $a1, 0x58F8
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    // 0x1ba5f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba5f4: 0xc08a978  jal         func_22A5E0
    ctx->pc = 0x1BA5F4u;
    SET_GPR_U32(ctx, 31, 0x1BA5FCu);
    ctx->pc = 0x1BA5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5F4u;
            // 0x1ba5f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A5E0u;
    if (runtime->hasFunction(0x22A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5FCu; }
        if (ctx->pc != 0x1BA5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A5E0_0x22a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5FCu; }
        if (ctx->pc != 0x1BA5FCu) { return; }
    }
    ctx->pc = 0x1BA5FCu;
    // 0x1ba5fc: 0xae001520  sw          $zero, 0x1520($s0)
    ctx->pc = 0x1ba5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 0));
    // 0x1ba600: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba604: 0xae001514  sw          $zero, 0x1514($s0)
    ctx->pc = 0x1ba604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5396), GPR_U32(ctx, 0));
    // 0x1ba608: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1BA608u;
    {
        const bool branch_taken_0x1ba608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA608u;
            // 0x1ba60c: 0xae42cbf4  sw          $v0, -0x340C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba608) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA610u;
label_1ba610:
    // 0x1ba610: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba614: 0x2463cc10  addiu       $v1, $v1, -0x33F0
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954000));
    // 0x1ba618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba61c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba62c: 0xc06cb48  jal         func_1B2D20
    ctx->pc = 0x1BA62Cu;
    SET_GPR_U32(ctx, 31, 0x1BA634u);
    ctx->pc = 0x1BA630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA62Cu;
            // 0x1ba630: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D20u;
    if (runtime->hasFunction(0x1B2D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA634u; }
        if (ctx->pc != 0x1BA634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D20_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA634u; }
        if (ctx->pc != 0x1BA634u) { return; }
    }
    ctx->pc = 0x1BA634u;
    // 0x1ba634: 0x8e021514  lw          $v0, 0x1514($s0)
    ctx->pc = 0x1ba634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5396)));
    // 0x1ba638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba63c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1BA63Cu;
    {
        const bool branch_taken_0x1ba63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA63Cu;
            // 0x1ba640: 0xae021514  sw          $v0, 0x1514($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba63c) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA644u;
label_1ba644:
    // 0x1ba644: 0x8e02151c  lw          $v0, 0x151C($s0)
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5404)));
    // 0x1ba648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA648u;
    {
        const bool branch_taken_0x1ba648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA648u;
            // 0x1ba64c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba648) {
            ctx->pc = 0x1BA67Cu;
            goto label_1ba67c;
        }
    }
    ctx->pc = 0x1BA650u;
    // 0x1ba650: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1ba650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x1ba654: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1ba658: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1ba658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1ba65c: 0x24c658e8  addiu       $a2, $a2, 0x58E8
    ctx->pc = 0x1ba65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
    // 0x1ba660: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1BA660u;
    SET_GPR_U32(ctx, 31, 0x1BA668u);
    ctx->pc = 0x1BA664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA660u;
            // 0x1ba664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA668u; }
        if (ctx->pc != 0x1BA668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA668u; }
        if (ctx->pc != 0x1BA668u) { return; }
    }
    ctx->pc = 0x1BA668u;
    // 0x1ba668: 0x8e03151c  lw          $v1, 0x151C($s0)
    ctx->pc = 0x1ba668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5404)));
    // 0x1ba66c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba670: 0xac43e5e8  sw          $v1, -0x1A18($v0)
    ctx->pc = 0x1ba670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960616), GPR_U32(ctx, 3));
    // 0x1ba674: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1BA674u;
    {
        const bool branch_taken_0x1ba674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA674u;
            // 0x1ba678: 0xae00151c  sw          $zero, 0x151C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba674) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA67Cu;
label_1ba67c:
    // 0x1ba67c: 0x8e021518  lw          $v0, 0x1518($s0)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5400)));
    // 0x1ba680: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BA680u;
    {
        const bool branch_taken_0x1ba680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA680u;
            // 0x1ba684: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba680) {
            ctx->pc = 0x1BA714u;
            goto label_1ba714;
        }
    }
    ctx->pc = 0x1BA688u;
    // 0x1ba688: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1ba688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x1ba68c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1ba68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1ba690: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1ba694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba698: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1BA698u;
    SET_GPR_U32(ctx, 31, 0x1BA6A0u);
    ctx->pc = 0x1BA69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA698u;
            // 0x1ba69c: 0x24c658e8  addiu       $a2, $a2, 0x58E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6A0u; }
        if (ctx->pc != 0x1BA6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6A0u; }
        if (ctx->pc != 0x1BA6A0u) { return; }
    }
    ctx->pc = 0x1BA6A0u;
    // 0x1ba6a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ba6a4: 0x8e041518  lw          $a0, 0x1518($s0)
    ctx->pc = 0x1ba6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5400)));
    // 0x1ba6a8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BA6A8u;
    SET_GPR_U32(ctx, 31, 0x1BA6B0u);
    ctx->pc = 0x1BA6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6A8u;
            // 0x1ba6ac: 0x24a55908  addiu       $a1, $a1, 0x5908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6B0u; }
        if (ctx->pc != 0x1BA6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6B0u; }
        if (ctx->pc != 0x1BA6B0u) { return; }
    }
    ctx->pc = 0x1BA6B0u;
    // 0x1ba6b0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA6B0u;
    {
        const bool branch_taken_0x1ba6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba6b0) {
            ctx->pc = 0x1BA6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6B0u;
            // 0x1ba6b4: 0x8e041518  lw          $a0, 0x1518($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA6F8u;
            goto label_1ba6f8;
        }
    }
    ctx->pc = 0x1BA6B8u;
    // 0x1ba6b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba6bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba6c0: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x1ba6c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ba6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ba6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba6cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba6d0: 0x24a55910  addiu       $a1, $a1, 0x5910
    ctx->pc = 0x1ba6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22800));
    // 0x1ba6d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba6d8: 0xc08a978  jal         func_22A5E0
    ctx->pc = 0x1BA6D8u;
    SET_GPR_U32(ctx, 31, 0x1BA6E0u);
    ctx->pc = 0x1BA6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6D8u;
            // 0x1ba6dc: 0xac62cbf8  sw          $v0, -0x3408($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A5E0u;
    if (runtime->hasFunction(0x22A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6E0u; }
        if (ctx->pc != 0x1BA6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A5E0_0x22a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6E0u; }
        if (ctx->pc != 0x1BA6E0u) { return; }
    }
    ctx->pc = 0x1BA6E0u;
    // 0x1ba6e0: 0x8e041518  lw          $a0, 0x1518($s0)
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5400)));
    // 0x1ba6e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba6e8: 0xc06cb48  jal         func_1B2D20
    ctx->pc = 0x1BA6E8u;
    SET_GPR_U32(ctx, 31, 0x1BA6F0u);
    ctx->pc = 0x1BA6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6E8u;
            // 0x1ba6ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D20u;
    if (runtime->hasFunction(0x1B2D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6F0u; }
        if (ctx->pc != 0x1BA6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D20_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6F0u; }
        if (ctx->pc != 0x1BA6F0u) { return; }
    }
    ctx->pc = 0x1BA6F0u;
    // 0x1ba6f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA6F0u;
    {
        const bool branch_taken_0x1ba6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6F0u;
            // 0x1ba6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6f0) {
            ctx->pc = 0x1BA708u;
            goto label_1ba708;
        }
    }
    ctx->pc = 0x1BA6F8u;
label_1ba6f8:
    // 0x1ba6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6fc: 0xc06cb48  jal         func_1B2D20
    ctx->pc = 0x1BA6FCu;
    SET_GPR_U32(ctx, 31, 0x1BA704u);
    ctx->pc = 0x1BA700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6FCu;
            // 0x1ba700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D20u;
    if (runtime->hasFunction(0x1B2D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA704u; }
        if (ctx->pc != 0x1BA704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D20_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA704u; }
        if (ctx->pc != 0x1BA704u) { return; }
    }
    ctx->pc = 0x1BA704u;
    // 0x1ba704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba708:
    // 0x1ba708: 0xae001518  sw          $zero, 0x1518($s0)
    ctx->pc = 0x1ba708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5400), GPR_U32(ctx, 0));
    // 0x1ba70c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1BA70Cu;
    {
        const bool branch_taken_0x1ba70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA70Cu;
            // 0x1ba710: 0xae021524  sw          $v0, 0x1524($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba70c) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA714u;
label_1ba714:
    // 0x1ba714: 0x8e021524  lw          $v0, 0x1524($s0)
    ctx->pc = 0x1ba714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5412)));
    // 0x1ba718: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA718u;
    {
        const bool branch_taken_0x1ba718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba718) {
            ctx->pc = 0x1BA770u;
            goto label_1ba770;
        }
    }
    ctx->pc = 0x1BA720u;
    // 0x1ba720: 0xc0623bc  jal         func_188EF0
    ctx->pc = 0x1BA720u;
    SET_GPR_U32(ctx, 31, 0x1BA728u);
    ctx->pc = 0x188EF0u;
    if (runtime->hasFunction(0x188EF0u)) {
        auto targetFn = runtime->lookupFunction(0x188EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA728u; }
        if (ctx->pc != 0x1BA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00188ef0_0x188ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA728u; }
        if (ctx->pc != 0x1BA728u) { return; }
    }
    ctx->pc = 0x1BA728u;
    // 0x1ba728: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA728u;
    {
        const bool branch_taken_0x1ba728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba728) {
            ctx->pc = 0x1BA770u;
            goto label_1ba770;
        }
    }
    ctx->pc = 0x1BA730u;
    // 0x1ba730: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1ba734: 0x8e22cbf8  lw          $v0, -0x3408($s1)
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953976)));
    // 0x1ba738: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA738u;
    {
        const bool branch_taken_0x1ba738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA738u;
            // 0x1ba73c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba738) {
            ctx->pc = 0x1BA75Cu;
            goto label_1ba75c;
        }
    }
    ctx->pc = 0x1BA740u;
    // 0x1ba740: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ba740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ba744: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x1ba744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x1ba748: 0x24a558f8  addiu       $a1, $a1, 0x58F8
    ctx->pc = 0x1ba748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    // 0x1ba74c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba750: 0xc08a978  jal         func_22A5E0
    ctx->pc = 0x1BA750u;
    SET_GPR_U32(ctx, 31, 0x1BA758u);
    ctx->pc = 0x1BA754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA750u;
            // 0x1ba754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A5E0u;
    if (runtime->hasFunction(0x22A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA758u; }
        if (ctx->pc != 0x1BA758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A5E0_0x22a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA758u; }
        if (ctx->pc != 0x1BA758u) { return; }
    }
    ctx->pc = 0x1BA758u;
    // 0x1ba758: 0xae20cbf8  sw          $zero, -0x3408($s1)
    ctx->pc = 0x1ba758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953976), GPR_U32(ctx, 0));
label_1ba75c:
    // 0x1ba75c: 0xae001520  sw          $zero, 0x1520($s0)
    ctx->pc = 0x1ba75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 0));
    // 0x1ba760: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba764: 0xae001524  sw          $zero, 0x1524($s0)
    ctx->pc = 0x1ba764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5412), GPR_U32(ctx, 0));
    // 0x1ba768: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1BA768u;
    {
        const bool branch_taken_0x1ba768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA768u;
            // 0x1ba76c: 0xae42cbf4  sw          $v0, -0x340C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba768) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA770u;
label_1ba770:
    // 0x1ba770: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BA774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA770u;
            // 0x1ba774: 0x8e021508  lw          $v0, 0x1508($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA78Cu;
            goto label_1ba78c;
        }
    }
    ctx->pc = 0x1BA778u;
    // 0x1ba778: 0xae001500  sw          $zero, 0x1500($s0)
    ctx->pc = 0x1ba778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5376), GPR_U32(ctx, 0));
    // 0x1ba77c: 0xae00150c  sw          $zero, 0x150C($s0)
    ctx->pc = 0x1ba77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5388), GPR_U32(ctx, 0));
    // 0x1ba780: 0xae001504  sw          $zero, 0x1504($s0)
    ctx->pc = 0x1ba780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5380), GPR_U32(ctx, 0));
    // 0x1ba784: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA784u;
    {
        const bool branch_taken_0x1ba784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA784u;
            // 0x1ba788: 0xae001508  sw          $zero, 0x1508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba784) {
            ctx->pc = 0x1BA800u;
            goto label_1ba800;
        }
    }
    ctx->pc = 0x1BA78Cu;
label_1ba78c:
    // 0x1ba78c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BA78Cu;
    {
        const bool branch_taken_0x1ba78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba78c) {
            ctx->pc = 0x1BA790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA78Cu;
            // 0x1ba790: 0x8e0514fc  lw          $a1, 0x14FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA804u;
            goto label_1ba804;
        }
    }
    ctx->pc = 0x1BA794u;
    // 0x1ba794: 0x8e051500  lw          $a1, 0x1500($s0)
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x1ba798: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BA798u;
    {
        const bool branch_taken_0x1ba798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA798u;
            // 0x1ba79c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba798) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA7A0u;
    // 0x1ba7a0: 0xc602150c  lwc1        $f2, 0x150C($s0)
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba7a4: 0xc441c64c  lwc1        $f1, -0x39B4($v0)
    ctx->pc = 0x1ba7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7a8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x1ba7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ba7ac: 0x8e0414f8  lw          $a0, 0x14F8($s0)
    ctx->pc = 0x1ba7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5368)));
    // 0x1ba7b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba7b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ba7b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ba7b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1ba7b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ba7b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ba7bc: 0x8e031504  lw          $v1, 0x1504($s0)
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5380)));
    // 0x1ba7c0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1ba7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ba7c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ba7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ba7c8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1ba7c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ba7cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba7d0: 0xe602150c  swc1        $f2, 0x150C($s0)
    ctx->pc = 0x1ba7d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5388), bits); }
    // 0x1ba7d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba7d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ba7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ba7dc: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba7e0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1ba7e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ba7e4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ba7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ba7e8: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1ba7e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1ba7ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ba7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba7f0: 0x50a2003b  beql        $a1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1BA7F0u;
    {
        const bool branch_taken_0x1ba7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba7f0) {
            ctx->pc = 0x1BA7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7F0u;
            // 0x1ba7f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA8E0u;
            goto label_1ba8e0;
        }
    }
    ctx->pc = 0x1BA7F8u;
    // 0x1ba7f8: 0xae0214fc  sw          $v0, 0x14FC($s0)
    ctx->pc = 0x1ba7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5372), GPR_U32(ctx, 2));
    // 0x1ba7fc: 0x0  nop
    ctx->pc = 0x1ba7fcu;
    // NOP
label_1ba800:
    // 0x1ba800: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
label_1ba804:
    // 0x1ba804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba808: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x1ba808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1ba80c: 0x26070130  addiu       $a3, $s0, 0x130
    ctx->pc = 0x1ba80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1ba810: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1ba810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1ba814: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA814u;
    SET_GPR_U32(ctx, 31, 0x1BA81Cu);
    ctx->pc = 0x1BA818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA814u;
            // 0x1ba818: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA81Cu; }
        if (ctx->pc != 0x1BA81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA81Cu; }
        if (ctx->pc != 0x1BA81Cu) { return; }
    }
    ctx->pc = 0x1BA81Cu;
    // 0x1ba81c: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba824: 0x26060114  addiu       $a2, $s0, 0x114
    ctx->pc = 0x1ba824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x1ba828: 0x26070134  addiu       $a3, $s0, 0x134
    ctx->pc = 0x1ba828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    // 0x1ba82c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x1ba82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1ba830: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA830u;
    SET_GPR_U32(ctx, 31, 0x1BA838u);
    ctx->pc = 0x1BA834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA830u;
            // 0x1ba834: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA838u; }
        if (ctx->pc != 0x1BA838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA838u; }
        if (ctx->pc != 0x1BA838u) { return; }
    }
    ctx->pc = 0x1BA838u;
    // 0x1ba838: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba840: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x1ba844: 0x26070138  addiu       $a3, $s0, 0x138
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x1ba848: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ba84c: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA84Cu;
    SET_GPR_U32(ctx, 31, 0x1BA854u);
    ctx->pc = 0x1BA850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA84Cu;
            // 0x1ba850: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA854u; }
        if (ctx->pc != 0x1BA854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA854u; }
        if (ctx->pc != 0x1BA854u) { return; }
    }
    ctx->pc = 0x1BA854u;
    // 0x1ba854: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba85c: 0x2606011c  addiu       $a2, $s0, 0x11C
    ctx->pc = 0x1ba85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x1ba860: 0x2607013c  addiu       $a3, $s0, 0x13C
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x1ba864: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA864u;
    SET_GPR_U32(ctx, 31, 0x1BA86Cu);
    ctx->pc = 0x1BA868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA864u;
            // 0x1ba868: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA86Cu; }
        if (ctx->pc != 0x1BA86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA86Cu; }
        if (ctx->pc != 0x1BA86Cu) { return; }
    }
    ctx->pc = 0x1BA86Cu;
    // 0x1ba86c: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba874: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1ba874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1ba878: 0x26070140  addiu       $a3, $s0, 0x140
    ctx->pc = 0x1ba878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1ba87c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ba880: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA880u;
    SET_GPR_U32(ctx, 31, 0x1BA888u);
    ctx->pc = 0x1BA884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA880u;
            // 0x1ba884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA888u; }
        if (ctx->pc != 0x1BA888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA888u; }
        if (ctx->pc != 0x1BA888u) { return; }
    }
    ctx->pc = 0x1BA888u;
    // 0x1ba888: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba890: 0x26060124  addiu       $a2, $s0, 0x124
    ctx->pc = 0x1ba890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x1ba894: 0x26070144  addiu       $a3, $s0, 0x144
    ctx->pc = 0x1ba894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x1ba898: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ba898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ba89c: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA89Cu;
    SET_GPR_U32(ctx, 31, 0x1BA8A4u);
    ctx->pc = 0x1BA8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA89Cu;
            // 0x1ba8a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A4u; }
        if (ctx->pc != 0x1BA8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8A4u; }
        if (ctx->pc != 0x1BA8A4u) { return; }
    }
    ctx->pc = 0x1BA8A4u;
    // 0x1ba8a4: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8ac: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x1ba8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x1ba8b0: 0x26070148  addiu       $a3, $s0, 0x148
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x1ba8b4: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1ba8b8: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA8B8u;
    SET_GPR_U32(ctx, 31, 0x1BA8C0u);
    ctx->pc = 0x1BA8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8B8u;
            // 0x1ba8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8C0u; }
        if (ctx->pc != 0x1BA8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8C0u; }
        if (ctx->pc != 0x1BA8C0u) { return; }
    }
    ctx->pc = 0x1BA8C0u;
    // 0x1ba8c0: 0x8e0514fc  lw          $a1, 0x14FC($s0)
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8c8: 0x2486012c  addiu       $a2, $a0, 0x12C
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x1ba8cc: 0x2487014c  addiu       $a3, $a0, 0x14C
    ctx->pc = 0x1ba8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
    // 0x1ba8d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ba8d4: 0xc06ea3e  jal         func_1BA8F8
    ctx->pc = 0x1BA8D4u;
    SET_GPR_U32(ctx, 31, 0x1BA8DCu);
    ctx->pc = 0x1BA8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8D4u;
            // 0x1ba8d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8F8u;
    if (runtime->hasFunction(0x1BA8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8DCu; }
        if (ctx->pc != 0x1BA8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8F8_0x1ba8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8DCu; }
        if (ctx->pc != 0x1BA8DCu) { return; }
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ba8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ba8e0:
    // 0x1ba8e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba8e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ba8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba8e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ba8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8ECu;
            // 0x1ba8f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA534u: goto label_1ba534;
            case 0x1BA5C0u: goto label_1ba5c0;
            case 0x1BA5E0u: goto label_1ba5e0;
            case 0x1BA610u: goto label_1ba610;
            case 0x1BA644u: goto label_1ba644;
            case 0x1BA67Cu: goto label_1ba67c;
            case 0x1BA6F8u: goto label_1ba6f8;
            case 0x1BA708u: goto label_1ba708;
            case 0x1BA714u: goto label_1ba714;
            case 0x1BA75Cu: goto label_1ba75c;
            case 0x1BA770u: goto label_1ba770;
            case 0x1BA78Cu: goto label_1ba78c;
            case 0x1BA800u: goto label_1ba800;
            case 0x1BA804u: goto label_1ba804;
            case 0x1BA8DCu: goto label_1ba8dc;
            case 0x1BA8E0u: goto label_1ba8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA8F4u;
    // 0x1ba8f4: 0x0  nop
    ctx->pc = 0x1ba8f4u;
    // NOP
}
