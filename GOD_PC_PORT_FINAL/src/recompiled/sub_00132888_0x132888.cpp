#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132888
// Address: 0x132888 - 0x132dc0
void sub_00132888_0x132888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132888_0x132888");
#endif

    ctx->pc = 0x132888u;

    // 0x132888: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13288c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x132890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x132894: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x132894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x132898: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x132898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13289c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13289cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1328a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1328a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1328a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1328a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1328ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1328b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1328b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1328b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1328b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1328b8: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x1328b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1328bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1328bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1328c0: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1328c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1328c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1328c8: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x1328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1328cc: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1328ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1328d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1328d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1328d4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1328d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1328d8: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1328d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1328dc: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x1328DCu;
    SET_GPR_U32(ctx, 31, 0x1328E4u);
    ctx->pc = 0x1328E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1328DCu;
            // 0x1328e0: 0xa6450000  sh          $a1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E4u; }
        if (ctx->pc != 0x1328E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E4u; }
        if (ctx->pc != 0x1328E4u) { return; }
    }
    ctx->pc = 0x1328E4u;
    // 0x1328e4: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x1328e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1328e8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1328e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1328ec: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x1328ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1328f0: 0xae53001c  sw          $s3, 0x1C($s2)
    ctx->pc = 0x1328f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 19));
    // 0x1328f4: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x1328f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1328f8: 0xa640002a  sh          $zero, 0x2A($s2)
    ctx->pc = 0x1328f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1328fc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1328fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x132900: 0x96630022  lhu         $v1, 0x22($s3)
    ctx->pc = 0x132900u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x132904: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x132904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x132908: 0xa6430044  sh          $v1, 0x44($s2)
    ctx->pc = 0x132908u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x13290c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x132910: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x132910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x132914: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x132914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x132918: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x132918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x13291c: 0xa6420046  sh          $v0, 0x46($s2)
    ctx->pc = 0x13291cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x132920: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x132920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x132924: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x132924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x132928: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x132928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x13292c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13292Cu;
    {
        const bool branch_taken_0x13292c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13292Cu;
            // 0x132930: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13292c) {
            ctx->pc = 0x132958u;
            goto label_132958;
        }
    }
    ctx->pc = 0x132934u;
    // 0x132934: 0x8e71001c  lw          $s1, 0x1C($s3)
    ctx->pc = 0x132934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x132938: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x132938u;
    SET_GPR_U32(ctx, 31, 0x132940u);
    ctx->pc = 0x13293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132938u;
            // 0x13293c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132940u; }
        if (ctx->pc != 0x132940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132940u; }
        if (ctx->pc != 0x132940u) { return; }
    }
    ctx->pc = 0x132940u;
    // 0x132940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132948: 0xc05bc58  jal         func_16F160
    ctx->pc = 0x132948u;
    SET_GPR_U32(ctx, 31, 0x132950u);
    ctx->pc = 0x13294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132948u;
            // 0x13294c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F160u;
    if (runtime->hasFunction(0x16F160u)) {
        auto targetFn = runtime->lookupFunction(0x16F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132950u; }
        if (ctx->pc != 0x132950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f160_0x16f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132950u; }
        if (ctx->pc != 0x132950u) { return; }
    }
    ctx->pc = 0x132950u;
    // 0x132950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132950u;
    {
        const bool branch_taken_0x132950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132950u;
            // 0x132954: 0xae500040  sw          $s0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132950) {
            ctx->pc = 0x132964u;
            goto label_132964;
        }
    }
    ctx->pc = 0x132958u;
label_132958:
    // 0x132958: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x132958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13295c: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x13295cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x132960: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x132960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_132964:
    // 0x132964: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x132964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x132968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13296c: 0x0  nop
    ctx->pc = 0x13296cu;
    // NOP
label_132970:
    // 0x132970: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x132970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132974: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x132974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x132978: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13297c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x132980: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x132984: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x132984u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x132988: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x132988u;
    {
        const bool branch_taken_0x132988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132988u;
            // 0x13298c: 0xac440060  sw          $a0, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132988) {
            ctx->pc = 0x132970u;
            runtime->cooperativeGuestYield();
            goto label_132970;
        }
    }
    ctx->pc = 0x132990u;
    // 0x132990: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x132994: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x132994u;
    {
        const bool branch_taken_0x132994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132994) {
            ctx->pc = 0x132998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132994u;
            // 0x132998: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1329B8u;
            goto label_1329b8;
        }
    }
    ctx->pc = 0x13299Cu;
    // 0x13299c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1329a0: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x1329a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1329a4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1329a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1329a8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1329ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1329ACu;
    {
        const bool branch_taken_0x1329ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1329ACu;
            // 0x1329b0: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329ac) {
            ctx->pc = 0x1329C0u;
            goto label_1329c0;
        }
    }
    ctx->pc = 0x1329B4u;
    // 0x1329b4: 0x0  nop
    ctx->pc = 0x1329b4u;
    // NOP
label_1329b8:
    // 0x1329b8: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1329b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1329bc: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1329bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_1329c0:
    // 0x1329c0: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x1329c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1329c4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1329c8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1329c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1329cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1329ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1329d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1329d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1329d4: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1329D4u;
            // 0x1329d8: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x132D18u;
            goto label_132d18;
        }
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1329e0: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1329e4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1329e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1329e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1329ec: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1329f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1329f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1329f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1329f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1329f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1329f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1329fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132a00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x132a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132a08: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x132a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x132a0c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x132a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x132a10: 0x40f809  jalr        $v0
    ctx->pc = 0x132A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132A18u);
        ctx->pc = 0x132A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A10u;
            // 0x132a14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132A18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132958u: goto label_132958;
            case 0x132964u: goto label_132964;
            case 0x132970u: goto label_132970;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329C0u: goto label_1329c0;
            case 0x132A28u: goto label_132a28;
            case 0x132A68u: goto label_132a68;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AF4u: goto label_132af4;
            case 0x132B40u: goto label_132b40;
            case 0x132B80u: goto label_132b80;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BE0u: goto label_132be0;
            case 0x132BF8u: goto label_132bf8;
            case 0x132C04u: goto label_132c04;
            case 0x132C14u: goto label_132c14;
            case 0x132C18u: goto label_132c18;
            case 0x132C40u: goto label_132c40;
            case 0x132C80u: goto label_132c80;
            case 0x132CC8u: goto label_132cc8;
            case 0x132CD8u: goto label_132cd8;
            case 0x132CE0u: goto label_132ce0;
            case 0x132D08u: goto label_132d08;
            case 0x132D18u: goto label_132d18;
            case 0x132D70u: goto label_132d70;
            case 0x132D88u: goto label_132d88;
            case 0x132D98u: goto label_132d98;
            case 0x132D9Cu: goto label_132d9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132A18u; }
            if (ctx->pc != 0x132A18u) { return; }
        }
        }
    }
    ctx->pc = 0x132A18u;
    // 0x132a18: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x132a1c: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x132a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x132a20: 0x122300bd  beq         $s1, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x132A20u;
    {
        const bool branch_taken_0x132a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x132A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A20u;
            // 0x132a24: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a20) {
            ctx->pc = 0x132D18u;
            goto label_132d18;
        }
    }
    ctx->pc = 0x132A28u;
label_132a28:
    // 0x132a28: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x132a2c: 0x14e00024  bnez        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A2Cu;
            // 0x132a30: 0x24f0ffff  addiu       $s0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132AC0u;
            goto label_132ac0;
        }
    }
    ctx->pc = 0x132A34u;
    // 0x132a34: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x132a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x132a38: 0x26460048  addiu       $a2, $s2, 0x48
    ctx->pc = 0x132a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x132a3c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x132a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a44: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x132a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x132a48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x132a48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a4c: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x132a4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x132a50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132a50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a54: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x132a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x132a58: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x132a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132a5c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x132A5Cu;
    {
        const bool branch_taken_0x132a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A5Cu;
            // 0x132a60: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a5c) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132A64u;
    // 0x132a64: 0x0  nop
    ctx->pc = 0x132a64u;
    // NOP
label_132a68:
    // 0x132a68: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x132a6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x132a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132a70: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x132a74: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132a78: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x132a7c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x132a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132a80: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x132A80u;
    {
        const bool branch_taken_0x132a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a80) {
            ctx->pc = 0x132A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132A80u;
            // 0x132a84: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132AA8u;
            goto label_132aa8;
        }
    }
    ctx->pc = 0x132A88u;
    // 0x132a88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x132a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x132a8c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x132a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x132a90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132a98: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x132A98u;
    {
        const bool branch_taken_0x132a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132A98u;
            // 0x132a9c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a98) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132AA0u;
    // 0x132aa0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x132AA0u;
    {
        const bool branch_taken_0x132aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AA0u;
            // 0x132aa4: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aa0) {
            ctx->pc = 0x132BF8u;
            goto label_132bf8;
        }
    }
    ctx->pc = 0x132AA8u;
label_132aa8:
    // 0x132aa8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x132aac: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x132aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132ab0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x132AB0u;
    {
        const bool branch_taken_0x132ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AB0u;
            // 0x132ab4: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ab0) {
            ctx->pc = 0x132A68u;
            runtime->cooperativeGuestYield();
            goto label_132a68;
        }
    }
    ctx->pc = 0x132AB8u;
    // 0x132ab8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x132AB8u;
    {
        const bool branch_taken_0x132ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AB8u;
            // 0x132abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ab8) {
            ctx->pc = 0x132C18u;
            goto label_132c18;
        }
    }
    ctx->pc = 0x132AC0u;
label_132ac0:
    // 0x132ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ac4: 0xc08e48a  jal         func_239228
    ctx->pc = 0x132AC4u;
    SET_GPR_U32(ctx, 31, 0x132ACCu);
    ctx->pc = 0x132AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132AC4u;
            // 0x132ac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132ACCu; }
        if (ctx->pc != 0x132ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132ACCu; }
        if (ctx->pc != 0x132ACCu) { return; }
    }
    ctx->pc = 0x132ACCu;
    // 0x132acc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x132accu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132ad0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x132ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132ad4: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x132AD4u;
    {
        const bool branch_taken_0x132ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AD4u;
            // 0x132ad8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ad4) {
            ctx->pc = 0x132C40u;
            goto label_132c40;
        }
    }
    ctx->pc = 0x132ADCu;
    // 0x132adc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132ADCu;
    {
        const bool branch_taken_0x132adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132ADCu;
            // 0x132ae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132adc) {
            ctx->pc = 0x132AF4u;
            goto label_132af4;
        }
    }
    ctx->pc = 0x132AE4u;
    // 0x132ae4: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x132AE4u;
    {
        const bool branch_taken_0x132ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132ae4) {
            ctx->pc = 0x132AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132AE4u;
            // 0x132ae8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132B80u;
            goto label_132b80;
        }
    }
    ctx->pc = 0x132AECu;
    // 0x132aec: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x132AECu;
    {
        const bool branch_taken_0x132aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132AECu;
            // 0x132af0: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aec) {
            ctx->pc = 0x132D08u;
            goto label_132d08;
        }
    }
    ctx->pc = 0x132AF4u;
label_132af4:
    // 0x132af4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x132af8: 0x54620083  bnel        $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x132AF8u;
    {
        const bool branch_taken_0x132af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132af8) {
            ctx->pc = 0x132AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132AF8u;
            // 0x132afc: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132D08u;
            goto label_132d08;
        }
    }
    ctx->pc = 0x132B00u;
    // 0x132b00: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x132b04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132b08: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x132b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x132b0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132b14: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x132b18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x132b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132b1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b20: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x132b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x132b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132b2c: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x132b2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x132b30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x132b34: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x132B34u;
    {
        const bool branch_taken_0x132b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132B34u;
            // 0x132b38: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b34) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132B3Cu;
    // 0x132b3c: 0x0  nop
    ctx->pc = 0x132b3cu;
    // NOP
label_132b40:
    // 0x132b40: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x132b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132b44: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x132b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132b48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x132b4c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x132b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132b50: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x132b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x132b54: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x132b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132b58: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x132B58u;
    {
        const bool branch_taken_0x132b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132b58) {
            ctx->pc = 0x132B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132B58u;
            // 0x132b5c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132BE0u;
            goto label_132be0;
        }
    }
    ctx->pc = 0x132B60u;
    // 0x132b60: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x132b60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x132b64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x132b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x132b68: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x132b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132b6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x132B6Cu;
    {
        const bool branch_taken_0x132b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132B6Cu;
            // 0x132b70: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b6c) {
            ctx->pc = 0x132B40u;
            runtime->cooperativeGuestYield();
            goto label_132b40;
        }
    }
    ctx->pc = 0x132B74u;
    // 0x132b74: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x132B74u;
    {
        const bool branch_taken_0x132b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132B74u;
            // 0x132b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b74) {
            ctx->pc = 0x132C18u;
            goto label_132c18;
        }
    }
    ctx->pc = 0x132B7Cu;
    // 0x132b7c: 0x0  nop
    ctx->pc = 0x132b7cu;
    // NOP
label_132b80:
    // 0x132b80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132b84: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x132b84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x132b88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132b90: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x132b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x132b94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x132b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132b98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132b98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b9c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x132b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x132ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x132ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132ba8: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x132ba8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x132bac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x132bb0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x132BB0u;
    {
        const bool branch_taken_0x132bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132BB0u;
            // 0x132bb4: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bb0) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132BB8u;
label_132bb8:
    // 0x132bb8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132bbc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x132bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132bc0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x132bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x132bc4: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x132bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132bc8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x132bcc: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x132bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132bd0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x132BD0u;
    {
        const bool branch_taken_0x132bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bd0) {
            ctx->pc = 0x132BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132BD0u;
            // 0x132bd4: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132C04u;
            goto label_132c04;
        }
    }
    ctx->pc = 0x132BD8u;
    // 0x132bd8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x132bdc: 0x0  nop
    ctx->pc = 0x132bdcu;
    // NOP
label_132be0:
    // 0x132be0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x132be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x132be4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132bec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132BECu;
    {
        const bool branch_taken_0x132bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132BECu;
            // 0x132bf0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bec) {
            ctx->pc = 0x132C14u;
            goto label_132c14;
        }
    }
    ctx->pc = 0x132BF4u;
    // 0x132bf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x132bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_132bf8:
    // 0x132bf8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x132bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x132bfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132BFCu;
    {
        const bool branch_taken_0x132bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132BFCu;
            // 0x132c00: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bfc) {
            ctx->pc = 0x132C18u;
            goto label_132c18;
        }
    }
    ctx->pc = 0x132C04u;
label_132c04:
    // 0x132c04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x132c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x132c08: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x132c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132c0c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x132C0Cu;
    {
        const bool branch_taken_0x132c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C0Cu;
            // 0x132c10: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c0c) {
            ctx->pc = 0x132BB8u;
            runtime->cooperativeGuestYield();
            goto label_132bb8;
        }
    }
    ctx->pc = 0x132C14u;
label_132c14:
    // 0x132c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132c18:
    // 0x132c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c1c: 0xc041d66  jal         func_107598
    ctx->pc = 0x132C1Cu;
    SET_GPR_U32(ctx, 31, 0x132C24u);
    ctx->pc = 0x132C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132C1Cu;
            // 0x132c20: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C24u; }
        if (ctx->pc != 0x132C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C24u; }
        if (ctx->pc != 0x132C24u) { return; }
    }
    ctx->pc = 0x132C24u;
    // 0x132c24: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x132c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x132c28: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x132c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x132c2c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x132c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x132c30: 0x60f809  jalr        $v1
    ctx->pc = 0x132C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132C38u);
        ctx->pc = 0x132C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C30u;
            // 0x132c34: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132C38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132958u: goto label_132958;
            case 0x132964u: goto label_132964;
            case 0x132970u: goto label_132970;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329C0u: goto label_1329c0;
            case 0x132A28u: goto label_132a28;
            case 0x132A68u: goto label_132a68;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AF4u: goto label_132af4;
            case 0x132B40u: goto label_132b40;
            case 0x132B80u: goto label_132b80;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BE0u: goto label_132be0;
            case 0x132BF8u: goto label_132bf8;
            case 0x132C04u: goto label_132c04;
            case 0x132C14u: goto label_132c14;
            case 0x132C18u: goto label_132c18;
            case 0x132C40u: goto label_132c40;
            case 0x132C80u: goto label_132c80;
            case 0x132CC8u: goto label_132cc8;
            case 0x132CD8u: goto label_132cd8;
            case 0x132CE0u: goto label_132ce0;
            case 0x132D08u: goto label_132d08;
            case 0x132D18u: goto label_132d18;
            case 0x132D70u: goto label_132d70;
            case 0x132D88u: goto label_132d88;
            case 0x132D98u: goto label_132d98;
            case 0x132D9Cu: goto label_132d9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132C38u; }
            if (ctx->pc != 0x132C38u) { return; }
        }
        }
    }
    ctx->pc = 0x132C38u;
    // 0x132c38: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x132C38u;
    {
        const bool branch_taken_0x132c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C38u;
            // 0x132c3c: 0x8e42005c  lw          $v0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c38) {
            ctx->pc = 0x132D08u;
            goto label_132d08;
        }
    }
    ctx->pc = 0x132C40u;
label_132c40:
    // 0x132c40: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x132c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x132c44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x132c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132c48: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x132c48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x132c4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132c54: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x132c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x132c58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132c5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c60: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x132c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x132c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x132c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132c6c: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x132c6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x132c70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x132c74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x132C74u;
    {
        const bool branch_taken_0x132c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132C74u;
            // 0x132c78: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c74) {
            ctx->pc = 0x132CD8u;
            goto label_132cd8;
        }
    }
    ctx->pc = 0x132C7Cu;
    // 0x132c7c: 0x0  nop
    ctx->pc = 0x132c7cu;
    // NOP
label_132c80:
    // 0x132c80: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132c84: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x132c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132c88: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x132c8c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x132c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132c90: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x132c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x132c94: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x132c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132c98: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x132C98u;
    {
        const bool branch_taken_0x132c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c98) {
            ctx->pc = 0x132C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132C98u;
            // 0x132c9c: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132CC8u;
            goto label_132cc8;
        }
    }
    ctx->pc = 0x132CA0u;
    // 0x132ca0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x132ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x132ca4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x132ca4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x132ca8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132cb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132CB0u;
    {
        const bool branch_taken_0x132cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132CB0u;
            // 0x132cb4: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cb0) {
            ctx->pc = 0x132CD8u;
            goto label_132cd8;
        }
    }
    ctx->pc = 0x132CB8u;
    // 0x132cb8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x132cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x132cbc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x132cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x132cc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132CC0u;
    {
        const bool branch_taken_0x132cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132CC0u;
            // 0x132cc4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cc0) {
            ctx->pc = 0x132CE0u;
            goto label_132ce0;
        }
    }
    ctx->pc = 0x132CC8u;
label_132cc8:
    // 0x132cc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x132cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x132ccc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x132cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132cd0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x132CD0u;
    {
        const bool branch_taken_0x132cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132CD0u;
            // 0x132cd4: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cd0) {
            ctx->pc = 0x132C80u;
            runtime->cooperativeGuestYield();
            goto label_132c80;
        }
    }
    ctx->pc = 0x132CD8u;
label_132cd8:
    // 0x132cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cdc: 0x0  nop
    ctx->pc = 0x132cdcu;
    // NOP
label_132ce0:
    // 0x132ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ce4: 0xc041d66  jal         func_107598
    ctx->pc = 0x132CE4u;
    SET_GPR_U32(ctx, 31, 0x132CECu);
    ctx->pc = 0x132CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132CE4u;
            // 0x132ce8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CECu; }
        if (ctx->pc != 0x132CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CECu; }
        if (ctx->pc != 0x132CECu) { return; }
    }
    ctx->pc = 0x132CECu;
    // 0x132cec: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x132cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x132cf0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x132cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x132cf4: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x132cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x132cf8: 0x60f809  jalr        $v1
    ctx->pc = 0x132CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132D00u);
        ctx->pc = 0x132CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132CF8u;
            // 0x132cfc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132D00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132958u: goto label_132958;
            case 0x132964u: goto label_132964;
            case 0x132970u: goto label_132970;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329C0u: goto label_1329c0;
            case 0x132A28u: goto label_132a28;
            case 0x132A68u: goto label_132a68;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AF4u: goto label_132af4;
            case 0x132B40u: goto label_132b40;
            case 0x132B80u: goto label_132b80;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BE0u: goto label_132be0;
            case 0x132BF8u: goto label_132bf8;
            case 0x132C04u: goto label_132c04;
            case 0x132C14u: goto label_132c14;
            case 0x132C18u: goto label_132c18;
            case 0x132C40u: goto label_132c40;
            case 0x132C80u: goto label_132c80;
            case 0x132CC8u: goto label_132cc8;
            case 0x132CD8u: goto label_132cd8;
            case 0x132CE0u: goto label_132ce0;
            case 0x132D08u: goto label_132d08;
            case 0x132D18u: goto label_132d18;
            case 0x132D70u: goto label_132d70;
            case 0x132D88u: goto label_132d88;
            case 0x132D98u: goto label_132d98;
            case 0x132D9Cu: goto label_132d9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132D00u; }
            if (ctx->pc != 0x132D00u) { return; }
        }
        }
    }
    ctx->pc = 0x132D00u;
    // 0x132d00: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x132d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x132d04: 0x0  nop
    ctx->pc = 0x132d04u;
    // NOP
label_132d08:
    // 0x132d08: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x132d08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132d0c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x132d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x132d10: 0x1622ff45  bne         $s1, $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x132D10u;
    {
        const bool branch_taken_0x132d10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x132D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D10u;
            // 0x132d14: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d10) {
            ctx->pc = 0x132A28u;
            runtime->cooperativeGuestYield();
            goto label_132a28;
        }
    }
    ctx->pc = 0x132D18u;
label_132d18:
    // 0x132d18: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x132d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x132d1c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x132D1Cu;
    {
        const bool branch_taken_0x132d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D1Cu;
            // 0x132d20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d1c) {
            ctx->pc = 0x132D9Cu;
            goto label_132d9c;
        }
    }
    ctx->pc = 0x132D24u;
    // 0x132d24: 0x96430044  lhu         $v1, 0x44($s2)
    ctx->pc = 0x132d24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x132d28: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x132d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x132d2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x132D2Cu;
    {
        const bool branch_taken_0x132d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D2Cu;
            // 0x132d30: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d2c) {
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D34u;
    // 0x132d34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x132d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x132d38: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x132d3c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x132d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x132d40: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x132d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x132d44: 0xae12be04  sw          $s2, -0x41FC($s0)
    ctx->pc = 0x132d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950404), GPR_U32(ctx, 18));
    // 0x132d48: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x132d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x132d4c: 0xa6430044  sh          $v1, 0x44($s2)
    ctx->pc = 0x132d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x132d50: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132D50u;
    {
        const bool branch_taken_0x132d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D50u;
            // 0x132d54: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d50) {
            ctx->pc = 0x132D70u;
            goto label_132d70;
        }
    }
    ctx->pc = 0x132D58u;
    // 0x132d58: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x132d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x132d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d60: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x132D60u;
    SET_GPR_U32(ctx, 31, 0x132D68u);
    ctx->pc = 0x132D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132D60u;
            // 0x132d64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D68u; }
        if (ctx->pc != 0x132D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D68u; }
        if (ctx->pc != 0x132D68u) { return; }
    }
    ctx->pc = 0x132D68u;
    // 0x132d68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132D68u;
    {
        const bool branch_taken_0x132d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D68u;
            // 0x132d6c: 0x96420044  lhu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d68) {
            ctx->pc = 0x132D88u;
            goto label_132d88;
        }
    }
    ctx->pc = 0x132D70u;
label_132d70:
    // 0x132d70: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x132d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x132d74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132D74u;
    {
        const bool branch_taken_0x132d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d74) {
            ctx->pc = 0x132D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132D74u;
            // 0x132d78: 0x96420044  lhu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132D88u;
            goto label_132d88;
        }
    }
    ctx->pc = 0x132D7Cu;
    // 0x132d7c: 0x40f809  jalr        $v0
    ctx->pc = 0x132D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132D84u);
        ctx->pc = 0x132D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D7Cu;
            // 0x132d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132D84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132958u: goto label_132958;
            case 0x132964u: goto label_132964;
            case 0x132970u: goto label_132970;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329C0u: goto label_1329c0;
            case 0x132A28u: goto label_132a28;
            case 0x132A68u: goto label_132a68;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AF4u: goto label_132af4;
            case 0x132B40u: goto label_132b40;
            case 0x132B80u: goto label_132b80;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BE0u: goto label_132be0;
            case 0x132BF8u: goto label_132bf8;
            case 0x132C04u: goto label_132c04;
            case 0x132C14u: goto label_132c14;
            case 0x132C18u: goto label_132c18;
            case 0x132C40u: goto label_132c40;
            case 0x132C80u: goto label_132c80;
            case 0x132CC8u: goto label_132cc8;
            case 0x132CD8u: goto label_132cd8;
            case 0x132CE0u: goto label_132ce0;
            case 0x132D08u: goto label_132d08;
            case 0x132D18u: goto label_132d18;
            case 0x132D70u: goto label_132d70;
            case 0x132D88u: goto label_132d88;
            case 0x132D98u: goto label_132d98;
            case 0x132D9Cu: goto label_132d9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132D84u; }
            if (ctx->pc != 0x132D84u) { return; }
        }
        }
    }
    ctx->pc = 0x132D84u;
    // 0x132d84: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x132d84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_132d88:
    // 0x132d88: 0xae00be04  sw          $zero, -0x41FC($s0)
    ctx->pc = 0x132d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950404), GPR_U32(ctx, 0));
    // 0x132d8c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x132d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x132d90: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x132d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x132d94: 0xa6420044  sh          $v0, 0x44($s2)
    ctx->pc = 0x132d94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 2));
label_132d98:
    // 0x132d98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x132d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132d9c:
    // 0x132d9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x132d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132da0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x132da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132da4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x132da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132da8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x132da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132dac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x132dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132db4: 0x3e00008  jr          $ra
    ctx->pc = 0x132DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DB4u;
            // 0x132db8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132958u: goto label_132958;
            case 0x132964u: goto label_132964;
            case 0x132970u: goto label_132970;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329C0u: goto label_1329c0;
            case 0x132A28u: goto label_132a28;
            case 0x132A68u: goto label_132a68;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AF4u: goto label_132af4;
            case 0x132B40u: goto label_132b40;
            case 0x132B80u: goto label_132b80;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BE0u: goto label_132be0;
            case 0x132BF8u: goto label_132bf8;
            case 0x132C04u: goto label_132c04;
            case 0x132C14u: goto label_132c14;
            case 0x132C18u: goto label_132c18;
            case 0x132C40u: goto label_132c40;
            case 0x132C80u: goto label_132c80;
            case 0x132CC8u: goto label_132cc8;
            case 0x132CD8u: goto label_132cd8;
            case 0x132CE0u: goto label_132ce0;
            case 0x132D08u: goto label_132d08;
            case 0x132D18u: goto label_132d18;
            case 0x132D70u: goto label_132d70;
            case 0x132D88u: goto label_132d88;
            case 0x132D98u: goto label_132d98;
            case 0x132D9Cu: goto label_132d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132DBCu;
    // 0x132dbc: 0x0  nop
    ctx->pc = 0x132dbcu;
    // NOP
}
