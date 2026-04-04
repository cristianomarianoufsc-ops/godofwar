#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291410
// Address: 0x291410 - 0x291858
void sub_00291410_0x291410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291410_0x291410");
#endif

    ctx->pc = 0x291410u;

    // 0x291410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291414: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x291414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x291418: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x291418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29141c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29141cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291420: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291424: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x291424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x291428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29142c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29142cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291430: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x291430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291434: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x291434u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x291438: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x291438u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29143c: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x29143cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291440: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x291440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291444: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x291444u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291448: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x291448u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29144c: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x29144cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291450: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x291450u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291454: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x291454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x291458: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x291458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x29145c: 0xe36824  and         $t5, $a3, $v1
    ctx->pc = 0x29145cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x291460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291464: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x291464u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x291468: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x291468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x29146c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29146Cu;
    {
        const bool branch_taken_0x29146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29146Cu;
            // 0x291470: 0xed3826  xor         $a3, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29146c) {
            ctx->pc = 0x2914A8u;
            goto label_2914a8;
        }
    }
    ctx->pc = 0x291474u;
    // 0x291474: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x291474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x291478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29147c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x29147cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x291480: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x291480u;
    {
        const bool branch_taken_0x291480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291480u;
            // 0x291484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291480) {
            ctx->pc = 0x2914ACu;
            goto label_2914ac;
        }
    }
    ctx->pc = 0x291488u;
    // 0x291488: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x29148c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x291490: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x291490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x291494: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x291494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x291498: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x291498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x29149c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x29149cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2914a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2914A0u;
    {
        const bool branch_taken_0x2914a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914A0u;
            // 0x2914a4: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914a0) {
            ctx->pc = 0x2914D8u;
            goto label_2914d8;
        }
    }
    ctx->pc = 0x2914A8u;
label_2914a8:
    // 0x2914a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2914a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2914ac:
    // 0x2914ac: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2914ACu;
    SET_GPR_U32(ctx, 31, 0x2914B4u);
    ctx->pc = 0x2914B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2914ACu;
            // 0x2914b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914B4u; }
        if (ctx->pc != 0x2914B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914B4u; }
        if (ctx->pc != 0x2914B4u) { return; }
    }
    ctx->pc = 0x2914B4u;
    // 0x2914b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2914b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2914b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914bc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2914BCu;
    SET_GPR_U32(ctx, 31, 0x2914C4u);
    ctx->pc = 0x2914C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2914BCu;
            // 0x2914c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914C4u; }
        if (ctx->pc != 0x2914C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914C4u; }
        if (ctx->pc != 0x2914C4u) { return; }
    }
    ctx->pc = 0x2914C4u;
    // 0x2914c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2914c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914c8: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x2914C8u;
    SET_GPR_U32(ctx, 31, 0x2914D0u);
    ctx->pc = 0x2914CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2914C8u;
            // 0x2914cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914D0u; }
        if (ctx->pc != 0x2914D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2914D0u; }
        if (ctx->pc != 0x2914D0u) { return; }
    }
    ctx->pc = 0x2914D0u;
    // 0x2914d0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2914D0u;
    {
        const bool branch_taken_0x2914d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914D0u;
            // 0x2914d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914d0) {
            ctx->pc = 0x291840u;
            goto label_291840;
        }
    }
    ctx->pc = 0x2914D8u;
label_2914d8:
    // 0x2914d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2914D8u;
    {
        const bool branch_taken_0x2914d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2914DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914D8u;
            // 0x2914dc: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914d8) {
            ctx->pc = 0x291504u;
            goto label_291504;
        }
    }
    ctx->pc = 0x2914E0u;
    // 0x2914e0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2914e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2914e4: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2914E4u;
    {
        const bool branch_taken_0x2914e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2914E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914E4u;
            // 0x2914e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914e4) {
            ctx->pc = 0x29183Cu;
            goto label_29183c;
        }
    }
    ctx->pc = 0x2914ECu;
    // 0x2914ec: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2914ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2914f0: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2914F0u;
    {
        const bool branch_taken_0x2914f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2914f0) {
            ctx->pc = 0x2914F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2914F0u;
            // 0x2914f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29183Cu;
            goto label_29183c;
        }
    }
    ctx->pc = 0x2914F8u;
    // 0x2914f8: 0x110a00ba  beq         $t0, $t2, . + 4 + (0xBA << 2)
    ctx->pc = 0x2914F8u;
    {
        const bool branch_taken_0x2914f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x2914FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914F8u;
            // 0x2914fc: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f8) {
            ctx->pc = 0x2917E4u;
            goto label_2917e4;
        }
    }
    ctx->pc = 0x291500u;
    // 0x291500: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_291504:
    // 0x291504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291508: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x291508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29150c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x29150Cu;
    {
        const bool branch_taken_0x29150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29150c) {
            ctx->pc = 0x291510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29150Cu;
            // 0x291510: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x291570u;
            goto label_291570;
        }
    }
    ctx->pc = 0x291514u;
    // 0x291514: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x291514u;
    {
        const bool branch_taken_0x291514 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x291518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291514u;
            // 0x291518: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291514) {
            ctx->pc = 0x291548u;
            goto label_291548;
        }
    }
    ctx->pc = 0x29151Cu;
    // 0x29151c: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x291520: 0x19c00014  blez        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x291520u;
    {
        const bool branch_taken_0x291520 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x291524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291520u;
            // 0x291524: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291520) {
            ctx->pc = 0x291574u;
            goto label_291574;
        }
    }
    ctx->pc = 0x291528u;
label_291528:
    // 0x291528: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x291528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29152c: 0x0  nop
    ctx->pc = 0x29152cu;
    // NOP
    // 0x291530: 0x0  nop
    ctx->pc = 0x291530u;
    // NOP
    // 0x291534: 0x0  nop
    ctx->pc = 0x291534u;
    // NOP
    // 0x291538: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291538u;
    {
        const bool branch_taken_0x291538 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x29153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291538u;
            // 0x29153c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291538) {
            ctx->pc = 0x291528u;
            runtime->cooperativeGuestYield();
            goto label_291528;
        }
    }
    ctx->pc = 0x291540u;
    // 0x291540: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x291540u;
    {
        const bool branch_taken_0x291540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291540u;
            // 0x291544: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291540) {
            ctx->pc = 0x291578u;
            goto label_291578;
        }
    }
    ctx->pc = 0x291548u;
label_291548:
    // 0x291548: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x291548u;
    {
        const bool branch_taken_0x291548 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291548u;
            // 0x29154c: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291548) {
            ctx->pc = 0x291574u;
            goto label_291574;
        }
    }
    ctx->pc = 0x291550u;
label_291550:
    // 0x291550: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x291550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x291554: 0x0  nop
    ctx->pc = 0x291554u;
    // NOP
    // 0x291558: 0x0  nop
    ctx->pc = 0x291558u;
    // NOP
    // 0x29155c: 0x0  nop
    ctx->pc = 0x29155cu;
    // NOP
    // 0x291560: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291560u;
    {
        const bool branch_taken_0x291560 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x291564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291560u;
            // 0x291564: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291560) {
            ctx->pc = 0x291550u;
            runtime->cooperativeGuestYield();
            goto label_291550;
        }
    }
    ctx->pc = 0x291568u;
    // 0x291568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291568u;
    {
        const bool branch_taken_0x291568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291568u;
            // 0x29156c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291568) {
            ctx->pc = 0x291578u;
            goto label_291578;
        }
    }
    ctx->pc = 0x291570u;
label_291570:
    // 0x291570: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x291570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_291574:
    // 0x291574: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_291578:
    // 0x291578: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29157c: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x29157cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x291580: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x291580u;
    {
        const bool branch_taken_0x291580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291580u;
            // 0x291584: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291580) {
            ctx->pc = 0x2915F0u;
            goto label_2915f0;
        }
    }
    ctx->pc = 0x291588u;
    // 0x291588: 0x1520000d  bnez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x291588u;
    {
        const bool branch_taken_0x291588 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291588u;
            // 0x29158c: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291588) {
            ctx->pc = 0x2915C0u;
            goto label_2915c0;
        }
    }
    ctx->pc = 0x291590u;
    // 0x291590: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x291590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x291594: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x291594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291598: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x291598u;
    {
        const bool branch_taken_0x291598 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x29159Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291598u;
            // 0x29159c: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291598) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915A0u;
label_2915a0:
    // 0x2915a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2915a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2915a4: 0x0  nop
    ctx->pc = 0x2915a4u;
    // NOP
    // 0x2915a8: 0x0  nop
    ctx->pc = 0x2915a8u;
    // NOP
    // 0x2915ac: 0x0  nop
    ctx->pc = 0x2915acu;
    // NOP
    // 0x2915b0: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2915B0u;
    {
        const bool branch_taken_0x2915b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2915B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915B0u;
            // 0x2915b4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915b0) {
            ctx->pc = 0x2915A0u;
            runtime->cooperativeGuestYield();
            goto label_2915a0;
        }
    }
    ctx->pc = 0x2915B8u;
    // 0x2915b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2915B8u;
    {
        const bool branch_taken_0x2915b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2915b8) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915C0u;
label_2915c0:
    // 0x2915c0: 0x912c0  sll         $v0, $t1, 11
    ctx->pc = 0x2915c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x2915c4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2915C4u;
    {
        const bool branch_taken_0x2915c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2915C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915C4u;
            // 0x2915c8: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915c4) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915CCu;
    // 0x2915cc: 0x0  nop
    ctx->pc = 0x2915ccu;
    // NOP
label_2915d0:
    // 0x2915d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2915d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2915d4: 0x0  nop
    ctx->pc = 0x2915d4u;
    // NOP
    // 0x2915d8: 0x0  nop
    ctx->pc = 0x2915d8u;
    // NOP
    // 0x2915dc: 0x0  nop
    ctx->pc = 0x2915dcu;
    // NOP
    // 0x2915e0: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2915E0u;
    {
        const bool branch_taken_0x2915e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2915E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915E0u;
            // 0x2915e4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915e0) {
            ctx->pc = 0x2915D0u;
            runtime->cooperativeGuestYield();
            goto label_2915d0;
        }
    }
    ctx->pc = 0x2915E8u;
    // 0x2915e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2915E8u;
    {
        const bool branch_taken_0x2915e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2915e8) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915F0u;
label_2915f0:
    // 0x2915f0: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x2915f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2915f4: 0x2444fc01  addiu       $a0, $v0, -0x3FF
    ctx->pc = 0x2915f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_2915f8:
    // 0x2915f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2915F8u;
    {
        const bool branch_taken_0x2915f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2915FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915F8u;
            // 0x2915fc: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915f8) {
            ctx->pc = 0x291618u;
            goto label_291618;
        }
    }
    ctx->pc = 0x291600u;
    // 0x291600: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x291604: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x291608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29160c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x29160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x291610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x291610u;
    {
        const bool branch_taken_0x291610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291610u;
            // 0x291614: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291610) {
            ctx->pc = 0x291644u;
            goto label_291644;
        }
    }
    ctx->pc = 0x291618u;
label_291618:
    // 0x291618: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x291618u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29161c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x29161cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x291620: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291620u;
    {
        const bool branch_taken_0x291620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291620u;
            // 0x291624: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291620) {
            ctx->pc = 0x29163Cu;
            goto label_29163c;
        }
    }
    ctx->pc = 0x291628u;
    // 0x291628: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x291628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x29162c: 0x4e1006  srlv        $v0, $t6, $v0
    ctx->pc = 0x29162cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x291630: 0xce4004  sllv        $t0, $t6, $a2
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x291634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291634u;
    {
        const bool branch_taken_0x291634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291634u;
            // 0x291638: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291634) {
            ctx->pc = 0x291644u;
            goto label_291644;
        }
    }
    ctx->pc = 0x29163Cu;
label_29163c:
    // 0x29163c: 0xce3804  sllv        $a3, $t6, $a2
    ctx->pc = 0x29163cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x291640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x291640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291644:
    // 0x291644: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x291644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x291648: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291648u;
    {
        const bool branch_taken_0x291648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291648u;
            // 0x29164c: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291648) {
            ctx->pc = 0x291668u;
            goto label_291668;
        }
    }
    ctx->pc = 0x291650u;
    // 0x291650: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x291654: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x291654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x291658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29165c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x29165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x291660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x291660u;
    {
        const bool branch_taken_0x291660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291660u;
            // 0x291664: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291660) {
            ctx->pc = 0x291694u;
            goto label_291694;
        }
    }
    ctx->pc = 0x291668u;
label_291668:
    // 0x291668: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x291668u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29166c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x29166cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x291670: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291670u;
    {
        const bool branch_taken_0x291670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291670u;
            // 0x291674: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291670) {
            ctx->pc = 0x29168Cu;
            goto label_29168c;
        }
    }
    ctx->pc = 0x291678u;
    // 0x291678: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x291678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x29167c: 0x4f1006  srlv        $v0, $t7, $v0
    ctx->pc = 0x29167cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x291680: 0xcf5004  sllv        $t2, $t7, $a2
    ctx->pc = 0x291680u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x291684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291684u;
    {
        const bool branch_taken_0x291684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291684u;
            // 0x291688: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291684) {
            ctx->pc = 0x291694u;
            goto label_291694;
        }
    }
    ctx->pc = 0x29168Cu;
label_29168c:
    // 0x29168c: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x29168cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x291690: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x291690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291694:
    // 0x291694: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x291694u;
    {
        const bool branch_taken_0x291694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291694u;
            // 0x291698: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291694) {
            ctx->pc = 0x2916E0u;
            goto label_2916e0;
        }
    }
    ctx->pc = 0x29169Cu;
    // 0x29169c: 0x0  nop
    ctx->pc = 0x29169cu;
    // NOP
label_2916a0:
    // 0x2916a0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x2916a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2916a4: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2916a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2916a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2916a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2916ac: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2916ACu;
    {
        const bool branch_taken_0x2916ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2916B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916ACu;
            // 0x2916b0: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916ac) {
            ctx->pc = 0x2916C8u;
            goto label_2916c8;
        }
    }
    ctx->pc = 0x2916B4u;
    // 0x2916b4: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x2916b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2916b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2916bc: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2916c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2916C0u;
    {
        const bool branch_taken_0x2916c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916C0u;
            // 0x2916c4: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916c0) {
            ctx->pc = 0x2916E0u;
            goto label_2916e0;
        }
    }
    ctx->pc = 0x2916C8u;
label_2916c8:
    // 0x2916c8: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x2916c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2916cc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2916CCu;
    {
        const bool branch_taken_0x2916cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916CCu;
            // 0x2916d0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916cc) {
            ctx->pc = 0x2917E0u;
            goto label_2917e0;
        }
    }
    ctx->pc = 0x2916D4u;
    // 0x2916d4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2916d8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2916d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2916dc: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x2916dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2916e0:
    // 0x2916e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2916e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2916E4u;
    {
        const bool branch_taken_0x2916e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2916E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916E4u;
            // 0x2916e8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916e4) {
            ctx->pc = 0x2916A0u;
            runtime->cooperativeGuestYield();
            goto label_2916a0;
        }
    }
    ctx->pc = 0x2916ECu;
    // 0x2916ec: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x2916ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2916f0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2916f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2916f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2916f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2916f8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2916F8u;
    {
        const bool branch_taken_0x2916f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2916FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916F8u;
            // 0x2916fc: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916f8) {
            ctx->pc = 0x291708u;
            goto label_291708;
        }
    }
    ctx->pc = 0x291700u;
    // 0x291700: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x291700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291704: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x291704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291708:
    // 0x291708: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x291708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x29170c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x29170Cu;
    {
        const bool branch_taken_0x29170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29170Cu;
            // 0x291710: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29170c) {
            ctx->pc = 0x2917E4u;
            goto label_2917e4;
        }
    }
    ctx->pc = 0x291714u;
    // 0x291714: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x291718: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29171c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x29171cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x291720: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x291720u;
    {
        const bool branch_taken_0x291720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291720u;
            // 0x291724: 0x2882fc02  slti        $v0, $a0, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291720) {
            ctx->pc = 0x291750u;
            goto label_291750;
        }
    }
    ctx->pc = 0x291728u;
    // 0x291728: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x291728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x29172c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x29172cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_291730:
    // 0x291730: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x291730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x291734: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x291734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x291738: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x291738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29173c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x29173cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x291740: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x291740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x291744: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x291744u;
    {
        const bool branch_taken_0x291744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291744u;
            // 0x291748: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291744) {
            ctx->pc = 0x291730u;
            runtime->cooperativeGuestYield();
            goto label_291730;
        }
    }
    ctx->pc = 0x29174Cu;
    // 0x29174c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x29174cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_291750:
    // 0x291750: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291750u;
    {
        const bool branch_taken_0x291750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291750u;
            // 0x291754: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291750) {
            ctx->pc = 0x2917A0u;
            goto label_2917a0;
        }
    }
    ctx->pc = 0x291758u;
    // 0x291758: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x291758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x29175c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x29175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x291760: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x291760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x291764: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x291764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x291768: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x291768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29176c: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x29176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x291770: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x291770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291774: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x291774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x291778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29177c: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x29177cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x291780: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x291780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291784: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x291784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x291788: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x291788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29178c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29178cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x291790: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x291790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x291794: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x291794u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x291798: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x291798u;
    {
        const bool branch_taken_0x291798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291798u;
            // 0x29179c: 0x1638825  or          $s1, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291798) {
            ctx->pc = 0x291838u;
            goto label_291838;
        }
    }
    ctx->pc = 0x2917A0u;
label_2917a0:
    // 0x2917a0: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x2917a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2917a4: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x2917a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2917a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2917A8u;
    {
        const bool branch_taken_0x2917a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917A8u;
            // 0x2917ac: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917a8) {
            ctx->pc = 0x2917C4u;
            goto label_2917c4;
        }
    }
    ctx->pc = 0x2917B0u;
    // 0x2917b0: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x2917b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2917b4: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x2917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2917b8: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2917b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2917bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2917BCu;
    {
        const bool branch_taken_0x2917bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917BCu;
            // 0x2917c0: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917bc) {
            ctx->pc = 0x291804u;
            goto label_291804;
        }
    }
    ctx->pc = 0x2917C4u;
label_2917c4:
    // 0x2917c4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x2917c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2917c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2917C8u;
    {
        const bool branch_taken_0x2917c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917C8u;
            // 0x2917cc: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917c8) {
            ctx->pc = 0x2917FCu;
            goto label_2917fc;
        }
    }
    ctx->pc = 0x2917D0u;
    // 0x2917d0: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x2917d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2917d4: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2917d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2917D8u;
    {
        const bool branch_taken_0x2917d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917D8u;
            // 0x2917dc: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917d8) {
            ctx->pc = 0x291800u;
            goto label_291800;
        }
    }
    ctx->pc = 0x2917E0u;
label_2917e0:
    // 0x2917e0: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x2917e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_2917e4:
    // 0x2917e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2917e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2917e8: 0x244265a8  addiu       $v0, $v0, 0x65A8
    ctx->pc = 0x2917e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26024));
    // 0x2917ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2917ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2917f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2917f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2917f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2917F4u;
    {
        const bool branch_taken_0x2917f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917F4u;
            // 0x2917f8: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917f4) {
            ctx->pc = 0x29183Cu;
            goto label_29183c;
        }
    }
    ctx->pc = 0x2917FCu;
label_2917fc:
    // 0x2917fc: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x2917fcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_291800:
    // 0x291800: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x291800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_291804:
    // 0x291804: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x291804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291808: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x291808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29180c: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x29180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x291810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291814: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x291818: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x291818u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x29181c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x29181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x291820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291828: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x291828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29182c: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x29182cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x291830: 0x1838825  or          $s1, $t4, $v1
    ctx->pc = 0x291830u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x291834: 0x0  nop
    ctx->pc = 0x291834u;
    // NOP
label_291838:
    // 0x291838: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x291838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29183c:
    // 0x29183c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291840:
    // 0x291840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x291840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291844: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x291844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29184c: 0x3e00008  jr          $ra
    ctx->pc = 0x29184Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29184Cu;
            // 0x291850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2914A8u: goto label_2914a8;
            case 0x2914ACu: goto label_2914ac;
            case 0x2914D8u: goto label_2914d8;
            case 0x291504u: goto label_291504;
            case 0x291528u: goto label_291528;
            case 0x291548u: goto label_291548;
            case 0x291550u: goto label_291550;
            case 0x291570u: goto label_291570;
            case 0x291574u: goto label_291574;
            case 0x291578u: goto label_291578;
            case 0x2915A0u: goto label_2915a0;
            case 0x2915C0u: goto label_2915c0;
            case 0x2915D0u: goto label_2915d0;
            case 0x2915F0u: goto label_2915f0;
            case 0x2915F8u: goto label_2915f8;
            case 0x291618u: goto label_291618;
            case 0x29163Cu: goto label_29163c;
            case 0x291644u: goto label_291644;
            case 0x291668u: goto label_291668;
            case 0x29168Cu: goto label_29168c;
            case 0x291694u: goto label_291694;
            case 0x2916A0u: goto label_2916a0;
            case 0x2916C8u: goto label_2916c8;
            case 0x2916E0u: goto label_2916e0;
            case 0x291708u: goto label_291708;
            case 0x291730u: goto label_291730;
            case 0x291750u: goto label_291750;
            case 0x2917A0u: goto label_2917a0;
            case 0x2917C4u: goto label_2917c4;
            case 0x2917E0u: goto label_2917e0;
            case 0x2917E4u: goto label_2917e4;
            case 0x2917FCu: goto label_2917fc;
            case 0x291800u: goto label_291800;
            case 0x291804u: goto label_291804;
            case 0x291838u: goto label_291838;
            case 0x29183Cu: goto label_29183c;
            case 0x291840u: goto label_291840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291854u;
    // 0x291854: 0x0  nop
    ctx->pc = 0x291854u;
    // NOP
}
