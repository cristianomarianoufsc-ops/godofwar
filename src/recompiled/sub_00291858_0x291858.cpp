#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291858
// Address: 0x291858 - 0x291e88
void sub_00291858_0x291858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291858_0x291858");
#endif

    ctx->pc = 0x291858u;

    // 0x291858: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x291858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29185c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29185cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291860: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x291860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x291864: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x291864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x291868: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x291868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x29186c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x29186cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x291870: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x291870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x291874: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x291874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x291878: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x291878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x29187c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x29187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x291880: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x291880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x291884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291888: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x291888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29188c: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x29188cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291890: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x291890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291898: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x29189c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2918a0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2918a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2918a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2918A4u;
    {
        const bool branch_taken_0x2918a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2918A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918A4u;
            // 0x2918a8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918a4) {
            ctx->pc = 0x291910u;
            goto label_291910;
        }
    }
    ctx->pc = 0x2918ACu;
    // 0x2918ac: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2918b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2918b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2918b4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2918b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2918b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2918bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2918BCu;
    {
        const bool branch_taken_0x2918bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2918C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918BCu;
            // 0x2918c0: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918bc) {
            ctx->pc = 0x2918D0u;
            goto label_2918d0;
        }
    }
    ctx->pc = 0x2918C4u;
    // 0x2918c4: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x2918C4u;
    {
        const bool branch_taken_0x2918c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918C4u;
            // 0x2918c8: 0xdc626610  ld          $v0, 0x6610($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 26128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918c4) {
            ctx->pc = 0x291E54u;
            goto label_291e54;
        }
    }
    ctx->pc = 0x2918CCu;
    // 0x2918cc: 0x0  nop
    ctx->pc = 0x2918ccu;
    // NOP
label_2918d0:
    // 0x2918d0: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2918D0u;
    {
        const bool branch_taken_0x2918d0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2918D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918D0u;
            // 0x2918d4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918d0) {
            ctx->pc = 0x2918F4u;
            goto label_2918f4;
        }
    }
    ctx->pc = 0x2918D8u;
    // 0x2918d8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2918D8u;
    SET_GPR_U32(ctx, 31, 0x2918E0u);
    ctx->pc = 0x2918DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2918D8u;
            // 0x2918dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918E0u; }
        if (ctx->pc != 0x2918E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918E0u; }
        if (ctx->pc != 0x2918E0u) { return; }
    }
    ctx->pc = 0x2918E0u;
    // 0x2918e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2918e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918e4: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x2918E4u;
    SET_GPR_U32(ctx, 31, 0x2918ECu);
    ctx->pc = 0x2918E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2918E4u;
            // 0x2918e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918ECu; }
        if (ctx->pc != 0x2918ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918ECu; }
        if (ctx->pc != 0x2918ECu) { return; }
    }
    ctx->pc = 0x2918ECu;
    // 0x2918ec: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x2918ECu;
    {
        const bool branch_taken_0x2918ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2918ECu;
            // 0x2918f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918ec) {
            ctx->pc = 0x291E58u;
            goto label_291e58;
        }
    }
    ctx->pc = 0x2918F4u;
label_2918f4:
    // 0x2918f4: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x2918f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x2918f8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2918f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2918fc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2918FCu;
    SET_GPR_U32(ctx, 31, 0x291904u);
    ctx->pc = 0x291900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2918FCu;
            // 0x291900: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291904u; }
        if (ctx->pc != 0x291904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291904u; }
        if (ctx->pc != 0x291904u) { return; }
    }
    ctx->pc = 0x291904u;
    // 0x291904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x291904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291908: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x291908u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29190c: 0x0  nop
    ctx->pc = 0x29190cu;
    // NOP
label_291910:
    // 0x291910: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x291914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291918: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x291918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29191c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29191Cu;
    {
        const bool branch_taken_0x29191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29191Cu;
            // 0x291920: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29191c) {
            ctx->pc = 0x291938u;
            goto label_291938;
        }
    }
    ctx->pc = 0x291924u;
    // 0x291924: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x291924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291928: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291928u;
    SET_GPR_U32(ctx, 31, 0x291930u);
    ctx->pc = 0x29192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291928u;
            // 0x29192c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291930u; }
        if (ctx->pc != 0x291930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291930u; }
        if (ctx->pc != 0x291930u) { return; }
    }
    ctx->pc = 0x291930u;
    // 0x291930: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x291930u;
    {
        const bool branch_taken_0x291930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291930u;
            // 0x291934: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291930) {
            ctx->pc = 0x291E58u;
            goto label_291e58;
        }
    }
    ctx->pc = 0x291938u;
label_291938:
    // 0x291938: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x291938u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x29193c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x29193cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x291940: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x291944: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x291944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x291948: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x291948u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x29194c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x291950: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x291950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x291954: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x291954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x291958: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29195c: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x29195cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x291960: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x291960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291964: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x291968: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29196c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x291970: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x291970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x291974: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x291974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x291978: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x291978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x29197c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291980: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x291980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291984: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x291984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x291988: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x291988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x29198c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x29198cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x291990: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x291990u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x291994: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291994u;
    SET_GPR_U32(ctx, 31, 0x29199Cu);
    ctx->pc = 0x291998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291994u;
            // 0x291998: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29199Cu; }
        if (ctx->pc != 0x29199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29199Cu; }
        if (ctx->pc != 0x29199Cu) { return; }
    }
    ctx->pc = 0x29199Cu;
    // 0x29199c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29199cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919a0: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2919a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2919a4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2919a8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2919a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2919ac: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2919ACu;
    {
        const bool branch_taken_0x2919ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919ACu;
            // 0x2919b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919ac) {
            ctx->pc = 0x291B0Cu;
            goto label_291b0c;
        }
    }
    ctx->pc = 0x2919B4u;
    // 0x2919b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2919b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919b8: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x2919BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2919B8u;
            // 0x2919bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919C0u; }
        if (ctx->pc != 0x2919C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919C0u; }
        if (ctx->pc != 0x2919C0u) { return; }
    }
    ctx->pc = 0x2919C0u;
    // 0x2919c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2919C0u;
    {
        const bool branch_taken_0x2919c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2919C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919C0u;
            // 0x2919c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919c0) {
            ctx->pc = 0x291A38u;
            goto label_291a38;
        }
    }
    ctx->pc = 0x2919C8u;
    // 0x2919c8: 0x13c00122  beqz        $fp, . + 4 + (0x122 << 2)
    ctx->pc = 0x2919C8u;
    {
        const bool branch_taken_0x2919c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2919C8u;
            // 0x2919cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919c8) {
            ctx->pc = 0x291E54u;
            goto label_291e54;
        }
    }
    ctx->pc = 0x2919D0u;
    // 0x2919d0: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x2919D0u;
    SET_GPR_U32(ctx, 31, 0x2919D8u);
    ctx->pc = 0x2919D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2919D0u;
            // 0x2919d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919D8u; }
        if (ctx->pc != 0x2919D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919D8u; }
        if (ctx->pc != 0x2919D8u) { return; }
    }
    ctx->pc = 0x2919D8u;
    // 0x2919d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2919d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919dc: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x2919dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x2919e0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2919e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2919e4: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x2919e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x2919e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2919e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2919ec: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x2919ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x2919f0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x2919f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x2919f4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2919F4u;
    SET_GPR_U32(ctx, 31, 0x2919FCu);
    ctx->pc = 0x2919F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2919F4u;
            // 0x2919f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919FCu; }
        if (ctx->pc != 0x2919FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2919FCu; }
        if (ctx->pc != 0x2919FCu) { return; }
    }
    ctx->pc = 0x2919FCu;
    // 0x2919fc: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x2919fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x291a00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291a04: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x291a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x291a08: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291a0c: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x291a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x291a10: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291a14: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x291a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x291a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a1c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291A1Cu;
    SET_GPR_U32(ctx, 31, 0x291A24u);
    ctx->pc = 0x291A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A1Cu;
            // 0x291a20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A24u; }
        if (ctx->pc != 0x291A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A24u; }
        if (ctx->pc != 0x291A24u) { return; }
    }
    ctx->pc = 0x291A24u;
    // 0x291a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a28: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291A28u;
    SET_GPR_U32(ctx, 31, 0x291A30u);
    ctx->pc = 0x291A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A28u;
            // 0x291a2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A30u; }
        if (ctx->pc != 0x291A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A30u; }
        if (ctx->pc != 0x291A30u) { return; }
    }
    ctx->pc = 0x291A30u;
    // 0x291a30: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x291A30u;
    {
        const bool branch_taken_0x291a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A30u;
            // 0x291a34: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a30) {
            ctx->pc = 0x291E58u;
            goto label_291e58;
        }
    }
    ctx->pc = 0x291A38u;
label_291a38:
    // 0x291a38: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291A38u;
    SET_GPR_U32(ctx, 31, 0x291A40u);
    ctx->pc = 0x291A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A38u;
            // 0x291a3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A40u; }
        if (ctx->pc != 0x291A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A40u; }
        if (ctx->pc != 0x291A40u) { return; }
    }
    ctx->pc = 0x291A40u;
    // 0x291a40: 0x3405ff55  ori         $a1, $zero, 0xFF55
    ctx->pc = 0x291a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65365);
    // 0x291a44: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291a48: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x291a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x291a4c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291a50: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x291a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x291a54: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291a58: 0x34a51555  ori         $a1, $a1, 0x1555
    ctx->pc = 0x291a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5461);
    // 0x291a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a60: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291A60u;
    SET_GPR_U32(ctx, 31, 0x291A68u);
    ctx->pc = 0x291A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A60u;
            // 0x291a64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A68u; }
        if (ctx->pc != 0x291A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A68u; }
        if (ctx->pc != 0x291A68u) { return; }
    }
    ctx->pc = 0x291A68u;
    // 0x291a68: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x291a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x291a6c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x291a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x291a70: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291A70u;
    SET_GPR_U32(ctx, 31, 0x291A78u);
    ctx->pc = 0x291A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A70u;
            // 0x291a74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A78u; }
        if (ctx->pc != 0x291A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A78u; }
        if (ctx->pc != 0x291A78u) { return; }
    }
    ctx->pc = 0x291A78u;
    // 0x291a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a7c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291A7Cu;
    SET_GPR_U32(ctx, 31, 0x291A84u);
    ctx->pc = 0x291A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A7Cu;
            // 0x291a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A84u; }
        if (ctx->pc != 0x291A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A84u; }
        if (ctx->pc != 0x291A84u) { return; }
    }
    ctx->pc = 0x291A84u;
    // 0x291a84: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x291A84u;
    {
        const bool branch_taken_0x291a84 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x291A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A84u;
            // 0x291a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a84) {
            ctx->pc = 0x291A98u;
            goto label_291a98;
        }
    }
    ctx->pc = 0x291A8Cu;
    // 0x291a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x291a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a90: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x291A90u;
    {
        const bool branch_taken_0x291a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291A90u;
            // 0x291a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a90) {
            ctx->pc = 0x291E4Cu;
            goto label_291e4c;
        }
    }
    ctx->pc = 0x291A98u;
label_291a98:
    // 0x291a98: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x291A98u;
    SET_GPR_U32(ctx, 31, 0x291AA0u);
    ctx->pc = 0x291A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291A98u;
            // 0x291a9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AA0u; }
        if (ctx->pc != 0x291AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AA0u; }
        if (ctx->pc != 0x291AA0u) { return; }
    }
    ctx->pc = 0x291AA0u;
    // 0x291aa0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x291aa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291aa4: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x291aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x291aa8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291aac: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x291aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x291ab0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291ab4: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x291ab8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291abc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291ABCu;
    SET_GPR_U32(ctx, 31, 0x291AC4u);
    ctx->pc = 0x291AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291ABCu;
            // 0x291ac0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AC4u; }
        if (ctx->pc != 0x291AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AC4u; }
        if (ctx->pc != 0x291AC4u) { return; }
    }
    ctx->pc = 0x291AC4u;
    // 0x291ac4: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x291ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x291ac8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291acc: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x291accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x291ad0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291ad4: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x291ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x291ad8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291adc: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x291adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x291ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ae4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291AE4u;
    SET_GPR_U32(ctx, 31, 0x291AECu);
    ctx->pc = 0x291AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291AE4u;
            // 0x291ae8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AECu; }
        if (ctx->pc != 0x291AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AECu; }
        if (ctx->pc != 0x291AECu) { return; }
    }
    ctx->pc = 0x291AECu;
    // 0x291aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291af0: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291AF0u;
    SET_GPR_U32(ctx, 31, 0x291AF8u);
    ctx->pc = 0x291AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291AF0u;
            // 0x291af4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AF8u; }
        if (ctx->pc != 0x291AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291AF8u; }
        if (ctx->pc != 0x291AF8u) { return; }
    }
    ctx->pc = 0x291AF8u;
    // 0x291af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291afc: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291AFCu;
    SET_GPR_U32(ctx, 31, 0x291B04u);
    ctx->pc = 0x291B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291AFCu;
            // 0x291b00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B04u; }
        if (ctx->pc != 0x291B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B04u; }
        if (ctx->pc != 0x291B04u) { return; }
    }
    ctx->pc = 0x291B04u;
    // 0x291b04: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x291B04u;
    {
        const bool branch_taken_0x291b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B04u;
            // 0x291b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b04) {
            ctx->pc = 0x291E48u;
            goto label_291e48;
        }
    }
    ctx->pc = 0x291B0Cu;
label_291b0c:
    // 0x291b0c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x291b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x291b10: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x291b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x291b14: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291B14u;
    SET_GPR_U32(ctx, 31, 0x291B1Cu);
    ctx->pc = 0x291B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B14u;
            // 0x291b18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B1Cu; }
        if (ctx->pc != 0x291B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B1Cu; }
        if (ctx->pc != 0x291B1Cu) { return; }
    }
    ctx->pc = 0x291B1Cu;
    // 0x291b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b20: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x291B20u;
    SET_GPR_U32(ctx, 31, 0x291B28u);
    ctx->pc = 0x291B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B20u;
            // 0x291b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B28u; }
        if (ctx->pc != 0x291B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B28u; }
        if (ctx->pc != 0x291B28u) { return; }
    }
    ctx->pc = 0x291B28u;
    // 0x291b28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x291b28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b2c: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x291B2Cu;
    SET_GPR_U32(ctx, 31, 0x291B34u);
    ctx->pc = 0x291B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B2Cu;
            // 0x291b30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B34u; }
        if (ctx->pc != 0x291B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B34u; }
        if (ctx->pc != 0x291B34u) { return; }
    }
    ctx->pc = 0x291B34u;
    // 0x291b34: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x291b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x291b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b3c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291B3Cu;
    SET_GPR_U32(ctx, 31, 0x291B44u);
    ctx->pc = 0x291B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B3Cu;
            // 0x291b40: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B44u; }
        if (ctx->pc != 0x291B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B44u; }
        if (ctx->pc != 0x291B44u) { return; }
    }
    ctx->pc = 0x291B44u;
    // 0x291b44: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x291b48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b4c: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x291b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x291b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b54: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x291b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x291b58: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291B58u;
    SET_GPR_U32(ctx, 31, 0x291B60u);
    ctx->pc = 0x291B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B58u;
            // 0x291b5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B60u; }
        if (ctx->pc != 0x291B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B60u; }
        if (ctx->pc != 0x291B60u) { return; }
    }
    ctx->pc = 0x291B60u;
    // 0x291b60: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x291b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x291b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b68: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x291b68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x291b6c: 0x3405ff0e  ori         $a1, $zero, 0xFF0E
    ctx->pc = 0x291b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65294);
    // 0x291b70: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291b74: 0x34a5d04e  ori         $a1, $a1, 0xD04E
    ctx->pc = 0x291b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53326);
    // 0x291b78: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291b7c: 0x34a583c6  ori         $a1, $a1, 0x83C6
    ctx->pc = 0x291b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33734);
    // 0x291b80: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291b84: 0x34a5069f  ori         $a1, $a1, 0x69F
    ctx->pc = 0x291b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1695);
    // 0x291b88: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x291b8c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291B8Cu;
    SET_GPR_U32(ctx, 31, 0x291B94u);
    ctx->pc = 0x291B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B8Cu;
            // 0x291b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B94u; }
        if (ctx->pc != 0x291B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B94u; }
        if (ctx->pc != 0x291B94u) { return; }
    }
    ctx->pc = 0x291B94u;
    // 0x291b94: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x291b94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x291b98: 0x3405ff31  ori         $a1, $zero, 0xFF31
    ctx->pc = 0x291b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65329);
    // 0x291b9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291ba0: 0x34a5c714  ori         $a1, $a1, 0xC714
    ctx->pc = 0x291ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50964);
    // 0x291ba4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291ba8: 0x34a5ec73  ori         $a1, $a1, 0xEC73
    ctx->pc = 0x291ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60531);
    // 0x291bac: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291bb0: 0x34a518af  ori         $a1, $a1, 0x18AF
    ctx->pc = 0x291bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6319);
    // 0x291bb4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291BB4u;
    SET_GPR_U32(ctx, 31, 0x291BBCu);
    ctx->pc = 0x291BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291BB4u;
            // 0x291bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BBCu; }
        if (ctx->pc != 0x291BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BBCu; }
        if (ctx->pc != 0x291BBCu) { return; }
    }
    ctx->pc = 0x291BBCu;
    // 0x291bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bc0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291BC0u;
    SET_GPR_U32(ctx, 31, 0x291BC8u);
    ctx->pc = 0x291BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291BC0u;
            // 0x291bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BC8u; }
        if (ctx->pc != 0x291BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BC8u; }
        if (ctx->pc != 0x291BC8u) { return; }
    }
    ctx->pc = 0x291BC8u;
    // 0x291bc8: 0x3405ff66  ori         $a1, $zero, 0xFF66
    ctx->pc = 0x291bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65382);
    // 0x291bcc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291bd0: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x291bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x291bd4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291bd8: 0x34a5ccbf  ori         $a1, $a1, 0xCCBF
    ctx->pc = 0x291bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52415);
    // 0x291bdc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291be0: 0x34a51a04  ori         $a1, $a1, 0x1A04
    ctx->pc = 0x291be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6660);
    // 0x291be4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291BE4u;
    SET_GPR_U32(ctx, 31, 0x291BECu);
    ctx->pc = 0x291BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291BE4u;
            // 0x291be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BECu; }
        if (ctx->pc != 0x291BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BECu; }
        if (ctx->pc != 0x291BECu) { return; }
    }
    ctx->pc = 0x291BECu;
    // 0x291bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bf0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291BF0u;
    SET_GPR_U32(ctx, 31, 0x291BF8u);
    ctx->pc = 0x291BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291BF0u;
            // 0x291bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BF8u; }
        if (ctx->pc != 0x291BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BF8u; }
        if (ctx->pc != 0x291BF8u) { return; }
    }
    ctx->pc = 0x291BF8u;
    // 0x291bf8: 0x3405ff0b  ori         $a1, $zero, 0xFF0B
    ctx->pc = 0x291bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65291);
    // 0x291bfc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291c00: 0x34a5c44b  ori         $a1, $a1, 0xC44B
    ctx->pc = 0x291c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50251);
    // 0x291c04: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291c08: 0x34a5f9f2  ori         $a1, $a1, 0xF9F2
    ctx->pc = 0x291c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63986);
    // 0x291c0c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291c10: 0x34a51244  ori         $a1, $a1, 0x1244
    ctx->pc = 0x291c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4676);
    // 0x291c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c18: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291C18u;
    SET_GPR_U32(ctx, 31, 0x291C20u);
    ctx->pc = 0x291C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C18u;
            // 0x291c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C20u; }
        if (ctx->pc != 0x291C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C20u; }
        if (ctx->pc != 0x291C20u) { return; }
    }
    ctx->pc = 0x291C20u;
    // 0x291c20: 0x3405ff1d  ori         $a1, $zero, 0xFF1D
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65309);
    // 0x291c24: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x291c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x291c28: 0x34a5cc92  ori         $a1, $a1, 0xCC92
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52370);
    // 0x291c2c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291c30: 0x34a5d960  ori         $a1, $a1, 0xD960
    ctx->pc = 0x291c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55648);
    // 0x291c34: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x291c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x291c38: 0x34a503de  ori         $a1, $a1, 0x3DE
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)990);
    // 0x291c3c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291C3Cu;
    SET_GPR_U32(ctx, 31, 0x291C44u);
    ctx->pc = 0x291C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C3Cu;
            // 0x291c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C44u; }
        if (ctx->pc != 0x291C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C44u; }
        if (ctx->pc != 0x291C44u) { return; }
    }
    ctx->pc = 0x291C44u;
    // 0x291c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c48: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291C48u;
    SET_GPR_U32(ctx, 31, 0x291C50u);
    ctx->pc = 0x291C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C48u;
            // 0x291c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C50u; }
        if (ctx->pc != 0x291C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C50u; }
        if (ctx->pc != 0x291C50u) { return; }
    }
    ctx->pc = 0x291C50u;
    // 0x291c50: 0x3405ff49  ori         $a1, $zero, 0xFF49
    ctx->pc = 0x291c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65353);
    // 0x291c54: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x291c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x291c58: 0x34a59249  ori         $a1, $a1, 0x9249
    ctx->pc = 0x291c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37449);
    // 0x291c5c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291c60: 0x34a58452  ori         $a1, $a1, 0x8452
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33874);
    // 0x291c64: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x291c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x291c68: 0x34a50359  ori         $a1, $a1, 0x359
    ctx->pc = 0x291c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)857);
    // 0x291c6c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291C6Cu;
    SET_GPR_U32(ctx, 31, 0x291C74u);
    ctx->pc = 0x291C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C6Cu;
            // 0x291c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C74u; }
        if (ctx->pc != 0x291C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C74u; }
        if (ctx->pc != 0x291C74u) { return; }
    }
    ctx->pc = 0x291C74u;
    // 0x291c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c78: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291C78u;
    SET_GPR_U32(ctx, 31, 0x291C80u);
    ctx->pc = 0x291C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C78u;
            // 0x291c7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C80u; }
        if (ctx->pc != 0x291C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C80u; }
        if (ctx->pc != 0x291C80u) { return; }
    }
    ctx->pc = 0x291C80u;
    // 0x291c80: 0x3405ff95  ori         $a1, $zero, 0xFF95
    ctx->pc = 0x291c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65429);
    // 0x291c84: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291c88: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x291c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x291c8c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291c90: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x291c94: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291c98: 0x34a51593  ori         $a1, $a1, 0x1593
    ctx->pc = 0x291c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5523);
    // 0x291c9c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291C9Cu;
    SET_GPR_U32(ctx, 31, 0x291CA4u);
    ctx->pc = 0x291CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C9Cu;
            // 0x291ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CA4u; }
        if (ctx->pc != 0x291CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CA4u; }
        if (ctx->pc != 0x291CA4u) { return; }
    }
    ctx->pc = 0x291CA4u;
    // 0x291ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ca8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291CA8u;
    SET_GPR_U32(ctx, 31, 0x291CB0u);
    ctx->pc = 0x291CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CA8u;
            // 0x291cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CB0u; }
        if (ctx->pc != 0x291CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CB0u; }
        if (ctx->pc != 0x291CB0u) { return; }
    }
    ctx->pc = 0x291CB0u;
    // 0x291cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cb4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291CB4u;
    SET_GPR_U32(ctx, 31, 0x291CBCu);
    ctx->pc = 0x291CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CB4u;
            // 0x291cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CBCu; }
        if (ctx->pc != 0x291CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CBCu; }
        if (ctx->pc != 0x291CBCu) { return; }
    }
    ctx->pc = 0x291CBCu;
    // 0x291cbc: 0x1a800039  blez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x291CBCu;
    {
        const bool branch_taken_0x291cbc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x291CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CBCu;
            // 0x291cc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cbc) {
            ctx->pc = 0x291DA4u;
            goto label_291da4;
        }
    }
    ctx->pc = 0x291CC4u;
    // 0x291cc4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x291cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x291cc8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x291cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x291ccc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291CCCu;
    SET_GPR_U32(ctx, 31, 0x291CD4u);
    ctx->pc = 0x291CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CCCu;
            // 0x291cd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CD4u; }
        if (ctx->pc != 0x291CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CD4u; }
        if (ctx->pc != 0x291CD4u) { return; }
    }
    ctx->pc = 0x291CD4u;
    // 0x291cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cd8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291CD8u;
    SET_GPR_U32(ctx, 31, 0x291CE0u);
    ctx->pc = 0x291CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CD8u;
            // 0x291cdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CE0u; }
        if (ctx->pc != 0x291CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CE0u; }
        if (ctx->pc != 0x291CE0u) { return; }
    }
    ctx->pc = 0x291CE0u;
    // 0x291ce0: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x291CE0u;
    {
        const bool branch_taken_0x291ce0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x291CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CE0u;
            // 0x291ce4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ce0) {
            ctx->pc = 0x291D14u;
            goto label_291d14;
        }
    }
    ctx->pc = 0x291CE8u;
    // 0x291ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cec: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291CECu;
    SET_GPR_U32(ctx, 31, 0x291CF4u);
    ctx->pc = 0x291CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CECu;
            // 0x291cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CF4u; }
        if (ctx->pc != 0x291CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CF4u; }
        if (ctx->pc != 0x291CF4u) { return; }
    }
    ctx->pc = 0x291CF4u;
    // 0x291cf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x291cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cf8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291CF8u;
    SET_GPR_U32(ctx, 31, 0x291D00u);
    ctx->pc = 0x291CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CF8u;
            // 0x291cfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D00u; }
        if (ctx->pc != 0x291D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D00u; }
        if (ctx->pc != 0x291D00u) { return; }
    }
    ctx->pc = 0x291D00u;
    // 0x291d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d04: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291D04u;
    SET_GPR_U32(ctx, 31, 0x291D0Cu);
    ctx->pc = 0x291D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D04u;
            // 0x291d08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D0Cu; }
        if (ctx->pc != 0x291D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D0Cu; }
        if (ctx->pc != 0x291D0Cu) { return; }
    }
    ctx->pc = 0x291D0Cu;
    // 0x291d0c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x291D0Cu;
    {
        const bool branch_taken_0x291d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291D0Cu;
            // 0x291d10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d0c) {
            ctx->pc = 0x291E48u;
            goto label_291e48;
        }
    }
    ctx->pc = 0x291D14u;
label_291d14:
    // 0x291d14: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x291d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x291d18: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291d1c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x291d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x291d20: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291d24: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x291d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x291d28: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291d2c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291D2Cu;
    SET_GPR_U32(ctx, 31, 0x291D34u);
    ctx->pc = 0x291D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D2Cu;
            // 0x291d30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D34u; }
        if (ctx->pc != 0x291D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D34u; }
        if (ctx->pc != 0x291D34u) { return; }
    }
    ctx->pc = 0x291D34u;
    // 0x291d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d3c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291D3Cu;
    SET_GPR_U32(ctx, 31, 0x291D44u);
    ctx->pc = 0x291D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D3Cu;
            // 0x291d40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D44u; }
        if (ctx->pc != 0x291D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D44u; }
        if (ctx->pc != 0x291D44u) { return; }
    }
    ctx->pc = 0x291D44u;
    // 0x291d44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x291d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d48: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291D48u;
    SET_GPR_U32(ctx, 31, 0x291D50u);
    ctx->pc = 0x291D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D48u;
            // 0x291d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D50u; }
        if (ctx->pc != 0x291D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D50u; }
        if (ctx->pc != 0x291D50u) { return; }
    }
    ctx->pc = 0x291D50u;
    // 0x291d50: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x291d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x291d54: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291d58: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x291d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x291d5c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291d60: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x291d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x291d64: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291d68: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x291d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x291d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d70: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291D70u;
    SET_GPR_U32(ctx, 31, 0x291D78u);
    ctx->pc = 0x291D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D70u;
            // 0x291d74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D78u; }
        if (ctx->pc != 0x291D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D78u; }
        if (ctx->pc != 0x291D78u) { return; }
    }
    ctx->pc = 0x291D78u;
    // 0x291d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d7c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291D7Cu;
    SET_GPR_U32(ctx, 31, 0x291D84u);
    ctx->pc = 0x291D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D7Cu;
            // 0x291d80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D84u; }
        if (ctx->pc != 0x291D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D84u; }
        if (ctx->pc != 0x291D84u) { return; }
    }
    ctx->pc = 0x291D84u;
    // 0x291d84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d88: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291D88u;
    SET_GPR_U32(ctx, 31, 0x291D90u);
    ctx->pc = 0x291D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D88u;
            // 0x291d8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D90u; }
        if (ctx->pc != 0x291D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D90u; }
        if (ctx->pc != 0x291D90u) { return; }
    }
    ctx->pc = 0x291D90u;
    // 0x291d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d94: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291D94u;
    SET_GPR_U32(ctx, 31, 0x291D9Cu);
    ctx->pc = 0x291D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D94u;
            // 0x291d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D9Cu; }
        if (ctx->pc != 0x291D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D9Cu; }
        if (ctx->pc != 0x291D9Cu) { return; }
    }
    ctx->pc = 0x291D9Cu;
    // 0x291d9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x291D9Cu;
    {
        const bool branch_taken_0x291d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291D9Cu;
            // 0x291da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d9c) {
            ctx->pc = 0x291E48u;
            goto label_291e48;
        }
    }
    ctx->pc = 0x291DA4u;
label_291da4:
    // 0x291da4: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x291DA4u;
    {
        const bool branch_taken_0x291da4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291DA4u;
            // 0x291da8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291da4) {
            ctx->pc = 0x291E30u;
            goto label_291e30;
        }
    }
    ctx->pc = 0x291DACu;
    // 0x291dac: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x291dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x291db0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291db4: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x291db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x291db8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291dbc: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x291dc0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291dc4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291DC4u;
    SET_GPR_U32(ctx, 31, 0x291DCCu);
    ctx->pc = 0x291DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DC4u;
            // 0x291dc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DCCu; }
        if (ctx->pc != 0x291DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DCCu; }
        if (ctx->pc != 0x291DCCu) { return; }
    }
    ctx->pc = 0x291DCCu;
    // 0x291dcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dd4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291DD4u;
    SET_GPR_U32(ctx, 31, 0x291DDCu);
    ctx->pc = 0x291DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DD4u;
            // 0x291dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DDCu; }
        if (ctx->pc != 0x291DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DDCu; }
        if (ctx->pc != 0x291DDCu) { return; }
    }
    ctx->pc = 0x291DDCu;
    // 0x291ddc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x291ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291de0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291DE0u;
    SET_GPR_U32(ctx, 31, 0x291DE8u);
    ctx->pc = 0x291DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DE0u;
            // 0x291de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DE8u; }
        if (ctx->pc != 0x291DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DE8u; }
        if (ctx->pc != 0x291DE8u) { return; }
    }
    ctx->pc = 0x291DE8u;
    // 0x291de8: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x291de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x291dec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291df0: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x291df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x291df4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291df8: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x291dfc: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x291dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x291e00: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x291e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x291e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e08: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291E08u;
    SET_GPR_U32(ctx, 31, 0x291E10u);
    ctx->pc = 0x291E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E08u;
            // 0x291e0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E10u; }
        if (ctx->pc != 0x291E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E10u; }
        if (ctx->pc != 0x291E10u) { return; }
    }
    ctx->pc = 0x291E10u;
    // 0x291e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e14: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291E14u;
    SET_GPR_U32(ctx, 31, 0x291E1Cu);
    ctx->pc = 0x291E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E14u;
            // 0x291e18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E1Cu; }
        if (ctx->pc != 0x291E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E1Cu; }
        if (ctx->pc != 0x291E1Cu) { return; }
    }
    ctx->pc = 0x291E1Cu;
    // 0x291e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e20: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291E20u;
    SET_GPR_U32(ctx, 31, 0x291E28u);
    ctx->pc = 0x291E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E20u;
            // 0x291e24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E28u; }
        if (ctx->pc != 0x291E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E28u; }
        if (ctx->pc != 0x291E28u) { return; }
    }
    ctx->pc = 0x291E28u;
    // 0x291e28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x291E28u;
    {
        const bool branch_taken_0x291e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E28u;
            // 0x291e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e28) {
            ctx->pc = 0x291E48u;
            goto label_291e48;
        }
    }
    ctx->pc = 0x291E30u;
label_291e30:
    // 0x291e30: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291E30u;
    SET_GPR_U32(ctx, 31, 0x291E38u);
    ctx->pc = 0x291E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E30u;
            // 0x291e34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E38u; }
        if (ctx->pc != 0x291E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E38u; }
        if (ctx->pc != 0x291E38u) { return; }
    }
    ctx->pc = 0x291E38u;
    // 0x291e38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e3c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291E3Cu;
    SET_GPR_U32(ctx, 31, 0x291E44u);
    ctx->pc = 0x291E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E3Cu;
            // 0x291e40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E44u; }
        if (ctx->pc != 0x291E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E44u; }
        if (ctx->pc != 0x291E44u) { return; }
    }
    ctx->pc = 0x291E44u;
    // 0x291e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x291e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_291e48:
    // 0x291e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291e4c:
    // 0x291e4c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291E4Cu;
    SET_GPR_U32(ctx, 31, 0x291E54u);
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E54u; }
        if (ctx->pc != 0x291E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E54u; }
        if (ctx->pc != 0x291E54u) { return; }
    }
    ctx->pc = 0x291E54u;
label_291e54:
    // 0x291e54: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x291e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_291e58:
    // 0x291e58: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x291e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291e5c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x291e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x291e60: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x291e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291e64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x291e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291e68: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x291e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291e6c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x291e6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291e70: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x291e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291e74: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x291e74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x291E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E7Cu;
            // 0x291e80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2918D0u: goto label_2918d0;
            case 0x2918F4u: goto label_2918f4;
            case 0x291910u: goto label_291910;
            case 0x291938u: goto label_291938;
            case 0x291A38u: goto label_291a38;
            case 0x291A98u: goto label_291a98;
            case 0x291B0Cu: goto label_291b0c;
            case 0x291D14u: goto label_291d14;
            case 0x291DA4u: goto label_291da4;
            case 0x291E30u: goto label_291e30;
            case 0x291E48u: goto label_291e48;
            case 0x291E4Cu: goto label_291e4c;
            case 0x291E54u: goto label_291e54;
            case 0x291E58u: goto label_291e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291E84u;
    // 0x291e84: 0x0  nop
    ctx->pc = 0x291e84u;
    // NOP
}
