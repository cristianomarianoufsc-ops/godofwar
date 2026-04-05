#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160700
// Address: 0x160700 - 0x160c20
void sub_00160700_0x160700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160700_0x160700");
#endif

    ctx->pc = 0x160700u;

    // 0x160700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x160700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x160704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160708: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x160708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16070c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16070cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160710: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x160710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x160714: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x160714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160718: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x160718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16071c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16071cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160720: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x160720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x160724: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x160724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x160728: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x160728u;
    {
        const bool branch_taken_0x160728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160728u;
            // 0x16072c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160728) {
            ctx->pc = 0x16076Cu;
            goto label_16076c;
        }
    }
    ctx->pc = 0x160730u;
    // 0x160730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160738: 0x8c44c2b8  lw          $a0, -0x3D48($v0)
    ctx->pc = 0x160738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951608)));
    // 0x16073c: 0xc05a2ec  jal         func_168BB0
    ctx->pc = 0x16073Cu;
    SET_GPR_U32(ctx, 31, 0x160744u);
    ctx->pc = 0x160740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16073Cu;
            // 0x160740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168BB0u;
    if (runtime->hasFunction(0x168BB0u)) {
        auto targetFn = runtime->lookupFunction(0x168BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160744u; }
        if (ctx->pc != 0x160744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168BB0_0x168bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160744u; }
        if (ctx->pc != 0x160744u) { return; }
    }
    ctx->pc = 0x160744u;
    // 0x160744: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x160748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16074c: 0x8c44c2bc  lw          $a0, -0x3D44($v0)
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951612)));
    // 0x160750: 0xc05a2ec  jal         func_168BB0
    ctx->pc = 0x160750u;
    SET_GPR_U32(ctx, 31, 0x160758u);
    ctx->pc = 0x160754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160750u;
            // 0x160754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168BB0u;
    if (runtime->hasFunction(0x168BB0u)) {
        auto targetFn = runtime->lookupFunction(0x168BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160758u; }
        if (ctx->pc != 0x160758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168BB0_0x168bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160758u; }
        if (ctx->pc != 0x160758u) { return; }
    }
    ctx->pc = 0x160758u;
    // 0x160758: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x16075c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160760: 0x8c44c2c0  lw          $a0, -0x3D40($v0)
    ctx->pc = 0x160760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951616)));
    // 0x160764: 0xc05a2ec  jal         func_168BB0
    ctx->pc = 0x160764u;
    SET_GPR_U32(ctx, 31, 0x16076Cu);
    ctx->pc = 0x160768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160764u;
            // 0x160768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168BB0u;
    if (runtime->hasFunction(0x168BB0u)) {
        auto targetFn = runtime->lookupFunction(0x168BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16076Cu; }
        if (ctx->pc != 0x16076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168BB0_0x168bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16076Cu; }
        if (ctx->pc != 0x16076Cu) { return; }
    }
    ctx->pc = 0x16076Cu;
label_16076c:
    // 0x16076c: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x16076Cu;
    {
        const bool branch_taken_0x16076c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x160770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16076Cu;
            // 0x160770: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16076c) {
            ctx->pc = 0x160838u;
            goto label_160838;
        }
    }
    ctx->pc = 0x160774u;
    // 0x160774: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x160774u;
    SET_GPR_U32(ctx, 31, 0x16077Cu);
    ctx->pc = 0x160778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160774u;
            // 0x160778: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16077Cu; }
        if (ctx->pc != 0x16077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16077Cu; }
        if (ctx->pc != 0x16077Cu) { return; }
    }
    ctx->pc = 0x16077Cu;
    // 0x16077c: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x160780: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160784: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x160784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x160788: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16078c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x160790: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x160790u;
    SET_GPR_U32(ctx, 31, 0x160798u);
    ctx->pc = 0x160794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160790u;
            // 0x160794: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160798u; }
        if (ctx->pc != 0x160798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160798u; }
        if (ctx->pc != 0x160798u) { return; }
    }
    ctx->pc = 0x160798u;
    // 0x160798: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16079c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x16079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1607a0: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x1607a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1607a4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1607a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1607a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1607a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1607ac: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1607acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1607b0: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1607b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1607b4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1607b8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1607b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1607bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1607c0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1607c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1607c4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1607c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1607c8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1607c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1607cc: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x1607ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1607d0: 0x8ca4dd58  lw          $a0, -0x22A8($a1)
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958424)));
    // 0x1607d4: 0x9d02f1ac  lwu         $v0, -0xE54($t0)
    ctx->pc = 0x1607d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963628)));
    // 0x1607d8: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1607d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1607dc: 0x9ce3f1a8  lwu         $v1, -0xE58($a3)
    ctx->pc = 0x1607dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294963624)));
    // 0x1607e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1607e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1607e4: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1607e8: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x1607e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x1607ec: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1607ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1607f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1607f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1607f4: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x1607f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x1607f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1607f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1607fc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1607fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x160800: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x160804: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x160804u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x160808: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x160808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x16080c: 0x9d02f1ac  lwu         $v0, -0xE54($t0)
    ctx->pc = 0x16080cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963628)));
    // 0x160810: 0x9ce3f1a8  lwu         $v1, -0xE58($a3)
    ctx->pc = 0x160810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294963624)));
    // 0x160814: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x160814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x160818: 0xfcaa0028  sd          $t2, 0x28($a1)
    ctx->pc = 0x160818u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 10));
    // 0x16081c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x16081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x160820: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x160824: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x160824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x160828: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x160828u;
    SET_GPR_U32(ctx, 31, 0x160830u);
    ctx->pc = 0x16082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160828u;
            // 0x16082c: 0xfca20020  sd          $v0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160830u; }
        if (ctx->pc != 0x160830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160830u; }
        if (ctx->pc != 0x160830u) { return; }
    }
    ctx->pc = 0x160830u;
    // 0x160830: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x160830u;
    SET_GPR_U32(ctx, 31, 0x160838u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160838u; }
        if (ctx->pc != 0x160838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160838u; }
        if (ctx->pc != 0x160838u) { return; }
    }
    ctx->pc = 0x160838u;
label_160838:
    // 0x160838: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x16083c: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x160840: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x160844: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160844u;
    {
        const bool branch_taken_0x160844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160844u;
            // 0x160848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160844) {
            ctx->pc = 0x16086Cu;
            goto label_16086c;
        }
    }
    ctx->pc = 0x16084Cu;
    // 0x16084c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160854: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160858: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x16085c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16085cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160860: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160864: 0x40f809  jalr        $v0
    ctx->pc = 0x160864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16086Cu);
        ctx->pc = 0x160868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160864u;
            // 0x160868: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16086Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16086Cu; }
            if (ctx->pc != 0x16086Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16086Cu;
label_16086c:
    // 0x16086c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x16086cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x160870: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x160874: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x160878: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160878u;
    {
        const bool branch_taken_0x160878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160878u;
            // 0x16087c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160878) {
            ctx->pc = 0x1608A0u;
            goto label_1608a0;
        }
    }
    ctx->pc = 0x160880u;
    // 0x160880: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16088c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160890: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160894: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160898: 0x40f809  jalr        $v0
    ctx->pc = 0x160898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1608A0u);
        ctx->pc = 0x16089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160898u;
            // 0x16089c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1608A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1608A0u; }
            if (ctx->pc != 0x1608A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1608A0u;
label_1608a0:
    // 0x1608a0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1608a4: 0x8e03c2c0  lw          $v1, -0x3D40($s0)
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951616)));
    // 0x1608a8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1608a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1608ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1608ACu;
    {
        const bool branch_taken_0x1608ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608ACu;
            // 0x1608b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608ac) {
            ctx->pc = 0x1608D4u;
            goto label_1608d4;
        }
    }
    ctx->pc = 0x1608B4u;
    // 0x1608b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1608b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1608b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1608bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608c0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1608c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1608c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1608c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608c8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1608c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1608cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1608CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1608D4u);
        ctx->pc = 0x1608D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608CCu;
            // 0x1608d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1608D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1608D4u; }
            if (ctx->pc != 0x1608D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1608D4u;
label_1608d4:
    // 0x1608d4: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x1608d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x1608d8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1608d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1608dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1608DCu;
    {
        const bool branch_taken_0x1608dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608DCu;
            // 0x1608e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608dc) {
            ctx->pc = 0x160908u;
            goto label_160908;
        }
    }
    ctx->pc = 0x1608E4u;
    // 0x1608e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1608e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1608e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1608f0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1608f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1608f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608f8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1608f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1608fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1608FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160904u);
        ctx->pc = 0x160900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608FCu;
            // 0x160900: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160904u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160904u; }
            if (ctx->pc != 0x160904u) { return; }
        }
        }
    }
    ctx->pc = 0x160904u;
    // 0x160904: 0x0  nop
    ctx->pc = 0x160904u;
    // NOP
label_160908:
    // 0x160908: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x16090c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x160910: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160910u;
    {
        const bool branch_taken_0x160910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160910u;
            // 0x160914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160910) {
            ctx->pc = 0x160938u;
            goto label_160938;
        }
    }
    ctx->pc = 0x160918u;
    // 0x160918: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160920: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160924: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16092c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160930: 0x40f809  jalr        $v0
    ctx->pc = 0x160930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160938u);
        ctx->pc = 0x160934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160930u;
            // 0x160934: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160938u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160938u; }
            if (ctx->pc != 0x160938u) { return; }
        }
        }
    }
    ctx->pc = 0x160938u;
label_160938:
    // 0x160938: 0x8e03c2c0  lw          $v1, -0x3D40($s0)
    ctx->pc = 0x160938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951616)));
    // 0x16093c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x16093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x160940: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160940u;
    {
        const bool branch_taken_0x160940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160940u;
            // 0x160944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160940) {
            ctx->pc = 0x160968u;
            goto label_160968;
        }
    }
    ctx->pc = 0x160948u;
    // 0x160948: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16094c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16094cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160950: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160954: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16095c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160960: 0x40f809  jalr        $v0
    ctx->pc = 0x160960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160968u);
        ctx->pc = 0x160964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160960u;
            // 0x160964: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160968u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160968u; }
            if (ctx->pc != 0x160968u) { return; }
        }
        }
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x160968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x16096c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x160970: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160970u;
    {
        const bool branch_taken_0x160970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160970u;
            // 0x160974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160970) {
            ctx->pc = 0x160998u;
            goto label_160998;
        }
    }
    ctx->pc = 0x160978u;
    // 0x160978: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16097c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16097cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160980: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x160980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160984: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16098c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160990: 0x40f809  jalr        $v0
    ctx->pc = 0x160990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160998u);
        ctx->pc = 0x160994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160990u;
            // 0x160994: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160998u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160998u; }
            if (ctx->pc != 0x160998u) { return; }
        }
        }
    }
    ctx->pc = 0x160998u;
label_160998:
    // 0x160998: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x160998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x16099c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1609a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1609A0u;
    {
        const bool branch_taken_0x1609a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609A0u;
            // 0x1609a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609a0) {
            ctx->pc = 0x1609C8u;
            goto label_1609c8;
        }
    }
    ctx->pc = 0x1609A8u;
    // 0x1609a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1609ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1609acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1609b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609b4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1609b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1609b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1609b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609bc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1609bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1609c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1609C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1609C8u);
        ctx->pc = 0x1609C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609C0u;
            // 0x1609c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1609C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1609C8u; }
            if (ctx->pc != 0x1609C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1609C8u;
label_1609c8:
    // 0x1609c8: 0x8e03c2c0  lw          $v1, -0x3D40($s0)
    ctx->pc = 0x1609c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951616)));
    // 0x1609cc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1609ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1609d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1609D0u;
    {
        const bool branch_taken_0x1609d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609D0u;
            // 0x1609d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609d0) {
            ctx->pc = 0x1609F8u;
            goto label_1609f8;
        }
    }
    ctx->pc = 0x1609D8u;
    // 0x1609d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1609dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1609dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609e4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1609e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1609e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609ec: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1609ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1609f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1609F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1609F8u);
        ctx->pc = 0x1609F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609F0u;
            // 0x1609f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1609F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1609F8u; }
            if (ctx->pc != 0x1609F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1609F8u;
label_1609f8:
    // 0x1609f8: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x1609f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x1609fc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1609fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x160a00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A00u;
    {
        const bool branch_taken_0x160a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A00u;
            // 0x160a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a00) {
            ctx->pc = 0x160A28u;
            goto label_160a28;
        }
    }
    ctx->pc = 0x160A08u;
    // 0x160a08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160a14: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160a18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a1c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160a20: 0x40f809  jalr        $v0
    ctx->pc = 0x160A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A28u);
        ctx->pc = 0x160A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A20u;
            // 0x160a24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160A28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160A28u; }
            if (ctx->pc != 0x160A28u) { return; }
        }
        }
    }
    ctx->pc = 0x160A28u;
label_160a28:
    // 0x160a28: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x160a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x160a2c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x160a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x160a30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A30u;
    {
        const bool branch_taken_0x160a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A30u;
            // 0x160a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a30) {
            ctx->pc = 0x160A58u;
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A38u;
    // 0x160a38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160a44: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160a48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a4c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160a50: 0x40f809  jalr        $v0
    ctx->pc = 0x160A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A58u);
        ctx->pc = 0x160A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A50u;
            // 0x160a54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160A58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160A58u; }
            if (ctx->pc != 0x160A58u) { return; }
        }
        }
    }
    ctx->pc = 0x160A58u;
label_160a58:
    // 0x160a58: 0x8e03c2c0  lw          $v1, -0x3D40($s0)
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951616)));
    // 0x160a5c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x160a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x160a60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A60u;
    {
        const bool branch_taken_0x160a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A60u;
            // 0x160a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a60) {
            ctx->pc = 0x160A88u;
            goto label_160a88;
        }
    }
    ctx->pc = 0x160A68u;
    // 0x160a68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a70: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160a74: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160a78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a7c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160a80: 0x40f809  jalr        $v0
    ctx->pc = 0x160A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160A88u);
        ctx->pc = 0x160A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A80u;
            // 0x160a84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160A88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160A88u; }
            if (ctx->pc != 0x160A88u) { return; }
        }
        }
    }
    ctx->pc = 0x160A88u;
label_160a88:
    // 0x160a88: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x160a8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x160a90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A90u;
    {
        const bool branch_taken_0x160a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A90u;
            // 0x160a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a90) {
            ctx->pc = 0x160AB8u;
            goto label_160ab8;
        }
    }
    ctx->pc = 0x160A98u;
    // 0x160a98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160aa0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x160aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160aa4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160aa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160aac: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160ab0: 0x40f809  jalr        $v0
    ctx->pc = 0x160AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160AB8u);
        ctx->pc = 0x160AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AB0u;
            // 0x160ab4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160AB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160AB8u; }
            if (ctx->pc != 0x160AB8u) { return; }
        }
        }
    }
    ctx->pc = 0x160AB8u;
label_160ab8:
    // 0x160ab8: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x160abc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x160ac0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160AC0u;
    {
        const bool branch_taken_0x160ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AC0u;
            // 0x160ac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ac0) {
            ctx->pc = 0x160AE8u;
            goto label_160ae8;
        }
    }
    ctx->pc = 0x160AC8u;
    // 0x160ac8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ad0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160ad4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160adc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160ae0: 0x40f809  jalr        $v0
    ctx->pc = 0x160AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160AE8u);
        ctx->pc = 0x160AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AE0u;
            // 0x160ae4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160AE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160AE8u; }
            if (ctx->pc != 0x160AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0x8e03c2c0  lw          $v1, -0x3D40($s0)
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951616)));
    // 0x160aec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x160af0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160AF0u;
    {
        const bool branch_taken_0x160af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AF0u;
            // 0x160af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160af0) {
            ctx->pc = 0x160B18u;
            goto label_160b18;
        }
    }
    ctx->pc = 0x160AF8u;
    // 0x160af8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x160afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b00: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x160b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160b04: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x160b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b0c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x160b10: 0x40f809  jalr        $v0
    ctx->pc = 0x160B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160B18u);
        ctx->pc = 0x160B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B10u;
            // 0x160b14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x160B18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x160B18u; }
            if (ctx->pc != 0x160B18u) { return; }
        }
        }
    }
    ctx->pc = 0x160B18u;
label_160b18:
    // 0x160b18: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x160B18u;
    {
        const bool branch_taken_0x160b18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B18u;
            // 0x160b1c: 0x2662006c  addiu       $v0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b18) {
            ctx->pc = 0x160B40u;
            goto label_160b40;
        }
    }
    ctx->pc = 0x160B20u;
    // 0x160b20: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x160b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x160b24: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160B24u;
    {
        const bool branch_taken_0x160b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B24u;
            // 0x160b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b24) {
            ctx->pc = 0x160B40u;
            goto label_160b40;
        }
    }
    ctx->pc = 0x160B2Cu;
    // 0x160b2c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x160b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x160b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b34: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x160b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x160b38: 0xc057d10  jal         func_15F440
    ctx->pc = 0x160B38u;
    SET_GPR_U32(ctx, 31, 0x160B40u);
    ctx->pc = 0x160B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B38u;
            // 0x160b3c: 0x34e70055  ori         $a3, $a3, 0x55 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)85);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F440u;
    if (runtime->hasFunction(0x15F440u)) {
        auto targetFn = runtime->lookupFunction(0x15F440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B40u; }
        if (ctx->pc != 0x160B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F440_0x15f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B40u; }
        if (ctx->pc != 0x160B40u) { return; }
    }
    ctx->pc = 0x160B40u;
label_160b40:
    // 0x160b40: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x160B40u;
    {
        const bool branch_taken_0x160b40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B40u;
            // 0x160b44: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b40) {
            ctx->pc = 0x160BFCu;
            goto label_160bfc;
        }
    }
    ctx->pc = 0x160B48u;
    // 0x160b48: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x160B48u;
    SET_GPR_U32(ctx, 31, 0x160B50u);
    ctx->pc = 0x160B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B48u;
            // 0x160b4c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B50u; }
        if (ctx->pc != 0x160B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B50u; }
        if (ctx->pc != 0x160B50u) { return; }
    }
    ctx->pc = 0x160B50u;
    // 0x160b50: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x160b54: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160b58: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x160b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x160b5c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160b60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x160b64: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x160B64u;
    SET_GPR_U32(ctx, 31, 0x160B6Cu);
    ctx->pc = 0x160B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B64u;
            // 0x160b68: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B6Cu; }
        if (ctx->pc != 0x160B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B6Cu; }
        if (ctx->pc != 0x160B6Cu) { return; }
    }
    ctx->pc = 0x160B6Cu;
    // 0x160b6c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160b70: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x160b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x160b74: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x160b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x160b78: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x160b7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x160b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x160b80: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x160b84: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x160b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x160b88: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x160b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x160b8c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x160b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x160b90: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x160b94: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x160b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x160b98: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x160b9c: 0x8ca4dd58  lw          $a0, -0x22A8($a1)
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958424)));
    // 0x160ba0: 0x9d03f1ac  lwu         $v1, -0xE54($t0)
    ctx->pc = 0x160ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294963628)));
    // 0x160ba4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x160ba8: 0x9ce2f1a8  lwu         $v0, -0xE58($a3)
    ctx->pc = 0x160ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294963624)));
    // 0x160bac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x160bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x160bb0: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x160bb4: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x160bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x160bb8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x160bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x160bbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x160bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x160bc0: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x160bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x160bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x160bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160bc8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x160bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x160bcc: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x160bccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x160bd0: 0xae02f168  sw          $v0, -0xE98($s0)
    ctx->pc = 0x160bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
    // 0x160bd4: 0x9d02f1ac  lwu         $v0, -0xE54($t0)
    ctx->pc = 0x160bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963628)));
    // 0x160bd8: 0x9ce3f1a8  lwu         $v1, -0xE58($a3)
    ctx->pc = 0x160bd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294963624)));
    // 0x160bdc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x160bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x160be0: 0xfca90028  sd          $t1, 0x28($a1)
    ctx->pc = 0x160be0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 9));
    // 0x160be4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x160be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x160be8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x160be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x160bec: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x160BECu;
    SET_GPR_U32(ctx, 31, 0x160BF4u);
    ctx->pc = 0x160BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160BECu;
            // 0x160bf0: 0xfca20020  sd          $v0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BF4u; }
        if (ctx->pc != 0x160BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BF4u; }
        if (ctx->pc != 0x160BF4u) { return; }
    }
    ctx->pc = 0x160BF4u;
    // 0x160bf4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x160BF4u;
    SET_GPR_U32(ctx, 31, 0x160BFCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BFCu; }
        if (ctx->pc != 0x160BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BFCu; }
        if (ctx->pc != 0x160BFCu) { return; }
    }
    ctx->pc = 0x160BFCu;
label_160bfc:
    // 0x160bfc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x160bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160c00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x160c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160c04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x160c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160c08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160c0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x160c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160c10: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x160c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c18: 0x3e00008  jr          $ra
    ctx->pc = 0x160C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C18u;
            // 0x160c1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16076Cu: goto label_16076c;
            case 0x160838u: goto label_160838;
            case 0x16086Cu: goto label_16086c;
            case 0x1608A0u: goto label_1608a0;
            case 0x1608D4u: goto label_1608d4;
            case 0x160908u: goto label_160908;
            case 0x160938u: goto label_160938;
            case 0x160968u: goto label_160968;
            case 0x160998u: goto label_160998;
            case 0x1609C8u: goto label_1609c8;
            case 0x1609F8u: goto label_1609f8;
            case 0x160A28u: goto label_160a28;
            case 0x160A58u: goto label_160a58;
            case 0x160A88u: goto label_160a88;
            case 0x160AB8u: goto label_160ab8;
            case 0x160AE8u: goto label_160ae8;
            case 0x160B18u: goto label_160b18;
            case 0x160B40u: goto label_160b40;
            case 0x160BFCu: goto label_160bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160C20u;
}
