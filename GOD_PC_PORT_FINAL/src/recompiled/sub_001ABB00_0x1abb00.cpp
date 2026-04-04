#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABB00
// Address: 0x1abb00 - 0x1abc50
void sub_001ABB00_0x1abb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABB00_0x1abb00");
#endif

    ctx->pc = 0x1abb00u;

    // 0x1abb00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1abb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1abb04: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1abb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1abb08: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1abb08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1abb0c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1abb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1abb10: 0x8e42caa4  lw          $v0, -0x355C($s2)
    ctx->pc = 0x1abb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953636)));
    // 0x1abb14: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1abb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1abb18: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1ABB18u;
    {
        const bool branch_taken_0x1abb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB18u;
            // 0x1abb1c: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb18) {
            ctx->pc = 0x1ABC38u;
            goto label_1abc38;
        }
    }
    ctx->pc = 0x1ABB20u;
    // 0x1abb20: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1abb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1abb24: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1abb28: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x1abb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
    // 0x1abb2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1abb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1abb30: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1abb30u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1abb34: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1abb34u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1abb38: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1abb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1abb3c: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1abb3cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1abb40: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1abb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1abb44: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1abb44u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1abb48: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1abb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1abb4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1abb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1abb50: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1abb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1abb54: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1abb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1abb58: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1abb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1abb5c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1abb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1abb60: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1abb60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1abb64: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1abb68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1abb6c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1abb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1abb70: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1abb74: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1abb78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1abb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1abb7c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1abb7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1abb80: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1abb80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1abb84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1abb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1abb88: 0x24a54378  addiu       $a1, $a1, 0x4378
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17272));
    // 0x1abb8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1abb90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1abb94: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1abb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1abb98: 0xc061e64  jal         func_187990
    ctx->pc = 0x1ABB98u;
    SET_GPR_U32(ctx, 31, 0x1ABBA0u);
    ctx->pc = 0x1ABB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB98u;
            // 0x1abb9c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBA0u; }
        if (ctx->pc != 0x1ABBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBA0u; }
        if (ctx->pc != 0x1ABBA0u) { return; }
    }
    ctx->pc = 0x1ABBA0u;
    // 0x1abba0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1abba0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1abba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1abba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abba8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1abba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1abbac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1abbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abbb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1abbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1abbb8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1abbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1abbbc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1abbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1abbc0: 0x40f809  jalr        $v0
    ctx->pc = 0x1ABBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABBC8u);
        ctx->pc = 0x1ABBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBC0u;
            // 0x1abbc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABBC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABC38u: goto label_1abc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBC8u; }
            if (ctx->pc != 0x1ABBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABBC8u;
    // 0x1abbc8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1abbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1abbcc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1abbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1abbd0: 0x24844388  addiu       $a0, $a0, 0x4388
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17288));
    // 0x1abbd4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1ABBD4u;
    SET_GPR_U32(ctx, 31, 0x1ABBDCu);
    ctx->pc = 0x1ABBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBD4u;
            // 0x1abbd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBDCu; }
        if (ctx->pc != 0x1ABBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBDCu; }
        if (ctx->pc != 0x1ABBDCu) { return; }
    }
    ctx->pc = 0x1ABBDCu;
    // 0x1abbdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1abbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbe0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1abbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abbe4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1abbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abbe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1abbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1abbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abbf0: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x1abbf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1abbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf8: 0xc06b498  jal         func_1AD260
    ctx->pc = 0x1ABBF8u;
    SET_GPR_U32(ctx, 31, 0x1ABC00u);
    ctx->pc = 0x1ABBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBF8u;
            // 0x1abbfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD260u;
    if (runtime->hasFunction(0x1AD260u)) {
        auto targetFn = runtime->lookupFunction(0x1AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC00u; }
        if (ctx->pc != 0x1ABC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD260_0x1ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC00u; }
        if (ctx->pc != 0x1ABC00u) { return; }
    }
    ctx->pc = 0x1ABC00u;
    // 0x1abc00: 0xae42caa4  sw          $v0, -0x355C($s2)
    ctx->pc = 0x1abc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953636), GPR_U32(ctx, 2));
    // 0x1abc04: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ABC04u;
    SET_GPR_U32(ctx, 31, 0x1ABC0Cu);
    ctx->pc = 0x1ABC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC04u;
            // 0x1abc08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC0Cu; }
        if (ctx->pc != 0x1ABC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC0Cu; }
        if (ctx->pc != 0x1ABC0Cu) { return; }
    }
    ctx->pc = 0x1ABC0Cu;
    // 0x1abc0c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1abc10: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1abc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1abc14: 0xac82caa8  sw          $v0, -0x3558($a0)
    ctx->pc = 0x1abc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953640), GPR_U32(ctx, 2));
    // 0x1abc18: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1abc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1abc1c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1abc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1abc20: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1abc24: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1abc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1abc28: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1abc28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1abc2c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1abc30: 0x40f809  jalr        $v0
    ctx->pc = 0x1ABC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABC38u);
        ctx->pc = 0x1ABC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC30u;
            // 0x1abc34: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ABC38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABC38u: goto label_1abc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC38u; }
            if (ctx->pc != 0x1ABC38u) { return; }
        }
        }
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1abc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1abc3c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1abc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1abc40: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1abc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1abc44: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1abc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1abc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC48u;
            // 0x1abc4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABC38u: goto label_1abc38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABC50u;
}
