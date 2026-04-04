#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F268
// Address: 0x15f268 - 0x15f440
void sub_0015F268_0x15f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F268_0x15f268");
#endif

    ctx->pc = 0x15f268u;

    // 0x15f268: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15f26c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15f270: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x15f270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x15f274: 0x7a180  sll         $s4, $a3, 6
    ctx->pc = 0x15f274u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x15f278: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x15f278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x15f27c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15f27cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f280: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x15f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x15f284: 0x890c0  sll         $s2, $t0, 3
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15f288: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x15f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x15f28c: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x15f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x15f290: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x15f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x15f294: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x15f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15f298: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x15f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x15f29c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15f29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f2a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15f2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x15f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x15f2ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15f2acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2b0: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15f2b4: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x15f2b8: 0x12220056  beq         $s1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x15F2B8u;
    {
        const bool branch_taken_0x15f2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2B8u;
            // 0x15f2bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2b8) {
            ctx->pc = 0x15F414u;
            goto label_15f414;
        }
    }
    ctx->pc = 0x15F2C0u;
    // 0x15f2c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15f2c4: 0x0  nop
    ctx->pc = 0x15f2c4u;
    // NOP
label_15f2c8:
    // 0x15f2c8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x15f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x15f2cc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x15F2CCu;
    {
        const bool branch_taken_0x15f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2CCu;
            // 0x15f2d0: 0x2951021  addu        $v0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2cc) {
            ctx->pc = 0x15F400u;
            goto label_15f400;
        }
    }
    ctx->pc = 0x15F2D4u;
    // 0x15f2d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15f2d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15f2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15f2dc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15F2DCu;
    {
        const bool branch_taken_0x15f2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2DCu;
            // 0x15f2e0: 0x2951021  addu        $v0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2dc) {
            ctx->pc = 0x15F400u;
            goto label_15f400;
        }
    }
    ctx->pc = 0x15F2E4u;
    // 0x15f2e4: 0x56e00040  bnel        $s7, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x15F2E4u;
    {
        const bool branch_taken_0x15f2e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f2e4) {
            ctx->pc = 0x15F2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2E4u;
            // 0x15f2e8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F3E8u;
            goto label_15f3e8;
        }
    }
    ctx->pc = 0x15F2ECu;
    // 0x15f2ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15f2f0: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x15F2F0u;
    SET_GPR_U32(ctx, 31, 0x15F2F8u);
    ctx->pc = 0x15F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2F0u;
            // 0x15f2f4: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2F8u; }
        if (ctx->pc != 0x15F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2F8u; }
        if (ctx->pc != 0x15F2F8u) { return; }
    }
    ctx->pc = 0x15F2F8u;
    // 0x15f2f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2fc: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15f300: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15f300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15f304: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15f308: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15f30c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x15F30Cu;
    SET_GPR_U32(ctx, 31, 0x15F314u);
    ctx->pc = 0x15F310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F30Cu;
            // 0x15f310: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F314u; }
        if (ctx->pc != 0x15F314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F314u; }
        if (ctx->pc != 0x15F314u) { return; }
    }
    ctx->pc = 0x15F314u;
    // 0x15f314: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15f318: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x15f318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x15f31c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x15f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15f320: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15f324: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15f324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15f328: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x15f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x15f32c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x15f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x15f330: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x15f334: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x15f334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x15f338: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x15f33c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x15f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x15f340: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x15f344: 0x8e6303b0  lw          $v1, 0x3B0($s3)
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x15f348: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x15f34c: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15f350: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x15f350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x15f354: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x15f354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x15f358: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x15f358u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x15f35c: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x15f360: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x15f360u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x15f364: 0x8ce2dd58  lw          $v0, -0x22A8($a3)
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x15f368: 0xdc630050  ld          $v1, 0x50($v1)
    ctx->pc = 0x15f368u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15f36c: 0xfca80028  sd          $t0, 0x28($a1)
    ctx->pc = 0x15f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 8));
    // 0x15f370: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x15f374: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x15f374u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x15f378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15f37c: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x15f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x15f380: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x15f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x15f384: 0x9d63f1ac  lwu         $v1, -0xE54($t3)
    ctx->pc = 0x15f384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4294963628)));
    // 0x15f388: 0x9d24f1a8  lwu         $a0, -0xE58($t1)
    ctx->pc = 0x15f388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 4294963624)));
    // 0x15f38c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15f38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15f390: 0xfcaa0038  sd          $t2, 0x38($a1)
    ctx->pc = 0x15f390u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 10));
    // 0x15f394: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x15f394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x15f398: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15f39c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x15F39Cu;
    SET_GPR_U32(ctx, 31, 0x15F3A4u);
    ctx->pc = 0x15F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F39Cu;
            // 0x15f3a0: 0xfca30030  sd          $v1, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3A4u; }
        if (ctx->pc != 0x15F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3A4u; }
        if (ctx->pc != 0x15F3A4u) { return; }
    }
    ctx->pc = 0x15F3A4u;
    // 0x15f3a4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x15F3A4u;
    SET_GPR_U32(ctx, 31, 0x15F3ACu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3ACu; }
        if (ctx->pc != 0x15F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3ACu; }
        if (ctx->pc != 0x15F3ACu) { return; }
    }
    ctx->pc = 0x15F3ACu;
    // 0x15f3ac: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x15f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x15f3b0: 0x2463bb98  addiu       $v1, $v1, -0x4468
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
    // 0x15f3b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15f3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f3c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f3c8:
    // 0x15f3c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f3cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15f3d0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x15f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x15f3d4: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x15f3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x15f3d8: 0x0  nop
    ctx->pc = 0x15f3d8u;
    // NOP
    // 0x15f3dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15F3DCu;
    {
        const bool branch_taken_0x15f3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3DCu;
            // 0x15f3e0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3dc) {
            ctx->pc = 0x15F3C8u;
            runtime->cooperativeGuestYield();
            goto label_15f3c8;
        }
    }
    ctx->pc = 0x15F3E4u;
    // 0x15f3e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_15f3e8:
    // 0x15f3e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3ec: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15f3f0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15f3f4: 0x40f809  jalr        $v0
    ctx->pc = 0x15F3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F3FCu);
        ctx->pc = 0x15F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3F4u;
            // 0x15f3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F3FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F2C8u: goto label_15f2c8;
            case 0x15F3C8u: goto label_15f3c8;
            case 0x15F3E8u: goto label_15f3e8;
            case 0x15F400u: goto label_15f400;
            case 0x15F414u: goto label_15f414;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F3FCu; }
            if (ctx->pc != 0x15F3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x15F3FCu;
    // 0x15f3fc: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_15f400:
    // 0x15f400: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x15f400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15f408: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x15f408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x15f40c: 0x5622ffae  bnel        $s1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x15F40Cu;
    {
        const bool branch_taken_0x15f40c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f40c) {
            ctx->pc = 0x15F410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F40Cu;
            // 0x15f410: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F2C8u;
            runtime->cooperativeGuestYield();
            goto label_15f2c8;
        }
    }
    ctx->pc = 0x15F414u;
label_15f414:
    // 0x15f414: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x15f414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f418: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x15f418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f41c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x15f41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f420: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15f420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f428: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x15f428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f42c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x15f42cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f430: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x15f430u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f438: 0x3e00008  jr          $ra
    ctx->pc = 0x15F438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F438u;
            // 0x15f43c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F2C8u: goto label_15f2c8;
            case 0x15F3C8u: goto label_15f3c8;
            case 0x15F3E8u: goto label_15f3e8;
            case 0x15F400u: goto label_15f400;
            case 0x15F414u: goto label_15f414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F440u;
}
