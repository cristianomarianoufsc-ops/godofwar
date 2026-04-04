#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B878
// Address: 0x12b878 - 0x12bda0
void sub_0012B878_0x12b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B878_0x12b878");
#endif

    ctx->pc = 0x12b878u;

label_12b878:
    // 0x12b878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b87c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x12b87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x12b880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12b884: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x12b884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x12b888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12b88c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b890: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12b894: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x12b894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12b898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b89c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12b89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8a0: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x12b8a4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x12b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x12b8a8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x12b8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b8ac: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x12b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x12b8b0: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x12b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x12b8b4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x12b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x12b8b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12b8bc: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x12b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x12b8c0: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x12b8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x12b8c4: 0x26510024  addiu       $s1, $s2, 0x24
    ctx->pc = 0x12b8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x12b8c8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x12b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x12b8cc: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x12b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x12b8d0: 0xc08e222  jal         func_238888
    ctx->pc = 0x12B8D0u;
    SET_GPR_U32(ctx, 31, 0x12B8D8u);
    ctx->pc = 0x12B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8D0u;
            // 0x12b8d4: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8D8u; }
        if (ctx->pc != 0x12B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8D8u; }
        if (ctx->pc != 0x12B8D8u) { return; }
    }
    ctx->pc = 0x12B8D8u;
    // 0x12b8d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12b8dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e4: 0xc08e222  jal         func_238888
    ctx->pc = 0x12B8E4u;
    SET_GPR_U32(ctx, 31, 0x12B8ECu);
    ctx->pc = 0x12B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8E4u;
            // 0x12b8e8: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8ECu; }
        if (ctx->pc != 0x12B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8ECu; }
        if (ctx->pc != 0x12B8ECu) { return; }
    }
    ctx->pc = 0x12B8ECu;
    // 0x12b8ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12b8f0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x12b8f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12b8f8: 0x2463c8d8  addiu       $v1, $v1, -0x3728
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953176));
    // 0x12b8fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12b900: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x12b900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x12b904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b90c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x12b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x12b910: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x12b914: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x12B914u;
    SET_GPR_U32(ctx, 31, 0x12B91Cu);
    ctx->pc = 0x12B918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B914u;
            // 0x12b918: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B91Cu; }
        if (ctx->pc != 0x12B91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B91Cu; }
        if (ctx->pc != 0x12B91Cu) { return; }
    }
    ctx->pc = 0x12B91Cu;
    // 0x12b91c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x12b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x12b920: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12b920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12b924: 0x2442c7f8  addiu       $v0, $v0, -0x3808
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x12b928: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x12b928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x12b92c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x12b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12b930: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x12b934: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x12b934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x12b938: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x12B938u;
    SET_GPR_U32(ctx, 31, 0x12B940u);
    ctx->pc = 0x12B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B938u;
            // 0x12b93c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B940u; }
        if (ctx->pc != 0x12B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B940u; }
        if (ctx->pc != 0x12B940u) { return; }
    }
    ctx->pc = 0x12B940u;
    // 0x12b940: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x12b940u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b944: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12b948: 0x2442c718  addiu       $v0, $v0, -0x38E8
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952728));
    // 0x12b94c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x12b94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12b950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b954: 0xa6450002  sh          $a1, 0x2($s2)
    ctx->pc = 0x12b954u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12b958: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x12b958u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x12b95c: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x12b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
    // 0x12b960: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x12b964: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x12b964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x12b968: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12b96c: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x12b970: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12b974: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x12b974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x12b978: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x12b97c: 0x40f809  jalr        $v0
    ctx->pc = 0x12B97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B984u);
        ctx->pc = 0x12B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B97Cu;
            // 0x12b980: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12B984u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B984u; }
            if (ctx->pc != 0x12B984u) { return; }
        }
        }
    }
    ctx->pc = 0x12B984u;
    // 0x12b984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b988: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12b988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b98c: 0x0  nop
    ctx->pc = 0x12b98cu;
    // NOP
label_12b990:
    // 0x12b990: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x12b994: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12B998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B994u;
            // 0x12b998: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B9A4u;
            goto label_12b9a4;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x12B99Cu;
    {
        const bool branch_taken_0x12b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B99Cu;
            // 0x12b9a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b99c) {
            ctx->pc = 0x12B990u;
            runtime->cooperativeGuestYield();
            goto label_12b990;
        }
    }
    ctx->pc = 0x12B9A4u;
label_12b9a4:
    // 0x12b9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b9a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b9ac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x12b9b0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B9B0u;
    {
        const bool branch_taken_0x12b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b9b0) {
            ctx->pc = 0x12B9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9B0u;
            // 0x12b9b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B9D8u;
            goto label_12b9d8;
        }
    }
    ctx->pc = 0x12B9B8u;
    // 0x12b9b8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12b9bc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x12b9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12b9c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9c4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x12b9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b9c8: 0xc061e1a  jal         func_187868
    ctx->pc = 0x12B9C8u;
    SET_GPR_U32(ctx, 31, 0x12B9D0u);
    ctx->pc = 0x12B9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9C8u;
            // 0x12b9cc: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D0u; }
        if (ctx->pc != 0x12B9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B9D0u; }
        if (ctx->pc != 0x12B9D0u) { return; }
    }
    ctx->pc = 0x12B9D0u;
    // 0x12b9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B9D0u;
    {
        const bool branch_taken_0x12b9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9D0u;
            // 0x12b9d4: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9d0) {
            ctx->pc = 0x12B9E0u;
            goto label_12b9e0;
        }
    }
    ctx->pc = 0x12B9D8u;
label_12b9d8:
    // 0x12b9d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12b9dc: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x12b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_12b9e0:
    // 0x12b9e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12b9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12b9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b9e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12b9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b9ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12b9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9F4u;
            // 0x12b9f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B9FCu;
    // 0x12b9fc: 0x0  nop
    ctx->pc = 0x12b9fcu;
    // NOP
    // 0x12ba00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ba04: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12ba08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12ba0c: 0x2442c7f8  addiu       $v0, $v0, -0x3808
    ctx->pc = 0x12ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x12ba10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12ba14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12ba1c: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x12ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x12ba20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ba24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12ba24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba28: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12ba2c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x12ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x12ba30: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x12ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x12ba34: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12BA34u;
    {
        const bool branch_taken_0x12ba34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x12BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA34u;
            // 0x12ba38: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba34) {
            ctx->pc = 0x12BA64u;
            goto label_12ba64;
        }
    }
    ctx->pc = 0x12BA3Cu;
    // 0x12ba3c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12ba40:
    // 0x12ba40: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12ba44: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x12ba48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ba4c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x12BA4Cu;
    SET_GPR_U32(ctx, 31, 0x12BA54u);
    ctx->pc = 0x12BA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA4Cu;
            // 0x12ba50: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA54u; }
        if (ctx->pc != 0x12BA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA54u; }
        if (ctx->pc != 0x12BA54u) { return; }
    }
    ctx->pc = 0x12BA54u;
    // 0x12ba54: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ba58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba5c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BA5Cu;
    {
        const bool branch_taken_0x12ba5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA5Cu;
            // 0x12ba60: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba5c) {
            ctx->pc = 0x12BA40u;
            runtime->cooperativeGuestYield();
            goto label_12ba40;
        }
    }
    ctx->pc = 0x12BA64u;
label_12ba64:
    // 0x12ba64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12ba68: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x12ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x12ba6c: 0x2442c8d8  addiu       $v0, $v0, -0x3728
    ctx->pc = 0x12ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953176));
    // 0x12ba70: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x12ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x12ba74: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12ba78: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x12ba7c: 0xc04addc  jal         func_12B770
    ctx->pc = 0x12BA7Cu;
    SET_GPR_U32(ctx, 31, 0x12BA84u);
    ctx->pc = 0x12BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA7Cu;
            // 0x12ba80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B770u;
    if (runtime->hasFunction(0x12B770u)) {
        auto targetFn = runtime->lookupFunction(0x12B770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA84u; }
        if (ctx->pc != 0x12BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B770_0x12b770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA84u; }
        if (ctx->pc != 0x12BA84u) { return; }
    }
    ctx->pc = 0x12BA84u;
    // 0x12ba84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12ba88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba8c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x12ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x12ba90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba94: 0xc08e218  jal         func_238860
    ctx->pc = 0x12BA94u;
    SET_GPR_U32(ctx, 31, 0x12BA9Cu);
    ctx->pc = 0x12BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA94u;
            // 0x12ba98: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA9Cu; }
        if (ctx->pc != 0x12BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA9Cu; }
        if (ctx->pc != 0x12BA9Cu) { return; }
    }
    ctx->pc = 0x12BA9Cu;
    // 0x12ba9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12ba9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12baa0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12baa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12baa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12baa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12baa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12baac: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAACu;
            // 0x12bab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x0  nop
    ctx->pc = 0x12bab4u;
    // NOP
    // 0x12bab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12babc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12babcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bac4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x12bac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12bac8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12bacc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12baccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12bad0: 0x2463f1b8  addiu       $v1, $v1, -0xE48
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963640));
    // 0x12bad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12badc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bae0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12bae4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12bae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bae8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12baec: 0x40f809  jalr        $v0
    ctx->pc = 0x12BAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BAF4u);
        ctx->pc = 0x12BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAECu;
            // 0x12baf0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BAF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BAF4u; }
            if (ctx->pc != 0x12BAF4u) { return; }
        }
        }
    }
    ctx->pc = 0x12BAF4u;
    // 0x12baf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12baf8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAF8u;
            // 0x12bafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BB00u;
    // 0x12bb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12bb04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12bb08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12bb0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12bb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12bb18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x12bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12bb1c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12BB1Cu;
    {
        const bool branch_taken_0x12bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB1Cu;
            // 0x12bb20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb1c) {
            ctx->pc = 0x12BBD4u;
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BB24u;
    // 0x12bb24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x12bb28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12bb2c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12BB2Cu;
    {
        const bool branch_taken_0x12bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB2Cu;
            // 0x12bb30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb2c) {
            ctx->pc = 0x12BB6Cu;
            goto label_12bb6c;
        }
    }
    ctx->pc = 0x12BB34u;
    // 0x12bb34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb38: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb3c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12bb40:
    // 0x12bb40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bb44: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x12bb44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bb48: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BB48u;
    {
        const bool branch_taken_0x12bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12bb48) {
            ctx->pc = 0x12BB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB48u;
            // 0x12bb4c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BB60u;
            goto label_12bb60;
        }
    }
    ctx->pc = 0x12BB50u;
    // 0x12bb50: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x12bb54: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x12bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x12bb58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bb5c: 0x0  nop
    ctx->pc = 0x12bb5cu;
    // NOP
label_12bb60:
    // 0x12bb60: 0x5486fff7  bnel        $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12BB60u;
    {
        const bool branch_taken_0x12bb60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x12bb60) {
            ctx->pc = 0x12BB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB60u;
            // 0x12bb64: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BB40u;
            runtime->cooperativeGuestYield();
            goto label_12bb40;
        }
    }
    ctx->pc = 0x12BB68u;
    // 0x12bb68: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x12bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_12bb6c:
    // 0x12bb6c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x12bb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12bb70: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12BB70u;
    {
        const bool branch_taken_0x12bb70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb70) {
            ctx->pc = 0x12BB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB70u;
            // 0x12bb74: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BBD0u;
            goto label_12bbd0;
        }
    }
    ctx->pc = 0x12BB78u;
    // 0x12bb78: 0xc05e394  jal         func_178E50
    ctx->pc = 0x12BB78u;
    SET_GPR_U32(ctx, 31, 0x12BB80u);
    ctx->pc = 0x12BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB78u;
            // 0x12bb7c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB80u; }
        if (ctx->pc != 0x12BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB80u; }
        if (ctx->pc != 0x12BB80u) { return; }
    }
    ctx->pc = 0x12BB80u;
    // 0x12bb80: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x12bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x12bb84: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x12bb84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12bb88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bb8c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x12bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x12bb90: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bb94: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12BB94u;
    {
        const bool branch_taken_0x12bb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x12bb94) {
            ctx->pc = 0x12BB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB94u;
            // 0x12bb98: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BBC0u;
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BB9Cu;
    // 0x12bb9c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12bba0:
    // 0x12bba0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bba4: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x12BBA4u;
    SET_GPR_U32(ctx, 31, 0x12BBACu);
    ctx->pc = 0x12BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBA4u;
            // 0x12bba8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBACu; }
        if (ctx->pc != 0x12BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBACu; }
        if (ctx->pc != 0x12BBACu) { return; }
    }
    ctx->pc = 0x12BBACu;
    // 0x12bbac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bbb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bbb4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BBB4u;
    {
        const bool branch_taken_0x12bbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBB4u;
            // 0x12bbb8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbb4) {
            ctx->pc = 0x12BBA0u;
            runtime->cooperativeGuestYield();
            goto label_12bba0;
        }
    }
    ctx->pc = 0x12BBBCu;
    // 0x12bbbc: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x12bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_12bbc0:
    // 0x12bbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbc4: 0xc08e204  jal         func_238810
    ctx->pc = 0x12BBC4u;
    SET_GPR_U32(ctx, 31, 0x12BBCCu);
    ctx->pc = 0x12BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBC4u;
            // 0x12bbc8: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBCCu; }
        if (ctx->pc != 0x12BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBCCu; }
        if (ctx->pc != 0x12BBCCu) { return; }
    }
    ctx->pc = 0x12BBCCu;
    // 0x12bbcc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_12bbd0:
    // 0x12bbd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12bbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12bbd4:
    // 0x12bbd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12bbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bbd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12bbd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bbdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBE0u;
            // 0x12bbe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BBE8u;
    // 0x12bbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bbf0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x12bbf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12bbf4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12bbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12bbf8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12bbfc: 0x2463f1b8  addiu       $v1, $v1, -0xE48
    ctx->pc = 0x12bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963640));
    // 0x12bc00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bc08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bc0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12bc10: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12bc14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12bc18: 0x40f809  jalr        $v0
    ctx->pc = 0x12BC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BC20u);
        ctx->pc = 0x12BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC18u;
            // 0x12bc1c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BC20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BC20u; }
            if (ctx->pc != 0x12BC20u) { return; }
        }
        }
    }
    ctx->pc = 0x12BC20u;
    // 0x12bc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC24u;
            // 0x12bc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BC2Cu;
    // 0x12bc2c: 0x0  nop
    ctx->pc = 0x12bc2cu;
    // NOP
    // 0x12bc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12bc34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BC38u;
    {
        const bool branch_taken_0x12bc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC38u;
            // 0x12bc3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc38) {
            ctx->pc = 0x12BC58u;
            goto label_12bc58;
        }
    }
    ctx->pc = 0x12BC40u;
    // 0x12bc40: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x12bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x12bc44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bc48: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12bc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bc4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12bc50: 0x40f809  jalr        $v0
    ctx->pc = 0x12BC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BC58u);
        ctx->pc = 0x12BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC50u;
            // 0x12bc54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BC58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BC58u; }
            if (ctx->pc != 0x12BC58u) { return; }
        }
        }
    }
    ctx->pc = 0x12BC58u;
label_12bc58:
    // 0x12bc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC5Cu;
            // 0x12bc60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BC64u;
    // 0x12bc64: 0x0  nop
    ctx->pc = 0x12bc64u;
    // NOP
    // 0x12bc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bc70: 0x8ca20078  lw          $v0, 0x78($a1)
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x12bc74: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12bc78: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12bc7c: 0x40f809  jalr        $v0
    ctx->pc = 0x12BC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BC84u);
        ctx->pc = 0x12BC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC7Cu;
            // 0x12bc80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BC84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BC84u; }
            if (ctx->pc != 0x12BC84u) { return; }
        }
        }
    }
    ctx->pc = 0x12BC84u;
    // 0x12bc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC8Cu;
            // 0x12bc90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BC94u;
    // 0x12bc94: 0x0  nop
    ctx->pc = 0x12bc94u;
    // NOP
    // 0x12bc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bca0: 0x8ca20078  lw          $v0, 0x78($a1)
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x12bca4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x12bca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12bca8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x12bcac: 0x40f809  jalr        $v0
    ctx->pc = 0x12BCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BCB4u);
        ctx->pc = 0x12BCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCACu;
            // 0x12bcb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BCB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BCB4u; }
            if (ctx->pc != 0x12BCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x12BCB4u;
    // 0x12bcb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCBCu;
            // 0x12bcc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BCC4u;
    // 0x12bcc4: 0x0  nop
    ctx->pc = 0x12bcc4u;
    // NOP
    // 0x12bcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12bcd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12bcd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12bcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bcdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bce0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12bce4: 0x0  nop
    ctx->pc = 0x12bce4u;
    // NOP
label_12bce8:
    // 0x12bce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12bcf0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x12bcf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BCF4u;
    {
        const bool branch_taken_0x12bcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCF4u;
            // 0x12bcf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcf4) {
            ctx->pc = 0x12BD10u;
            goto label_12bd10;
        }
    }
    ctx->pc = 0x12BCFCu;
    // 0x12bcfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12bd00: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bd04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12bd08: 0x40f809  jalr        $v0
    ctx->pc = 0x12BD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BD10u);
        ctx->pc = 0x12BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD08u;
            // 0x12bd0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BD10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BD10u; }
            if (ctx->pc != 0x12BD10u) { return; }
        }
        }
    }
    ctx->pc = 0x12BD10u;
label_12bd10:
    // 0x12bd10: 0x2a02000e  slti        $v0, $s0, 0xE
    ctx->pc = 0x12bd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x12bd14: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x12BD14u;
    {
        const bool branch_taken_0x12bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bd14) {
            ctx->pc = 0x12BD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD14u;
            // 0x12bd18: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BCE8u;
            runtime->cooperativeGuestYield();
            goto label_12bce8;
        }
    }
    ctx->pc = 0x12BD1Cu;
    // 0x12bd1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12bd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12bd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd28: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD28u;
            // 0x12bd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BD30u;
    // 0x12bd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bd34: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x12bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x12bd38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bd3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bd40: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x12BD40u;
    SET_GPR_U32(ctx, 31, 0x12BD48u);
    ctx->pc = 0x12BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD40u;
            // 0x12bd44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD48u; }
        if (ctx->pc != 0x12BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD48u; }
        if (ctx->pc != 0x12BD48u) { return; }
    }
    ctx->pc = 0x12BD48u;
    // 0x12bd48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd4c: 0xc04ae1e  jal         func_12B878
    ctx->pc = 0x12BD4Cu;
    SET_GPR_U32(ctx, 31, 0x12BD54u);
    ctx->pc = 0x12BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD4Cu;
            // 0x12bd50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B878u;
    runtime->cooperativeGuestYield();
    goto label_12b878;
    ctx->pc = 0x12BD54u;
label_12bd54:
    // 0x12bd54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD5Cu;
            // 0x12bd60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BD64u;
    // 0x12bd64: 0x0  nop
    ctx->pc = 0x12bd64u;
    // NOP
    // 0x12bd68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bd6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12bd6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BD70u;
    {
        const bool branch_taken_0x12bd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD70u;
            // 0x12bd74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd70) {
            ctx->pc = 0x12BD90u;
            goto label_12bd90;
        }
    }
    ctx->pc = 0x12BD78u;
    // 0x12bd78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12bd7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bd80: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12bd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bd84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12bd88: 0x40f809  jalr        $v0
    ctx->pc = 0x12BD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12BD90u);
        ctx->pc = 0x12BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD88u;
            // 0x12bd8c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12BD90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12BD90u; }
            if (ctx->pc != 0x12BD90u) { return; }
        }
        }
    }
    ctx->pc = 0x12BD90u;
label_12bd90:
    // 0x12bd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd94: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD94u;
            // 0x12bd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B878u: goto label_12b878;
            case 0x12B990u: goto label_12b990;
            case 0x12B9A4u: goto label_12b9a4;
            case 0x12B9D8u: goto label_12b9d8;
            case 0x12B9E0u: goto label_12b9e0;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA64u: goto label_12ba64;
            case 0x12BB40u: goto label_12bb40;
            case 0x12BB60u: goto label_12bb60;
            case 0x12BB6Cu: goto label_12bb6c;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBC0u: goto label_12bbc0;
            case 0x12BBD0u: goto label_12bbd0;
            case 0x12BBD4u: goto label_12bbd4;
            case 0x12BC58u: goto label_12bc58;
            case 0x12BCE8u: goto label_12bce8;
            case 0x12BD10u: goto label_12bd10;
            case 0x12BD54u: goto label_12bd54;
            case 0x12BD90u: goto label_12bd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BD9Cu;
    // 0x12bd9c: 0x0  nop
    ctx->pc = 0x12bd9cu;
    // NOP
}
