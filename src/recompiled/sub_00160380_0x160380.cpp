#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160380
// Address: 0x160380 - 0x160478
void sub_00160380_0x160380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160380_0x160380");
#endif

    ctx->pc = 0x160380u;

    // 0x160380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160384: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x160388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16038c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160390: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x160390u;
    SET_GPR_U32(ctx, 31, 0x160398u);
    ctx->pc = 0x160394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160390u;
            // 0x160394: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160398u; }
        if (ctx->pc != 0x160398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160398u; }
        if (ctx->pc != 0x160398u) { return; }
    }
    ctx->pc = 0x160398u;
    // 0x160398: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16039c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16039cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1603a0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1603a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1603a8: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1603A8u;
    SET_GPR_U32(ctx, 31, 0x1603B0u);
    ctx->pc = 0x1603ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603A8u;
            // 0x1603ac: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603B0u; }
        if (ctx->pc != 0x1603B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603B0u; }
        if (ctx->pc != 0x1603B0u) { return; }
    }
    ctx->pc = 0x1603B0u;
    // 0x1603b0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1603b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1603b8: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x1603b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1603bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1603c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1603c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1603c4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1603c8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1603c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1603cc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1603d0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1603d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1603d4: 0x24a4dd58  addiu       $a0, $a1, -0x22A8
    ctx->pc = 0x1603d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958424));
    // 0x1603d8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1603d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1603dc: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1603e0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1603e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1603e4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1603e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1603e8: 0x8ca5dd58  lw          $a1, -0x22A8($a1)
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958424)));
    // 0x1603ec: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1603f0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1603f4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1603f8: 0x8e06f168  lw          $a2, -0xE98($s0)
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1603fc: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x160400: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160404: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x160408: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16040c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16040cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x160410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x160410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x160414: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x160418: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x160418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x16041c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x160420: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x160420u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x160424: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x160424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x160428: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x16042c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x16042cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x160430: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x160430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x160434: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x160434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x160438: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x160438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x16043c: 0x9d02f1ac  lwu         $v0, -0xE54($t0)
    ctx->pc = 0x16043cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963628)));
    // 0x160440: 0x9d23f1a8  lwu         $v1, -0xE58($t1)
    ctx->pc = 0x160440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4294963624)));
    // 0x160444: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x160444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x160448: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x160448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x16044c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x16044cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x160450: 0xfcca0028  sd          $t2, 0x28($a2)
    ctx->pc = 0x160450u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 10));
    // 0x160454: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x160454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x160458: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x160458u;
    SET_GPR_U32(ctx, 31, 0x160460u);
    ctx->pc = 0x16045Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160458u;
            // 0x16045c: 0xfcc20020  sd          $v0, 0x20($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160460u; }
        if (ctx->pc != 0x160460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160460u; }
        if (ctx->pc != 0x160460u) { return; }
    }
    ctx->pc = 0x160460u;
    // 0x160460: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x160460u;
    SET_GPR_U32(ctx, 31, 0x160468u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160468u; }
        if (ctx->pc != 0x160468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160468u; }
        if (ctx->pc != 0x160468u) { return; }
    }
    ctx->pc = 0x160468u;
    // 0x160468: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16046c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16046cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160470: 0x3e00008  jr          $ra
    ctx->pc = 0x160470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160470u;
            // 0x160474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160478u;
}
