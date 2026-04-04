#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001996D0
// Address: 0x1996d0 - 0x19b470
void sub_001996D0_0x1996d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001996D0_0x1996d0");
#endif

    ctx->pc = 0x1996d0u;

label_1996d0:
    // 0x1996d0: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x1996d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x1996d4: 0x7fb10390  sq          $s1, 0x390($sp)
    ctx->pc = 0x1996d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 17));
    // 0x1996d8: 0x7fb003a0  sq          $s0, 0x3A0($sp)
    ctx->pc = 0x1996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 16));
    // 0x1996dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1996dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e0: 0x7fb20380  sq          $s2, 0x380($sp)
    ctx->pc = 0x1996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 18));
    // 0x1996e4: 0x7fb30370  sq          $s3, 0x370($sp)
    ctx->pc = 0x1996e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 19));
    // 0x1996e8: 0xffbf0360  sd          $ra, 0x360($sp)
    ctx->pc = 0x1996e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 31));
    // 0x1996ec: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1996ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1996f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1996f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1996f4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1996F4u;
    {
        const bool branch_taken_0x1996f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1996F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1996F4u;
            // 0x1996f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996f4) {
            ctx->pc = 0x19972Cu;
            goto label_19972c;
        }
    }
    ctx->pc = 0x1996FCu;
    // 0x1996fc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199700: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x199704: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x199704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199708: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19970c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x199710: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x199714: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19971c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19971Cu;
    {
        const bool branch_taken_0x19971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19971Cu;
            // 0x199720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19971c) {
            ctx->pc = 0x199728u;
            goto label_199728;
        }
    }
    ctx->pc = 0x199724u;
    // 0x199724: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x199724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_199728:
    // 0x199728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19972c:
    // 0x19972c: 0x52000147  beql        $s0, $zero, . + 4 + (0x147 << 2)
    ctx->pc = 0x19972Cu;
    {
        const bool branch_taken_0x19972c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19972c) {
            ctx->pc = 0x199730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19972Cu;
            // 0x199730: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199C4Cu;
            goto label_199c4c;
        }
    }
    ctx->pc = 0x199734u;
    // 0x199734: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199738: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19973c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x199740: 0x40f809  jalr        $v0
    ctx->pc = 0x199740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199748u);
        ctx->pc = 0x199744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199740u;
            // 0x199744: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x199748u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199748u; }
            if (ctx->pc != 0x199748u) { return; }
        }
        }
    }
    ctx->pc = 0x199748u;
    // 0x199748: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x199748u;
    {
        const bool branch_taken_0x199748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199748u;
            // 0x19974c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199748) {
            ctx->pc = 0x199C48u;
            goto label_199c48;
        }
    }
    ctx->pc = 0x199750u;
    // 0x199750: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x199750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x199754: 0x8c44c9ac  lw          $a0, -0x3654($v0)
    ctx->pc = 0x199754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953388)));
    // 0x199758: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x199758u;
    SET_GPR_U32(ctx, 31, 0x199760u);
    ctx->pc = 0x19975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199758u;
            // 0x19975c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199760u; }
        if (ctx->pc != 0x199760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199760u; }
        if (ctx->pc != 0x199760u) { return; }
    }
    ctx->pc = 0x199760u;
    // 0x199760: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x199760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199764: 0x96630040  lhu         $v1, 0x40($s3)
    ctx->pc = 0x199764u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x199768: 0x31242  srl         $v0, $v1, 9
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x19976c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199770: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x199770u;
    {
        const bool branch_taken_0x199770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199770u;
            // 0x199774: 0x31202  srl         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199770) {
            ctx->pc = 0x199A20u;
            goto label_199a20;
        }
    }
    ctx->pc = 0x199778u;
    // 0x199778: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19977c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x199780: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x199784: 0x40f809  jalr        $v0
    ctx->pc = 0x199784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19978Cu);
        ctx->pc = 0x199788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199784u;
            // 0x199788: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19978Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19978Cu; }
            if (ctx->pc != 0x19978Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19978Cu;
    // 0x19978c: 0xc081c1e  jal         func_207078
    ctx->pc = 0x19978Cu;
    SET_GPR_U32(ctx, 31, 0x199794u);
    ctx->pc = 0x199790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19978Cu;
            // 0x199790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199794u; }
        if (ctx->pc != 0x199794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199794u; }
        if (ctx->pc != 0x199794u) { return; }
    }
    ctx->pc = 0x199794u;
    // 0x199794: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x199794u;
    {
        const bool branch_taken_0x199794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199794u;
            // 0x199798: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199794) {
            ctx->pc = 0x199C54u;
            goto label_199c54;
        }
    }
    ctx->pc = 0x19979Cu;
    // 0x19979c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1997a0: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1997a4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1997A4u;
    {
        const bool branch_taken_0x1997a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1997A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997A4u;
            // 0x1997a8: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997a4) {
            ctx->pc = 0x1997B8u;
            goto label_1997b8;
        }
    }
    ctx->pc = 0x1997ACu;
    // 0x1997ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997ACu;
            // 0x1997b0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997D8u;
            goto label_1997d8;
        }
    }
    ctx->pc = 0x1997B4u;
    // 0x1997b4: 0x0  nop
    ctx->pc = 0x1997b4u;
    // NOP
label_1997b8:
    // 0x1997b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1997bc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1997bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1997c0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1997c4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1997C4u;
    {
        const bool branch_taken_0x1997c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1997C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997C4u;
            // 0x1997c8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997c4) {
            ctx->pc = 0x1997D8u;
            goto label_1997d8;
        }
    }
    ctx->pc = 0x1997CCu;
    // 0x1997cc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1997CCu;
    SET_GPR_U32(ctx, 31, 0x1997D4u);
    ctx->pc = 0x1997D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1997CCu;
            // 0x1997d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1997D4u; }
        if (ctx->pc != 0x1997D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1997D4u; }
        if (ctx->pc != 0x1997D4u) { return; }
    }
    ctx->pc = 0x1997D4u;
    // 0x1997d4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1997d8:
    // 0x1997d8: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1997d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1997dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1997e0: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1997e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1997E4u;
    {
        const bool branch_taken_0x1997e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1997E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997E4u;
            // 0x1997e8: 0x7fa40340  sq          $a0, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997e4) {
            ctx->pc = 0x1997F4u;
            goto label_1997f4;
        }
    }
    ctx->pc = 0x1997ECu;
    // 0x1997ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1997ECu;
    {
        const bool branch_taken_0x1997ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997ECu;
            // 0x1997f0: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ec) {
            ctx->pc = 0x199814u;
            goto label_199814;
        }
    }
    ctx->pc = 0x1997F4u;
label_1997f4:
    // 0x1997f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1997f8: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1997fc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1997fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x199800: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199800u;
    {
        const bool branch_taken_0x199800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x199804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199800u;
            // 0x199804: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199800) {
            ctx->pc = 0x199814u;
            goto label_199814;
        }
    }
    ctx->pc = 0x199808u;
    // 0x199808: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x199808u;
    SET_GPR_U32(ctx, 31, 0x199810u);
    ctx->pc = 0x19980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199808u;
            // 0x19980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199810u; }
        if (ctx->pc != 0x199810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199810u; }
        if (ctx->pc != 0x199810u) { return; }
    }
    ctx->pc = 0x199810u;
    // 0x199810: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x199810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_199814:
    // 0x199814: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x199814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x199818: 0xdba20340  lqc2        $vf2, 0x340($sp)
    ctx->pc = 0x199818u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x19981c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x19981cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199820: 0xfba10320  sqc2        $vf1, 0x320($sp)
    ctx->pc = 0x199820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199824: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x199828: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x199828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x19982c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19982Cu;
    {
        const bool branch_taken_0x19982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19982Cu;
            // 0x199830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19982c) {
            ctx->pc = 0x199894u;
            goto label_199894;
        }
    }
    ctx->pc = 0x199834u;
    // 0x199834: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x199834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x199838: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199838u;
    {
        const bool branch_taken_0x199838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199838u;
            // 0x19983c: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199838) {
            ctx->pc = 0x199848u;
            goto label_199848;
        }
    }
    ctx->pc = 0x199840u;
    // 0x199840: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x199840u;
    {
        const bool branch_taken_0x199840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199840u;
            // 0x199844: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199840) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x199848u;
label_199848:
    // 0x199848: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19984c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x19984cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x199850: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x199854: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199854u;
    {
        const bool branch_taken_0x199854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x199854) {
            ctx->pc = 0x199858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199854u;
            // 0x199858: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x19985Cu;
    // 0x19985c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x19985Cu;
    SET_GPR_U32(ctx, 31, 0x199864u);
    ctx->pc = 0x199860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19985Cu;
            // 0x199860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199864u; }
        if (ctx->pc != 0x199864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199864u; }
        if (ctx->pc != 0x199864u) { return; }
    }
    ctx->pc = 0x199864u;
    // 0x199864: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x199864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_199868:
    // 0x199868: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x199868u;
    SET_GPR_U32(ctx, 31, 0x199870u);
    ctx->pc = 0x19986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199868u;
            // 0x19986c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199870u; }
        if (ctx->pc != 0x199870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199870u; }
        if (ctx->pc != 0x199870u) { return; }
    }
    ctx->pc = 0x199870u;
    // 0x199870: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x199870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199874: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x199874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x199878: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x199878u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19987c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x19987cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199880: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x199880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x199884: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x199884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x199888: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x199888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x19988c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19988Cu;
    {
        const bool branch_taken_0x19988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19988Cu;
            // 0x199890: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19988c) {
            ctx->pc = 0x1998C8u;
            goto label_1998c8;
        }
    }
    ctx->pc = 0x199894u;
label_199894:
    // 0x199894: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x199894u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x199898: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x199898u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x19989c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x19989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1998a0: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1998a0u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1998a4: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1998a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1998a8: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1998a8u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1998ac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1998acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1998b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1998b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1998b4: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1998b8: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1998bc: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1998bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1998c0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1998c4: 0x0  nop
    ctx->pc = 0x1998c4u;
    // NOP
label_1998c8:
    // 0x1998c8: 0x96620040  lhu         $v0, 0x40($s3)
    ctx->pc = 0x1998c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1998cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1998d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1998d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1998d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1998D4u;
    {
        const bool branch_taken_0x1998d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998D4u;
            // 0x1998d8: 0xdba20320  lqc2        $vf2, 0x320($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998d4) {
            ctx->pc = 0x1998F8u;
            goto label_1998f8;
        }
    }
    ctx->pc = 0x1998DCu;
    // 0x1998dc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1998dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1998e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1998e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1998e4: 0xdba10320  lqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1998e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1998e8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1998e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1998ec: 0xfba10320  sqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1998ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1998f0: 0xdba20320  lqc2        $vf2, 0x320($sp)
    ctx->pc = 0x1998f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1998f4: 0x0  nop
    ctx->pc = 0x1998f4u;
    // NOP
label_1998f8:
    // 0x1998f8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1998f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1998fc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1998fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199900: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x199900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199904: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x199904u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x199908: 0x4a0003bf  vwaitq
    ctx->pc = 0x199908u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19990c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x19990cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x199910: 0x4a0002ff  vnop
    ctx->pc = 0x199910u;
    // NOP operation, no action needed for VU0
    // 0x199914: 0x4a0002ff  vnop
    ctx->pc = 0x199914u;
    // NOP operation, no action needed for VU0
    // 0x199918: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x199918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19991c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x19991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199920: 0xfba20330  sqc2        $vf2, 0x330($sp)
    ctx->pc = 0x199920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199924: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x199924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x199928: 0xfba20320  sqc2        $vf2, 0x320($sp)
    ctx->pc = 0x199928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19992c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x19992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199930: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199934: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x199934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x199938: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x199938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19993c: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x19993cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x199940: 0x4bc218ee  vopmsub.xyz $vf3, $vf3, $vf2
    ctx->pc = 0x199940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199944: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x199944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x199948: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x199948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19994c: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x19994cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x199950: 0x4bc2186e  vopmsub.xyz $vf1, $vf3, $vf2
    ctx->pc = 0x199950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199954: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x199954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199958: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x199958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19995c: 0xda280050  lqc2        $vf8, 0x50($s1)
    ctx->pc = 0x19995cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x199960: 0xfba80070  sqc2        $vf8, 0x70($sp)
    ctx->pc = 0x199960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x199964: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x199964u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199968: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x199968u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19996c: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x19996cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199970: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x199970u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199974: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x199974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199978: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x199978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19997c: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x19997cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199980: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x199980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199984: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x199984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199988: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x199988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19998c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x19998cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199990: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x199990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199994: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x199994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199998: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x199998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19999c: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x19999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1999a0: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1999a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1999a4: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1999a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1999a8: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1999a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1999ac: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x1999acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1999b0: 0xfba30170  sqc2        $vf3, 0x170($sp)
    ctx->pc = 0x1999b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1999b4: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x1999b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1999b8: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x1999b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1999bc: 0x4be8210b  vmaddw.xyzw $vf4, $vf4, $vf8w
    ctx->pc = 0x1999bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1999c0: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x1999c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1999c4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1999c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1999c8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1999cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1999ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999d0: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x1999d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1999d4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1999d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1999d8: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1999d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1999dc: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1999dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1999e0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1999e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1999e4: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1999e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1999e8: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1999e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1999ec: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x1999ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1999f0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1999f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1999f4: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1999f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1999f8: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1999fc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1999fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199a00: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x199a00u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x199a04: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x199a04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x199a08: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x199a08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x199a0c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x199a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a10: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x199a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a14: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x199a14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x199a18: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x199A18u;
    {
        const bool branch_taken_0x199a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A18u;
            // 0x199a1c: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a18) {
            ctx->pc = 0x199C38u;
            goto label_199c38;
        }
    }
    ctx->pc = 0x199A20u;
label_199a20:
    // 0x199a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199a24: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x199A24u;
    {
        const bool branch_taken_0x199a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A24u;
            // 0x199a28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a24) {
            ctx->pc = 0x199C54u;
            goto label_199c54;
        }
    }
    ctx->pc = 0x199A2Cu;
    // 0x199a2c: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x199a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x199a30: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x199a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x199a34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A34u;
    {
        const bool branch_taken_0x199a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A34u;
            // 0x199a38: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a34) {
            ctx->pc = 0x199A48u;
            goto label_199a48;
        }
    }
    ctx->pc = 0x199A3Cu;
    // 0x199a3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x199A3Cu;
    {
        const bool branch_taken_0x199a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A3Cu;
            // 0x199a40: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a3c) {
            ctx->pc = 0x199A64u;
            goto label_199a64;
        }
    }
    ctx->pc = 0x199A44u;
    // 0x199a44: 0x0  nop
    ctx->pc = 0x199a44u;
    // NOP
label_199a48:
    // 0x199a48: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x199a48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x199a4c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x199a4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x199a50: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A50u;
    {
        const bool branch_taken_0x199a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x199A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A50u;
            // 0x199a54: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a50) {
            ctx->pc = 0x199A64u;
            goto label_199a64;
        }
    }
    ctx->pc = 0x199A58u;
    // 0x199a58: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x199A58u;
    SET_GPR_U32(ctx, 31, 0x199A60u);
    ctx->pc = 0x199A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A58u;
            // 0x199a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A60u; }
        if (ctx->pc != 0x199A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A60u; }
        if (ctx->pc != 0x199A60u) { return; }
    }
    ctx->pc = 0x199A60u;
    // 0x199a60: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_199a64:
    // 0x199a64: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x199a64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x199a68: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x199a6c: 0x7fa20350  sq          $v0, 0x350($sp)
    ctx->pc = 0x199a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 2));
    // 0x199a70: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x199a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x199a74: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x199A74u;
    {
        const bool branch_taken_0x199a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A74u;
            // 0x199a78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a74) {
            ctx->pc = 0x199ADCu;
            goto label_199adc;
        }
    }
    ctx->pc = 0x199A7Cu;
    // 0x199a7c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x199a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x199a80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199A80u;
    {
        const bool branch_taken_0x199a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A80u;
            // 0x199a84: 0x27b20210  addiu       $s2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a80) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199A88u;
    // 0x199a88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x199A88u;
    {
        const bool branch_taken_0x199a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A88u;
            // 0x199a8c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a88) {
            ctx->pc = 0x199AB0u;
            goto label_199ab0;
        }
    }
    ctx->pc = 0x199A90u;
label_199a90:
    // 0x199a90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x199a94: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x199a94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x199a98: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x199a98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x199a9c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A9Cu;
    {
        const bool branch_taken_0x199a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x199a9c) {
            ctx->pc = 0x199AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199A9Cu;
            // 0x199aa0: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199AB0u;
            goto label_199ab0;
        }
    }
    ctx->pc = 0x199AA4u;
    // 0x199aa4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x199AA4u;
    SET_GPR_U32(ctx, 31, 0x199AACu);
    ctx->pc = 0x199AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AA4u;
            // 0x199aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AACu; }
        if (ctx->pc != 0x199AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AACu; }
        if (ctx->pc != 0x199AACu) { return; }
    }
    ctx->pc = 0x199AACu;
    // 0x199aac: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x199aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_199ab0:
    // 0x199ab0: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x199AB0u;
    SET_GPR_U32(ctx, 31, 0x199AB8u);
    ctx->pc = 0x199AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AB0u;
            // 0x199ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AB8u; }
        if (ctx->pc != 0x199AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AB8u; }
        if (ctx->pc != 0x199AB8u) { return; }
    }
    ctx->pc = 0x199AB8u;
    // 0x199ab8: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x199ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x199abc: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x199abcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x199ac0: 0x7ba40230  lq          $a0, 0x230($sp)
    ctx->pc = 0x199ac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x199ac4: 0x7ba50240  lq          $a1, 0x240($sp)
    ctx->pc = 0x199ac4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x199ac8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x199ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x199acc: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x199accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
    // 0x199ad0: 0x7fa401b0  sq          $a0, 0x1B0($sp)
    ctx->pc = 0x199ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 4));
    // 0x199ad4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199AD4u;
            // 0x199ad8: 0x7fa501c0  sq          $a1, 0x1C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199B10u;
            goto label_199b10;
        }
    }
    ctx->pc = 0x199ADCu;
label_199adc:
    // 0x199adc: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x199adcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x199ae0: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x199ae0u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x199ae4: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x199ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199ae8: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x199ae8u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x199aec: 0xfba301b0  sqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x199aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x199af0: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x199af0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x199af4: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x199af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199af8: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x199af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199afc: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x199afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199b00: 0xfba30260  sqc2        $vf3, 0x260($sp)
    ctx->pc = 0x199b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x199b04: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x199b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199b08: 0xfba40280  sqc2        $vf4, 0x280($sp)
    ctx->pc = 0x199b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199b0c: 0x0  nop
    ctx->pc = 0x199b0cu;
    // NOP
label_199b10:
    // 0x199b10: 0xdba10350  lqc2        $vf1, 0x350($sp)
    ctx->pc = 0x199b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x199b14: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x199b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x199b18: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x199b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199b1c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x199b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199b20: 0xdba20350  lqc2        $vf2, 0x350($sp)
    ctx->pc = 0x199b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x199b24: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x199b24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x199b28: 0x4a0003bf  vwaitq
    ctx->pc = 0x199b28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x199b2c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x199b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x199b30: 0x4a0002ff  vnop
    ctx->pc = 0x199b30u;
    // NOP operation, no action needed for VU0
    // 0x199b34: 0x4a0002ff  vnop
    ctx->pc = 0x199b34u;
    // NOP operation, no action needed for VU0
    // 0x199b38: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x199b38u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x199b3c: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x199b3cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x199b40: 0xfba10290  sqc2        $vf1, 0x290($sp)
    ctx->pc = 0x199b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199b44: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x199b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x199b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x199b50: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x199b50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199b54: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x199b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199b58: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x199b58u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x199b5c: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x199b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199b60: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x199b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199b64: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x199b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199b68: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x199b68u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x199b6c: 0x4bc408ae  vopmsub.xyz $vf2, $vf1, $vf4
    ctx->pc = 0x199b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199b70: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x199b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x199b74: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x199b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199b78: 0xda280050  lqc2        $vf8, 0x50($s1)
    ctx->pc = 0x199b78u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x199b7c: 0xfba80200  sqc2        $vf8, 0x200($sp)
    ctx->pc = 0x199b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x199b80: 0xdba50190  lqc2        $vf5, 0x190($sp)
    ctx->pc = 0x199b80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x199b84: 0xdba601a0  lqc2        $vf6, 0x1A0($sp)
    ctx->pc = 0x199b84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x199b88: 0xdba701b0  lqc2        $vf7, 0x1B0($sp)
    ctx->pc = 0x199b88u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x199b8c: 0xdba301c0  lqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x199b8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x199b90: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x199b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199b94: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x199b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199b98: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x199b98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199b9c: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x199b9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199ba0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x199ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199ba4: 0xfba202e0  sqc2        $vf2, 0x2E0($sp)
    ctx->pc = 0x199ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199ba8: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x199ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bac: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x199bacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bb0: 0x4be4190b  vmaddw.xyzw $vf4, $vf3, $vf4w
    ctx->pc = 0x199bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199bb4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x199bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199bb8: 0xfba402f0  sqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x199bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199bbc: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x199bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bc0: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x199bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bc4: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x199bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199bc8: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x199bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x199bcc: 0xfba10300  sqc2        $vf1, 0x300($sp)
    ctx->pc = 0x199bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199bd0: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x199bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bd4: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x199bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x199bd8: 0x4be818cb  vmaddw.xyzw $vf3, $vf3, $vf8w
    ctx->pc = 0x199bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x199bdc: 0xfba30310  sqc2        $vf3, 0x310($sp)
    ctx->pc = 0x199bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x199be0: 0xfba202a0  sqc2        $vf2, 0x2A0($sp)
    ctx->pc = 0x199be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199be4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x199be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bec: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x199becu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x199bf0: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x199bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199bf4: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x199bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199bf8: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x199bf8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x199bfc: 0xfba30200  sqc2        $vf3, 0x200($sp)
    ctx->pc = 0x199bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x199c00: 0xfba402b0  sqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x199c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199c04: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x199c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199c08: 0xfba302d0  sqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x199c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x199c0c: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x199c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199c10: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x199c10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x199c14: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x199c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x199c18: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x199c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x199c1c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x199c1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x199c20: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x199c20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x199c24: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x199c24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x199c28: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x199c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c2c: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x199c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x199c30: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x199c30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x199c34: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x199c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_199c38:
    // 0x199c38: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x199c38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x199c3c: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x199c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x199c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199C40u;
    {
        const bool branch_taken_0x199c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C40u;
            // 0x199c44: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c40) {
            ctx->pc = 0x199C54u;
            goto label_199c54;
        }
    }
    ctx->pc = 0x199C48u;
label_199c48:
    // 0x199c48: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x199c48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_199c4c:
    // 0x199c4c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x199c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x199c50: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x199c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_199c54:
    // 0x199c54: 0x7bb003a0  lq          $s0, 0x3A0($sp)
    ctx->pc = 0x199c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x199c58: 0x7bb10390  lq          $s1, 0x390($sp)
    ctx->pc = 0x199c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x199c5c: 0x7bb20380  lq          $s2, 0x380($sp)
    ctx->pc = 0x199c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x199c60: 0x7bb30370  lq          $s3, 0x370($sp)
    ctx->pc = 0x199c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x199c64: 0xdfbf0360  ld          $ra, 0x360($sp)
    ctx->pc = 0x199c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x199c68: 0x3e00008  jr          $ra
    ctx->pc = 0x199C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C68u;
            // 0x199c6c: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199C70u;
    // 0x199c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199c74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x199c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x199c78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x199c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x199c7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x199c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x199c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199c88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x199c8c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x199c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x199c90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x199C90u;
    {
        const bool branch_taken_0x199c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C90u;
            // 0x199c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c90) {
            ctx->pc = 0x199CCCu;
            goto label_199ccc;
        }
    }
    ctx->pc = 0x199C98u;
    // 0x199c98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199c9c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x199ca0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x199ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199ca4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x199ca8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x199ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x199cac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x199cb0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x199cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199cb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199cb8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199CB8u;
    {
        const bool branch_taken_0x199cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x199CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CB8u;
            // 0x199cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cb8) {
            ctx->pc = 0x199CC8u;
            goto label_199cc8;
        }
    }
    ctx->pc = 0x199CC0u;
    // 0x199cc0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x199cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x199cc4: 0x0  nop
    ctx->pc = 0x199cc4u;
    // NOP
label_199cc8:
    // 0x199cc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x199cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199ccc:
    // 0x199ccc: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x199cd0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x199cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199cd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x199cd8: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x199cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x199cdc: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x199cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x199ce0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x199ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199ce4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x199ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x199ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199cf0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199CF0u;
    {
        const bool branch_taken_0x199cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199CF0u;
            // 0x199cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cf0) {
            ctx->pc = 0x199D00u;
            goto label_199d00;
        }
    }
    ctx->pc = 0x199CF8u;
    // 0x199cf8: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x199cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x199cfc: 0x0  nop
    ctx->pc = 0x199cfcu;
    // NOP
label_199d00:
    // 0x199d00: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x199D00u;
    {
        const bool branch_taken_0x199d00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d00) {
            ctx->pc = 0x199D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199D00u;
            // 0x199d04: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199D18u;
            goto label_199d18;
        }
    }
    ctx->pc = 0x199D08u;
    // 0x199d08: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x199D08u;
    {
        const bool branch_taken_0x199d08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d08) {
            ctx->pc = 0x199D88u;
            goto label_199d88;
        }
    }
    ctx->pc = 0x199D10u;
    // 0x199d10: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x199d10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x199d14: 0x0  nop
    ctx->pc = 0x199d14u;
    // NOP
label_199d18:
    // 0x199d18: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x199d1c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x199d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x199d28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199d30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x199d34: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x199d34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x199d38: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x199d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x199d3c: 0x40f809  jalr        $v0
    ctx->pc = 0x199D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199D44u);
        ctx->pc = 0x199D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D3Cu;
            // 0x199d40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x199D44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199D44u; }
            if (ctx->pc != 0x199D44u) { return; }
        }
        }
    }
    ctx->pc = 0x199D44u;
    // 0x199d44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x199d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x199d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199d4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x199d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x199d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199d58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x199d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x199d5c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x199d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x199d60: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x199d64: 0x40f809  jalr        $v0
    ctx->pc = 0x199D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199D6Cu);
        ctx->pc = 0x199D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D64u;
            // 0x199d68: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x199D6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199D6Cu; }
            if (ctx->pc != 0x199D6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x199D6Cu;
    // 0x199d6c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x199D6Cu;
    {
        const bool branch_taken_0x199d6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D6Cu;
            // 0x199d70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d6c) {
            ctx->pc = 0x199D94u;
            goto label_199d94;
        }
    }
    ctx->pc = 0x199D74u;
    // 0x199d74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199d78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x199d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x199d7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199D7Cu;
    {
        const bool branch_taken_0x199d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D7Cu;
            // 0x199d80: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d7c) {
            ctx->pc = 0x199D94u;
            goto label_199d94;
        }
    }
    ctx->pc = 0x199D84u;
    // 0x199d84: 0x0  nop
    ctx->pc = 0x199d84u;
    // NOP
label_199d88:
    // 0x199d88: 0xc0665b4  jal         func_1996D0
    ctx->pc = 0x199D88u;
    SET_GPR_U32(ctx, 31, 0x199D90u);
    ctx->pc = 0x199D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D88u;
            // 0x199d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1996D0u;
    runtime->cooperativeGuestYield();
    goto label_1996d0;
    ctx->pc = 0x199D90u;
label_199d90:
    // 0x199d90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x199d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_199d94:
    // 0x199d94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199d98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x199d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199da0: 0x3e00008  jr          $ra
    ctx->pc = 0x199DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DA0u;
            // 0x199da4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199DA8u;
    // 0x199da8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199dac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x199dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x199db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199db4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x199db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x199db8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x199db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x199dbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199dc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x199dc4: 0x8c44c9ac  lw          $a0, -0x3654($v0)
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953388)));
    // 0x199dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199dcc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x199DCCu;
    SET_GPR_U32(ctx, 31, 0x199DD4u);
    ctx->pc = 0x199DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DCCu;
            // 0x199dd0: 0x8e050068  lw          $a1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DD4u; }
        if (ctx->pc != 0x199DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DD4u; }
        if (ctx->pc != 0x199DD4u) { return; }
    }
    ctx->pc = 0x199DD4u;
    // 0x199dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x199dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199dd8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x199dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x199ddc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x199ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x199de0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x199DE0u;
    {
        const bool branch_taken_0x199de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DE0u;
            // 0x199de4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de0) {
            ctx->pc = 0x199E1Cu;
            goto label_199e1c;
        }
    }
    ctx->pc = 0x199DE8u;
    // 0x199de8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x199de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199dec: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x199df0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x199df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199df4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x199df8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x199df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x199dfc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x199dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x199e00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199e04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e08: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199E08u;
    {
        const bool branch_taken_0x199e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E08u;
            // 0x199e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e08) {
            ctx->pc = 0x199E18u;
            goto label_199e18;
        }
    }
    ctx->pc = 0x199E10u;
    // 0x199e10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x199e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x199e14: 0x0  nop
    ctx->pc = 0x199e14u;
    // NOP
label_199e18:
    // 0x199e18: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x199e18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199e1c:
    // 0x199e1c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x199E1Cu;
    {
        const bool branch_taken_0x199e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e1c) {
            ctx->pc = 0x199E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199E1Cu;
            // 0x199e20: 0x96460040  lhu         $a2, 0x40($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199E6Cu;
            goto label_199e6c;
        }
    }
    ctx->pc = 0x199E24u;
    // 0x199e24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x199e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x199e28: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x199e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x199e2c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x199e30: 0x40f809  jalr        $v0
    ctx->pc = 0x199E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199E38u);
        ctx->pc = 0x199E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E30u;
            // 0x199e34: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x199E38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x199E38u; }
            if (ctx->pc != 0x199E38u) { return; }
        }
        }
    }
    ctx->pc = 0x199E38u;
    // 0x199e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e40: 0xc081a5a  jal         func_206968
    ctx->pc = 0x199E40u;
    SET_GPR_U32(ctx, 31, 0x199E48u);
    ctx->pc = 0x199E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E40u;
            // 0x199e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E48u; }
        if (ctx->pc != 0x199E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E48u; }
        if (ctx->pc != 0x199E48u) { return; }
    }
    ctx->pc = 0x199E48u;
    // 0x199e48: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x199e4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199E4Cu;
    {
        const bool branch_taken_0x199e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E4Cu;
            // 0x199e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e4c) {
            ctx->pc = 0x199E68u;
            goto label_199e68;
        }
    }
    ctx->pc = 0x199E54u;
    // 0x199e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e58: 0xc081a18  jal         func_206860
    ctx->pc = 0x199E58u;
    SET_GPR_U32(ctx, 31, 0x199E60u);
    ctx->pc = 0x199E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E58u;
            // 0x199e5c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E60u; }
        if (ctx->pc != 0x199E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E60u; }
        if (ctx->pc != 0x199E60u) { return; }
    }
    ctx->pc = 0x199E60u;
    // 0x199e60: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x199E60u;
    {
        const bool branch_taken_0x199e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199e60) {
            ctx->pc = 0x199E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199E60u;
            // 0x199e64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A014u;
            goto label_19a014;
        }
    }
    ctx->pc = 0x199E68u;
label_199e68:
    // 0x199e68: 0x96460040  lhu         $a2, 0x40($s2)
    ctx->pc = 0x199e68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_199e6c:
    // 0x199e6c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x199e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x199e70: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x199E70u;
    {
        const bool branch_taken_0x199e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E70u;
            // 0x199e74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e70) {
            ctx->pc = 0x199EE8u;
            goto label_199ee8;
        }
    }
    ctx->pc = 0x199E78u;
    // 0x199e78: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x199e7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x199e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199e80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x199e84: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x199e88: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x199e8c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x199e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199e90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x199e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x199e94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199e98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e9c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199E9Cu;
    {
        const bool branch_taken_0x199e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E9Cu;
            // 0x199ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e9c) {
            ctx->pc = 0x199EA8u;
            goto label_199ea8;
        }
    }
    ctx->pc = 0x199EA4u;
    // 0x199ea4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x199ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_199ea8:
    // 0x199ea8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x199ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199eac: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x199EACu;
    {
        const bool branch_taken_0x199eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EACu;
            // 0x199eb0: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199eac) {
            ctx->pc = 0x199F30u;
            goto label_199f30;
        }
    }
    ctx->pc = 0x199EB4u;
    // 0x199eb4: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x199eb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199ebc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x199EBCu;
    {
        const bool branch_taken_0x199ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ebc) {
            ctx->pc = 0x199EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199EBCu;
            // 0x199ec0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199EC4u;
    // 0x199ec4: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x199ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x199ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199ecc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x199ECCu;
    {
        const bool branch_taken_0x199ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ecc) {
            ctx->pc = 0x199F30u;
            goto label_199f30;
        }
    }
    ctx->pc = 0x199ED4u;
    // 0x199ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199ed8:
    // 0x199ed8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x199ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x199edc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199ee0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x199EE0u;
    {
        const bool branch_taken_0x199ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EE0u;
            // 0x199ee4: 0x8c71000c  lw          $s1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ee0) {
            ctx->pc = 0x199F30u;
            goto label_199f30;
        }
    }
    ctx->pc = 0x199EE8u;
label_199ee8:
    // 0x199ee8: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x199ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x199eec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x199eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x199ef0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x199ef4: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x199ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x199ef8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x199efc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x199efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199f00: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x199f04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199f0c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199F0Cu;
    {
        const bool branch_taken_0x199f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F0Cu;
            // 0x199f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f0c) {
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199F14u;
    // 0x199f14: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x199f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_199f18:
    // 0x199f18: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x199F18u;
    {
        const bool branch_taken_0x199f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f18) {
            ctx->pc = 0x199F30u;
            goto label_199f30;
        }
    }
    ctx->pc = 0x199F20u;
    // 0x199f20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199f24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x199f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x199f28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x199f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x199f2c: 0x8cd1000c  lw          $s1, 0xC($a2)
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_199f30:
    // 0x199f30: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x199F30u;
    {
        const bool branch_taken_0x199f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F30u;
            // 0x199f34: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f30) {
            ctx->pc = 0x19A014u;
            goto label_19a014;
        }
    }
    ctx->pc = 0x199F38u;
    // 0x199f38: 0x96430040  lhu         $v1, 0x40($s2)
    ctx->pc = 0x199f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x199f3c: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x199f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199f44: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x199F44u;
    {
        const bool branch_taken_0x199f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F44u;
            // 0x199f48: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f44) {
            ctx->pc = 0x19A014u;
            goto label_19a014;
        }
    }
    ctx->pc = 0x199F4Cu;
    // 0x199f4c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x199F4Cu;
    {
        const bool branch_taken_0x199f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199f4c) {
            ctx->pc = 0x199F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199F4Cu;
            // 0x199f50: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x199F54u;
    // 0x199f54: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x199f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x199f58: 0x5200002e  beql        $s0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x199F58u;
    {
        const bool branch_taken_0x199f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f58) {
            ctx->pc = 0x199F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199F58u;
            // 0x199f5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A014u;
            goto label_19a014;
        }
    }
    ctx->pc = 0x199F60u;
    // 0x199f60: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x199f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x199f64: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x199F64u;
    {
        const bool branch_taken_0x199f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F64u;
            // 0x199f68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f64) {
            ctx->pc = 0x19A010u;
            goto label_19a010;
        }
    }
    ctx->pc = 0x199F6Cu;
    // 0x199f6c: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x199f70: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199F70u;
    {
        const bool branch_taken_0x199f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F70u;
            // 0x199f74: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f70) {
            ctx->pc = 0x199F80u;
            goto label_199f80;
        }
    }
    ctx->pc = 0x199F78u;
    // 0x199f78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199F78u;
    {
        const bool branch_taken_0x199f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F78u;
            // 0x199f7c: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f78) {
            ctx->pc = 0x199F9Cu;
            goto label_199f9c;
        }
    }
    ctx->pc = 0x199F80u;
label_199f80:
    // 0x199f80: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x199f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x199f84: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x199f84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x199f88: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199F88u;
    {
        const bool branch_taken_0x199f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x199F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199F88u;
            // 0x199f8c: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f88) {
            ctx->pc = 0x199F9Cu;
            goto label_199f9c;
        }
    }
    ctx->pc = 0x199F90u;
    // 0x199f90: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x199F90u;
    SET_GPR_U32(ctx, 31, 0x199F98u);
    ctx->pc = 0x199F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199F90u;
            // 0x199f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F98u; }
        if (ctx->pc != 0x199F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F98u; }
        if (ctx->pc != 0x199F98u) { return; }
    }
    ctx->pc = 0x199F98u;
    // 0x199f98: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x199f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_199f9c:
    // 0x199f9c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x199f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fa8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x199fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x199fac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x199facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x199fb0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x199fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x199fb4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x199fb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x199fb8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x199fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x199fbc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x199fbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x199fc0: 0xc04c55c  jal         func_131570
    ctx->pc = 0x199FC0u;
    SET_GPR_U32(ctx, 31, 0x199FC8u);
    ctx->pc = 0x199FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FC0u;
            // 0x199fc4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FC8u; }
        if (ctx->pc != 0x199FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FC8u; }
        if (ctx->pc != 0x199FC8u) { return; }
    }
    ctx->pc = 0x199FC8u;
    // 0x199fc8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x199fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199fcc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x199fd0: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x199fd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x199fd4: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x199fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x199fd8: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x199fdc: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x199fdcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x199fe0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x199fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199fe4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x199fe4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x199fe8: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x199fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x199fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ff0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x199ff0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x199ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x199ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ff8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x199ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199ffc: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x199ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x19a000: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x19a000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a004: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x19a004u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x19a008: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x19a008u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x19a00c: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x19a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
label_19a010:
    // 0x19a010: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19a014:
    // 0x19a014: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19a018:
    // 0x19a018: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a01c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a020: 0x3e00008  jr          $ra
    ctx->pc = 0x19A020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A020u;
            // 0x19a024: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A028u;
    // 0x19a028: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
    // 0x19a02c: 0x7fb60840  sq          $s6, 0x840($sp)
    ctx->pc = 0x19a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 22));
    // 0x19a030: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x19a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
    // 0x19a034: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19a034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a038: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x19a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
    // 0x19a03c: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x19a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
    // 0x19a040: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x19a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
    // 0x19a044: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x19a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
    // 0x19a048: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x19a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
    // 0x19a04c: 0x7fb70830  sq          $s7, 0x830($sp)
    ctx->pc = 0x19a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 23));
    // 0x19a050: 0x7fbe0820  sq          $fp, 0x820($sp)
    ctx->pc = 0x19a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 30));
    // 0x19a054: 0xffbf0810  sd          $ra, 0x810($sp)
    ctx->pc = 0x19a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 31));
    // 0x19a058: 0x8ec50060  lw          $a1, 0x60($s6)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x19a05c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19a060: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19A060u;
    {
        const bool branch_taken_0x19a060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A060u;
            // 0x19a064: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a060) {
            ctx->pc = 0x19A09Cu;
            goto label_19a09c;
        }
    }
    ctx->pc = 0x19A068u;
    // 0x19a068: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19a06c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19a070: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19a070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19a074: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19a078: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19a07c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19a080: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a088: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A088u;
    {
        const bool branch_taken_0x19a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A088u;
            // 0x19a08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a088) {
            ctx->pc = 0x19A098u;
            goto label_19a098;
        }
    }
    ctx->pc = 0x19A090u;
    // 0x19a090: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19a094: 0x0  nop
    ctx->pc = 0x19a094u;
    // NOP
label_19a098:
    // 0x19a098: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19a098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a09c:
    // 0x19a09c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19a0a0: 0x8ec50068  lw          $a1, 0x68($s6)
    ctx->pc = 0x19a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x19a0a4: 0x8c44c9ac  lw          $a0, -0x3654($v0)
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953388)));
    // 0x19a0a8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x19A0A8u;
    SET_GPR_U32(ctx, 31, 0x19A0B0u);
    ctx->pc = 0x19A0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0A8u;
            // 0x19a0ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0B0u; }
        if (ctx->pc != 0x19A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0B0u; }
        if (ctx->pc != 0x19A0B0u) { return; }
    }
    ctx->pc = 0x19A0B0u;
    // 0x19a0b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19a0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19a0b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19a0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19a0bc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19a0c0: 0x40f809  jalr        $v0
    ctx->pc = 0x19A0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A0C8u);
        ctx->pc = 0x19A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0C0u;
            // 0x19a0c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A0C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A0C8u; }
            if (ctx->pc != 0x19A0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x19A0C8u;
    // 0x19a0c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x19a0c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0cc: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x19a0d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19A0D0u;
    {
        const bool branch_taken_0x19a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0D0u;
            // 0x19a0d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0d0) {
            ctx->pc = 0x19A110u;
            goto label_19a110;
        }
    }
    ctx->pc = 0x19A0D8u;
    // 0x19a0d8: 0xc081a44  jal         func_206910
    ctx->pc = 0x19A0D8u;
    SET_GPR_U32(ctx, 31, 0x19A0E0u);
    ctx->pc = 0x19A0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0D8u;
            // 0x19a0dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0E0u; }
        if (ctx->pc != 0x19A0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0E0u; }
        if (ctx->pc != 0x19A0E0u) { return; }
    }
    ctx->pc = 0x19A0E0u;
    // 0x19a0e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19a0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0e8: 0xc081a18  jal         func_206860
    ctx->pc = 0x19A0E8u;
    SET_GPR_U32(ctx, 31, 0x19A0F0u);
    ctx->pc = 0x19A0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0E8u;
            // 0x19a0ec: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0F0u; }
        if (ctx->pc != 0x19A0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0F0u; }
        if (ctx->pc != 0x19A0F0u) { return; }
    }
    ctx->pc = 0x19A0F0u;
    // 0x19a0f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A0F4u;
    {
        const bool branch_taken_0x19a0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a0f4) {
            ctx->pc = 0x19A0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A0F4u;
            // 0x19a0f8: 0x82420042  lb          $v0, 0x42($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A114u;
            goto label_19a114;
        }
    }
    ctx->pc = 0x19A0FCu;
    // 0x19a0fc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x19a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19a100: 0xaec20030  sw          $v0, 0x30($s6)
    ctx->pc = 0x19a100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 2));
    // 0x19a104: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x19a108: 0x100003fd  b           . + 4 + (0x3FD << 2)
    ctx->pc = 0x19A108u;
    {
        const bool branch_taken_0x19a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A108u;
            // 0x19a10c: 0xaec2006c  sw          $v0, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a108) {
            ctx->pc = 0x19B100u;
            goto label_19b100;
        }
    }
    ctx->pc = 0x19A110u;
label_19a110:
    // 0x19a110: 0x82420042  lb          $v0, 0x42($s2)
    ctx->pc = 0x19a110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
label_19a114:
    // 0x19a114: 0x10400308  beqz        $v0, . + 4 + (0x308 << 2)
    ctx->pc = 0x19A114u;
    {
        const bool branch_taken_0x19a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A114u;
            // 0x19a118: 0x26500042  addiu       $s0, $s2, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a114) {
            ctx->pc = 0x19AD38u;
            goto label_19ad38;
        }
    }
    ctx->pc = 0x19A11Cu;
    // 0x19a11c: 0x96440040  lhu         $a0, 0x40($s2)
    ctx->pc = 0x19a11cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19a120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19a120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a124: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x19a124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19a128: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x19a128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x19a12c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a130: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x19A130u;
    {
        const bool branch_taken_0x19a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A130u;
            // 0x19a134: 0x8e770000  lw          $s7, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a130) {
            ctx->pc = 0x19A328u;
            goto label_19a328;
        }
    }
    ctx->pc = 0x19A138u;
    // 0x19a138: 0xc05e996  jal         func_17A658
    ctx->pc = 0x19A138u;
    SET_GPR_U32(ctx, 31, 0x19A140u);
    ctx->pc = 0x19A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A138u;
            // 0x19a13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A140u; }
        if (ctx->pc != 0x19A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A140u; }
        if (ctx->pc != 0x19A140u) { return; }
    }
    ctx->pc = 0x19A140u;
    // 0x19a140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19a140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a148: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19a14c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19a150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a154: 0x0  nop
    ctx->pc = 0x19a154u;
    // NOP
label_19a158:
    // 0x19a158: 0x0  nop
    ctx->pc = 0x19a158u;
    // NOP
    // 0x19a15c: 0x0  nop
    ctx->pc = 0x19a15cu;
    // NOP
    // 0x19a160: 0x0  nop
    ctx->pc = 0x19a160u;
    // NOP
    // 0x19a164: 0x0  nop
    ctx->pc = 0x19a164u;
    // NOP
    // 0x19a168: 0x0  nop
    ctx->pc = 0x19a168u;
    // NOP
    // 0x19a16c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A16Cu;
    {
        const bool branch_taken_0x19a16c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a16c) {
            ctx->pc = 0x19A170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A16Cu;
            // 0x19a170: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A158u;
            runtime->cooperativeGuestYield();
            goto label_19a158;
        }
    }
    ctx->pc = 0x19A174u;
    // 0x19a174: 0x8ee300b4  lw          $v1, 0xB4($s7)
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 180)));
    // 0x19a178: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x19a178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x19a17c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A17Cu;
    {
        const bool branch_taken_0x19a17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A17Cu;
            // 0x19a180: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a17c) {
            ctx->pc = 0x19A1C0u;
            goto label_19a1c0;
        }
    }
    ctx->pc = 0x19A184u;
    // 0x19a184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a188: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19A188u;
    {
        const bool branch_taken_0x19a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A188u;
            // 0x19a18c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a188) {
            ctx->pc = 0x19A1C4u;
            goto label_19a1c4;
        }
    }
    ctx->pc = 0x19A190u;
    // 0x19a190: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x19a190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x19a194: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x19a194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19a198: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x19a198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19a19c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x19a19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a1a0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x19a1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a1a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x19a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x19a1a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19a1ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19a1b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19a1b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a1b8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x19a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x19a1bc: 0x0  nop
    ctx->pc = 0x19a1bcu;
    // NOP
label_19a1c0:
    // 0x19a1c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_19a1c4:
    // 0x19a1c4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x19a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19a1c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19a1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19a1cc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x19A1CCu;
    {
        const bool branch_taken_0x19a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1CCu;
            // 0x19a1d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1cc) {
            ctx->pc = 0x19A320u;
            goto label_19a320;
        }
    }
    ctx->pc = 0x19A1D4u;
    // 0x19a1d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_19a1d8:
    // 0x19a1d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19a1dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x19a1e0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19a1e4: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x19a1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19a1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a1ec: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x19a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x19a1f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19a1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a1fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a200: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19A200u;
    {
        const bool branch_taken_0x19a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A200u;
            // 0x19a204: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a200) {
            ctx->pc = 0x19A240u;
            goto label_19a240;
        }
    }
    ctx->pc = 0x19A208u;
label_19a208:
    // 0x19a208: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x19a20c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a210: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x19a214: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19a214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19a218: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A218u;
    {
        const bool branch_taken_0x19a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A218u;
            // 0x19a21c: 0xacc30080  sw          $v1, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a218) {
            ctx->pc = 0x19A240u;
            goto label_19a240;
        }
    }
    ctx->pc = 0x19A220u;
    // 0x19a220: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19a224: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19a228: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x19a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19a22c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a234: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x19A234u;
    {
        const bool branch_taken_0x19a234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A234u;
            // 0x19a238: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a234) {
            ctx->pc = 0x19A208u;
            runtime->cooperativeGuestYield();
            goto label_19a208;
        }
    }
    ctx->pc = 0x19A23Cu;
    // 0x19a23c: 0x0  nop
    ctx->pc = 0x19a23cu;
    // NOP
label_19a240:
    // 0x19a240: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x19a244: 0x14540032  bne         $v0, $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x19A244u;
    {
        const bool branch_taken_0x19a244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x19A248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A244u;
            // 0x19a248: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a244) {
            ctx->pc = 0x19A310u;
            goto label_19a310;
        }
    }
    ctx->pc = 0x19A24Cu;
    // 0x19a24c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19a250: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x19a254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a258: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19a25c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x19a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19a260: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x19A260u;
    {
        const bool branch_taken_0x19a260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A260u;
            // 0x19a264: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a260) {
            ctx->pc = 0x19A314u;
            goto label_19a314;
        }
    }
    ctx->pc = 0x19A268u;
    // 0x19a268: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x19a26c: 0x0  nop
    ctx->pc = 0x19a26cu;
    // NOP
label_19a270:
    // 0x19a270: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a274: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x19a274u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x19a278: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19a278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a27c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19a280: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x19a284: 0x24429c70  addiu       $v0, $v0, -0x6390
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941808));
    // 0x19a288: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19A288u;
    {
        const bool branch_taken_0x19a288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A288u;
            // 0x19a28c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a288) {
            ctx->pc = 0x19A308u;
            goto label_19a308;
        }
    }
    ctx->pc = 0x19A290u;
    // 0x19a290: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a294: 0xc04c55c  jal         func_131570
    ctx->pc = 0x19A294u;
    SET_GPR_U32(ctx, 31, 0x19A29Cu);
    ctx->pc = 0x19A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A294u;
            // 0x19a298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A29Cu; }
        if (ctx->pc != 0x19A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A29Cu; }
        if (ctx->pc != 0x19A29Cu) { return; }
    }
    ctx->pc = 0x19A29Cu;
    // 0x19a29c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x19a29cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a2a0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x19a2a4: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x19a2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x19a2a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a2ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19a2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a2b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a2bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19a2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x19a2c0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19a2c4: 0x40f809  jalr        $v0
    ctx->pc = 0x19A2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A2CCu);
        ctx->pc = 0x19A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2C4u;
            // 0x19a2c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A2CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A2CCu; }
            if (ctx->pc != 0x19A2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x19A2CCu;
    // 0x19a2cc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x19a2ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a2d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a2d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19a2d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a2e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a2e4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x19a2e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19a2e8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19a2ec: 0x40f809  jalr        $v0
    ctx->pc = 0x19A2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A2F4u);
        ctx->pc = 0x19A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2ECu;
            // 0x19a2f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A2F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A2F4u; }
            if (ctx->pc != 0x19A2F4u) { return; }
        }
        }
    }
    ctx->pc = 0x19A2F4u;
    // 0x19a2f4: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19A2F4u;
    SET_GPR_U32(ctx, 31, 0x19A2FCu);
    ctx->pc = 0x19A2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2F4u;
            // 0x19a2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2FCu; }
        if (ctx->pc != 0x19A2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2FCu; }
        if (ctx->pc != 0x19A2FCu) { return; }
    }
    ctx->pc = 0x19A2FCu;
    // 0x19a2fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19A2FCu;
    {
        const bool branch_taken_0x19a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2FCu;
            // 0x19a300: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2fc) {
            ctx->pc = 0x19A314u;
            goto label_19a314;
        }
    }
    ctx->pc = 0x19A304u;
    // 0x19a304: 0x0  nop
    ctx->pc = 0x19a304u;
    // NOP
label_19a308:
    // 0x19a308: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x19A308u;
    {
        const bool branch_taken_0x19a308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A308u;
            // 0x19a30c: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a308) {
            ctx->pc = 0x19A270u;
            runtime->cooperativeGuestYield();
            goto label_19a270;
        }
    }
    ctx->pc = 0x19A310u;
label_19a310:
    // 0x19a310: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_19a314:
    // 0x19a314: 0x441ffb0  bgez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x19A314u;
    {
        const bool branch_taken_0x19a314 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19A318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A314u;
            // 0x19a318: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a314) {
            ctx->pc = 0x19A1D8u;
            runtime->cooperativeGuestYield();
            goto label_19a1d8;
        }
    }
    ctx->pc = 0x19A31Cu;
    // 0x19a31c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19a320:
    // 0x19a320: 0x10000285  b           . + 4 + (0x285 << 2)
    ctx->pc = 0x19A320u;
    {
        const bool branch_taken_0x19a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A320u;
            // 0x19a324: 0xa6c2002a  sh          $v0, 0x2A($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a320) {
            ctx->pc = 0x19AD38u;
            goto label_19ad38;
        }
    }
    ctx->pc = 0x19A328u;
label_19a328:
    // 0x19a328: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x19a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19a32c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A32Cu;
    {
        const bool branch_taken_0x19a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A32Cu;
            // 0x19a330: 0x31042  srl         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a32c) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A334u;
    // 0x19a334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a338: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A338u;
    {
        const bool branch_taken_0x19a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a338) {
            ctx->pc = 0x19A35Cu;
            goto label_19a35c;
        }
    }
    ctx->pc = 0x19A340u;
    // 0x19a340: 0xc089960  jal         func_226580
    ctx->pc = 0x19A340u;
    SET_GPR_U32(ctx, 31, 0x19A348u);
    ctx->pc = 0x19A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A340u;
            // 0x19a344: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A348u; }
        if (ctx->pc != 0x19A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A348u; }
        if (ctx->pc != 0x19A348u) { return; }
    }
    ctx->pc = 0x19A348u;
    // 0x19a348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a34c: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x19A34Cu;
    SET_GPR_U32(ctx, 31, 0x19A354u);
    ctx->pc = 0x19A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A34Cu;
            // 0x19a350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A354u; }
        if (ctx->pc != 0x19A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A354u; }
        if (ctx->pc != 0x19A354u) { return; }
    }
    ctx->pc = 0x19A354u;
    // 0x19a354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A354u;
    {
        const bool branch_taken_0x19a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A354u;
            // 0x19a358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a354) {
            ctx->pc = 0x19A378u;
            goto label_19a378;
        }
    }
    ctx->pc = 0x19A35Cu;
label_19a35c:
    // 0x19a35c: 0xc089990  jal         func_226640
    ctx->pc = 0x19A35Cu;
    SET_GPR_U32(ctx, 31, 0x19A364u);
    ctx->pc = 0x19A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A35Cu;
            // 0x19a360: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A364u; }
        if (ctx->pc != 0x19A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A364u; }
        if (ctx->pc != 0x19A364u) { return; }
    }
    ctx->pc = 0x19A364u;
    // 0x19a364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a368: 0xc089e18  jal         func_227860
    ctx->pc = 0x19A368u;
    SET_GPR_U32(ctx, 31, 0x19A370u);
    ctx->pc = 0x19A36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A368u;
            // 0x19a36c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227860u;
    if (runtime->hasFunction(0x227860u)) {
        auto targetFn = runtime->lookupFunction(0x227860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A370u; }
        if (ctx->pc != 0x19A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227860_0x227860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A370u; }
        if (ctx->pc != 0x19A370u) { return; }
    }
    ctx->pc = 0x19A370u;
    // 0x19a370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a374: 0x0  nop
    ctx->pc = 0x19a374u;
    // NOP
label_19a378:
    // 0x19a378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a37c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19a380: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a384: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A384u;
    {
        const bool branch_taken_0x19a384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A384u;
            // 0x19a388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a384) {
            ctx->pc = 0x19A3E8u;
            goto label_19a3e8;
        }
    }
    ctx->pc = 0x19A38Cu;
    // 0x19a38c: 0xc64c003c  lwc1        $f12, 0x3C($s2)
    ctx->pc = 0x19a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a390: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x19A390u;
    SET_GPR_U32(ctx, 31, 0x19A398u);
    ctx->pc = 0x19A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A390u;
            // 0x19a394: 0x8e14000c  lw          $s4, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A398u; }
        if (ctx->pc != 0x19A398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A398u; }
        if (ctx->pc != 0x19A398u) { return; }
    }
    ctx->pc = 0x19A398u;
    // 0x19a398: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19a39c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19A39Cu;
    {
        const bool branch_taken_0x19a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A39Cu;
            // 0x19a3a0: 0xaec2006c  sw          $v0, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a39c) {
            ctx->pc = 0x19A3F0u;
            goto label_19a3f0;
        }
    }
    ctx->pc = 0x19A3A4u;
    // 0x19a3a4: 0x0  nop
    ctx->pc = 0x19a3a4u;
    // NOP
label_19a3a8:
    // 0x19a3a8: 0xc089960  jal         func_226580
    ctx->pc = 0x19A3A8u;
    SET_GPR_U32(ctx, 31, 0x19A3B0u);
    ctx->pc = 0x19A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3A8u;
            // 0x19a3ac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3B0u; }
        if (ctx->pc != 0x19A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3B0u; }
        if (ctx->pc != 0x19A3B0u) { return; }
    }
    ctx->pc = 0x19A3B0u;
    // 0x19a3b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3b4: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x19A3B4u;
    SET_GPR_U32(ctx, 31, 0x19A3BCu);
    ctx->pc = 0x19A3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3B4u;
            // 0x19a3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3BCu; }
        if (ctx->pc != 0x19A3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3BCu; }
        if (ctx->pc != 0x19A3BCu) { return; }
    }
    ctx->pc = 0x19A3BCu;
    // 0x19a3bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a3bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a3c4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x19a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19a3c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a3cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A3CCu;
    {
        const bool branch_taken_0x19a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3cc) {
            ctx->pc = 0x19A3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3CCu;
            // 0x19a3d0: 0xaec0006c  sw          $zero, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A3F0u;
            goto label_19a3f0;
        }
    }
    ctx->pc = 0x19A3D4u;
    // 0x19a3d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19a3d8: 0x8c74000c  lw          $s4, 0xC($v1)
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19a3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A3DCu;
    {
        const bool branch_taken_0x19a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3DCu;
            // 0x19a3e0: 0xaec2006c  sw          $v0, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3dc) {
            ctx->pc = 0x19A3F0u;
            goto label_19a3f0;
        }
    }
    ctx->pc = 0x19A3E4u;
    // 0x19a3e4: 0x0  nop
    ctx->pc = 0x19a3e4u;
    // NOP
label_19a3e8:
    // 0x19a3e8: 0xaec0006c  sw          $zero, 0x6C($s6)
    ctx->pc = 0x19a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 0));
    // 0x19a3ec: 0x0  nop
    ctx->pc = 0x19a3ecu;
    // NOP
label_19a3f0:
    // 0x19a3f0: 0x12800252  beqz        $s4, . + 4 + (0x252 << 2)
    ctx->pc = 0x19A3F0u;
    {
        const bool branch_taken_0x19a3f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3F0u;
            // 0x19a3f4: 0x96420040  lhu         $v0, 0x40($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3f0) {
            ctx->pc = 0x19AD3Cu;
            goto label_19ad3c;
        }
    }
    ctx->pc = 0x19A3F8u;
    // 0x19a3f8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x19a3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a400: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x19A400u;
    {
        const bool branch_taken_0x19a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A400u;
            // 0x19a404: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a400) {
            ctx->pc = 0x19A550u;
            goto label_19a550;
        }
    }
    ctx->pc = 0x19A408u;
    // 0x19a408: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a40c: 0x2611e848  addiu       $s1, $s0, -0x17B8
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x19a410: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19a414: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a418: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x19a418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x19a41c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x19a420: 0x40f809  jalr        $v0
    ctx->pc = 0x19A420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A428u);
        ctx->pc = 0x19A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A420u;
            // 0x19a424: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A428u; }
            if (ctx->pc != 0x19A428u) { return; }
        }
        }
    }
    ctx->pc = 0x19A428u;
    // 0x19a428: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x19a428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19a42c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x19a42cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a434: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19a438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a43c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a440: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19a440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19a444: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19a448: 0x40f809  jalr        $v0
    ctx->pc = 0x19A448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A450u);
        ctx->pc = 0x19A44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A448u;
            // 0x19a44c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A450u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A450u; }
            if (ctx->pc != 0x19A450u) { return; }
        }
        }
    }
    ctx->pc = 0x19A450u;
    // 0x19a450: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x19a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x19a454: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19a458: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a45c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19a460: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19a460u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a464: 0x24429c70  addiu       $v0, $v0, -0x6390
    ctx->pc = 0x19a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941808));
    // 0x19a468: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x19a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x19a46c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19a470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a474: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19a474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x19a478: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x19a478u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a47c: 0xa4a00022  sh          $zero, 0x22($a1)
    ctx->pc = 0x19a47cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a480: 0xa4a00020  sh          $zero, 0x20($a1)
    ctx->pc = 0x19a480u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a484: 0x0  nop
    ctx->pc = 0x19a484u;
    // NOP
label_19a488:
    // 0x19a488: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19a48c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x19a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19a490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19a494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a498: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x19a498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a49c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A49Cu;
    {
        const bool branch_taken_0x19a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A49Cu;
            // 0x19a4a0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a49c) {
            ctx->pc = 0x19A488u;
            runtime->cooperativeGuestYield();
            goto label_19a488;
        }
    }
    ctx->pc = 0x19A4A4u;
    // 0x19a4a4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x19a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x19a4a8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x19a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x19a4ac: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x19a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x19a4b0: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x19a4b4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a4b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x19a4bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a4c0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19a4c4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19a4c8: 0x40f809  jalr        $v0
    ctx->pc = 0x19A4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A4D0u);
        ctx->pc = 0x19A4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4C8u;
            // 0x19a4cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A4D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A4D0u; }
            if (ctx->pc != 0x19A4D0u) { return; }
        }
        }
    }
    ctx->pc = 0x19A4D0u;
    // 0x19a4d0: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x19a4d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A4D4u;
    {
        const bool branch_taken_0x19a4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4D4u;
            // 0x19a4d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4d4) {
            ctx->pc = 0x19A4E8u;
            goto label_19a4e8;
        }
    }
    ctx->pc = 0x19A4DCu;
    // 0x19a4dc: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x19A4DCu;
    SET_GPR_U32(ctx, 31, 0x19A4E4u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4E4u; }
        if (ctx->pc != 0x19A4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4E4u; }
        if (ctx->pc != 0x19A4E4u) { return; }
    }
    ctx->pc = 0x19A4E4u;
    // 0x19a4e4: 0x0  nop
    ctx->pc = 0x19a4e4u;
    // NOP
label_19a4e8:
    // 0x19a4e8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x19a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x19a4ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a4f0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19a4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19a4f4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x19a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19a4f8: 0x40f809  jalr        $v0
    ctx->pc = 0x19A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A500u);
        ctx->pc = 0x19A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4F8u;
            // 0x19a4fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A500u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A500u; }
            if (ctx->pc != 0x19A500u) { return; }
        }
        }
    }
    ctx->pc = 0x19A500u;
    // 0x19a500: 0x8ec20060  lw          $v0, 0x60($s6)
    ctx->pc = 0x19a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x19a504: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x19a504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x19a508: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x19a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x19a50c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x19a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x19a510: 0x8ec20068  lw          $v0, 0x68($s6)
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x19a514: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x19a514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x19a518: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x19a51c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x19a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x19a520: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x19a520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19a524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19a528: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19a52c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a534: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19a538: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19a538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19a53c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19a540: 0x40f809  jalr        $v0
    ctx->pc = 0x19A540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A548u);
        ctx->pc = 0x19A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A540u;
            // 0x19a544: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A548u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A548u; }
            if (ctx->pc != 0x19A548u) { return; }
        }
        }
    }
    ctx->pc = 0x19A548u;
    // 0x19a548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A548u;
    {
        const bool branch_taken_0x19a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a548) {
            ctx->pc = 0x19A55Cu;
            goto label_19a55c;
        }
    }
    ctx->pc = 0x19A550u;
label_19a550:
    // 0x19a550: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19a554: 0x24429da8  addiu       $v0, $v0, -0x6258
    ctx->pc = 0x19a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942120));
    // 0x19a558: 0xaec20030  sw          $v0, 0x30($s6)
    ctx->pc = 0x19a558u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 2));
label_19a55c:
    // 0x19a55c: 0x4bec033c  vmove.xyzw  $vf12, $vf0
    ctx->pc = 0x19a55cu;
    ctx->vu0_vf[12] = ctx->vu0_vf[0];
    // 0x19a560: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x19a564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a568: 0x4bea633d  vmr32.xyzw  $vf10, $vf12
    ctx->pc = 0x19a568u;
    ctx->vu0_vf[10] = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,1));
    // 0x19a56c: 0xfbac0120  sqc2        $vf12, 0x120($sp)
    ctx->pc = 0x19a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19a570: 0x4be9533d  vmr32.xyzw  $vf9, $vf10
    ctx->pc = 0x19a570u;
    ctx->vu0_vf[9] = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,1));
    // 0x19a574: 0xfbaa0110  sqc2        $vf10, 0x110($sp)
    ctx->pc = 0x19a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19a578: 0x4beb4b3d  vmr32.xyzw  $vf11, $vf9
    ctx->pc = 0x19a578u;
    ctx->vu0_vf[11] = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,1));
    // 0x19a57c: 0xfba90100  sqc2        $vf9, 0x100($sp)
    ctx->pc = 0x19a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19a580: 0xfbab00f0  sqc2        $vf11, 0xF0($sp)
    ctx->pc = 0x19a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19a584: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x19a588: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x19a58c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19a590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a594: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x19a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a598: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x19a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19a59c: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x19a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19a5a0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x19a5a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x19a5a4: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x19a5a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x19a5a8: 0xfbac0160  sqc2        $vf12, 0x160($sp)
    ctx->pc = 0x19a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19a5ac: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x19a5acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[1];
    // 0x19a5b0: 0xfbaa0170  sqc2        $vf10, 0x170($sp)
    ctx->pc = 0x19a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19a5b4: 0xfba90180  sqc2        $vf9, 0x180($sp)
    ctx->pc = 0x19a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19a5b8: 0xfbab0190  sqc2        $vf11, 0x190($sp)
    ctx->pc = 0x19a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19a5bc: 0xfba907d0  sqc2        $vf9, 0x7D0($sp)
    ctx->pc = 0x19a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2000), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19a5c0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x19a5c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x19a5c4: 0xfbaa07e0  sqc2        $vf10, 0x7E0($sp)
    ctx->pc = 0x19a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2016), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19a5c8: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x19a5c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x19a5cc: 0xfbab07f0  sqc2        $vf11, 0x7F0($sp)
    ctx->pc = 0x19a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2032), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19a5d0: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x19a5d0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x19a5d4: 0xc061232  jal         func_1848C8
    ctx->pc = 0x19A5D4u;
    SET_GPR_U32(ctx, 31, 0x19A5DCu);
    ctx->pc = 0x19A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5D4u;
            // 0x19a5d8: 0xfbac0800  sqc2        $vf12, 0x800($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2048), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1848C8u;
    if (runtime->hasFunction(0x1848C8u)) {
        auto targetFn = runtime->lookupFunction(0x1848C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5DCu; }
        if (ctx->pc != 0x19A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001848C8_0x1848c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5DCu; }
        if (ctx->pc != 0x19A5DCu) { return; }
    }
    ctx->pc = 0x19A5DCu;
    // 0x19a5dc: 0xdbac0800  lqc2        $vf12, 0x800($sp)
    ctx->pc = 0x19a5dcu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x19a5e0: 0xdbaa07e0  lqc2        $vf10, 0x7E0($sp)
    ctx->pc = 0x19a5e0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2016)));
    // 0x19a5e4: 0xdba907d0  lqc2        $vf9, 0x7D0($sp)
    ctx->pc = 0x19a5e4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x19a5e8: 0xdbab07f0  lqc2        $vf11, 0x7F0($sp)
    ctx->pc = 0x19a5e8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x19a5ec: 0x4be2633c  vmove.xyzw  $vf2, $vf12
    ctx->pc = 0x19a5ecu;
    ctx->vu0_vf[2] = ctx->vu0_vf[12];
    // 0x19a5f0: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x19a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a5f4: 0xfbaa01b0  sqc2        $vf10, 0x1B0($sp)
    ctx->pc = 0x19a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19a5f8: 0xfba901c0  sqc2        $vf9, 0x1C0($sp)
    ctx->pc = 0x19a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19a5fc: 0xfbab01d0  sqc2        $vf11, 0x1D0($sp)
    ctx->pc = 0x19a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19a600: 0xfbab00b0  sqc2        $vf11, 0xB0($sp)
    ctx->pc = 0x19a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19a604: 0xfba900c0  sqc2        $vf9, 0xC0($sp)
    ctx->pc = 0x19a604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19a608: 0xfbaa00d0  sqc2        $vf10, 0xD0($sp)
    ctx->pc = 0x19a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19a60c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x19a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a610: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x19a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x19a614: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x19a614u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x19a618: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x19a618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x19a61c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19a61cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19a620: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x19a620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x19a624: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x19a624u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x19a628: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x19a628u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19a62c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x19a62cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x19a630: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19a630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a634: 0x4be158ea  vmul.xyzw   $vf3, $vf11, $vf1
    ctx->pc = 0x19a634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19a638: 0x4be1492a  vmul.xyzw   $vf4, $vf9, $vf1
    ctx->pc = 0x19a638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19a63c: 0x4be1516a  vmul.xyzw   $vf5, $vf10, $vf1
    ctx->pc = 0x19a63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19a640: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x19a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a644: 0xfba10750  sqc2        $vf1, 0x750($sp)
    ctx->pc = 0x19a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1872), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a648: 0xfba301f0  sqc2        $vf3, 0x1F0($sp)
    ctx->pc = 0x19a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a64c: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x19a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a650: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x19a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a654: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x19a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a658: 0xfba50210  sqc2        $vf5, 0x210($sp)
    ctx->pc = 0x19a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19a65c: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x19a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19a660: 0xfba20220  sqc2        $vf2, 0x220($sp)
    ctx->pc = 0x19a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a664: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x19a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a668: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x19a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19a66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a670: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19a670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19a674: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19a674u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19a678: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x19a678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x19a67c: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x19a67cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x19a680: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x19a680u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19a684: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x19a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x19a688: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19a688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19a68c: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x19a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x19a690: 0x7fa20760  sq          $v0, 0x760($sp)
    ctx->pc = 0x19a690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), GPR_VEC(ctx, 2));
    // 0x19a694: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x19a694u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a698: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x19a698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a69c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19a69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a6a0: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x19a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a6a4: 0xdba600f0  lqc2        $vf6, 0xF0($sp)
    ctx->pc = 0x19a6a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19a6a8: 0xdba70100  lqc2        $vf7, 0x100($sp)
    ctx->pc = 0x19a6a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x19a6ac: 0xdba80110  lqc2        $vf8, 0x110($sp)
    ctx->pc = 0x19a6acu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19a6b0: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x19a6b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19a6b4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19a6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a6b8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19a6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6bc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19a6bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6c0: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x19a6c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a6c4: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19a6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a6c8: 0xfba30280  sqc2        $vf3, 0x280($sp)
    ctx->pc = 0x19a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a6cc: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19a6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6d0: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19a6d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6d4: 0x4be4090b  vmaddw.xyzw $vf4, $vf1, $vf4w
    ctx->pc = 0x19a6d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a6d8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19a6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a6dc: 0xfba40290  sqc2        $vf4, 0x290($sp)
    ctx->pc = 0x19a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a6e0: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19a6e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6e4: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19a6e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6e8: 0x4be5094b  vmaddw.xyzw $vf5, $vf1, $vf5w
    ctx->pc = 0x19a6e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a6ec: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19a6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a6f0: 0xfba502a0  sqc2        $vf5, 0x2A0($sp)
    ctx->pc = 0x19a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19a6f4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19a6f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6f8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19a6f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a6fc: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x19a6fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a700: 0xfba102b0  sqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x19a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a704: 0xfba30240  sqc2        $vf3, 0x240($sp)
    ctx->pc = 0x19a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a708: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x19a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a70c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x19a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a710: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x19a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19a714: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x19a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a718: 0xfba40250  sqc2        $vf4, 0x250($sp)
    ctx->pc = 0x19a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a71c: 0xfba50260  sqc2        $vf5, 0x260($sp)
    ctx->pc = 0x19a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19a720: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x19a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a724: 0x96430040  lhu         $v1, 0x40($s2)
    ctx->pc = 0x19a724u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19a728: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x19a72c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a730: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A730u;
    {
        const bool branch_taken_0x19a730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a730) {
            ctx->pc = 0x19A734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A730u;
            // 0x19a734: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A750u;
            goto label_19a750;
        }
    }
    ctx->pc = 0x19A738u;
    // 0x19a738: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x19a73c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a740: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x19A740u;
    {
        const bool branch_taken_0x19a740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a740) {
            ctx->pc = 0x19A744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A740u;
            // 0x19a744: 0x8242005a  lb          $v0, 0x5A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A8C0u;
            goto label_19a8c0;
        }
    }
    ctx->pc = 0x19A748u;
    // 0x19a748: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19a74c: 0x0  nop
    ctx->pc = 0x19a74cu;
    // NOP
label_19a750:
    // 0x19a750: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19a754: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19a758: 0x40f809  jalr        $v0
    ctx->pc = 0x19A758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19A760u);
        ctx->pc = 0x19A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A758u;
            // 0x19a75c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19A760u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19A760u; }
            if (ctx->pc != 0x19A760u) { return; }
        }
        }
    }
    ctx->pc = 0x19A760u;
    // 0x19a760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a764: 0x10800106  beqz        $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x19A764u;
    {
        const bool branch_taken_0x19a764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A764u;
            // 0x19a768: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a764) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19A76Cu;
    // 0x19a76c: 0x96450040  lhu         $a1, 0x40($s2)
    ctx->pc = 0x19a76cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19a770: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x19a770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x19a774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a778: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x19a778u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19a77c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19a780: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x19a780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a784: 0x120000fe  beqz        $s0, . + 4 + (0xFE << 2)
    ctx->pc = 0x19A784u;
    {
        const bool branch_taken_0x19a784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A784u;
            // 0x19a788: 0x510c2  srl         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a784) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19A78Cu;
    // 0x19a78c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a790: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A790u;
    {
        const bool branch_taken_0x19a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A790u;
            // 0x19a794: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a790) {
            ctx->pc = 0x19A7C0u;
            goto label_19a7c0;
        }
    }
    ctx->pc = 0x19A798u;
    // 0x19a798: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x19a798u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x19a79c: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x19a79cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x19a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7a4: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x19a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x19a7a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7ac: 0x86820060  lh          $v0, 0x60($s4)
    ctx->pc = 0x19a7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x19a7b0: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x19a7b0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x19a7b4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x19a7b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a7b8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x19A7B8u;
    {
        const bool branch_taken_0x19a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7B8u;
            // 0x19a7bc: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7b8) {
            ctx->pc = 0x19A920u;
            goto label_19a920;
        }
    }
    ctx->pc = 0x19A7C0u;
label_19a7c0:
    // 0x19a7c0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x19a7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19a7c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a7c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A7C8u;
    {
        const bool branch_taken_0x19a7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7C8u;
            // 0x19a7cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7c8) {
            ctx->pc = 0x19A7D8u;
            goto label_19a7d8;
        }
    }
    ctx->pc = 0x19A7D0u;
    // 0x19a7d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A7D0u;
    {
        const bool branch_taken_0x19a7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7D0u;
            // 0x19a7d4: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7d0) {
            ctx->pc = 0x19A7F4u;
            goto label_19a7f4;
        }
    }
    ctx->pc = 0x19A7D8u;
label_19a7d8:
    // 0x19a7d8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x19a7d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19a7dc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19a7dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x19a7e0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A7E0u;
    {
        const bool branch_taken_0x19a7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19A7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7E0u;
            // 0x19a7e4: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7e0) {
            ctx->pc = 0x19A7F4u;
            goto label_19a7f4;
        }
    }
    ctx->pc = 0x19A7E8u;
    // 0x19a7e8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x19A7E8u;
    SET_GPR_U32(ctx, 31, 0x19A7F0u);
    ctx->pc = 0x19A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A7E8u;
            // 0x19a7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7F0u; }
        if (ctx->pc != 0x19A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7F0u; }
        if (ctx->pc != 0x19A7F0u) { return; }
    }
    ctx->pc = 0x19A7F0u;
    // 0x19a7f0: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_19a7f4:
    // 0x19a7f4: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x19a7f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19a7f8: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x19a7f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a7fc: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x19a7fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19a800: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x19a800u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19a804: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x19a804u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a808: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x19a808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a80c: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x19a80cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19a810: 0xdba500e0  lqc2        $vf5, 0xE0($sp)
    ctx->pc = 0x19a810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19a814: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19a814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a818: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19a818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a81c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19a81cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a820: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x19a820u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a824: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x19a824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a828: 0xfba30300  sqc2        $vf3, 0x300($sp)
    ctx->pc = 0x19a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a82c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x19a82cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a830: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x19a830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a834: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x19a834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a838: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19a838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a83c: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x19a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a840: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19a840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a844: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19a844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a848: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x19a848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a84c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19a84cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a850: 0xfba20320  sqc2        $vf2, 0x320($sp)
    ctx->pc = 0x19a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a854: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19a854u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a858: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19a858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a85c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x19a85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a860: 0xfba40330  sqc2        $vf4, 0x330($sp)
    ctx->pc = 0x19a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a864: 0xfba302c0  sqc2        $vf3, 0x2C0($sp)
    ctx->pc = 0x19a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a868: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19a86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a870: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x19a870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x19a874: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x19a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a878: 0xfba202e0  sqc2        $vf2, 0x2E0($sp)
    ctx->pc = 0x19a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a87c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x19a87cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19a880: 0xfba402f0  sqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x19a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a884: 0xfa830020  sqc2        $vf3, 0x20($s4)
    ctx->pc = 0x19a884u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a888: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x19a88c: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x19a88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x19a890: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19a890u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19a894: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x19a894u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x19a898: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x19a898u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x19a89c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x19a89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8a0: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x19a8a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x19a8a4: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x19a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
    // 0x19a8a8: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x19a8a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x19a8ac: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x19a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
    // 0x19a8b0: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x19a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x19a8b4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x19A8B4u;
    {
        const bool branch_taken_0x19a8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8B4u;
            // 0x19a8b8: 0xfe830068  sd          $v1, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8b4) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19A8BCu;
    // 0x19a8bc: 0x0  nop
    ctx->pc = 0x19a8bcu;
    // NOP
label_19a8c0:
    // 0x19a8c0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x19A8C0u;
    {
        const bool branch_taken_0x19a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8C0u;
            // 0x19a8c4: 0x2644005a  addiu       $a0, $s2, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8c0) {
            ctx->pc = 0x19AA48u;
            goto label_19aa48;
        }
    }
    ctx->pc = 0x19A8C8u;
    // 0x19a8c8: 0x8ef00104  lw          $s0, 0x104($s7)
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x19a8cc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19A8CCu;
    SET_GPR_U32(ctx, 31, 0x19A8D4u);
    ctx->pc = 0x19A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8CCu;
            // 0x19a8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8D4u; }
        if (ctx->pc != 0x19A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8D4u; }
        if (ctx->pc != 0x19A8D4u) { return; }
    }
    ctx->pc = 0x19A8D4u;
    // 0x19a8d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19a8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8d8: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x19A8D8u;
    SET_GPR_U32(ctx, 31, 0x19A8E0u);
    ctx->pc = 0x19A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8D8u;
            // 0x19a8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8E0u; }
        if (ctx->pc != 0x19A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8E0u; }
        if (ctx->pc != 0x19A8E0u) { return; }
    }
    ctx->pc = 0x19A8E0u;
    // 0x19a8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19a8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8e4: 0x96420040  lhu         $v0, 0x40($s2)
    ctx->pc = 0x19a8e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19a8e8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x19a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x19a8ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a8f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A8F0u;
    {
        const bool branch_taken_0x19a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8F0u;
            // 0x19a8f4: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8f0) {
            ctx->pc = 0x19A954u;
            goto label_19a954;
        }
    }
    ctx->pc = 0x19A8F8u;
    // 0x19a8f8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x19a8fc: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x19a8fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x19a900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a904: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x19a904u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x19a908: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a90c: 0x86820060  lh          $v0, 0x60($s4)
    ctx->pc = 0x19a90cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x19a910: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x19a910u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x19a914: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x19a914u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a918: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a91c: 0x0  nop
    ctx->pc = 0x19a91cu;
    // NOP
label_19a920:
    // 0x19a920: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x19a920u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x19a924: 0x7e830030  sq          $v1, 0x30($s4)
    ctx->pc = 0x19a924u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 3));
    // 0x19a928: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a92c: 0xe2180a  movz        $v1, $a3, $v0
    ctx->pc = 0x19a92cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x19a930: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x19a930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19a934: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x19a934u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
    // 0x19a938: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x19a938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19a93c: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x19a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
    // 0x19a940: 0xfd07bdf8  sd          $a3, -0x4208($t0)
    ctx->pc = 0x19a940u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 7));
    // 0x19a944: 0xc04c518  jal         func_131460
    ctx->pc = 0x19A944u;
    SET_GPR_U32(ctx, 31, 0x19A94Cu);
    ctx->pc = 0x19A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A944u;
            // 0x19a948: 0xfe830068  sd          $v1, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A94Cu; }
        if (ctx->pc != 0x19A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A94Cu; }
        if (ctx->pc != 0x19A94Cu) { return; }
    }
    ctx->pc = 0x19A94Cu;
    // 0x19a94c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x19A94Cu;
    {
        const bool branch_taken_0x19a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A94Cu;
            // 0x19a950: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a94c) {
            ctx->pc = 0x19AB88u;
            goto label_19ab88;
        }
    }
    ctx->pc = 0x19A954u;
label_19a954:
    // 0x19a954: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x19a954u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x19a958: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x19a958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19a95c: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x19a95cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x19a960: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A960u;
    {
        const bool branch_taken_0x19a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19a960) {
            ctx->pc = 0x19A964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A960u;
            // 0x19a964: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A968u;
    // 0x19a968: 0xc04da64  jal         func_136990
    ctx->pc = 0x19A968u;
    SET_GPR_U32(ctx, 31, 0x19A970u);
    ctx->pc = 0x19A96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A968u;
            // 0x19a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A970u; }
        if (ctx->pc != 0x19A970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A970u; }
        if (ctx->pc != 0x19A970u) { return; }
    }
    ctx->pc = 0x19A970u;
    // 0x19a970: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x19a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19a974: 0x0  nop
    ctx->pc = 0x19a974u;
    // NOP
label_19a978:
    // 0x19a978: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19a97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a980: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x19a980u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a984: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x19a984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19a988: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x19a988u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19a98c: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x19a98cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19a990: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x19a990u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a994: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x19a994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a998: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x19a998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19a99c: 0xdba500e0  lqc2        $vf5, 0xE0($sp)
    ctx->pc = 0x19a99cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19a9a0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19a9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a9a4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19a9a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9a8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19a9a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9ac: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x19a9acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a9b0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x19a9b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a9b4: 0xfba30380  sqc2        $vf3, 0x380($sp)
    ctx->pc = 0x19a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a9b8: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x19a9b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9bc: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x19a9bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9c0: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x19a9c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a9c4: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19a9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a9c8: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x19a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a9cc: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19a9ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9d0: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19a9d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9d4: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x19a9d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a9d8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19a9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19a9dc: 0xfba203a0  sqc2        $vf2, 0x3A0($sp)
    ctx->pc = 0x19a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a9e0: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19a9e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9e4: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19a9e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19a9e8: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x19a9e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19a9ec: 0xfba403b0  sqc2        $vf4, 0x3B0($sp)
    ctx->pc = 0x19a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19a9f0: 0xfba30340  sqc2        $vf3, 0x340($sp)
    ctx->pc = 0x19a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19a9f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9f8: 0xfba10350  sqc2        $vf1, 0x350($sp)
    ctx->pc = 0x19a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a9fc: 0xfba20360  sqc2        $vf2, 0x360($sp)
    ctx->pc = 0x19a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19aa00: 0xfba40370  sqc2        $vf4, 0x370($sp)
    ctx->pc = 0x19aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19aa04: 0xfa830020  sqc2        $vf3, 0x20($s4)
    ctx->pc = 0x19aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19aa08: 0xde64bdf8  ld          $a0, -0x4208($s3)
    ctx->pc = 0x19aa08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x19aa0c: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x19aa0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x19aa10: 0x7ba20350  lq          $v0, 0x350($sp)
    ctx->pc = 0x19aa10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x19aa14: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x19aa14u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19aa18: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19aa1c: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x19aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x19aa20: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x19aa20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x19aa24: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19aa24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa28: 0x7ba20360  lq          $v0, 0x360($sp)
    ctx->pc = 0x19aa28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x19aa2c: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x19aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
    // 0x19aa30: 0x7ba20370  lq          $v0, 0x370($sp)
    ctx->pc = 0x19aa30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x19aa34: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x19aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
    // 0x19aa38: 0xfe64bdf8  sd          $a0, -0x4208($s3)
    ctx->pc = 0x19aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294950392), GPR_U64(ctx, 4));
    // 0x19aa3c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x19AA3Cu;
    {
        const bool branch_taken_0x19aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA3Cu;
            // 0x19aa40: 0xfe830068  sd          $v1, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa3c) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19AA44u;
    // 0x19aa44: 0x0  nop
    ctx->pc = 0x19aa44u;
    // NOP
label_19aa48:
    // 0x19aa48: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x19aa4c: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x19aa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19aa50: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19AA50u;
    {
        const bool branch_taken_0x19aa50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa50) {
            ctx->pc = 0x19AA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA50u;
            // 0x19aa54: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AA80u;
            goto label_19aa80;
        }
    }
    ctx->pc = 0x19AA58u;
    // 0x19aa58: 0xfbab03c0  sqc2        $vf11, 0x3C0($sp)
    ctx->pc = 0x19aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x19aa5c: 0xfba903d0  sqc2        $vf9, 0x3D0($sp)
    ctx->pc = 0x19aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19aa60: 0xfbaa03e0  sqc2        $vf10, 0x3E0($sp)
    ctx->pc = 0x19aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19aa64: 0xfbac03f0  sqc2        $vf12, 0x3F0($sp)
    ctx->pc = 0x19aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19aa68: 0xfbac0400  sqc2        $vf12, 0x400($sp)
    ctx->pc = 0x19aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19aa6c: 0xfbaa0410  sqc2        $vf10, 0x410($sp)
    ctx->pc = 0x19aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x19aa70: 0xfba90420  sqc2        $vf9, 0x420($sp)
    ctx->pc = 0x19aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x19aa74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19AA74u;
    {
        const bool branch_taken_0x19aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA74u;
            // 0x19aa78: 0xfbab0430  sqc2        $vf11, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa74) {
            ctx->pc = 0x19AAA4u;
            goto label_19aaa4;
        }
    }
    ctx->pc = 0x19AA7Cu;
    // 0x19aa7c: 0x0  nop
    ctx->pc = 0x19aa7cu;
    // NOP
label_19aa80:
    // 0x19aa80: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x19aa80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19aa84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19aa88: 0x7fa203c0  sq          $v0, 0x3C0($sp)
    ctx->pc = 0x19aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 2));
    // 0x19aa8c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x19aa8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19aa90: 0x7fa203d0  sq          $v0, 0x3D0($sp)
    ctx->pc = 0x19aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 2));
    // 0x19aa94: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x19aa94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19aa98: 0x7fa203e0  sq          $v0, 0x3E0($sp)
    ctx->pc = 0x19aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 2));
    // 0x19aa9c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x19aa9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19aaa0: 0x7fa203f0  sq          $v0, 0x3F0($sp)
    ctx->pc = 0x19aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 2));
label_19aaa4:
    // 0x19aaa4: 0xdba603c0  lqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x19aaa4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x19aaa8: 0xdba703d0  lqc2        $vf7, 0x3D0($sp)
    ctx->pc = 0x19aaa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x19aaac: 0xdba803e0  lqc2        $vf8, 0x3E0($sp)
    ctx->pc = 0x19aaacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x19aab0: 0xdba403f0  lqc2        $vf4, 0x3F0($sp)
    ctx->pc = 0x19aab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x19aab4: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x19aab4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19aab8: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x19aab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19aabc: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x19aabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19aac0: 0xdba500e0  lqc2        $vf5, 0xE0($sp)
    ctx->pc = 0x19aac0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19aac4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19aac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19aac8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19aac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aacc: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19aaccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aad0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x19aad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19aad4: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x19aad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19aad8: 0xfba30480  sqc2        $vf3, 0x480($sp)
    ctx->pc = 0x19aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19aadc: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x19aadcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aae0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x19aae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aae4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x19aae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19aae8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19aae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19aaec: 0xfba10490  sqc2        $vf1, 0x490($sp)
    ctx->pc = 0x19aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19aaf0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19aaf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aaf4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19aaf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19aaf8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x19aaf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19aafc: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19aafcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19ab00: 0xfba204a0  sqc2        $vf2, 0x4A0($sp)
    ctx->pc = 0x19ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ab04: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19ab04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19ab08: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19ab08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19ab0c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x19ab0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19ab10: 0xfba404b0  sqc2        $vf4, 0x4B0($sp)
    ctx->pc = 0x19ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ab14: 0xfba30440  sqc2        $vf3, 0x440($sp)
    ctx->pc = 0x19ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ab18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19ab1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ab1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab20: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x19ab20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x19ab24: 0xfba10450  sqc2        $vf1, 0x450($sp)
    ctx->pc = 0x19ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19ab28: 0xfba20460  sqc2        $vf2, 0x460($sp)
    ctx->pc = 0x19ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ab2c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x19ab2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19ab30: 0xfba40470  sqc2        $vf4, 0x470($sp)
    ctx->pc = 0x19ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ab34: 0xfa830020  sqc2        $vf3, 0x20($s4)
    ctx->pc = 0x19ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ab38: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x19ab3c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x19ab3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x19ab40: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19ab44: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x19ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x19ab48: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x19ab48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x19ab4c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19ab4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab50: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x19ab50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x19ab54: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x19ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
    // 0x19ab58: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x19ab58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x19ab5c: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x19ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
    // 0x19ab60: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x19ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x19ab64: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AB64u;
    {
        const bool branch_taken_0x19ab64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB64u;
            // 0x19ab68: 0xfe830068  sd          $v1, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab64) {
            ctx->pc = 0x19AB80u;
            goto label_19ab80;
        }
    }
    ctx->pc = 0x19AB6Cu;
    // 0x19ab6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19ab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab74: 0xc04c518  jal         func_131460
    ctx->pc = 0x19AB74u;
    SET_GPR_U32(ctx, 31, 0x19AB7Cu);
    ctx->pc = 0x19AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB74u;
            // 0x19ab78: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB7Cu; }
        if (ctx->pc != 0x19AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB7Cu; }
        if (ctx->pc != 0x19AB7Cu) { return; }
    }
    ctx->pc = 0x19AB7Cu;
    // 0x19ab7c: 0x0  nop
    ctx->pc = 0x19ab7cu;
    // NOP
label_19ab80:
    // 0x19ab80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19ab84: 0x0  nop
    ctx->pc = 0x19ab84u;
    // NOP
label_19ab88:
    // 0x19ab88: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x19ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x19ab8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ab90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19ab94: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x19ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19ab98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AB98u;
    {
        const bool branch_taken_0x19ab98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB98u;
            // 0x19ab9c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab98) {
            ctx->pc = 0x19ABACu;
            goto label_19abac;
        }
    }
    ctx->pc = 0x19ABA0u;
    // 0x19aba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19aba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19ABA4u;
    {
        const bool branch_taken_0x19aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABA4u;
            // 0x19aba8: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aba4) {
            ctx->pc = 0x19ABB0u;
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19ABACu;
label_19abac:
    // 0x19abac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19abacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19abb0:
    // 0x19abb0: 0x52600026  beql        $s3, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x19ABB0u;
    {
        const bool branch_taken_0x19abb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abb0) {
            ctx->pc = 0x19ABB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABB0u;
            // 0x19abb4: 0x96420040  lhu         $v0, 0x40($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AC4Cu;
            goto label_19ac4c;
        }
    }
    ctx->pc = 0x19ABB8u;
    // 0x19abb8: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x19abbc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19abc0: 0x1aa00021  blez        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x19ABC0u;
    {
        const bool branch_taken_0x19abc0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x19ABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABC0u;
            // 0x19abc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abc0) {
            ctx->pc = 0x19AC48u;
            goto label_19ac48;
        }
    }
    ctx->pc = 0x19ABC8u;
    // 0x19abc8: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x19abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x19abcc: 0x0  nop
    ctx->pc = 0x19abccu;
    // NOP
label_19abd0:
    // 0x19abd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19abd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19abd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19abdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19abe0: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x19abe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19abe4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19ABE4u;
    {
        const bool branch_taken_0x19abe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABE4u;
            // 0x19abe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abe4) {
            ctx->pc = 0x19AC38u;
            goto label_19ac38;
        }
    }
    ctx->pc = 0x19ABECu;
    // 0x19abec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19abecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19abf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19abf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19abf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abfc: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19ABFCu;
    SET_GPR_U32(ctx, 31, 0x19AC04u);
    ctx->pc = 0x19AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ABFCu;
            // 0x19ac00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC04u; }
        if (ctx->pc != 0x19AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC04u; }
        if (ctx->pc != 0x19AC04u) { return; }
    }
    ctx->pc = 0x19AC04u;
    // 0x19ac04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ac04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ac08: 0xc04015e  jal         func_100578
    ctx->pc = 0x19AC08u;
    SET_GPR_U32(ctx, 31, 0x19AC10u);
    ctx->pc = 0x19AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC08u;
            // 0x19ac0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC10u; }
        if (ctx->pc != 0x19AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC10u; }
        if (ctx->pc != 0x19AC10u) { return; }
    }
    ctx->pc = 0x19AC10u;
    // 0x19ac10: 0x96420040  lhu         $v0, 0x40($s2)
    ctx->pc = 0x19ac10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19ac14: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x19ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x19ac18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ac1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AC1Cu;
    {
        const bool branch_taken_0x19ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac1c) {
            ctx->pc = 0x19AC2Cu;
            goto label_19ac2c;
        }
    }
    ctx->pc = 0x19AC24u;
    // 0x19ac24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AC24u;
    {
        const bool branch_taken_0x19ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC24u;
            // 0x19ac28: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac24) {
            ctx->pc = 0x19AC38u;
            goto label_19ac38;
        }
    }
    ctx->pc = 0x19AC2Cu;
label_19ac2c:
    // 0x19ac2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ac2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ac30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ac30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac34: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x19ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_19ac38:
    // 0x19ac38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19ac3c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x19ac3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x19ac40: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19AC40u;
    {
        const bool branch_taken_0x19ac40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ac40) {
            ctx->pc = 0x19AC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC40u;
            // 0x19ac44: 0x8e6300d0  lw          $v1, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ABD0u;
            runtime->cooperativeGuestYield();
            goto label_19abd0;
        }
    }
    ctx->pc = 0x19AC48u;
label_19ac48:
    // 0x19ac48: 0x96420040  lhu         $v0, 0x40($s2)
    ctx->pc = 0x19ac48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_19ac4c:
    // 0x19ac4c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x19ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x19ac50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ac54: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x19AC54u;
    {
        const bool branch_taken_0x19ac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC54u;
            // 0x19ac58: 0x27a504c0  addiu       $a1, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac54) {
            ctx->pc = 0x19AD38u;
            goto label_19ad38;
        }
    }
    ctx->pc = 0x19AC5Cu;
    // 0x19ac5c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x19ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19ac60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ac64: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19ac68: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ac6c: 0x244295a8  addiu       $v0, $v0, -0x6A58
    ctx->pc = 0x19ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940072));
    // 0x19ac70: 0xafa404c0  sw          $a0, 0x4C0($sp)
    ctx->pc = 0x19ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 4));
    // 0x19ac74: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19ac78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x19ac80: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x19ac80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ac84: 0xa4a00022  sh          $zero, 0x22($a1)
    ctx->pc = 0x19ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ac88: 0xa4a00020  sh          $zero, 0x20($a1)
    ctx->pc = 0x19ac88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ac8c: 0x0  nop
    ctx->pc = 0x19ac8cu;
    // NOP
label_19ac90:
    // 0x19ac90: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19ac94: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x19ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x19ac98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ac9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19aca0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x19aca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19aca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ACA4u;
    {
        const bool branch_taken_0x19aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACA4u;
            // 0x19aca8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aca4) {
            ctx->pc = 0x19AC90u;
            runtime->cooperativeGuestYield();
            goto label_19ac90;
        }
    }
    ctx->pc = 0x19ACACu;
    // 0x19acac: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x19acacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x19acb0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x19acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x19acb4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x19acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x19acb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19acbc: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x19acbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x19acc0: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x19acc4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x19acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19acc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19accc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19acd0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19acd4: 0x40f809  jalr        $v0
    ctx->pc = 0x19ACD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19ACDCu);
        ctx->pc = 0x19ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACD4u;
            // 0x19acd8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19ACDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19ACDCu; }
            if (ctx->pc != 0x19ACDCu) { return; }
        }
        }
    }
    ctx->pc = 0x19ACDCu;
    // 0x19acdc: 0x8fa404e4  lw          $a0, 0x4E4($sp)
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1252)));
    // 0x19ace0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19ACE0u;
    {
        const bool branch_taken_0x19ace0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACE0u;
            // 0x19ace4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ace0) {
            ctx->pc = 0x19ACF0u;
            goto label_19acf0;
        }
    }
    ctx->pc = 0x19ACE8u;
    // 0x19ace8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x19ACE8u;
    SET_GPR_U32(ctx, 31, 0x19ACF0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF0u; }
        if (ctx->pc != 0x19ACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF0u; }
        if (ctx->pc != 0x19ACF0u) { return; }
    }
    ctx->pc = 0x19ACF0u;
label_19acf0:
    // 0x19acf0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19acf4: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x19acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x19acf8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x19acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x19acfc: 0xae170060  sw          $s7, 0x60($s0)
    ctx->pc = 0x19acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 23));
    // 0x19ad00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad04: 0xc04c492  jal         func_131248
    ctx->pc = 0x19AD04u;
    SET_GPR_U32(ctx, 31, 0x19AD0Cu);
    ctx->pc = 0x19AD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD04u;
            // 0x19ad08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD0Cu; }
        if (ctx->pc != 0x19AD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD0Cu; }
        if (ctx->pc != 0x19AD0Cu) { return; }
    }
    ctx->pc = 0x19AD0Cu;
    // 0x19ad0c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19ad0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ad10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19ad14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19ad18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ad18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ad20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19ad24: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19ad24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19ad28: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19ad2c: 0x40f809  jalr        $v0
    ctx->pc = 0x19AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AD34u);
        ctx->pc = 0x19AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD2Cu;
            // 0x19ad30: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19AD34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19AD34u; }
            if (ctx->pc != 0x19AD34u) { return; }
        }
        }
    }
    ctx->pc = 0x19AD34u;
    // 0x19ad34: 0x0  nop
    ctx->pc = 0x19ad34u;
    // NOP
label_19ad38:
    // 0x19ad38: 0x96420040  lhu         $v0, 0x40($s2)
    ctx->pc = 0x19ad38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_19ad3c:
    // 0x19ad3c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x19ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x19ad40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ad44: 0x504000d9  beql        $v0, $zero, . + 4 + (0xD9 << 2)
    ctx->pc = 0x19AD44u;
    {
        const bool branch_taken_0x19ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad44) {
            ctx->pc = 0x19AD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD44u;
            // 0x19ad48: 0x8ec20030  lw          $v0, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B0ACu;
            goto label_19b0ac;
        }
    }
    ctx->pc = 0x19AD4Cu;
    // 0x19ad4c: 0x8242005a  lb          $v0, 0x5A($s2)
    ctx->pc = 0x19ad4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x19ad50: 0x504000d6  beql        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x19AD50u;
    {
        const bool branch_taken_0x19ad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad50) {
            ctx->pc = 0x19AD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD50u;
            // 0x19ad54: 0x8ec20030  lw          $v0, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B0ACu;
            goto label_19b0ac;
        }
    }
    ctx->pc = 0x19AD58u;
    // 0x19ad58: 0x8ec40060  lw          $a0, 0x60($s6)
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x19ad5c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x19ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x19ad60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19AD60u;
    {
        const bool branch_taken_0x19ad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD60u;
            // 0x19ad64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad60) {
            ctx->pc = 0x19AD9Cu;
            goto label_19ad9c;
        }
    }
    ctx->pc = 0x19AD68u;
    // 0x19ad68: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19ad6c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x19ad70: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19ad70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19ad74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19ad78: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19ad7c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19ad80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ad84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ad88: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD88u;
    {
        const bool branch_taken_0x19ad88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x19AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD88u;
            // 0x19ad8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad88) {
            ctx->pc = 0x19AD98u;
            goto label_19ad98;
        }
    }
    ctx->pc = 0x19AD90u;
    // 0x19ad90: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x19ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
label_19ad98:
    // 0x19ad98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19ad98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ad9c:
    // 0x19ad9c: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x19ad9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ada0: 0x2644005a  addiu       $a0, $s2, 0x5A
    ctx->pc = 0x19ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
    // 0x19ada4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ada4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ada8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19ADA8u;
    SET_GPR_U32(ctx, 31, 0x19ADB0u);
    ctx->pc = 0x19ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADA8u;
            // 0x19adac: 0x8e900104  lw          $s0, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADB0u; }
        if (ctx->pc != 0x19ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADB0u; }
        if (ctx->pc != 0x19ADB0u) { return; }
    }
    ctx->pc = 0x19ADB0u;
    // 0x19adb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19adb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x19ADB4u;
    SET_GPR_U32(ctx, 31, 0x19ADBCu);
    ctx->pc = 0x19ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADB4u;
            // 0x19adb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADBCu; }
        if (ctx->pc != 0x19ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADBCu; }
        if (ctx->pc != 0x19ADBCu) { return; }
    }
    ctx->pc = 0x19ADBCu;
    // 0x19adbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19adbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adc0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19adc0u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x19adc4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19adc4u;
    ctx->vu0_vf[5] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x19adc8: 0xfba40560  sqc2        $vf4, 0x560($sp)
    ctx->pc = 0x19adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19adcc: 0x4be32b3d  vmr32.xyzw  $vf3, $vf5
    ctx->pc = 0x19adccu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,1));
    // 0x19add0: 0xfba50550  sqc2        $vf5, 0x550($sp)
    ctx->pc = 0x19add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19add4: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x19add4u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x19add8: 0xfba30540  sqc2        $vf3, 0x540($sp)
    ctx->pc = 0x19add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19addc: 0xfba20530  sqc2        $vf2, 0x530($sp)
    ctx->pc = 0x19addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ade0: 0x27a40530  addiu       $a0, $sp, 0x530
    ctx->pc = 0x19ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x19ade4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x19ade4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x19ade8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ade8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19adec: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x19adecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x19adf0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x19adf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19adf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19adf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19adf8: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x19adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19adfc: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x19adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19ae00: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x19ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19ae04: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19ae04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x19ae08: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x19ae08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x19ae0c: 0xfba40570  sqc2        $vf4, 0x570($sp)
    ctx->pc = 0x19ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ae10: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x19ae10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x19ae14: 0xfba50580  sqc2        $vf5, 0x580($sp)
    ctx->pc = 0x19ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19ae18: 0xfba30590  sqc2        $vf3, 0x590($sp)
    ctx->pc = 0x19ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ae1c: 0xfba205a0  sqc2        $vf2, 0x5A0($sp)
    ctx->pc = 0x19ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ae20: 0xfba20790  sqc2        $vf2, 0x790($sp)
    ctx->pc = 0x19ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ae24: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x19ae24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x19ae28: 0xfba307a0  sqc2        $vf3, 0x7A0($sp)
    ctx->pc = 0x19ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1952), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ae2c: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x19ae2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x19ae30: 0xfba407b0  sqc2        $vf4, 0x7B0($sp)
    ctx->pc = 0x19ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1968), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ae34: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x19ae34u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x19ae38: 0xc061232  jal         func_1848C8
    ctx->pc = 0x19AE38u;
    SET_GPR_U32(ctx, 31, 0x19AE40u);
    ctx->pc = 0x19AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE38u;
            // 0x19ae3c: 0xfba507c0  sqc2        $vf5, 0x7C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1984), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1848C8u;
    if (runtime->hasFunction(0x1848C8u)) {
        auto targetFn = runtime->lookupFunction(0x1848C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE40u; }
        if (ctx->pc != 0x19AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001848C8_0x1848c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE40u; }
        if (ctx->pc != 0x19AE40u) { return; }
    }
    ctx->pc = 0x19AE40u;
    // 0x19ae40: 0xdba407b0  lqc2        $vf4, 0x7B0($sp)
    ctx->pc = 0x19ae40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x19ae44: 0xfba405b0  sqc2        $vf4, 0x5B0($sp)
    ctx->pc = 0x19ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ae48: 0xdba507c0  lqc2        $vf5, 0x7C0($sp)
    ctx->pc = 0x19ae48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1984)));
    // 0x19ae4c: 0xdba307a0  lqc2        $vf3, 0x7A0($sp)
    ctx->pc = 0x19ae4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x19ae50: 0xdba20790  lqc2        $vf2, 0x790($sp)
    ctx->pc = 0x19ae50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x19ae54: 0xfba505c0  sqc2        $vf5, 0x5C0($sp)
    ctx->pc = 0x19ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19ae58: 0xfba305d0  sqc2        $vf3, 0x5D0($sp)
    ctx->pc = 0x19ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ae5c: 0xfba205e0  sqc2        $vf2, 0x5E0($sp)
    ctx->pc = 0x19ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ae60: 0xfba204f0  sqc2        $vf2, 0x4F0($sp)
    ctx->pc = 0x19ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19ae64: 0xfba30500  sqc2        $vf3, 0x500($sp)
    ctx->pc = 0x19ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19ae68: 0xfba50510  sqc2        $vf5, 0x510($sp)
    ctx->pc = 0x19ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19ae6c: 0xfba40520  sqc2        $vf4, 0x520($sp)
    ctx->pc = 0x19ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ae70: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x19ae74: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x19ae78: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x19ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x19ae7c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19ae7cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19ae80: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x19ae80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x19ae84: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x19ae84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x19ae88: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x19ae88u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19ae8c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x19ae8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x19ae90: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x19ae90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19ae94: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19ae94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19ae98: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x19ae98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19ae9c: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x19ae9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19aea0: 0xfba105f0  sqc2        $vf1, 0x5F0($sp)
    ctx->pc = 0x19aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19aea4: 0xfba10770  sqc2        $vf1, 0x770($sp)
    ctx->pc = 0x19aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19aea8: 0xfba20600  sqc2        $vf2, 0x600($sp)
    ctx->pc = 0x19aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19aeac: 0xfba204f0  sqc2        $vf2, 0x4F0($sp)
    ctx->pc = 0x19aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19aeb0: 0xfba30610  sqc2        $vf3, 0x610($sp)
    ctx->pc = 0x19aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19aeb4: 0xfba30500  sqc2        $vf3, 0x500($sp)
    ctx->pc = 0x19aeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19aeb8: 0xfba50620  sqc2        $vf5, 0x620($sp)
    ctx->pc = 0x19aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19aebc: 0xfba50510  sqc2        $vf5, 0x510($sp)
    ctx->pc = 0x19aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19aec0: 0xfba40630  sqc2        $vf4, 0x630($sp)
    ctx->pc = 0x19aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19aec4: 0xfba40520  sqc2        $vf4, 0x520($sp)
    ctx->pc = 0x19aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19aec8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x19aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19aecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19aeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aed0: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19aed4: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19aed4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19aed8: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x19aedc: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x19aedcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x19aee0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x19aee0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19aee4: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x19aee8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19aee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19aeec: 0x7fa20640  sq          $v0, 0x640($sp)
    ctx->pc = 0x19aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 2));
    // 0x19aef0: 0x7fa20780  sq          $v0, 0x780($sp)
    ctx->pc = 0x19aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1920), GPR_VEC(ctx, 2));
    // 0x19aef4: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x19aef4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19aef8: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x19aef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19aefc: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x19aefcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19af00: 0xfba40520  sqc2        $vf4, 0x520($sp)
    ctx->pc = 0x19af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19af04: 0xdba60530  lqc2        $vf6, 0x530($sp)
    ctx->pc = 0x19af04u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x19af08: 0xdba70540  lqc2        $vf7, 0x540($sp)
    ctx->pc = 0x19af08u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x19af0c: 0xdba80550  lqc2        $vf8, 0x550($sp)
    ctx->pc = 0x19af0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x19af10: 0xdba10560  lqc2        $vf1, 0x560($sp)
    ctx->pc = 0x19af10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x19af14: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19af14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19af18: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19af18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af1c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19af1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af20: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x19af20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19af24: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19af24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19af28: 0xfba20690  sqc2        $vf2, 0x690($sp)
    ctx->pc = 0x19af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19af2c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19af2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af30: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19af30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af34: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x19af34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19af38: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19af38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19af3c: 0xfba306a0  sqc2        $vf3, 0x6A0($sp)
    ctx->pc = 0x19af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19af40: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19af40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af44: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19af44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af48: 0x4be5094b  vmaddw.xyzw $vf5, $vf1, $vf5w
    ctx->pc = 0x19af48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19af4c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19af4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19af50: 0xfba506b0  sqc2        $vf5, 0x6B0($sp)
    ctx->pc = 0x19af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19af54: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19af54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af58: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19af58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19af5c: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x19af5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19af60: 0xfba106c0  sqc2        $vf1, 0x6C0($sp)
    ctx->pc = 0x19af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19af64: 0xfba20650  sqc2        $vf2, 0x650($sp)
    ctx->pc = 0x19af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19af68: 0xfba204f0  sqc2        $vf2, 0x4F0($sp)
    ctx->pc = 0x19af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19af6c: 0xfba30500  sqc2        $vf3, 0x500($sp)
    ctx->pc = 0x19af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19af70: 0xfba50510  sqc2        $vf5, 0x510($sp)
    ctx->pc = 0x19af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19af74: 0xfba10520  sqc2        $vf1, 0x520($sp)
    ctx->pc = 0x19af74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19af78: 0xfba30660  sqc2        $vf3, 0x660($sp)
    ctx->pc = 0x19af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19af7c: 0xfba50670  sqc2        $vf5, 0x670($sp)
    ctx->pc = 0x19af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19af80: 0xfba10680  sqc2        $vf1, 0x680($sp)
    ctx->pc = 0x19af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19af84: 0x96420040  lhu         $v0, 0x40($s2)
    ctx->pc = 0x19af84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x19af88: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x19af88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x19af8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19af90: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x19AF90u;
    {
        const bool branch_taken_0x19af90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF90u;
            // 0x19af94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af90) {
            ctx->pc = 0x19B050u;
            goto label_19b050;
        }
    }
    ctx->pc = 0x19AF98u;
    // 0x19af98: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x19af98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19af9c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x19afa0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AFA0u;
    {
        const bool branch_taken_0x19afa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19afa0) {
            ctx->pc = 0x19AFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFA0u;
            // 0x19afa4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AFB8u;
            goto label_19afb8;
        }
    }
    ctx->pc = 0x19AFA8u;
    // 0x19afa8: 0xc04da64  jal         func_136990
    ctx->pc = 0x19AFA8u;
    SET_GPR_U32(ctx, 31, 0x19AFB0u);
    ctx->pc = 0x19AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFA8u;
            // 0x19afac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFB0u; }
        if (ctx->pc != 0x19AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFB0u; }
        if (ctx->pc != 0x19AFB0u) { return; }
    }
    ctx->pc = 0x19AFB0u;
    // 0x19afb0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19afb4: 0x0  nop
    ctx->pc = 0x19afb4u;
    // NOP
label_19afb8:
    // 0x19afb8: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x19afbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19afc0: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x19afc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19afc4: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x19afc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19afc8: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x19afc8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19afcc: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x19afccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19afd0: 0xdba104f0  lqc2        $vf1, 0x4F0($sp)
    ctx->pc = 0x19afd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x19afd4: 0xdba20500  lqc2        $vf2, 0x500($sp)
    ctx->pc = 0x19afd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x19afd8: 0xdba30510  lqc2        $vf3, 0x510($sp)
    ctx->pc = 0x19afd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x19afdc: 0xdba50520  lqc2        $vf5, 0x520($sp)
    ctx->pc = 0x19afdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x19afe0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x19afe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19afe4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x19afe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19afe8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x19afe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19afec: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x19afecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19aff0: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x19aff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19aff4: 0xfba10710  sqc2        $vf1, 0x710($sp)
    ctx->pc = 0x19aff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19aff8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19aff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19affc: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x19affcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19b000: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x19b000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19b004: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x19b004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19b008: 0xfba20720  sqc2        $vf2, 0x720($sp)
    ctx->pc = 0x19b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19b00c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x19b00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19b010: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x19b010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19b014: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x19b014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19b018: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x19b018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19b01c: 0xfba30730  sqc2        $vf3, 0x730($sp)
    ctx->pc = 0x19b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19b020: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x19b020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19b024: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x19b024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19b028: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x19b028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19b02c: 0xfba40740  sqc2        $vf4, 0x740($sp)
    ctx->pc = 0x19b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19b030: 0xfba106d0  sqc2        $vf1, 0x6D0($sp)
    ctx->pc = 0x19b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19b034: 0xfba104f0  sqc2        $vf1, 0x4F0($sp)
    ctx->pc = 0x19b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19b038: 0xfba20500  sqc2        $vf2, 0x500($sp)
    ctx->pc = 0x19b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19b03c: 0xfba30510  sqc2        $vf3, 0x510($sp)
    ctx->pc = 0x19b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19b040: 0xfba40520  sqc2        $vf4, 0x520($sp)
    ctx->pc = 0x19b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19b044: 0xfba206e0  sqc2        $vf2, 0x6E0($sp)
    ctx->pc = 0x19b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19b048: 0xfba306f0  sqc2        $vf3, 0x6F0($sp)
    ctx->pc = 0x19b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19b04c: 0xfba40700  sqc2        $vf4, 0x700($sp)
    ctx->pc = 0x19b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), _mm_castps_si128(ctx->vu0_vf[4]));
label_19b050:
    // 0x19b050: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x19B050u;
    SET_GPR_U32(ctx, 31, 0x19B058u);
    ctx->pc = 0x19B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B050u;
            // 0x19b054: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B058u; }
        if (ctx->pc != 0x19B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B058u; }
        if (ctx->pc != 0x19B058u) { return; }
    }
    ctx->pc = 0x19B058u;
    // 0x19b058: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19b05c: 0x9445026e  lhu         $a1, 0x26E($v0)
    ctx->pc = 0x19b05cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 622)));
    // 0x19b060: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x19b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x19b064: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x19B064u;
    SET_GPR_U32(ctx, 31, 0x19B06Cu);
    ctx->pc = 0x19B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B064u;
            // 0x19b068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B06Cu; }
        if (ctx->pc != 0x19B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B06Cu; }
        if (ctx->pc != 0x19B06Cu) { return; }
    }
    ctx->pc = 0x19B06Cu;
    // 0x19b06c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19B06Cu;
    {
        const bool branch_taken_0x19b06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b06c) {
            ctx->pc = 0x19B070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B06Cu;
            // 0x19b070: 0x8ec20030  lw          $v0, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B0ACu;
            goto label_19b0ac;
        }
    }
    ctx->pc = 0x19B074u;
    // 0x19b074: 0x8e8300fc  lw          $v1, 0xFC($s4)
    ctx->pc = 0x19b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x19b078: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B078u;
    {
        const bool branch_taken_0x19b078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B078u;
            // 0x19b07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b078) {
            ctx->pc = 0x19B090u;
            goto label_19b090;
        }
    }
    ctx->pc = 0x19B080u;
    // 0x19b080: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19b080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b084: 0x50a30002  beql        $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B084u;
    {
        const bool branch_taken_0x19b084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b084) {
            ctx->pc = 0x19B088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B084u;
            // 0x19b088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B090u;
            goto label_19b090;
        }
    }
    ctx->pc = 0x19B08Cu;
    // 0x19b08c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19b090:
    // 0x19b090: 0x133400  sll         $a2, $s3, 16
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x19b094: 0x7ba70500  lq          $a3, 0x500($sp)
    ctx->pc = 0x19b094u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x19b098: 0x7ba80520  lq          $t0, 0x520($sp)
    ctx->pc = 0x19b098u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x19b09c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0a0: 0xc0883a2  jal         func_220E88
    ctx->pc = 0x19B0A0u;
    SET_GPR_U32(ctx, 31, 0x19B0A8u);
    ctx->pc = 0x19B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0A0u;
            // 0x19b0a4: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220E88u;
    if (runtime->hasFunction(0x220E88u)) {
        auto targetFn = runtime->lookupFunction(0x220E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0A8u; }
        if (ctx->pc != 0x19B0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220E88_0x220e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0A8u; }
        if (ctx->pc != 0x19B0A8u) { return; }
    }
    ctx->pc = 0x19B0A8u;
    // 0x19b0a8: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_19b0ac:
    // 0x19b0ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B0ACu;
    {
        const bool branch_taken_0x19b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b0ac) {
            ctx->pc = 0x19B0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0ACu;
            // 0x19b0b0: 0x96440040  lhu         $a0, 0x40($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B0C4u;
            goto label_19b0c4;
        }
    }
    ctx->pc = 0x19B0B4u;
    // 0x19b0b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19b0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b8: 0xc081a5a  jal         func_206968
    ctx->pc = 0x19B0B8u;
    SET_GPR_U32(ctx, 31, 0x19B0C0u);
    ctx->pc = 0x19B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0B8u;
            // 0x19b0bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0C0u; }
        if (ctx->pc != 0x19B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0C0u; }
        if (ctx->pc != 0x19B0C0u) { return; }
    }
    ctx->pc = 0x19B0C0u;
    // 0x19b0c0: 0x96440040  lhu         $a0, 0x40($s2)
    ctx->pc = 0x19b0c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_19b0c4:
    // 0x19b0c4: 0x41102  srl         $v0, $a0, 4
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x19b0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b0cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B0CCu;
    {
        const bool branch_taken_0x19b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0CCu;
            // 0x19b0d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0cc) {
            ctx->pc = 0x19B108u;
            goto label_19b108;
        }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x41242  srl         $v0, $a0, 9
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x19b0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b0dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B0DCu;
    {
        const bool branch_taken_0x19b0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0DCu;
            // 0x19b0e0: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0dc) {
            ctx->pc = 0x19B0F4u;
            goto label_19b0f4;
        }
    }
    ctx->pc = 0x19B0E4u;
    // 0x19b0e4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19b0e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b0ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B0ECu;
    {
        const bool branch_taken_0x19b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0ECu;
            // 0x19b0f0: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0ec) {
            ctx->pc = 0x19B100u;
            goto label_19b100;
        }
    }
    ctx->pc = 0x19B0F4u;
label_19b0f4:
    // 0x19b0f4: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x19b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x19b0f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B0F8u;
    {
        const bool branch_taken_0x19b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0F8u;
            // 0x19b0fc: 0xaec2002c  sw          $v0, 0x2C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0f8) {
            ctx->pc = 0x19B10Cu;
            goto label_19b10c;
        }
    }
    ctx->pc = 0x19B100u;
label_19b100:
    // 0x19b100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b104: 0x0  nop
    ctx->pc = 0x19b104u;
    // NOP
label_19b108:
    // 0x19b108: 0xa6c2002a  sh          $v0, 0x2A($s6)
    ctx->pc = 0x19b108u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 2));
label_19b10c:
    // 0x19b10c: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x19b10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
    // 0x19b110: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x19b110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x19b114: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x19b114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x19b118: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x19b118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x19b11c: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x19b11cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x19b120: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x19b120u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x19b124: 0x7bb60840  lq          $s6, 0x840($sp)
    ctx->pc = 0x19b124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x19b128: 0x7bb70830  lq          $s7, 0x830($sp)
    ctx->pc = 0x19b128u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x19b12c: 0x7bbe0820  lq          $fp, 0x820($sp)
    ctx->pc = 0x19b12cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x19b130: 0xdfbf0810  ld          $ra, 0x810($sp)
    ctx->pc = 0x19b130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x19b134: 0x3e00008  jr          $ra
    ctx->pc = 0x19B134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B134u;
            // 0x19b138: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B13Cu;
    // 0x19b13c: 0x0  nop
    ctx->pc = 0x19b13cu;
    // NOP
    // 0x19b140: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x19b144: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x19b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x19b148: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x19b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x19b14c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b150: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x19b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x19b154: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x19b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x19b158: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x19b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x19b15c: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x19b160: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19b164: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B164u;
    {
        const bool branch_taken_0x19b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B164u;
            // 0x19b168: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b164) {
            ctx->pc = 0x19B19Cu;
            goto label_19b19c;
        }
    }
    ctx->pc = 0x19B16Cu;
    // 0x19b16c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19b170: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19b174: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19b174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19b178: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19b17c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19b180: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19b180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19b184: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b18c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B18Cu;
    {
        const bool branch_taken_0x19b18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19B190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B18Cu;
            // 0x19b190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b18c) {
            ctx->pc = 0x19B198u;
            goto label_19b198;
        }
    }
    ctx->pc = 0x19B194u;
    // 0x19b194: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19b194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19b198:
    // 0x19b198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b19c:
    // 0x19b19c: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
    ctx->pc = 0x19B19Cu;
    {
        const bool branch_taken_0x19b19c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B19Cu;
            // 0x19b1a0: 0x240203f1  addiu       $v0, $zero, 0x3F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b19c) {
            ctx->pc = 0x19B3A0u;
            goto label_19b3a0;
        }
    }
    ctx->pc = 0x19B1A4u;
    // 0x19b1a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19b1a8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x19b1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b1ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19b1b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19b1b4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19b1b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19b1bc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x19b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19b1c0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19b1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b1c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19b1c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b1cc: 0x0  nop
    ctx->pc = 0x19b1ccu;
    // NOP
label_19b1d0:
    // 0x19b1d0: 0x0  nop
    ctx->pc = 0x19b1d0u;
    // NOP
    // 0x19b1d4: 0x0  nop
    ctx->pc = 0x19b1d4u;
    // NOP
    // 0x19b1d8: 0x0  nop
    ctx->pc = 0x19b1d8u;
    // NOP
    // 0x19b1dc: 0x0  nop
    ctx->pc = 0x19b1dcu;
    // NOP
    // 0x19b1e0: 0x0  nop
    ctx->pc = 0x19b1e0u;
    // NOP
    // 0x19b1e4: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B1E4u;
    {
        const bool branch_taken_0x19b1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b1e4) {
            ctx->pc = 0x19B1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1E4u;
            // 0x19b1e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B1D0u;
            runtime->cooperativeGuestYield();
            goto label_19b1d0;
        }
    }
    ctx->pc = 0x19B1ECu;
    // 0x19b1ec: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x19b1f0: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x19b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
    // 0x19b1f4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B1F4u;
    {
        const bool branch_taken_0x19b1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1F4u;
            // 0x19b1f8: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f4) {
            ctx->pc = 0x19B240u;
            goto label_19b240;
        }
    }
    ctx->pc = 0x19B1FCu;
    // 0x19b1fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b200: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x19B200u;
    {
        const bool branch_taken_0x19b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B200u;
            // 0x19b204: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b200) {
            ctx->pc = 0x19B240u;
            goto label_19b240;
        }
    }
    ctx->pc = 0x19B208u;
    // 0x19b208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b20c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19b210: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x19b210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x19b214: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19b218: 0x6ba200b7  ldl         $v0, 0xB7($sp)
    ctx->pc = 0x19b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19b21c: 0x6fa200b0  ldr         $v0, 0xB0($sp)
    ctx->pc = 0x19b21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19b220: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x19b220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b224: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x19b224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b228: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b22c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19b230: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19b234: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19b238: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b23c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x19b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_19b240:
    // 0x19b240: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b244: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19b248: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19b248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19b24c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x19B24Cu;
    {
        const bool branch_taken_0x19b24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B24Cu;
            // 0x19b250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b24c) {
            ctx->pc = 0x19B398u;
            goto label_19b398;
        }
    }
    ctx->pc = 0x19B254u;
    // 0x19b254: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x19b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19b258:
    // 0x19b258: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b25c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x19b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x19b260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b264: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19b268: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19b26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b270: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x19b270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x19b274: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x19b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19b278: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x19b278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19b27c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x19b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x19b280: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x19b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19b284: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19B284u;
    {
        const bool branch_taken_0x19b284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B284u;
            // 0x19b288: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b284) {
            ctx->pc = 0x19B2D8u;
            goto label_19b2d8;
        }
    }
    ctx->pc = 0x19B28Cu;
    // 0x19b28c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x19B28Cu;
    {
        const bool branch_taken_0x19b28c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b28c) {
            ctx->pc = 0x19B290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B28Cu;
            // 0x19b290: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B2DCu;
            goto label_19b2dc;
        }
    }
    ctx->pc = 0x19B294u;
    // 0x19b294: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b298: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x19B298u;
    {
        const bool branch_taken_0x19b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19B29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B298u;
            // 0x19b29c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b298) {
            ctx->pc = 0x19B2D8u;
            goto label_19b2d8;
        }
    }
    ctx->pc = 0x19B2A0u;
    // 0x19b2a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19b2a4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x19b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x19b2a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19b2ac: 0x6ba300c7  ldl         $v1, 0xC7($sp)
    ctx->pc = 0x19b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19b2b0: 0x6fa300c0  ldr         $v1, 0xC0($sp)
    ctx->pc = 0x19b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19b2b4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x19b2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b2b8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x19b2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b2bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b2c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19b2c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19b2c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19b2cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b2d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19B2D0u;
    {
        const bool branch_taken_0x19b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2D0u;
            // 0x19b2d4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2d0) {
            ctx->pc = 0x19B324u;
            goto label_19b324;
        }
    }
    ctx->pc = 0x19B2D8u;
label_19b2d8:
    // 0x19b2d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19b2dc:
    // 0x19b2dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b2e0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B2E0u;
    {
        const bool branch_taken_0x19b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2E0u;
            // 0x19b2e4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2e0) {
            ctx->pc = 0x19B324u;
            goto label_19b324;
        }
    }
    ctx->pc = 0x19B2E8u;
    // 0x19b2e8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b2ec: 0x0  nop
    ctx->pc = 0x19b2ecu;
    // NOP
label_19b2f0:
    // 0x19b2f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19b2f4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x19b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19b2f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19b2fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B2FCu;
    {
        const bool branch_taken_0x19b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2FCu;
            // 0x19b300: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2fc) {
            ctx->pc = 0x19B320u;
            goto label_19b320;
        }
    }
    ctx->pc = 0x19B304u;
    // 0x19b304: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19b308: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19b30c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b314: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19B314u;
    {
        const bool branch_taken_0x19b314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B314u;
            // 0x19b318: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b314) {
            ctx->pc = 0x19B2F0u;
            runtime->cooperativeGuestYield();
            goto label_19b2f0;
        }
    }
    ctx->pc = 0x19B31Cu;
    // 0x19b31c: 0x0  nop
    ctx->pc = 0x19b31cu;
    // NOP
label_19b320:
    // 0x19b320: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x19b320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_19b324:
    // 0x19b324: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x19b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x19b328: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x19b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x19b32c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19b330: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x19b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x19b334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19b338: 0xae4200f4  sw          $v0, 0xF4($s2)
    ctx->pc = 0x19b338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 2));
    // 0x19b33c: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x19b340: 0x84840068  lh          $a0, 0x68($a0)
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x19b344: 0x40f809  jalr        $v0
    ctx->pc = 0x19B344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B34Cu);
        ctx->pc = 0x19B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B344u;
            // 0x19b348: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19B34Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19B34Cu; }
            if (ctx->pc != 0x19B34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19B34Cu;
    // 0x19b34c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B34Cu;
    {
        const bool branch_taken_0x19b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B34Cu;
            // 0x19b350: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b34c) {
            ctx->pc = 0x19B378u;
            goto label_19b378;
        }
    }
    ctx->pc = 0x19B354u;
    // 0x19b354: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19b358: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19b35c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19b360: 0x40f809  jalr        $v0
    ctx->pc = 0x19B360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B368u);
        ctx->pc = 0x19B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B360u;
            // 0x19b364: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19B368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19B368u; }
            if (ctx->pc != 0x19B368u) { return; }
        }
        }
    }
    ctx->pc = 0x19B368u;
    // 0x19b368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b36c: 0xc080306  jal         func_200C18
    ctx->pc = 0x19B36Cu;
    SET_GPR_U32(ctx, 31, 0x19B374u);
    ctx->pc = 0x19B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B36Cu;
            // 0x19b370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200C18u;
    if (runtime->hasFunction(0x200C18u)) {
        auto targetFn = runtime->lookupFunction(0x200C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B374u; }
        if (ctx->pc != 0x19B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200C18_0x200c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B374u; }
        if (ctx->pc != 0x19B374u) { return; }
    }
    ctx->pc = 0x19B374u;
    // 0x19b374: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19b374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_19b378:
    // 0x19b378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b37c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x19b380: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x19B380u;
    SET_GPR_U32(ctx, 31, 0x19B388u);
    ctx->pc = 0x19B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B380u;
            // 0x19b384: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B388u; }
        if (ctx->pc != 0x19B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B388u; }
        if (ctx->pc != 0x19B388u) { return; }
    }
    ctx->pc = 0x19B388u;
    // 0x19b388: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b38c: 0x441ffb2  bgez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x19B38Cu;
    {
        const bool branch_taken_0x19b38c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B38Cu;
            // 0x19b390: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b38c) {
            ctx->pc = 0x19B258u;
            runtime->cooperativeGuestYield();
            goto label_19b258;
        }
    }
    ctx->pc = 0x19B394u;
    // 0x19b394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b398:
    // 0x19b398: 0xc079b96  jal         func_1E6E58
    ctx->pc = 0x19B398u;
    SET_GPR_U32(ctx, 31, 0x19B3A0u);
    ctx->pc = 0x19B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B398u;
            // 0x19b39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E58u;
    if (runtime->hasFunction(0x1E6E58u)) {
        auto targetFn = runtime->lookupFunction(0x1E6E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3A0u; }
        if (ctx->pc != 0x19B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6E58_0x1e6e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3A0u; }
        if (ctx->pc != 0x19B3A0u) { return; }
    }
    ctx->pc = 0x19B3A0u;
label_19b3a0:
    // 0x19b3a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b3a4: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x19b3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b3a8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x19b3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19b3ac: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x19b3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x19b3b0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x19b3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19b3b4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x19b3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19b3b8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x19b3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19b3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3BCu;
            // 0x19b3c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B3C4u;
    // 0x19b3c4: 0x0  nop
    ctx->pc = 0x19b3c4u;
    // NOP
    // 0x19b3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b3cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19b3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b3dc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19b3e0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19b3e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B3E4u;
    {
        const bool branch_taken_0x19b3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3E4u;
            // 0x19b3e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3e4) {
            ctx->pc = 0x19B41Cu;
            goto label_19b41c;
        }
    }
    ctx->pc = 0x19B3ECu;
    // 0x19b3ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19b3f0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19b3f4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19b3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19b3f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19b3fc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19b400: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19b404: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b40c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B40Cu;
    {
        const bool branch_taken_0x19b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B40Cu;
            // 0x19b410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b40c) {
            ctx->pc = 0x19B418u;
            goto label_19b418;
        }
    }
    ctx->pc = 0x19B414u;
    // 0x19b414: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19b418:
    // 0x19b418: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19b418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b41c:
    // 0x19b41c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x19b420: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19B420u;
    {
        const bool branch_taken_0x19b420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B420u;
            // 0x19b424: 0x8e110068  lw          $s1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b420) {
            ctx->pc = 0x19B450u;
            goto label_19b450;
        }
    }
    ctx->pc = 0x19B428u;
    // 0x19b428: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B428u;
    {
        const bool branch_taken_0x19b428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B428u;
            // 0x19b42c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b428) {
            ctx->pc = 0x19B458u;
            goto label_19b458;
        }
    }
    ctx->pc = 0x19B430u;
    // 0x19b430: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19b434: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19b434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19b438: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19b43c: 0x40f809  jalr        $v0
    ctx->pc = 0x19B43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B444u);
        ctx->pc = 0x19B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B43Cu;
            // 0x19b440: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19B444u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19B444u; }
            if (ctx->pc != 0x19B444u) { return; }
        }
        }
    }
    ctx->pc = 0x19B444u;
    // 0x19b444: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B444u;
    {
        const bool branch_taken_0x19b444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b444) {
            ctx->pc = 0x19B448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B444u;
            // 0x19b448: 0xa45100a8  sh          $s1, 0xA8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B450u;
            goto label_19b450;
        }
    }
    ctx->pc = 0x19B44Cu;
    // 0x19b44c: 0x0  nop
    ctx->pc = 0x19b44cu;
    // NOP
label_19b450:
    // 0x19b450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b454: 0x0  nop
    ctx->pc = 0x19b454u;
    // NOP
label_19b458:
    // 0x19b458: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19b458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b45c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19b45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b468: 0x3e00008  jr          $ra
    ctx->pc = 0x19B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B468u;
            // 0x19b46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D0u: goto label_1996d0;
            case 0x199728u: goto label_199728;
            case 0x19972Cu: goto label_19972c;
            case 0x1997B8u: goto label_1997b8;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F4u: goto label_1997f4;
            case 0x199814u: goto label_199814;
            case 0x199848u: goto label_199848;
            case 0x199868u: goto label_199868;
            case 0x199894u: goto label_199894;
            case 0x1998C8u: goto label_1998c8;
            case 0x1998F8u: goto label_1998f8;
            case 0x199A20u: goto label_199a20;
            case 0x199A48u: goto label_199a48;
            case 0x199A64u: goto label_199a64;
            case 0x199A90u: goto label_199a90;
            case 0x199AB0u: goto label_199ab0;
            case 0x199ADCu: goto label_199adc;
            case 0x199B10u: goto label_199b10;
            case 0x199C38u: goto label_199c38;
            case 0x199C48u: goto label_199c48;
            case 0x199C4Cu: goto label_199c4c;
            case 0x199C54u: goto label_199c54;
            case 0x199CC8u: goto label_199cc8;
            case 0x199CCCu: goto label_199ccc;
            case 0x199D00u: goto label_199d00;
            case 0x199D18u: goto label_199d18;
            case 0x199D88u: goto label_199d88;
            case 0x199D90u: goto label_199d90;
            case 0x199D94u: goto label_199d94;
            case 0x199E18u: goto label_199e18;
            case 0x199E1Cu: goto label_199e1c;
            case 0x199E68u: goto label_199e68;
            case 0x199E6Cu: goto label_199e6c;
            case 0x199EA8u: goto label_199ea8;
            case 0x199ED8u: goto label_199ed8;
            case 0x199EE8u: goto label_199ee8;
            case 0x199F18u: goto label_199f18;
            case 0x199F30u: goto label_199f30;
            case 0x199F80u: goto label_199f80;
            case 0x199F9Cu: goto label_199f9c;
            case 0x19A010u: goto label_19a010;
            case 0x19A014u: goto label_19a014;
            case 0x19A018u: goto label_19a018;
            case 0x19A098u: goto label_19a098;
            case 0x19A09Cu: goto label_19a09c;
            case 0x19A110u: goto label_19a110;
            case 0x19A114u: goto label_19a114;
            case 0x19A158u: goto label_19a158;
            case 0x19A1C0u: goto label_19a1c0;
            case 0x19A1C4u: goto label_19a1c4;
            case 0x19A1D8u: goto label_19a1d8;
            case 0x19A208u: goto label_19a208;
            case 0x19A240u: goto label_19a240;
            case 0x19A270u: goto label_19a270;
            case 0x19A308u: goto label_19a308;
            case 0x19A310u: goto label_19a310;
            case 0x19A314u: goto label_19a314;
            case 0x19A320u: goto label_19a320;
            case 0x19A328u: goto label_19a328;
            case 0x19A35Cu: goto label_19a35c;
            case 0x19A378u: goto label_19a378;
            case 0x19A3A8u: goto label_19a3a8;
            case 0x19A3E8u: goto label_19a3e8;
            case 0x19A3F0u: goto label_19a3f0;
            case 0x19A488u: goto label_19a488;
            case 0x19A4E8u: goto label_19a4e8;
            case 0x19A550u: goto label_19a550;
            case 0x19A55Cu: goto label_19a55c;
            case 0x19A750u: goto label_19a750;
            case 0x19A7C0u: goto label_19a7c0;
            case 0x19A7D8u: goto label_19a7d8;
            case 0x19A7F4u: goto label_19a7f4;
            case 0x19A8C0u: goto label_19a8c0;
            case 0x19A920u: goto label_19a920;
            case 0x19A954u: goto label_19a954;
            case 0x19A978u: goto label_19a978;
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA80u: goto label_19aa80;
            case 0x19AAA4u: goto label_19aaa4;
            case 0x19AB80u: goto label_19ab80;
            case 0x19AB88u: goto label_19ab88;
            case 0x19ABACu: goto label_19abac;
            case 0x19ABB0u: goto label_19abb0;
            case 0x19ABD0u: goto label_19abd0;
            case 0x19AC2Cu: goto label_19ac2c;
            case 0x19AC38u: goto label_19ac38;
            case 0x19AC48u: goto label_19ac48;
            case 0x19AC4Cu: goto label_19ac4c;
            case 0x19AC90u: goto label_19ac90;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19AFB8u: goto label_19afb8;
            case 0x19B050u: goto label_19b050;
            case 0x19B090u: goto label_19b090;
            case 0x19B0ACu: goto label_19b0ac;
            case 0x19B0C4u: goto label_19b0c4;
            case 0x19B0F4u: goto label_19b0f4;
            case 0x19B100u: goto label_19b100;
            case 0x19B108u: goto label_19b108;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B198u: goto label_19b198;
            case 0x19B19Cu: goto label_19b19c;
            case 0x19B1D0u: goto label_19b1d0;
            case 0x19B240u: goto label_19b240;
            case 0x19B258u: goto label_19b258;
            case 0x19B2D8u: goto label_19b2d8;
            case 0x19B2DCu: goto label_19b2dc;
            case 0x19B2F0u: goto label_19b2f0;
            case 0x19B320u: goto label_19b320;
            case 0x19B324u: goto label_19b324;
            case 0x19B378u: goto label_19b378;
            case 0x19B398u: goto label_19b398;
            case 0x19B3A0u: goto label_19b3a0;
            case 0x19B418u: goto label_19b418;
            case 0x19B41Cu: goto label_19b41c;
            case 0x19B450u: goto label_19b450;
            case 0x19B458u: goto label_19b458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B470u;
}
