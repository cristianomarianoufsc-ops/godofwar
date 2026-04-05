#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA408
// Address: 0x1aa408 - 0x1abb00
void sub_001AA408_0x1aa408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA408_0x1aa408");
#endif

    ctx->pc = 0x1aa408u;

    // 0x1aa408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aa40c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa410: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1aa410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1aa414: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1aa414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1aa418: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa41c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1aa41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1aa420: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aa424: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1aa424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1aa428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa42c: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x1aa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1aa430: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x1aa430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1aa434: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1aa434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1aa438: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1aa438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aa43c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1aa43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1aa440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa448: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA448u;
    {
        const bool branch_taken_0x1aa448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AA44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA448u;
            // 0x1aa44c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa448) {
            ctx->pc = 0x1AA454u;
            goto label_1aa454;
        }
    }
    ctx->pc = 0x1AA450u;
    // 0x1aa450: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1aa450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1aa454:
    // 0x1aa454: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1AA454u;
    SET_GPR_U32(ctx, 31, 0x1AA45Cu);
    ctx->pc = 0x1AA458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA454u;
            // 0x1aa458: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA45Cu; }
        if (ctx->pc != 0x1AA45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA45Cu; }
        if (ctx->pc != 0x1AA45Cu) { return; }
    }
    ctx->pc = 0x1AA45Cu;
    // 0x1aa45c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1aa45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa460: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1aa460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1aa464: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aa468: 0xac73cacc  sw          $s3, -0x3534($v1)
    ctx->pc = 0x1aa468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953676), GPR_U32(ctx, 19));
    // 0x1aa46c: 0x8c442618  lw          $a0, 0x2618($v0)
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9752)));
    // 0x1aa470: 0x24422618  addiu       $v0, $v0, 0x2618
    ctx->pc = 0x1aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9752));
    // 0x1aa474: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aa474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1aa478: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AA478u;
    {
        const bool branch_taken_0x1aa478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA478u;
            // 0x1aa47c: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa478) {
            ctx->pc = 0x1AA510u;
            goto label_1aa510;
        }
    }
    ctx->pc = 0x1AA480u;
label_1aa480:
    // 0x1aa480: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa484: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa488: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1aa488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aa48c: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x1aa48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1aa490: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA490u;
    {
        const bool branch_taken_0x1aa490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA490u;
            // 0x1aa494: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa490) {
            ctx->pc = 0x1AA4B8u;
            goto label_1aa4b8;
        }
    }
    ctx->pc = 0x1AA498u;
    // 0x1aa498: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1aa49c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa4a0: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1aa4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1aa4a4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1aa4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1aa4a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1aa4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1aa4ac: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AA4ACu;
    SET_GPR_U32(ctx, 31, 0x1AA4B4u);
    ctx->pc = 0x1AA4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4ACu;
            // 0x1aa4b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B4u; }
        if (ctx->pc != 0x1AA4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B4u; }
        if (ctx->pc != 0x1AA4B4u) { return; }
    }
    ctx->pc = 0x1AA4B4u;
    // 0x1aa4b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1aa4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1aa4b8:
    // 0x1aa4b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1aa4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1aa4bc: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1aa4c0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA4C0u;
    {
        const bool branch_taken_0x1aa4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4C0u;
            // 0x1aa4c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4c0) {
            ctx->pc = 0x1AA500u;
            goto label_1aa500;
        }
    }
    ctx->pc = 0x1AA4C8u;
    // 0x1aa4c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1aa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1aa4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aa4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4d0: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1aa4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1aa4d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1aa4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa4d8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1aa4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1aa4dc: 0x8c670024  lw          $a3, 0x24($v1)
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1aa4e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1aa4e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1aa4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1aa4e8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1aa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1aa4ec: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1aa4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1aa4f0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aa4f4: 0xe0f809  jalr        $a3
    ctx->pc = 0x1AA4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1AA4FCu);
        ctx->pc = 0x1AA4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4F4u;
            // 0x1aa4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA4FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4FCu; }
            if (ctx->pc != 0x1AA4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1AA4FCu;
    // 0x1aa4fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1aa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1aa500:
    // 0x1aa500: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aa500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa504: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aa504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa508: 0x1443ffdd  bne         $v0, $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AA508u;
    {
        const bool branch_taken_0x1aa508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA508u;
            // 0x1aa50c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa508) {
            ctx->pc = 0x1AA480u;
            runtime->cooperativeGuestYield();
            goto label_1aa480;
        }
    }
    ctx->pc = 0x1AA510u;
label_1aa510:
    // 0x1aa510: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1aa510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa514: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1aa514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa518: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1aa518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa51c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1aa51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa524: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA524u;
            // 0x1aa528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA52Cu;
    // 0x1aa52c: 0x0  nop
    ctx->pc = 0x1aa52cu;
    // NOP
    // 0x1aa530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1aa534: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1aa534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1aa538: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1aa538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1aa53c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aa540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa54c: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AA54Cu;
    {
        const bool branch_taken_0x1aa54c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA54Cu;
            // 0x1aa550: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa54c) {
            ctx->pc = 0x1AA590u;
            goto label_1aa590;
        }
    }
    ctx->pc = 0x1AA554u;
    // 0x1aa554: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa558: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1AA558u;
    SET_GPR_U32(ctx, 31, 0x1AA560u);
    ctx->pc = 0x1AA55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA558u;
            // 0x1aa55c: 0x8c44ca0c  lw          $a0, -0x35F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA560u; }
        if (ctx->pc != 0x1AA560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA560u; }
        if (ctx->pc != 0x1AA560u) { return; }
    }
    ctx->pc = 0x1AA560u;
    // 0x1aa560: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1aa564: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1aa564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1aa568: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1aa568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1aa56c: 0x24632618  addiu       $v1, $v1, 0x2618
    ctx->pc = 0x1aa56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9752));
    // 0x1aa570: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1aa570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1aa574: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1aa574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1aa578: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aa578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1aa57c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1aa57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1aa580: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1aa580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1aa584: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1AA584u;
    {
        const bool branch_taken_0x1aa584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA584u;
            // 0x1aa588: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa584) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA58Cu;
    // 0x1aa58c: 0x0  nop
    ctx->pc = 0x1aa58cu;
    // NOP
label_1aa590:
    // 0x1aa590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa594: 0x14c20031  bne         $a2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AA594u;
    {
        const bool branch_taken_0x1aa594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA594u;
            // 0x1aa598: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa594) {
            ctx->pc = 0x1AA65Cu;
            goto label_1aa65c;
        }
    }
    ctx->pc = 0x1AA59Cu;
    // 0x1aa59c: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1AA59Cu;
    SET_GPR_U32(ctx, 31, 0x1AA5A4u);
    ctx->pc = 0x1AA5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA59Cu;
            // 0x1aa5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5A4u; }
        if (ctx->pc != 0x1AA5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5A4u; }
        if (ctx->pc != 0x1AA5A4u) { return; }
    }
    ctx->pc = 0x1AA5A4u;
    // 0x1aa5a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa5a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA5A8u;
    {
        const bool branch_taken_0x1aa5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5a8) {
            ctx->pc = 0x1AA5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5A8u;
            // 0x1aa5ac: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5C8u;
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA5B0u;
    // 0x1aa5b0: 0x520000bf  beql        $s0, $zero, . + 4 + (0xBF << 2)
    ctx->pc = 0x1AA5B0u;
    {
        const bool branch_taken_0x1aa5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5b0) {
            ctx->pc = 0x1AA5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5B0u;
            // 0x1aa5b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA5B8u;
    // 0x1aa5b8: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1aa5b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1aa5bc: 0x146200bc  bne         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1AA5BCu;
    {
        const bool branch_taken_0x1aa5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5BCu;
            // 0x1aa5c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5bc) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA5C4u;
    // 0x1aa5c4: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1aa5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1aa5c8:
    // 0x1aa5c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa5cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA5CCu;
    {
        const bool branch_taken_0x1aa5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5CCu;
            // 0x1aa5d0: 0x263000c0  addiu       $s0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5cc) {
            ctx->pc = 0x1AA5F4u;
            goto label_1aa5f4;
        }
    }
    ctx->pc = 0x1AA5D4u;
    // 0x1aa5d4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1aa5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1aa5d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa5dc: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1aa5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1aa5e0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1aa5e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aa5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aa5e8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AA5E8u;
    SET_GPR_U32(ctx, 31, 0x1AA5F0u);
    ctx->pc = 0x1AA5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5E8u;
            // 0x1aa5ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5F0u; }
        if (ctx->pc != 0x1AA5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5F0u; }
        if (ctx->pc != 0x1AA5F0u) { return; }
    }
    ctx->pc = 0x1AA5F0u;
    // 0x1aa5f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aa5f4:
    // 0x1aa5f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa5f8: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1AA5F8u;
    {
        const bool branch_taken_0x1aa5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5F8u;
            // 0x1aa5fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5f8) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA600u;
    // 0x1aa600: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1aa600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1aa604: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1aa604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1aa608: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1aa608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1aa60c: 0x40f809  jalr        $v0
    ctx->pc = 0x1AA60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA614u);
        ctx->pc = 0x1AA610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA60Cu;
            // 0x1aa610: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA614u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA614u; }
            if (ctx->pc != 0x1AA614u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA614u;
    // 0x1aa614: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA614u;
    {
        const bool branch_taken_0x1aa614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa614) {
            ctx->pc = 0x1AA644u;
            goto label_1aa644;
        }
    }
    ctx->pc = 0x1AA61Cu;
    // 0x1aa61c: 0xc6340068  lwc1        $f20, 0x68($s1)
    ctx->pc = 0x1aa61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa620: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AA620u;
    SET_GPR_U32(ctx, 31, 0x1AA628u);
    ctx->pc = 0x1AA624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA620u;
            // 0x1aa624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA628u; }
        if (ctx->pc != 0x1AA628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA628u; }
        if (ctx->pc != 0x1AA628u) { return; }
    }
    ctx->pc = 0x1AA628u;
    // 0x1aa628: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1aa628u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1aa62c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa630: 0xc440cac0  lwc1        $f0, -0x3540($v0)
    ctx->pc = 0x1aa630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa634: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1aa634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa638: 0x0  nop
    ctx->pc = 0x1aa638u;
    // NOP
    // 0x1aa63c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA63Cu;
    {
        const bool branch_taken_0x1aa63c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa63c) {
            ctx->pc = 0x1AA640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA63Cu;
            // 0x1aa640: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA644u;
            goto label_1aa644;
        }
    }
    ctx->pc = 0x1AA644u;
label_1aa644:
    // 0x1aa644: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1AA644u;
    {
        const bool branch_taken_0x1aa644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA644u;
            // 0x1aa648: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa644) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA64Cu;
    // 0x1aa64c: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1AA64Cu;
    SET_GPR_U32(ctx, 31, 0x1AA654u);
    ctx->pc = 0x1AA650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA64Cu;
            // 0x1aa650: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA654u; }
        if (ctx->pc != 0x1AA654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA654u; }
        if (ctx->pc != 0x1AA654u) { return; }
    }
    ctx->pc = 0x1AA654u;
    // 0x1aa654: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1AA654u;
    {
        const bool branch_taken_0x1aa654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA654u;
            // 0x1aa658: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa654) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA65Cu;
label_1aa65c:
    // 0x1aa65c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA65Cu;
    {
        const bool branch_taken_0x1aa65c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA65Cu;
            // 0x1aa660: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa65c) {
            ctx->pc = 0x1AA674u;
            goto label_1aa674;
        }
    }
    ctx->pc = 0x1AA664u;
    // 0x1aa664: 0x14c20020  bne         $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA664u;
    {
        const bool branch_taken_0x1aa664 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA664u;
            // 0x1aa668: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa664) {
            ctx->pc = 0x1AA6E8u;
            goto label_1aa6e8;
        }
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AA66Cu;
    {
        const bool branch_taken_0x1aa66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa66c) {
            ctx->pc = 0x1AA6E8u;
            goto label_1aa6e8;
        }
    }
    ctx->pc = 0x1AA674u;
label_1aa674:
    // 0x1aa674: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1AA674u;
    SET_GPR_U32(ctx, 31, 0x1AA67Cu);
    ctx->pc = 0x1AA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA674u;
            // 0x1aa678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA67Cu; }
        if (ctx->pc != 0x1AA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA67Cu; }
        if (ctx->pc != 0x1AA67Cu) { return; }
    }
    ctx->pc = 0x1AA67Cu;
    // 0x1aa67c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa680: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA680u;
    {
        const bool branch_taken_0x1aa680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa680) {
            ctx->pc = 0x1AA684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA680u;
            // 0x1aa684: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6A0u;
            goto label_1aa6a0;
        }
    }
    ctx->pc = 0x1AA688u;
    // 0x1aa688: 0x52000089  beql        $s0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x1AA688u;
    {
        const bool branch_taken_0x1aa688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa688) {
            ctx->pc = 0x1AA68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA688u;
            // 0x1aa68c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA690u;
    // 0x1aa690: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1aa690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1aa694: 0x14620086  bne         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1AA694u;
    {
        const bool branch_taken_0x1aa694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA694u;
            // 0x1aa698: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa694) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA69Cu;
    // 0x1aa69c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1aa69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1aa6a0:
    // 0x1aa6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa6a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA6A4u;
    {
        const bool branch_taken_0x1aa6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6A4u;
            // 0x1aa6a8: 0x263000c0  addiu       $s0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6a4) {
            ctx->pc = 0x1AA6CCu;
            goto label_1aa6cc;
        }
    }
    ctx->pc = 0x1AA6ACu;
    // 0x1aa6ac: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1aa6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1aa6b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa6b4: 0xac51cac8  sw          $s1, -0x3538($v0)
    ctx->pc = 0x1aa6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 17));
    // 0x1aa6b8: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1aa6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1aa6bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aa6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aa6c0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AA6C0u;
    SET_GPR_U32(ctx, 31, 0x1AA6C8u);
    ctx->pc = 0x1AA6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6C0u;
            // 0x1aa6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6C8u; }
        if (ctx->pc != 0x1AA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6C8u; }
        if (ctx->pc != 0x1AA6C8u) { return; }
    }
    ctx->pc = 0x1AA6C8u;
    // 0x1aa6c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aa6cc:
    // 0x1aa6cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aa6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa6d0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1AA6D0u;
    {
        const bool branch_taken_0x1aa6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6D0u;
            // 0x1aa6d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6d0) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA6D8u;
    // 0x1aa6d8: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1AA6D8u;
    SET_GPR_U32(ctx, 31, 0x1AA6E0u);
    ctx->pc = 0x1AA6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6D8u;
            // 0x1aa6dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6E0u; }
        if (ctx->pc != 0x1AA6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6E0u; }
        if (ctx->pc != 0x1AA6E0u) { return; }
    }
    ctx->pc = 0x1AA6E0u;
    // 0x1aa6e0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1AA6E0u;
    {
        const bool branch_taken_0x1aa6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6E0u;
            // 0x1aa6e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6e0) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA6E8u;
label_1aa6e8:
    // 0x1aa6e8: 0x14c20037  bne         $a2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1AA6E8u;
    {
        const bool branch_taken_0x1aa6e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6E8u;
            // 0x1aa6ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6e8) {
            ctx->pc = 0x1AA7C8u;
            goto label_1aa7c8;
        }
    }
    ctx->pc = 0x1AA6F0u;
    // 0x1aa6f0: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1AA6F0u;
    SET_GPR_U32(ctx, 31, 0x1AA6F8u);
    ctx->pc = 0x1AA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6F0u;
            // 0x1aa6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6F8u; }
        if (ctx->pc != 0x1AA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6F8u; }
        if (ctx->pc != 0x1AA6F8u) { return; }
    }
    ctx->pc = 0x1AA6F8u;
    // 0x1aa6f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6fc: 0x96230046  lhu         $v1, 0x46($s1)
    ctx->pc = 0x1aa6fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1aa700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa704: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AA704u;
    {
        const bool branch_taken_0x1aa704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA704u;
            // 0x1aa708: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa704) {
            ctx->pc = 0x1AA750u;
            goto label_1aa750;
        }
    }
    ctx->pc = 0x1AA70Cu;
    // 0x1aa70c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA70Cu;
    {
        const bool branch_taken_0x1aa70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA70Cu;
            // 0x1aa710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa70c) {
            ctx->pc = 0x1AA724u;
            goto label_1aa724;
        }
    }
    ctx->pc = 0x1AA714u;
    // 0x1aa714: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA714u;
    {
        const bool branch_taken_0x1aa714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa714) {
            ctx->pc = 0x1AA738u;
            goto label_1aa738;
        }
    }
    ctx->pc = 0x1AA71Cu;
    // 0x1aa71c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1AA71Cu;
    {
        const bool branch_taken_0x1aa71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA71Cu;
            // 0x1aa720: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa71c) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA724u;
label_1aa724:
    // 0x1aa724: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa728: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AA728u;
    {
        const bool branch_taken_0x1aa728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa728) {
            ctx->pc = 0x1AA790u;
            goto label_1aa790;
        }
    }
    ctx->pc = 0x1AA730u;
    // 0x1aa730: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1AA730u;
    {
        const bool branch_taken_0x1aa730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA730u;
            // 0x1aa734: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa730) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA738u;
label_1aa738:
    // 0x1aa738: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AA738u;
    {
        const bool branch_taken_0x1aa738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA738u;
            // 0x1aa73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa738) {
            ctx->pc = 0x1AA780u;
            goto label_1aa780;
        }
    }
    ctx->pc = 0x1AA740u;
    // 0x1aa740: 0x5200005b  beql        $s0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1AA740u;
    {
        const bool branch_taken_0x1aa740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa740) {
            ctx->pc = 0x1AA744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA740u;
            // 0x1aa744: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA748u;
    // 0x1aa748: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AA748u;
    {
        const bool branch_taken_0x1aa748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA748u;
            // 0x1aa74c: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa748) {
            ctx->pc = 0x1AA774u;
            goto label_1aa774;
        }
    }
    ctx->pc = 0x1AA750u;
label_1aa750:
    // 0x1aa750: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1AA750u;
    {
        const bool branch_taken_0x1aa750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA750u;
            // 0x1aa754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa750) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA758u;
    // 0x1aa758: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x1AA758u;
    SET_GPR_U32(ctx, 31, 0x1AA760u);
    ctx->pc = 0x1AA75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA758u;
            // 0x1aa75c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA760u; }
        if (ctx->pc != 0x1AA760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5bc0_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA760u; }
        if (ctx->pc != 0x1AA760u) { return; }
    }
    ctx->pc = 0x1AA760u;
    // 0x1aa760: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1AA760u;
    {
        const bool branch_taken_0x1aa760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa760) {
            ctx->pc = 0x1AA764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA760u;
            // 0x1aa764: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA768u;
    // 0x1aa768: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA768u;
    {
        const bool branch_taken_0x1aa768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA768u;
            // 0x1aa76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa768) {
            ctx->pc = 0x1AA780u;
            goto label_1aa780;
        }
    }
    ctx->pc = 0x1AA770u;
    // 0x1aa770: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1aa770u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1aa774:
    // 0x1aa774: 0x5642004e  bnel        $s2, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1AA774u;
    {
        const bool branch_taken_0x1aa774 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa774) {
            ctx->pc = 0x1AA778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA774u;
            // 0x1aa778: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA77Cu;
    // 0x1aa77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa780:
    // 0x1aa780: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA780u;
    SET_GPR_U32(ctx, 31, 0x1AA788u);
    ctx->pc = 0x1AA784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA780u;
            // 0x1aa784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA788u; }
        if (ctx->pc != 0x1AA788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA788u; }
        if (ctx->pc != 0x1AA788u) { return; }
    }
    ctx->pc = 0x1AA788u;
    // 0x1aa788: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1AA788u;
    {
        const bool branch_taken_0x1aa788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA788u;
            // 0x1aa78c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa788) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA790u;
label_1aa790:
    // 0x1aa790: 0x52000047  beql        $s0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1AA790u;
    {
        const bool branch_taken_0x1aa790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa790) {
            ctx->pc = 0x1AA794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA790u;
            // 0x1aa794: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA798u;
    // 0x1aa798: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1aa79c: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1AA79Cu;
    {
        const bool branch_taken_0x1aa79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa79c) {
            ctx->pc = 0x1AA7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA79Cu;
            // 0x1aa7a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA7A4u;
    // 0x1aa7a4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1aa7a8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1aa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1aa7ac: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1AA7ACu;
    {
        const bool branch_taken_0x1aa7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa7ac) {
            ctx->pc = 0x1AA7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7ACu;
            // 0x1aa7b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA7B4u;
    // 0x1aa7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7b8: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA7B8u;
    SET_GPR_U32(ctx, 31, 0x1AA7C0u);
    ctx->pc = 0x1AA7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7B8u;
            // 0x1aa7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7C0u; }
        if (ctx->pc != 0x1AA7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7C0u; }
        if (ctx->pc != 0x1AA7C0u) { return; }
    }
    ctx->pc = 0x1AA7C0u;
    // 0x1aa7c0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1AA7C0u;
    {
        const bool branch_taken_0x1aa7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7C0u;
            // 0x1aa7c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7c0) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA7C8u;
label_1aa7c8:
    // 0x1aa7c8: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA7C8u;
    {
        const bool branch_taken_0x1aa7c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7C8u;
            // 0x1aa7cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7c8) {
            ctx->pc = 0x1AA818u;
            goto label_1aa818;
        }
    }
    ctx->pc = 0x1AA7D0u;
    // 0x1aa7d0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x1aa7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1aa7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa7d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7dc: 0x0  nop
    ctx->pc = 0x1aa7dcu;
    // NOP
    // 0x1aa7e0: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1AA7E0u;
    {
        const bool branch_taken_0x1aa7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7E0u;
            // 0x1aa7e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7e0) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA7E8u;
    // 0x1aa7e8: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AA7E8u;
    SET_GPR_U32(ctx, 31, 0x1AA7F0u);
    ctx->pc = 0x1AA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7E8u;
            // 0x1aa7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7F0u; }
        if (ctx->pc != 0x1AA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7F0u; }
        if (ctx->pc != 0x1AA7F0u) { return; }
    }
    ctx->pc = 0x1AA7F0u;
    // 0x1aa7f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7f4: 0x0  nop
    ctx->pc = 0x1aa7f4u;
    // NOP
    // 0x1aa7f8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1AA7F8u;
    {
        const bool branch_taken_0x1aa7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7F8u;
            // 0x1aa7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7f8) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA800u;
    // 0x1aa800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa804: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1aa804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa808: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AA808u;
    SET_GPR_U32(ctx, 31, 0x1AA810u);
    ctx->pc = 0x1AA80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA808u;
            // 0x1aa80c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA810u; }
        if (ctx->pc != 0x1AA810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA810u; }
        if (ctx->pc != 0x1AA810u) { return; }
    }
    ctx->pc = 0x1AA810u;
    // 0x1aa810: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AA810u;
    {
        const bool branch_taken_0x1aa810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA810u;
            // 0x1aa814: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa810) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA818u;
label_1aa818:
    // 0x1aa818: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA818u;
    {
        const bool branch_taken_0x1aa818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA818u;
            // 0x1aa81c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa818) {
            ctx->pc = 0x1AA82Cu;
            goto label_1aa82c;
        }
    }
    ctx->pc = 0x1AA820u;
    // 0x1aa820: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1aa820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa824: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1AA824u;
    {
        const bool branch_taken_0x1aa824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA824u;
            // 0x1aa828: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa824) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA82Cu;
label_1aa82c:
    // 0x1aa82c: 0x54c20020  bnel        $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA82Cu;
    {
        const bool branch_taken_0x1aa82c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa82c) {
            ctx->pc = 0x1AA830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA82Cu;
            // 0x1aa830: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA834u;
    // 0x1aa834: 0x5600001e  bnel        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AA834u;
    {
        const bool branch_taken_0x1aa834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa834) {
            ctx->pc = 0x1AA838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA834u;
            // 0x1aa838: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA83Cu;
    // 0x1aa83c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aa83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aa840: 0x8c432618  lw          $v1, 0x2618($v0)
    ctx->pc = 0x1aa840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9752)));
    // 0x1aa844: 0x24422618  addiu       $v0, $v0, 0x2618
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9752));
    // 0x1aa848: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aa848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1aa84c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AA84Cu;
    {
        const bool branch_taken_0x1aa84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA84Cu;
            // 0x1aa850: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa84c) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA854u;
    // 0x1aa854: 0x0  nop
    ctx->pc = 0x1aa854u;
    // NOP
label_1aa858:
    // 0x1aa858: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1aa858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa85c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1aa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1aa860: 0x5451000f  bnel        $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA860u;
    {
        const bool branch_taken_0x1aa860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1aa860) {
            ctx->pc = 0x1AA864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA860u;
            // 0x1aa864: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8A0u;
            goto label_1aa8a0;
        }
    }
    ctx->pc = 0x1AA868u;
    // 0x1aa868: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1aa868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa86c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa870: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa874: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1aa874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa878: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1aa878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1aa87c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1aa87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1aa880: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1aa880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa884: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa888: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aa888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1aa88c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1aa88cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1aa890: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1AA890u;
    SET_GPR_U32(ctx, 31, 0x1AA898u);
    ctx->pc = 0x1AA894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA890u;
            // 0x1aa894: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA898u; }
        if (ctx->pc != 0x1AA898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA898u; }
        if (ctx->pc != 0x1AA898u) { return; }
    }
    ctx->pc = 0x1AA898u;
    // 0x1aa898: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA898u;
    {
        const bool branch_taken_0x1aa898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA898u;
            // 0x1aa89c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa898) {
            ctx->pc = 0x1AA8B0u;
            goto label_1aa8b0;
        }
    }
    ctx->pc = 0x1AA8A0u;
label_1aa8a0:
    // 0x1aa8a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aa8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8a4: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AA8A4u;
    {
        const bool branch_taken_0x1aa8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8A4u;
            // 0x1aa8a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8a4) {
            ctx->pc = 0x1AA858u;
            runtime->cooperativeGuestYield();
            goto label_1aa858;
        }
    }
    ctx->pc = 0x1AA8ACu;
label_1aa8ac:
    // 0x1aa8ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1aa8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa8b0:
    // 0x1aa8b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa8b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa8bc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1aa8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8C0u;
            // 0x1aa8c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA8C8u;
    // 0x1aa8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa8d0: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1AA8D0u;
    SET_GPR_U32(ctx, 31, 0x1AA8D8u);
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D8u; }
        if (ctx->pc != 0x1AA8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D8u; }
        if (ctx->pc != 0x1AA8D8u) { return; }
    }
    ctx->pc = 0x1AA8D8u;
    // 0x1aa8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8DCu;
            // 0x1aa8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA8E4u;
    // 0x1aa8e4: 0x0  nop
    ctx->pc = 0x1aa8e4u;
    // NOP
    // 0x1aa8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA8F0u;
    // 0x1aa8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa8f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa900: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA900u;
    {
        const bool branch_taken_0x1aa900 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA900u;
            // 0x1aa904: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa900) {
            ctx->pc = 0x1AA928u;
            goto label_1aa928;
        }
    }
    ctx->pc = 0x1AA908u;
    // 0x1aa908: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1aa908u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1aa90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa910: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AA910u;
    {
        const bool branch_taken_0x1aa910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa910) {
            ctx->pc = 0x1AA914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA910u;
            // 0x1aa914: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA918u;
    // 0x1aa918: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1aa918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1aa91c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa920: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AA920u;
    {
        const bool branch_taken_0x1aa920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA920u;
            // 0x1aa924: 0xac6200f8  sw          $v0, 0xF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa920) {
            ctx->pc = 0x1AA98Cu;
            goto label_1aa98c;
        }
    }
    ctx->pc = 0x1AA928u;
label_1aa928:
    // 0x1aa928: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa92c: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA92Cu;
    {
        const bool branch_taken_0x1aa92c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA92Cu;
            // 0x1aa930: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa92c) {
            ctx->pc = 0x1AA97Cu;
            goto label_1aa97c;
        }
    }
    ctx->pc = 0x1AA934u;
    // 0x1aa934: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1aa934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa938: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1aa938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa93c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa940: 0x0  nop
    ctx->pc = 0x1aa940u;
    // NOP
    // 0x1aa944: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1AA944u;
    {
        const bool branch_taken_0x1aa944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa944) {
            ctx->pc = 0x1AA948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA944u;
            // 0x1aa948: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA94Cu;
    // 0x1aa94c: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AA94Cu;
    SET_GPR_U32(ctx, 31, 0x1AA954u);
    ctx->pc = 0x1AA950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA94Cu;
            // 0x1aa950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA954u; }
        if (ctx->pc != 0x1AA954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA954u; }
        if (ctx->pc != 0x1AA954u) { return; }
    }
    ctx->pc = 0x1AA954u;
    // 0x1aa954: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa958: 0x0  nop
    ctx->pc = 0x1aa958u;
    // NOP
    // 0x1aa95c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AA95Cu;
    {
        const bool branch_taken_0x1aa95c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA95Cu;
            // 0x1aa960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa95c) {
            ctx->pc = 0x1AA98Cu;
            goto label_1aa98c;
        }
    }
    ctx->pc = 0x1AA964u;
    // 0x1aa964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa968: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1aa968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa96c: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AA96Cu;
    SET_GPR_U32(ctx, 31, 0x1AA974u);
    ctx->pc = 0x1AA970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA96Cu;
            // 0x1aa970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA974u; }
        if (ctx->pc != 0x1AA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA974u; }
        if (ctx->pc != 0x1AA974u) { return; }
    }
    ctx->pc = 0x1AA974u;
    // 0x1aa974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA974u;
    {
        const bool branch_taken_0x1aa974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA974u;
            // 0x1aa978: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa974) {
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA97Cu;
label_1aa97c:
    // 0x1aa97c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA97Cu;
    {
        const bool branch_taken_0x1aa97c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa97c) {
            ctx->pc = 0x1AA980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA97Cu;
            // 0x1aa980: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA990u;
            goto label_1aa990;
        }
    }
    ctx->pc = 0x1AA984u;
    // 0x1aa984: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1aa984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa988: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1aa988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1aa98c:
    // 0x1aa98c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa990:
    // 0x1aa990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa994: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1aa994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa998: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA998u;
            // 0x1aa99c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA9A0u;
    // 0x1aa9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa9a8: 0xc06a498  jal         func_1A9260
    ctx->pc = 0x1AA9A8u;
    SET_GPR_U32(ctx, 31, 0x1AA9B0u);
    ctx->pc = 0x1A9260u;
    if (runtime->hasFunction(0x1A9260u)) {
        auto targetFn = runtime->lookupFunction(0x1A9260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9B0u; }
        if (ctx->pc != 0x1AA9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9260_0x1a9260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9B0u; }
        if (ctx->pc != 0x1AA9B0u) { return; }
    }
    ctx->pc = 0x1AA9B0u;
    // 0x1aa9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9B4u;
            // 0x1aa9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA9BCu;
    // 0x1aa9bc: 0x0  nop
    ctx->pc = 0x1aa9bcu;
    // NOP
    // 0x1aa9c0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1aa9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1aa9c4: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x1aa9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
    // 0x1aa9c8: 0x7fb60260  sq          $s6, 0x260($sp)
    ctx->pc = 0x1aa9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 22));
    // 0x1aa9cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1aa9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9d0: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x1aa9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
    // 0x1aa9d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1aa9d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9d8: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x1aa9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
    // 0x1aa9dc: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x1aa9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
    // 0x1aa9e0: 0x7fb40280  sq          $s4, 0x280($sp)
    ctx->pc = 0x1aa9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 20));
    // 0x1aa9e4: 0x7fb50270  sq          $s5, 0x270($sp)
    ctx->pc = 0x1aa9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 21));
    // 0x1aa9e8: 0x7fb70250  sq          $s7, 0x250($sp)
    ctx->pc = 0x1aa9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 23));
    // 0x1aa9ec: 0x7fbe0240  sq          $fp, 0x240($sp)
    ctx->pc = 0x1aa9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 30));
    // 0x1aa9f0: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x1aa9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x1aa9f4: 0x12600187  beqz        $s3, . + 4 + (0x187 << 2)
    ctx->pc = 0x1AA9F4u;
    {
        const bool branch_taken_0x1aa9f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9F4u;
            // 0x1aa9f8: 0xe7b402d0  swc1        $f20, 0x2D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9f4) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AA9FCu;
    // 0x1aa9fc: 0xc06c522  jal         func_1B1488
    ctx->pc = 0x1AA9FCu;
    SET_GPR_U32(ctx, 31, 0x1AAA04u);
    ctx->pc = 0x1AAA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9FCu;
            // 0x1aaa00: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1488u;
    if (runtime->hasFunction(0x1B1488u)) {
        auto targetFn = runtime->lookupFunction(0x1B1488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA04u; }
        if (ctx->pc != 0x1AAA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1488_0x1b1488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA04u; }
        if (ctx->pc != 0x1AAA04u) { return; }
    }
    ctx->pc = 0x1AAA04u;
    // 0x1aaa04: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1aaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x1aaa08: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1aaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1aaa0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aaa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aaa10: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1aaa14: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1aaa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1aaa18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAA18u;
    {
        const bool branch_taken_0x1aaa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA18u;
            // 0x1aaa1c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa18) {
            ctx->pc = 0x1AAA30u;
            goto label_1aaa30;
        }
    }
    ctx->pc = 0x1AAA20u;
    // 0x1aaa20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAA24u;
    {
        const bool branch_taken_0x1aaa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA24u;
            // 0x1aaa28: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa24) {
            ctx->pc = 0x1AAA34u;
            goto label_1aaa34;
        }
    }
    ctx->pc = 0x1AAA2Cu;
    // 0x1aaa2c: 0x0  nop
    ctx->pc = 0x1aaa2cu;
    // NOP
label_1aaa30:
    // 0x1aaa30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aaa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa34:
    // 0x1aaa34: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1aaa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa38: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAA38u;
    {
        const bool branch_taken_0x1aaa38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa38) {
            ctx->pc = 0x1AAA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA38u;
            // 0x1aaa3c: 0x8ec300b0  lw          $v1, 0xB0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAA58u;
            goto label_1aaa58;
        }
    }
    ctx->pc = 0x1AAA40u;
    // 0x1aaa40: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1aaa44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aaa48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1aaa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1aaa4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1aaa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1aaa50: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1aaa50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1aaa54: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_1aaa58:
    // 0x1aaa58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aaa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aaa5c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAA5Cu;
    {
        const bool branch_taken_0x1aaa5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA5Cu;
            // 0x1aaa60: 0x26d000b0  addiu       $s0, $s6, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa5c) {
            ctx->pc = 0x1AAA84u;
            goto label_1aaa84;
        }
    }
    ctx->pc = 0x1AAA64u;
    // 0x1aaa64: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1aaa68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aaa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aaa6c: 0xac56cac8  sw          $s6, -0x3538($v0)
    ctx->pc = 0x1aaa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 22));
    // 0x1aaa70: 0x26c40058  addiu       $a0, $s6, 0x58
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x1aaa74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aaa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aaa78: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AAA78u;
    SET_GPR_U32(ctx, 31, 0x1AAA80u);
    ctx->pc = 0x1AAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA78u;
            // 0x1aaa7c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    }
    ctx->pc = 0x1AAA80u;
    // 0x1aaa80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aaa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aaa84:
    // 0x1aaa84: 0x8e1e0004  lw          $fp, 0x4($s0)
    ctx->pc = 0x1aaa84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aaa88: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAA88u;
    {
        const bool branch_taken_0x1aaa88 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa88) {
            ctx->pc = 0x1AAA9Cu;
            goto label_1aaa9c;
        }
    }
    ctx->pc = 0x1AAA90u;
    // 0x1aaa90: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x1aaa90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1aaa94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAA94u;
    {
        const bool branch_taken_0x1aaa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA94u;
            // 0x1aaa98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa94) {
            ctx->pc = 0x1AAAB8u;
            goto label_1aaab8;
        }
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0x1220015d  beqz        $s1, . + 4 + (0x15D << 2)
    ctx->pc = 0x1AAA9Cu;
    {
        const bool branch_taken_0x1aaa9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA9Cu;
            // 0x1aaaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa9c) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AAAA4u;
    // 0x1aaaa4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1aaaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aaaa8: 0xc04015e  jal         func_100578
    ctx->pc = 0x1AAAA8u;
    SET_GPR_U32(ctx, 31, 0x1AAAB0u);
    ctx->pc = 0x1AAAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAA8u;
            // 0x1aaaac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAB0u; }
        if (ctx->pc != 0x1AAAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAB0u; }
        if (ctx->pc != 0x1AAAB0u) { return; }
    }
    ctx->pc = 0x1AAAB0u;
    // 0x1aaab0: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x1AAAB0u;
    {
        const bool branch_taken_0x1aaab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAB0u;
            // 0x1aaab4: 0xe634003c  swc1        $f20, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaab0) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AAAB8u;
label_1aaab8:
    // 0x1aaab8: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x1aaab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x1aaabc: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1aaabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1aaac0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AAAC0u;
    {
        const bool branch_taken_0x1aaac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAC0u;
            // 0x1aaac4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaac0) {
            ctx->pc = 0x1AAAECu;
            goto label_1aaaec;
        }
    }
    ctx->pc = 0x1AAAC8u;
    // 0x1aaac8: 0x27c40001  addiu       $a0, $fp, 0x1
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1aaacc: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1aaaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1aaad0: 0xc0a441e  jal         func_291078
    ctx->pc = 0x1AAAD0u;
    SET_GPR_U32(ctx, 31, 0x1AAAD8u);
    ctx->pc = 0x1AAAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAD0u;
            // 0x1aaad4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAD8u; }
        if (ctx->pc != 0x1AAAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAD8u; }
        if (ctx->pc != 0x1AAAD8u) { return; }
    }
    ctx->pc = 0x1AAAD8u;
    // 0x1aaad8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1aaad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aaadc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1aaae0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1aaae4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1AAAE4u;
    {
        const bool branch_taken_0x1aaae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAE4u;
            // 0x1aaae8: 0xafa20224  sw          $v0, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaae4) {
            ctx->pc = 0x1AAC78u;
            goto label_1aac78;
        }
    }
    ctx->pc = 0x1AAAECu;
label_1aaaec:
    // 0x1aaaec: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1AAAECu;
    {
        const bool branch_taken_0x1aaaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAECu;
            // 0x1aaaf0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaec) {
            ctx->pc = 0x1AAC78u;
            goto label_1aac78;
        }
    }
    ctx->pc = 0x1AAAF4u;
    // 0x1aaaf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaf8: 0x37a40005  ori         $a0, $sp, 0x5
    ctx->pc = 0x1aaaf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)5);
    // 0x1aaafc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1aaafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1aab00: 0x24492a30  addiu       $t1, $v0, 0x2A30
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x1aab04: 0x89230003  lwl         $v1, 0x3($t1)
    ctx->pc = 0x1aab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1aab08: 0x99230000  lwr         $v1, 0x0($t1)
    ctx->pc = 0x1aab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1aab0c: 0x81270004  lb          $a3, 0x4($t1)
    ctx->pc = 0x1aab0cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1aab10: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1aab10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1aab14: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1aab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1aab18: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x1aab18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x1aab1c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1AAB1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB24u);
    ctx->pc = 0x1AAB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB1Cu;
            // 0x1aab20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB24u; }
        if (ctx->pc != 0x1AAB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB24u; }
        if (ctx->pc != 0x1AAB24u) { return; }
    }
    ctx->pc = 0x1AAB24u;
    // 0x1aab24: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x1aab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x1aab28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAB28u;
    {
        const bool branch_taken_0x1aab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB28u;
            // 0x1aab2c: 0x27c50001  addiu       $a1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab28) {
            ctx->pc = 0x1AAB34u;
            goto label_1aab34;
        }
    }
    ctx->pc = 0x1AAB30u;
label_1aab30:
    // 0x1aab30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aab34:
    // 0x1aab34: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1aab34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aab38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAB38u;
    {
        const bool branch_taken_0x1aab38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB38u;
            // 0x1aab3c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab38) {
            ctx->pc = 0x1AAB5Cu;
            goto label_1aab5c;
        }
    }
    ctx->pc = 0x1AAB40u;
    // 0x1aab40: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AAB40u;
    {
        const bool branch_taken_0x1aab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB40u;
            // 0x1aab44: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab40) {
            ctx->pc = 0x1AAB30u;
            runtime->cooperativeGuestYield();
            goto label_1aab30;
        }
    }
    ctx->pc = 0x1AAB48u;
    // 0x1aab48: 0x1062fff9  beq         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AAB48u;
    {
        const bool branch_taken_0x1aab48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB48u;
            // 0x1aab4c: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab48) {
            ctx->pc = 0x1AAB30u;
            runtime->cooperativeGuestYield();
            goto label_1aab30;
        }
    }
    ctx->pc = 0x1AAB50u;
    // 0x1aab50: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1AAB50u;
    SET_GPR_U32(ctx, 31, 0x1AAB58u);
    ctx->pc = 0x1AAB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB50u;
            // 0x1aab54: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB58u; }
        if (ctx->pc != 0x1AAB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB58u; }
        if (ctx->pc != 0x1AAB58u) { return; }
    }
    ctx->pc = 0x1AAB58u;
    // 0x1aab58: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x1aab58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_1aab5c:
    // 0x1aab5c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1aab5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1aab60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab64: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1aab64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1aab68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aab6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1aab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aab70: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1aab70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1aab74: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1aab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1aab78: 0x40f809  jalr        $v0
    ctx->pc = 0x1AAB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAB80u);
        ctx->pc = 0x1AAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB78u;
            // 0x1aab7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AAB80u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB80u; }
            if (ctx->pc != 0x1AAB80u) { return; }
        }
        }
    }
    ctx->pc = 0x1AAB80u;
    // 0x1aab80: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1aab80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1aab84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1aab84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aab88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aab8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1aab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1aab90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aab94: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1aab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aab98: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1aab9c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1aaba0: 0x40f809  jalr        $v0
    ctx->pc = 0x1AABA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AABA8u);
        ctx->pc = 0x1AABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABA0u;
            // 0x1aaba4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AABA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AABA8u; }
            if (ctx->pc != 0x1AABA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AABA8u;
    // 0x1aaba8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1AABA8u;
    SET_GPR_U32(ctx, 31, 0x1AABB0u);
    ctx->pc = 0x1AABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABA8u;
            // 0x1aabac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABB0u; }
        if (ctx->pc != 0x1AABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABB0u; }
        if (ctx->pc != 0x1AABB0u) { return; }
    }
    ctx->pc = 0x1AABB0u;
    // 0x1aabb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aabb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabb4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1aabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1aabb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aabbc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1aabc0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1aabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1aabc4: 0x40f809  jalr        $v0
    ctx->pc = 0x1AABC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AABCCu);
        ctx->pc = 0x1AABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABC4u;
            // 0x1aabc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AABCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AABCCu; }
            if (ctx->pc != 0x1AABCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1AABCCu;
    // 0x1aabcc: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AABCCu;
    {
        const bool branch_taken_0x1aabcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABCCu;
            // 0x1aabd0: 0x2682ec58  addiu       $v0, $s4, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabcc) {
            ctx->pc = 0x1AAC50u;
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AABD4u;
    // 0x1aabd4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1aabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1aabd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aabdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1aabdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1aabe0: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x1aabe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1aabe4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AABE4u;
    {
        const bool branch_taken_0x1aabe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABE4u;
            // 0x1aabe8: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabe4) {
            ctx->pc = 0x1AABF8u;
            goto label_1aabf8;
        }
    }
    ctx->pc = 0x1AABECu;
    // 0x1aabec: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1aabecu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1aabf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AABF0u;
    {
        const bool branch_taken_0x1aabf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABF0u;
            // 0x1aabf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabf0) {
            ctx->pc = 0x1AABFCu;
            goto label_1aabfc;
        }
    }
    ctx->pc = 0x1AABF8u;
label_1aabf8:
    // 0x1aabf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aabf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aabfc:
    // 0x1aabfc: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1aac00: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1aac00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aac04: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AAC04u;
    {
        const bool branch_taken_0x1aac04 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1AAC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC04u;
            // 0x1aac08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac04) {
            ctx->pc = 0x1AAC50u;
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC0Cu;
    // 0x1aac0c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aac10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aac14: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAC14u;
    {
        const bool branch_taken_0x1aac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1aac14) {
            ctx->pc = 0x1AAC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC14u;
            // 0x1aac18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC28u;
            goto label_1aac28;
        }
    }
    ctx->pc = 0x1AAC1Cu;
    // 0x1aac1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AAC1Cu;
    {
        const bool branch_taken_0x1aac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC1Cu;
            // 0x1aac20: 0x8e510044  lw          $s1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac1c) {
            ctx->pc = 0x1AAC50u;
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC24u;
    // 0x1aac24: 0x0  nop
    ctx->pc = 0x1aac24u;
    // NOP
label_1aac28:
    // 0x1aac28: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1aac28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1aac2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAC2Cu;
    {
        const bool branch_taken_0x1aac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC2Cu;
            // 0x1aac30: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac2c) {
            ctx->pc = 0x1AAC50u;
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC34u;
    // 0x1aac34: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1aac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1aac38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aac3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aac40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aac44: 0x5472fff8  bnel        $v1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AAC44u;
    {
        const bool branch_taken_0x1aac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1aac44) {
            ctx->pc = 0x1AAC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC44u;
            // 0x1aac48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC28u;
            runtime->cooperativeGuestYield();
            goto label_1aac28;
        }
    }
    ctx->pc = 0x1AAC4Cu;
    // 0x1aac4c: 0x8c710044  lw          $s1, 0x44($v1)
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1aac50:
    // 0x1aac50: 0x56200017  bnel        $s1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AAC50u;
    {
        const bool branch_taken_0x1aac50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac50) {
            ctx->pc = 0x1AAC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC50u;
            // 0x1aac54: 0x8e35001c  lw          $s5, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AACB0u;
            goto label_1aacb0;
        }
    }
    ctx->pc = 0x1AAC58u;
    // 0x1aac58: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1aac58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1aac5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1aac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac60: 0x24c642a8  addiu       $a2, $a2, 0x42A8
    ctx->pc = 0x1aac60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17064));
    // 0x1aac64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aac64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aac68: 0xc091258  jal         func_244960
    ctx->pc = 0x1AAC68u;
    SET_GPR_U32(ctx, 31, 0x1AAC70u);
    ctx->pc = 0x1AAC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC68u;
            // 0x1aac6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC70u; }
        if (ctx->pc != 0x1AAC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC70u; }
        if (ctx->pc != 0x1AAC70u) { return; }
    }
    ctx->pc = 0x1AAC70u;
    // 0x1aac70: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x1AAC70u;
    {
        const bool branch_taken_0x1aac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC70u;
            // 0x1aac74: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac70) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AAC78u;
label_1aac78:
    // 0x1aac78: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AAC78u;
    {
        const bool branch_taken_0x1aac78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac78) {
            ctx->pc = 0x1AAC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC78u;
            // 0x1aac7c: 0x8e35001c  lw          $s5, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AACB0u;
            goto label_1aacb0;
        }
    }
    ctx->pc = 0x1AAC80u;
    // 0x1aac80: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1aac80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1aac84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1aac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac88: 0x24c642c8  addiu       $a2, $a2, 0x42C8
    ctx->pc = 0x1aac88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17096));
    // 0x1aac8c: 0xc091258  jal         func_244960
    ctx->pc = 0x1AAC8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC94u);
    ctx->pc = 0x1AAC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC8Cu;
            // 0x1aac90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC94u; }
        if (ctx->pc != 0x1AAC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC94u; }
        if (ctx->pc != 0x1AAC94u) { return; }
    }
    ctx->pc = 0x1AAC94u;
    // 0x1aac94: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1AAC94u;
    {
        const bool branch_taken_0x1aac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC94u;
            // 0x1aac98: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac94) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AAC9Cu;
label_1aac9c:
    // 0x1aac9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1aac9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1aaca0: 0xc04015e  jal         func_100578
    ctx->pc = 0x1AACA0u;
    SET_GPR_U32(ctx, 31, 0x1AACA8u);
    ctx->pc = 0x1AACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACA0u;
            // 0x1aaca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA8u; }
        if (ctx->pc != 0x1AACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA8u; }
        if (ctx->pc != 0x1AACA8u) { return; }
    }
    ctx->pc = 0x1AACA8u;
    // 0x1aaca8: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1AACA8u;
    {
        const bool branch_taken_0x1aaca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACA8u;
            // 0x1aacac: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaca8) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AACB0u;
label_1aacb0:
    // 0x1aacb0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1aacb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacb4: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x1aacb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1aacb8: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1AACB8u;
    {
        const bool branch_taken_0x1aacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACB8u;
            // 0x1aacbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacb8) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AACC0u;
    // 0x1aacc0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1aacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1aacc4: 0x0  nop
    ctx->pc = 0x1aacc4u;
    // NOP
label_1aacc8:
    // 0x1aacc8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1aacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1aaccc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1aacd0: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1aacd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1aacd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1aacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1aacd8: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1AACD8u;
    {
        const bool branch_taken_0x1aacd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACD8u;
            // 0x1aacdc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacd8) {
            ctx->pc = 0x1AB000u;
            goto label_1ab000;
        }
    }
    ctx->pc = 0x1AACE0u;
label_1aace0:
    // 0x1aace0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1aace0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1aace4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aace8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1aace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aacec: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1aacecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aacf0: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x1aacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x1aacf4: 0x12e20006  beq         $s7, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AACF4u;
    {
        const bool branch_taken_0x1aacf4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACF4u;
            // 0x1aacf8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacf4) {
            ctx->pc = 0x1AAD10u;
            goto label_1aad10;
        }
    }
    ctx->pc = 0x1AACFCu;
    // 0x1aacfc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1AACFCu;
    SET_GPR_U32(ctx, 31, 0x1AAD04u);
    ctx->pc = 0x1AAD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACFCu;
            // 0x1aad00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD04u; }
        if (ctx->pc != 0x1AAD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD04u; }
        if (ctx->pc != 0x1AAD04u) { return; }
    }
    ctx->pc = 0x1AAD04u;
    // 0x1aad04: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1aad08: 0x544300b9  bnel        $v0, $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1AAD08u;
    {
        const bool branch_taken_0x1aad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aad08) {
            ctx->pc = 0x1AAD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD08u;
            // 0x1aad0c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAFF0u;
            goto label_1aaff0;
        }
    }
    ctx->pc = 0x1AAD10u;
label_1aad10:
    // 0x1aad10: 0x8ec300b8  lw          $v1, 0xB8($s6)
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
    // 0x1aad14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aad18: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAD18u;
    {
        const bool branch_taken_0x1aad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD18u;
            // 0x1aad1c: 0x26d000b8  addiu       $s0, $s6, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad18) {
            ctx->pc = 0x1AAD40u;
            goto label_1aad40;
        }
    }
    ctx->pc = 0x1AAD20u;
    // 0x1aad20: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x1aad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1aad24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aad28: 0xac56cac8  sw          $s6, -0x3538($v0)
    ctx->pc = 0x1aad28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 22));
    // 0x1aad2c: 0x26c40058  addiu       $a0, $s6, 0x58
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x1aad30: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aad34: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AAD34u;
    SET_GPR_U32(ctx, 31, 0x1AAD3Cu);
    ctx->pc = 0x1AAD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD34u;
            // 0x1aad38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD3Cu; }
        if (ctx->pc != 0x1AAD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD3Cu; }
        if (ctx->pc != 0x1AAD3Cu) { return; }
    }
    ctx->pc = 0x1AAD3Cu;
    // 0x1aad3c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aad40:
    // 0x1aad40: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1aad40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aad44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1aad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1aad48: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AAD48u;
    {
        const bool branch_taken_0x1aad48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD48u;
            // 0x1aad4c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad48) {
            ctx->pc = 0x1AAD90u;
            goto label_1aad90;
        }
    }
    ctx->pc = 0x1AAD50u;
    // 0x1aad50: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1aad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1aad54: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1AAD54u;
    {
        const bool branch_taken_0x1aad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD54u;
            // 0x1aad58: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad54) {
            ctx->pc = 0x1AB014u;
            goto label_1ab014;
        }
    }
    ctx->pc = 0x1AAD5Cu;
    // 0x1aad5c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1aad5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aad60: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1aad64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aad68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aad6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aad74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aad78: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1aad78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1aad7c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1aad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1aad80: 0x40f809  jalr        $v0
    ctx->pc = 0x1AAD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAD88u);
        ctx->pc = 0x1AAD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD80u;
            // 0x1aad84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AAD88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD88u; }
            if (ctx->pc != 0x1AAD88u) { return; }
        }
        }
    }
    ctx->pc = 0x1AAD88u;
    // 0x1aad88: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1AAD88u;
    {
        const bool branch_taken_0x1aad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD88u;
            // 0x1aad8c: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad88) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AAD90u;
label_1aad90:
    // 0x1aad90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1aad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1aad94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AAD94u;
    {
        const bool branch_taken_0x1aad94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD94u;
            // 0x1aad98: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad94) {
            ctx->pc = 0x1AADD0u;
            goto label_1aadd0;
        }
    }
    ctx->pc = 0x1AAD9Cu;
    // 0x1aad9c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1aad9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aada0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1aada4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1aada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1aada8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aada8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aadac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aadacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aadb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aadb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aadb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aadb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1aadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1aadbc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1aadbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aadc0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1aadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1aadc4: 0x40f809  jalr        $v0
    ctx->pc = 0x1AADC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AADCCu);
        ctx->pc = 0x1AADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADC4u;
            // 0x1aadc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AADCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AADCCu; }
            if (ctx->pc != 0x1AADCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1AADCCu;
    // 0x1aadcc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1aadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1aadd0:
    // 0x1aadd0: 0x12620091  beq         $s3, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1AADD0u;
    {
        const bool branch_taken_0x1aadd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADD0u;
            // 0x1aadd4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadd0) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AADD8u;
    // 0x1aadd8: 0xc06c67a  jal         func_1B19E8
    ctx->pc = 0x1AADD8u;
    SET_GPR_U32(ctx, 31, 0x1AADE0u);
    ctx->pc = 0x1AADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADD8u;
            // 0x1aaddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B19E8u;
    if (runtime->hasFunction(0x1B19E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B19E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADE0u; }
        if (ctx->pc != 0x1AADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19E8_0x1b19e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADE0u; }
        if (ctx->pc != 0x1AADE0u) { return; }
    }
    ctx->pc = 0x1AADE0u;
    // 0x1aade0: 0x14570014  bne         $v0, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AADE0u;
    {
        const bool branch_taken_0x1aade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1aade0) {
            ctx->pc = 0x1AAE34u;
            goto label_1aae34;
        }
    }
    ctx->pc = 0x1AADE8u;
    // 0x1aade8: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x1AADE8u;
    SET_GPR_U32(ctx, 31, 0x1AADF0u);
    ctx->pc = 0x1AADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADE8u;
            // 0x1aadec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF0u; }
        if (ctx->pc != 0x1AADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF0u; }
        if (ctx->pc != 0x1AADF0u) { return; }
    }
    ctx->pc = 0x1AADF0u;
    // 0x1aadf0: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x1aadf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1aadf4: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x1aadf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1aadf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AADF8u;
    {
        const bool branch_taken_0x1aadf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADF8u;
            // 0x1aadfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadf8) {
            ctx->pc = 0x1AAE08u;
            goto label_1aae08;
        }
    }
    ctx->pc = 0x1AAE00u;
    // 0x1aae00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAE00u;
    {
        const bool branch_taken_0x1aae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE00u;
            // 0x1aae04: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae00) {
            ctx->pc = 0x1AAE14u;
            goto label_1aae14;
        }
    }
    ctx->pc = 0x1AAE08u;
label_1aae08:
    // 0x1aae08: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x1aae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1aae0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae10: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1aae10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1aae14:
    // 0x1aae14: 0xa41026  xor         $v0, $a1, $a0
    ctx->pc = 0x1aae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1aae18: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1aae18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aae1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAE1Cu;
    {
        const bool branch_taken_0x1aae1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE1Cu;
            // 0x1aae20: 0x32630008  andi        $v1, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae1c) {
            ctx->pc = 0x1AAE34u;
            goto label_1aae34;
        }
    }
    ctx->pc = 0x1AAE24u;
    // 0x1aae24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae28: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x1aae28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1aae2c: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AAE2Cu;
    {
        const bool branch_taken_0x1aae2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae2c) {
            ctx->pc = 0x1AAE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE2Cu;
            // 0x1aae30: 0x8ec300c8  lw          $v1, 0xC8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAEC4u;
            goto label_1aaec4;
        }
    }
    ctx->pc = 0x1AAE34u;
label_1aae34:
    // 0x1aae34: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x1AAE34u;
    SET_GPR_U32(ctx, 31, 0x1AAE3Cu);
    ctx->pc = 0x1AAE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE34u;
            // 0x1aae38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE3Cu; }
        if (ctx->pc != 0x1AAE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE3Cu; }
        if (ctx->pc != 0x1AAE3Cu) { return; }
    }
    ctx->pc = 0x1AAE3Cu;
    // 0x1aae3c: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1aae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x1aae40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAE40u;
    {
        const bool branch_taken_0x1aae40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE40u;
            // 0x1aae44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae40) {
            ctx->pc = 0x1AAE60u;
            goto label_1aae60;
        }
    }
    ctx->pc = 0x1AAE48u;
    // 0x1aae48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1aae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aae4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aae50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aae54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae58: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1AAE58u;
    SET_GPR_U32(ctx, 31, 0x1AAE60u);
    ctx->pc = 0x1AAE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE58u;
            // 0x1aae5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE60u; }
        if (ctx->pc != 0x1AAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE60u; }
        if (ctx->pc != 0x1AAE60u) { return; }
    }
    ctx->pc = 0x1AAE60u;
label_1aae60:
    // 0x1aae60: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1aae60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aae64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aae6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae70: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1aae70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aae74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aae74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aae78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae7c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1AAE7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE84u);
    ctx->pc = 0x1AAE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE7Cu;
            // 0x1aae80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE84u; }
        if (ctx->pc != 0x1AAE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE84u; }
        if (ctx->pc != 0x1AAE84u) { return; }
    }
    ctx->pc = 0x1AAE84u;
    // 0x1aae84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1aae84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae88: 0x5280000e  beql        $s4, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AAE88u;
    {
        const bool branch_taken_0x1aae88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae88) {
            ctx->pc = 0x1AAE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE88u;
            // 0x1aae8c: 0x8ec300c8  lw          $v1, 0xC8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAEC4u;
            goto label_1aaec4;
        }
    }
    ctx->pc = 0x1AAE90u;
label_1aae90:
    // 0x1aae90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1aae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1aae94: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAE94u;
    {
        const bool branch_taken_0x1aae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae94) {
            ctx->pc = 0x1AAE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE94u;
            // 0x1aae98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAEB4u;
            goto label_1aaeb4;
        }
    }
    ctx->pc = 0x1AAE9Cu;
    // 0x1aae9c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1aaea0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1aaea4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1aaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1aaea8: 0x40f809  jalr        $v0
    ctx->pc = 0x1AAEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAEB0u);
        ctx->pc = 0x1AAEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEA8u;
            // 0x1aaeac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AAEB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEB0u; }
            if (ctx->pc != 0x1AAEB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1AAEB0u;
    // 0x1aaeb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aaeb4:
    // 0x1aaeb4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1aaeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1aaeb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AAEB8u;
    {
        const bool branch_taken_0x1aaeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEB8u;
            // 0x1aaebc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaeb8) {
            ctx->pc = 0x1AAE90u;
            runtime->cooperativeGuestYield();
            goto label_1aae90;
        }
    }
    ctx->pc = 0x1AAEC0u;
    // 0x1aaec0: 0x8ec300c8  lw          $v1, 0xC8($s6)
    ctx->pc = 0x1aaec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_1aaec4:
    // 0x1aaec4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aaec8: 0x10720009  beq         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAEC8u;
    {
        const bool branch_taken_0x1aaec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AAECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEC8u;
            // 0x1aaecc: 0x26d000c8  addiu       $s0, $s6, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaec8) {
            ctx->pc = 0x1AAEF0u;
            goto label_1aaef0;
        }
    }
    ctx->pc = 0x1AAED0u;
    // 0x1aaed0: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x1aaed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1aaed4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aaed8: 0xac56cac8  sw          $s6, -0x3538($v0)
    ctx->pc = 0x1aaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 22));
    // 0x1aaedc: 0x26c40058  addiu       $a0, $s6, 0x58
    ctx->pc = 0x1aaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x1aaee0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aaee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aaee4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AAEE4u;
    SET_GPR_U32(ctx, 31, 0x1AAEECu);
    ctx->pc = 0x1AAEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEE4u;
            // 0x1aaee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEECu; }
        if (ctx->pc != 0x1AAEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEECu; }
        if (ctx->pc != 0x1AAEECu) { return; }
    }
    ctx->pc = 0x1AAEECu;
    // 0x1aaeec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aaeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aaef0:
    // 0x1aaef0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1aaef4: 0x1262ff69  beq         $s3, $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x1AAEF4u;
    {
        const bool branch_taken_0x1aaef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEF4u;
            // 0x1aaef8: 0xc6140004  lwc1        $f20, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaef4) {
            ctx->pc = 0x1AAC9Cu;
            runtime->cooperativeGuestYield();
            goto label_1aac9c;
        }
    }
    ctx->pc = 0x1AAEFCu;
    // 0x1aaefc: 0x8ec300c0  lw          $v1, 0xC0($s6)
    ctx->pc = 0x1aaefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x1aaf00: 0x10720009  beq         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAF00u;
    {
        const bool branch_taken_0x1aaf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF00u;
            // 0x1aaf04: 0x26d000c0  addiu       $s0, $s6, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf00) {
            ctx->pc = 0x1AAF28u;
            goto label_1aaf28;
        }
    }
    ctx->pc = 0x1AAF08u;
    // 0x1aaf08: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x1aaf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1aaf0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aaf10: 0xac56cac8  sw          $s6, -0x3538($v0)
    ctx->pc = 0x1aaf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 22));
    // 0x1aaf14: 0x26c40058  addiu       $a0, $s6, 0x58
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x1aaf18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1aaf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aaf1c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AAF1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF24u);
    ctx->pc = 0x1AAF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF1Cu;
            // 0x1aaf20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF24u; }
        if (ctx->pc != 0x1AAF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF24u; }
        if (ctx->pc != 0x1AAF24u) { return; }
    }
    ctx->pc = 0x1AAF24u;
    // 0x1aaf24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aaf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aaf28:
    // 0x1aaf28: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1aaf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1aaf2c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAF2Cu;
    {
        const bool branch_taken_0x1aaf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF2Cu;
            // 0x1aaf30: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf2c) {
            ctx->pc = 0x1AAF38u;
            goto label_1aaf38;
        }
    }
    ctx->pc = 0x1AAF34u;
    // 0x1aaf34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aaf34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aaf38:
    // 0x1aaf38: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x1aaf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x1aaf3c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AAF3Cu;
    {
        const bool branch_taken_0x1aaf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF3Cu;
            // 0x1aaf40: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf3c) {
            ctx->pc = 0x1AAF84u;
            goto label_1aaf84;
        }
    }
    ctx->pc = 0x1AAF44u;
    // 0x1aaf44: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AAF44u;
    {
        const bool branch_taken_0x1aaf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF44u;
            // 0x1aaf48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf44) {
            ctx->pc = 0x1AAF7Cu;
            goto label_1aaf7c;
        }
    }
    ctx->pc = 0x1AAF4Cu;
    // 0x1aaf4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaf4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf50: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1aaf50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaf54: 0x0  nop
    ctx->pc = 0x1aaf54u;
    // NOP
    // 0x1aaf58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAF58u;
    {
        const bool branch_taken_0x1aaf58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF58u;
            // 0x1aaf5c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf58) {
            ctx->pc = 0x1AAF68u;
            goto label_1aaf68;
        }
    }
    ctx->pc = 0x1AAF60u;
    // 0x1aaf60: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x1AAF60u;
    SET_GPR_U32(ctx, 31, 0x1AAF68u);
    ctx->pc = 0x1AAF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF60u;
            // 0x1aaf64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF68u; }
        if (ctx->pc != 0x1AAF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF68u; }
        if (ctx->pc != 0x1AAF68u) { return; }
    }
    ctx->pc = 0x1AAF68u;
label_1aaf68:
    // 0x1aaf68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1aaf68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1aaf6c: 0xc04015e  jal         func_100578
    ctx->pc = 0x1AAF6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF74u);
    ctx->pc = 0x1AAF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF6Cu;
            // 0x1aaf70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF74u; }
        if (ctx->pc != 0x1AAF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF74u; }
        if (ctx->pc != 0x1AAF74u) { return; }
    }
    ctx->pc = 0x1AAF74u;
    // 0x1aaf74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAF74u;
    {
        const bool branch_taken_0x1aaf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF74u;
            // 0x1aaf78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf74) {
            ctx->pc = 0x1AAF88u;
            goto label_1aaf88;
        }
    }
    ctx->pc = 0x1AAF7Cu;
label_1aaf7c:
    // 0x1aaf7c: 0xc04015e  jal         func_100578
    ctx->pc = 0x1AAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF84u);
    ctx->pc = 0x1AAF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF7Cu;
            // 0x1aaf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF84u; }
        if (ctx->pc != 0x1AAF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF84u; }
        if (ctx->pc != 0x1AAF84u) { return; }
    }
    ctx->pc = 0x1AAF84u;
label_1aaf84:
    // 0x1aaf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf88:
    // 0x1aaf88: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x1AAF88u;
    SET_GPR_U32(ctx, 31, 0x1AAF90u);
    ctx->pc = 0x1AAF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF88u;
            // 0x1aaf8c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF90u; }
        if (ctx->pc != 0x1AAF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF90u; }
        if (ctx->pc != 0x1AAF90u) { return; }
    }
    ctx->pc = 0x1AAF90u;
    // 0x1aaf90: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x1aaf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1aaf94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAF94u;
    {
        const bool branch_taken_0x1aaf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF94u;
            // 0x1aaf98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf94) {
            ctx->pc = 0x1AAFACu;
            goto label_1aafac;
        }
    }
    ctx->pc = 0x1AAF9Cu;
    // 0x1aaf9c: 0xc040298  jal         func_100A60
    ctx->pc = 0x1AAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1AAFA4u);
    ctx->pc = 0x1AAFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF9Cu;
            // 0x1aafa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFA4u; }
        if (ctx->pc != 0x1AAFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFA4u; }
        if (ctx->pc != 0x1AAFA4u) { return; }
    }
    ctx->pc = 0x1AAFA4u;
    // 0x1aafa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AAFA4u;
    {
        const bool branch_taken_0x1aafa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFA4u;
            // 0x1aafa8: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafa4) {
            ctx->pc = 0x1AAFD4u;
            goto label_1aafd4;
        }
    }
    ctx->pc = 0x1AAFACu;
label_1aafac:
    // 0x1aafac: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x1aafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1aafb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAFB0u;
    {
        const bool branch_taken_0x1aafb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aafb0) {
            ctx->pc = 0x1AAFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFB0u;
            // 0x1aafb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAFC8u;
            goto label_1aafc8;
        }
    }
    ctx->pc = 0x1AAFB8u;
    // 0x1aafb8: 0xc040298  jal         func_100A60
    ctx->pc = 0x1AAFB8u;
    SET_GPR_U32(ctx, 31, 0x1AAFC0u);
    ctx->pc = 0x1AAFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFB8u;
            // 0x1aafbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFC0u; }
        if (ctx->pc != 0x1AAFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFC0u; }
        if (ctx->pc != 0x1AAFC0u) { return; }
    }
    ctx->pc = 0x1AAFC0u;
    // 0x1aafc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAFC0u;
    {
        const bool branch_taken_0x1aafc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFC0u;
            // 0x1aafc4: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafc0) {
            ctx->pc = 0x1AAFD4u;
            goto label_1aafd4;
        }
    }
    ctx->pc = 0x1AAFC8u;
label_1aafc8:
    // 0x1aafc8: 0xc040298  jal         func_100A60
    ctx->pc = 0x1AAFC8u;
    SET_GPR_U32(ctx, 31, 0x1AAFD0u);
    ctx->pc = 0x1AAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFC8u;
            // 0x1aafcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD0u; }
        if (ctx->pc != 0x1AAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD0u; }
        if (ctx->pc != 0x1AAFD0u) { return; }
    }
    ctx->pc = 0x1AAFD0u;
    // 0x1aafd0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_1aafd4:
    // 0x1aafd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1aafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafd8: 0x24c642e8  addiu       $a2, $a2, 0x42E8
    ctx->pc = 0x1aafd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17128));
    // 0x1aafdc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1aafdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafe0: 0xc091258  jal         func_244960
    ctx->pc = 0x1AAFE0u;
    SET_GPR_U32(ctx, 31, 0x1AAFE8u);
    ctx->pc = 0x1AAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFE0u;
            // 0x1aafe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFE8u; }
        if (ctx->pc != 0x1AAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFE8u; }
        if (ctx->pc != 0x1AAFE8u) { return; }
    }
    ctx->pc = 0x1AAFE8u;
    // 0x1aafe8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AAFE8u;
    {
        const bool branch_taken_0x1aafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFE8u;
            // 0x1aafec: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafe8) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AAFF0u;
label_1aaff0:
    // 0x1aaff0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aaff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1aaff4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1aaff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaff8: 0x1440ff39  bnez        $v0, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x1AAFF8u;
    {
        const bool branch_taken_0x1aaff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFF8u;
            // 0x1aaffc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff8) {
            ctx->pc = 0x1AACE0u;
            runtime->cooperativeGuestYield();
            goto label_1aace0;
        }
    }
    ctx->pc = 0x1AB000u;
label_1ab000:
    // 0x1ab000: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x1ab000u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1ab004: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ab004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ab008: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1ab008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab00c: 0x1440ff2e  bnez        $v0, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x1AB00Cu;
    {
        const bool branch_taken_0x1ab00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB00Cu;
            // 0x1ab010: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab00c) {
            ctx->pc = 0x1AACC8u;
            runtime->cooperativeGuestYield();
            goto label_1aacc8;
        }
    }
    ctx->pc = 0x1AB014u;
label_1ab014:
    // 0x1ab014: 0x7bb002c0  lq          $s0, 0x2C0($sp)
    ctx->pc = 0x1ab014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_1ab018:
    // 0x1ab018: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x1ab018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1ab01c: 0x7bb202a0  lq          $s2, 0x2A0($sp)
    ctx->pc = 0x1ab01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1ab020: 0x7bb30290  lq          $s3, 0x290($sp)
    ctx->pc = 0x1ab020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1ab024: 0x7bb40280  lq          $s4, 0x280($sp)
    ctx->pc = 0x1ab024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1ab028: 0x7bb50270  lq          $s5, 0x270($sp)
    ctx->pc = 0x1ab028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1ab02c: 0x7bb60260  lq          $s6, 0x260($sp)
    ctx->pc = 0x1ab02cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1ab030: 0x7bb70250  lq          $s7, 0x250($sp)
    ctx->pc = 0x1ab030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1ab034: 0x7bbe0240  lq          $fp, 0x240($sp)
    ctx->pc = 0x1ab034u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1ab038: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x1ab038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1ab03c: 0xc7b402d0  lwc1        $f20, 0x2D0($sp)
    ctx->pc = 0x1ab03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab040: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB040u;
            // 0x1ab044: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB048u;
    // 0x1ab048: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB050u;
    // 0x1ab050: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB058u;
    // 0x1ab058: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB060u;
    // 0x1ab060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab064: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ab064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ab06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab074: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB074u;
    {
        const bool branch_taken_0x1ab074 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB074u;
            // 0x1ab078: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab074) {
            ctx->pc = 0x1AB0C4u;
            goto label_1ab0c4;
        }
    }
    ctx->pc = 0x1AB07Cu;
    // 0x1ab07c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab080: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ab080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab084: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab088: 0x0  nop
    ctx->pc = 0x1ab088u;
    // NOP
    // 0x1ab08c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB08Cu;
    {
        const bool branch_taken_0x1ab08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab08c) {
            ctx->pc = 0x1AB090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB08Cu;
            // 0x1ab090: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB0DCu;
            goto label_1ab0dc;
        }
    }
    ctx->pc = 0x1AB094u;
    // 0x1ab094: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AB094u;
    SET_GPR_U32(ctx, 31, 0x1AB09Cu);
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB09Cu; }
        if (ctx->pc != 0x1AB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB09Cu; }
        if (ctx->pc != 0x1AB09Cu) { return; }
    }
    ctx->pc = 0x1AB09Cu;
    // 0x1ab09c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab09cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab0a0: 0x0  nop
    ctx->pc = 0x1ab0a0u;
    // NOP
    // 0x1ab0a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1AB0A4u;
    {
        const bool branch_taken_0x1ab0a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0A4u;
            // 0x1ab0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0a4) {
            ctx->pc = 0x1AB0D8u;
            goto label_1ab0d8;
        }
    }
    ctx->pc = 0x1AB0ACu;
    // 0x1ab0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b0: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1ab0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ab0b4: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0B4u;
            // 0x1ab0b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0BCu; }
        if (ctx->pc != 0x1AB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0BCu; }
        if (ctx->pc != 0x1AB0BCu) { return; }
    }
    ctx->pc = 0x1AB0BCu;
    // 0x1ab0bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB0BCu;
    {
        const bool branch_taken_0x1ab0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0BCu;
            // 0x1ab0c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0bc) {
            ctx->pc = 0x1AB0DCu;
            goto label_1ab0dc;
        }
    }
    ctx->pc = 0x1AB0C4u;
label_1ab0c4:
    // 0x1ab0c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab0c8: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB0C8u;
    {
        const bool branch_taken_0x1ab0c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab0c8) {
            ctx->pc = 0x1AB0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0C8u;
            // 0x1ab0cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB0DCu;
            goto label_1ab0dc;
        }
    }
    ctx->pc = 0x1AB0D0u;
    // 0x1ab0d0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ab0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab0d4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1ab0d8:
    // 0x1ab0d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab0dc:
    // 0x1ab0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab0e0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ab0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0E4u;
            // 0x1ab0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB0ECu;
    // 0x1ab0ec: 0x0  nop
    ctx->pc = 0x1ab0ecu;
    // NOP
    // 0x1ab0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab0f8: 0xc06a498  jal         func_1A9260
    ctx->pc = 0x1AB0F8u;
    SET_GPR_U32(ctx, 31, 0x1AB100u);
    ctx->pc = 0x1A9260u;
    if (runtime->hasFunction(0x1A9260u)) {
        auto targetFn = runtime->lookupFunction(0x1A9260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB100u; }
        if (ctx->pc != 0x1AB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9260_0x1a9260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB100u; }
        if (ctx->pc != 0x1AB100u) { return; }
    }
    ctx->pc = 0x1AB100u;
    // 0x1ab100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab104: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB104u;
            // 0x1ab108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB10Cu;
    // 0x1ab10c: 0x0  nop
    ctx->pc = 0x1ab10cu;
    // NOP
    // 0x1ab110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab114: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ab114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ab118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab120: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ab120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ab124: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ab124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab128: 0x1240006f  beqz        $s2, . + 4 + (0x6F << 2)
    ctx->pc = 0x1AB128u;
    {
        const bool branch_taken_0x1ab128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB128u;
            // 0x1ab12c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab128) {
            ctx->pc = 0x1AB2E8u;
            goto label_1ab2e8;
        }
    }
    ctx->pc = 0x1AB130u;
    // 0x1ab130: 0xc06c522  jal         func_1B1488
    ctx->pc = 0x1AB130u;
    SET_GPR_U32(ctx, 31, 0x1AB138u);
    ctx->pc = 0x1B1488u;
    if (runtime->hasFunction(0x1B1488u)) {
        auto targetFn = runtime->lookupFunction(0x1B1488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB138u; }
        if (ctx->pc != 0x1AB138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1488_0x1b1488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB138u; }
        if (ctx->pc != 0x1AB138u) { return; }
    }
    ctx->pc = 0x1AB138u;
    // 0x1ab138: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x1ab138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1ab13c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AB13Cu;
    {
        const bool branch_taken_0x1ab13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB13Cu;
            // 0x1ab140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab13c) {
            ctx->pc = 0x1AB17Cu;
            goto label_1ab17c;
        }
    }
    ctx->pc = 0x1AB144u;
    // 0x1ab144: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ab144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ab148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab14c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB14Cu;
    {
        const bool branch_taken_0x1ab14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB14Cu;
            // 0x1ab150: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab14c) {
            ctx->pc = 0x1AB17Cu;
            goto label_1ab17c;
        }
    }
    ctx->pc = 0x1AB154u;
    // 0x1ab154: 0x0  nop
    ctx->pc = 0x1ab154u;
    // NOP
label_1ab158:
    // 0x1ab158: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ab158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ab15c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ab15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ab160: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ab160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ab164: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB164u;
    {
        const bool branch_taken_0x1ab164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab164) {
            ctx->pc = 0x1AB168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB164u;
            // 0x1ab168: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB180u;
            goto label_1ab180;
        }
    }
    ctx->pc = 0x1AB16Cu;
    // 0x1ab16c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ab16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab170: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab174: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AB174u;
    {
        const bool branch_taken_0x1ab174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB174u;
            // 0x1ab178: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab174) {
            ctx->pc = 0x1AB158u;
            runtime->cooperativeGuestYield();
            goto label_1ab158;
        }
    }
    ctx->pc = 0x1AB17Cu;
label_1ab17c:
    // 0x1ab17c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab180:
    // 0x1ab180: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1ab180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1ab184: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB184u;
    {
        const bool branch_taken_0x1ab184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB184u;
            // 0x1ab188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab184) {
            ctx->pc = 0x1AB1BCu;
            goto label_1ab1bc;
        }
    }
    ctx->pc = 0x1AB18Cu;
    // 0x1ab18c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ab18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab190: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1ab190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1ab194: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1ab194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab198: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab19c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1ab1a0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ab1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ab1a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab1a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab1ac: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB1ACu;
    {
        const bool branch_taken_0x1ab1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AB1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1ACu;
            // 0x1ab1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1ac) {
            ctx->pc = 0x1AB1B8u;
            goto label_1ab1b8;
        }
    }
    ctx->pc = 0x1AB1B4u;
    // 0x1ab1b4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1ab1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ab1b8:
    // 0x1ab1b8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ab1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1bc:
    // 0x1ab1bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AB1BCu;
    {
        const bool branch_taken_0x1ab1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1bc) {
            ctx->pc = 0x1AB1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1BCu;
            // 0x1ab1c0: 0x8c4601a4  lw          $a2, 0x1A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB1C4u;
            goto label_1ab1c4;
        }
    }
    ctx->pc = 0x1AB1C4u;
label_1ab1c4:
    // 0x1ab1c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ab1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ab1c8: 0x8c42ecc0  lw          $v0, -0x1340($v0)
    ctx->pc = 0x1ab1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962368)));
    // 0x1ab1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ab1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ab1d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ab1d4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1ab1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ab1d8: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AB1D8u;
    {
        const bool branch_taken_0x1ab1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1D8u;
            // 0x1ab1dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1d8) {
            ctx->pc = 0x1AB24Cu;
            goto label_1ab24c;
        }
    }
    ctx->pc = 0x1AB1E0u;
    // 0x1ab1e0: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x1ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1ab1e4: 0x0  nop
    ctx->pc = 0x1ab1e4u;
    // NOP
label_1ab1e8:
    // 0x1ab1e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ab1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1ec: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x1ab1ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1ab1f0: 0x52260014  beql        $s1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AB1F0u;
    {
        const bool branch_taken_0x1ab1f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x1ab1f0) {
            ctx->pc = 0x1AB1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1F0u;
            // 0x1ab1f4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB244u;
            goto label_1ab244;
        }
    }
    ctx->pc = 0x1AB1F8u;
    // 0x1ab1f8: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1ab1fc: 0x4620011  bltzl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB1FCu;
    {
        const bool branch_taken_0x1ab1fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ab1fc) {
            ctx->pc = 0x1AB200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1FCu;
            // 0x1ab200: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB244u;
            goto label_1ab244;
        }
    }
    ctx->pc = 0x1AB204u;
    // 0x1ab204: 0x96050040  lhu         $a1, 0x40($s0)
    ctx->pc = 0x1ab204u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1ab208: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB208u;
    {
        const bool branch_taken_0x1ab208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ab208) {
            ctx->pc = 0x1AB238u;
            goto label_1ab238;
        }
    }
    ctx->pc = 0x1AB210u;
    // 0x1ab210: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1ab214: 0x0  nop
    ctx->pc = 0x1ab214u;
    // NOP
label_1ab218:
    // 0x1ab218: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ab218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab21c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ab220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab224: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1ab224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ab228: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB228u;
    {
        const bool branch_taken_0x1ab228 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ab228) {
            ctx->pc = 0x1AB22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB228u;
            // 0x1ab22c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB244u;
            goto label_1ab244;
        }
    }
    ctx->pc = 0x1AB230u;
    // 0x1ab230: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AB230u;
    {
        const bool branch_taken_0x1ab230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ab230) {
            ctx->pc = 0x1AB234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB230u;
            // 0x1ab234: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB218u;
            runtime->cooperativeGuestYield();
            goto label_1ab218;
        }
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB238u;
    {
        const bool branch_taken_0x1ab238 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ab238) {
            ctx->pc = 0x1AB24Cu;
            goto label_1ab24c;
        }
    }
    ctx->pc = 0x1AB240u;
    // 0x1ab240: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab244:
    // 0x1ab244: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AB244u;
    {
        const bool branch_taken_0x1ab244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB244u;
            // 0x1ab248: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab244) {
            ctx->pc = 0x1AB1E8u;
            runtime->cooperativeGuestYield();
            goto label_1ab1e8;
        }
    }
    ctx->pc = 0x1AB24Cu;
label_1ab24c:
    // 0x1ab24c: 0x52200027  beql        $s1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AB24Cu;
    {
        const bool branch_taken_0x1ab24c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab24c) {
            ctx->pc = 0x1AB250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB24Cu;
            // 0x1ab250: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB2ECu;
            goto label_1ab2ec;
        }
    }
    ctx->pc = 0x1AB254u;
    // 0x1ab254: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1ab254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab258: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ab258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ab25c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB25Cu;
    {
        const bool branch_taken_0x1ab25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab25c) {
            ctx->pc = 0x1AB260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB25Cu;
            // 0x1ab260: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB298u;
            goto label_1ab298;
        }
    }
    ctx->pc = 0x1AB264u;
    // 0x1ab264: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1ab264u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ab268: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ab268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ab26c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ab270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ab274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab27c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab280: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ab284: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ab284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ab288: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ab288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ab28c: 0x40f809  jalr        $v0
    ctx->pc = 0x1AB28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB294u);
        ctx->pc = 0x1AB290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB28Cu;
            // 0x1ab290: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB294u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB294u; }
            if (ctx->pc != 0x1AB294u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB294u;
    // 0x1ab294: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1ab298:
    // 0x1ab298: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab29c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB29Cu;
    {
        const bool branch_taken_0x1ab29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB29Cu;
            // 0x1ab2a0: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab29c) {
            ctx->pc = 0x1AB2C4u;
            goto label_1ab2c4;
        }
    }
    ctx->pc = 0x1AB2A4u;
    // 0x1ab2a4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab2a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab2ac: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab2acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab2b0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab2b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab2b8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB2B8u;
    SET_GPR_U32(ctx, 31, 0x1AB2C0u);
    ctx->pc = 0x1AB2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2B8u;
            // 0x1ab2bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2C0u; }
        if (ctx->pc != 0x1AB2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2C0u; }
        if (ctx->pc != 0x1AB2C0u) { return; }
    }
    ctx->pc = 0x1AB2C0u;
    // 0x1ab2c0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ab2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ab2c4:
    // 0x1ab2c4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ab2c8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ab2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ab2cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB2CCu;
    {
        const bool branch_taken_0x1ab2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2cc) {
            ctx->pc = 0x1AB2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2CCu;
            // 0x1ab2d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB2ECu;
            goto label_1ab2ec;
        }
    }
    ctx->pc = 0x1AB2D4u;
    // 0x1ab2d4: 0xc05c272  jal         func_1709C8
    ctx->pc = 0x1AB2D4u;
    SET_GPR_U32(ctx, 31, 0x1AB2DCu);
    ctx->pc = 0x1AB2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2D4u;
            // 0x1ab2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1709C8u;
    if (runtime->hasFunction(0x1709C8u)) {
        auto targetFn = runtime->lookupFunction(0x1709C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2DCu; }
        if (ctx->pc != 0x1AB2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001709c8_0x1709c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2DCu; }
        if (ctx->pc != 0x1AB2DCu) { return; }
    }
    ctx->pc = 0x1AB2DCu;
    // 0x1ab2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2e0: 0xc05c368  jal         func_170DA0
    ctx->pc = 0x1AB2E0u;
    SET_GPR_U32(ctx, 31, 0x1AB2E8u);
    ctx->pc = 0x1AB2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2E0u;
            // 0x1ab2e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DA0u;
    if (runtime->hasFunction(0x170DA0u)) {
        auto targetFn = runtime->lookupFunction(0x170DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2E8u; }
        if (ctx->pc != 0x1AB2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170da0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2E8u; }
        if (ctx->pc != 0x1AB2E8u) { return; }
    }
    ctx->pc = 0x1AB2E8u;
label_1ab2e8:
    // 0x1ab2e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ab2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab2ec:
    // 0x1ab2ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ab2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab2f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2F8u;
            // 0x1ab2fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB300u;
    // 0x1ab300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab304: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ab30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab314: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB314u;
    {
        const bool branch_taken_0x1ab314 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB314u;
            // 0x1ab318: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab314) {
            ctx->pc = 0x1AB364u;
            goto label_1ab364;
        }
    }
    ctx->pc = 0x1AB31Cu;
    // 0x1ab31c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab320: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ab320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab324: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab328: 0x0  nop
    ctx->pc = 0x1ab328u;
    // NOP
    // 0x1ab32c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB32Cu;
    {
        const bool branch_taken_0x1ab32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab32c) {
            ctx->pc = 0x1AB330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB32Cu;
            // 0x1ab330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB37Cu;
            goto label_1ab37c;
        }
    }
    ctx->pc = 0x1AB334u;
    // 0x1ab334: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AB334u;
    SET_GPR_U32(ctx, 31, 0x1AB33Cu);
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB33Cu; }
        if (ctx->pc != 0x1AB33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB33Cu; }
        if (ctx->pc != 0x1AB33Cu) { return; }
    }
    ctx->pc = 0x1AB33Cu;
    // 0x1ab33c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab340: 0x0  nop
    ctx->pc = 0x1ab340u;
    // NOP
    // 0x1ab344: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1AB344u;
    {
        const bool branch_taken_0x1ab344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB344u;
            // 0x1ab348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab344) {
            ctx->pc = 0x1AB378u;
            goto label_1ab378;
        }
    }
    ctx->pc = 0x1AB34Cu;
    // 0x1ab34c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab350: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1ab350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ab354: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AB354u;
    SET_GPR_U32(ctx, 31, 0x1AB35Cu);
    ctx->pc = 0x1AB358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB354u;
            // 0x1ab358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB35Cu; }
        if (ctx->pc != 0x1AB35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB35Cu; }
        if (ctx->pc != 0x1AB35Cu) { return; }
    }
    ctx->pc = 0x1AB35Cu;
    // 0x1ab35c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB35Cu;
    {
        const bool branch_taken_0x1ab35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB35Cu;
            // 0x1ab360: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab35c) {
            ctx->pc = 0x1AB37Cu;
            goto label_1ab37c;
        }
    }
    ctx->pc = 0x1AB364u;
label_1ab364:
    // 0x1ab364: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab368: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB368u;
    {
        const bool branch_taken_0x1ab368 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab368) {
            ctx->pc = 0x1AB36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB368u;
            // 0x1ab36c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB37Cu;
            goto label_1ab37c;
        }
    }
    ctx->pc = 0x1AB370u;
    // 0x1ab370: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ab370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab374: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1ab378:
    // 0x1ab378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab37c:
    // 0x1ab37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab380: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ab380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab384: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB384u;
            // 0x1ab388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB38Cu;
    // 0x1ab38c: 0x0  nop
    ctx->pc = 0x1ab38cu;
    // NOP
    // 0x1ab390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab398: 0xc06a498  jal         func_1A9260
    ctx->pc = 0x1AB398u;
    SET_GPR_U32(ctx, 31, 0x1AB3A0u);
    ctx->pc = 0x1A9260u;
    if (runtime->hasFunction(0x1A9260u)) {
        auto targetFn = runtime->lookupFunction(0x1A9260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A0u; }
        if (ctx->pc != 0x1AB3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9260_0x1a9260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A0u; }
        if (ctx->pc != 0x1AB3A0u) { return; }
    }
    ctx->pc = 0x1AB3A0u;
    // 0x1ab3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3A4u;
            // 0x1ab3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB3ACu;
    // 0x1ab3ac: 0x0  nop
    ctx->pc = 0x1ab3acu;
    // NOP
    // 0x1ab3b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ab3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ab3b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ab3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ab3b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ab3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ab3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ab3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ab3c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ab3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ab3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ab3cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ab3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ab3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab3d4: 0x124000e6  beqz        $s2, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1AB3D4u;
    {
        const bool branch_taken_0x1ab3d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3D4u;
            // 0x1ab3d8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3d4) {
            ctx->pc = 0x1AB770u;
            goto label_1ab770;
        }
    }
    ctx->pc = 0x1AB3DCu;
    // 0x1ab3dc: 0xc06c522  jal         func_1B1488
    ctx->pc = 0x1AB3DCu;
    SET_GPR_U32(ctx, 31, 0x1AB3E4u);
    ctx->pc = 0x1AB3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3DCu;
            // 0x1ab3e0: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1488u;
    if (runtime->hasFunction(0x1B1488u)) {
        auto targetFn = runtime->lookupFunction(0x1B1488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E4u; }
        if (ctx->pc != 0x1AB3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1488_0x1b1488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3E4u; }
        if (ctx->pc != 0x1AB3E4u) { return; }
    }
    ctx->pc = 0x1AB3E4u;
    // 0x1ab3e4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1ab3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1ab3e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab3ec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB3ECu;
    {
        const bool branch_taken_0x1ab3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3ECu;
            // 0x1ab3f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3ec) {
            ctx->pc = 0x1AB410u;
            goto label_1ab410;
        }
    }
    ctx->pc = 0x1AB3F4u;
    // 0x1ab3f4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab3f8: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab3fc: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab400: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab404: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB404u;
    SET_GPR_U32(ctx, 31, 0x1AB40Cu);
    ctx->pc = 0x1AB408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB404u;
            // 0x1ab408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB40Cu; }
        if (ctx->pc != 0x1AB40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB40Cu; }
        if (ctx->pc != 0x1AB40Cu) { return; }
    }
    ctx->pc = 0x1AB40Cu;
    // 0x1ab40c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab410:
    // 0x1ab410: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab418: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1ab418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ab41c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab424: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB424u;
    SET_GPR_U32(ctx, 31, 0x1AB42Cu);
    ctx->pc = 0x1AB428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB424u;
            // 0x1ab428: 0x261300b8  addiu       $s3, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB42Cu; }
        if (ctx->pc != 0x1AB42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB42Cu; }
        if (ctx->pc != 0x1AB42Cu) { return; }
    }
    ctx->pc = 0x1AB42Cu;
    // 0x1ab42c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab438: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ab438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ab43c: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB43Cu;
    SET_GPR_U32(ctx, 31, 0x1AB444u);
    ctx->pc = 0x1AB440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB43Cu;
            // 0x1ab440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB444u; }
        if (ctx->pc != 0x1AB444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB444u; }
        if (ctx->pc != 0x1AB444u) { return; }
    }
    ctx->pc = 0x1AB444u;
    // 0x1ab444: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1ab448: 0x10740008  beq         $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB448u;
    {
        const bool branch_taken_0x1ab448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB448u;
            // 0x1ab44c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab448) {
            ctx->pc = 0x1AB46Cu;
            goto label_1ab46c;
        }
    }
    ctx->pc = 0x1AB450u;
    // 0x1ab450: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab454: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab458: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab45c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab460: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB460u;
    SET_GPR_U32(ctx, 31, 0x1AB468u);
    ctx->pc = 0x1AB464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB460u;
            // 0x1ab464: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB468u; }
        if (ctx->pc != 0x1AB468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB468u; }
        if (ctx->pc != 0x1AB468u) { return; }
    }
    ctx->pc = 0x1AB468u;
    // 0x1ab468: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1ab468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1ab46c:
    // 0x1ab46c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ab46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ab470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab474: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ab474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ab478: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB478u;
    SET_GPR_U32(ctx, 31, 0x1AB480u);
    ctx->pc = 0x1AB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB478u;
            // 0x1ab47c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB480u; }
        if (ctx->pc != 0x1AB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB480u; }
        if (ctx->pc != 0x1AB480u) { return; }
    }
    ctx->pc = 0x1AB480u;
    // 0x1ab480: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ab484: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB484u;
    {
        const bool branch_taken_0x1ab484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB484u;
            // 0x1ab488: 0x261100c0  addiu       $s1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab484) {
            ctx->pc = 0x1AB4ACu;
            goto label_1ab4ac;
        }
    }
    ctx->pc = 0x1AB48Cu;
    // 0x1ab48c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab490: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab494: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab498: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab49c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab4a0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB4A0u;
    SET_GPR_U32(ctx, 31, 0x1AB4A8u);
    ctx->pc = 0x1AB4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4A0u;
            // 0x1ab4a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4A8u; }
        if (ctx->pc != 0x1AB4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4A8u; }
        if (ctx->pc != 0x1AB4A8u) { return; }
    }
    ctx->pc = 0x1AB4A8u;
    // 0x1ab4a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab4ac:
    // 0x1ab4ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4b4: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1ab4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ab4b8: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB4B8u;
    SET_GPR_U32(ctx, 31, 0x1AB4C0u);
    ctx->pc = 0x1AB4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4B8u;
            // 0x1ab4bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4C0u; }
        if (ctx->pc != 0x1AB4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4C0u; }
        if (ctx->pc != 0x1AB4C0u) { return; }
    }
    ctx->pc = 0x1AB4C0u;
    // 0x1ab4c0: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1ab4c4: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB4C4u;
    {
        const bool branch_taken_0x1ab4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4C4u;
            // 0x1ab4c8: 0x261100c8  addiu       $s1, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4c4) {
            ctx->pc = 0x1AB4ECu;
            goto label_1ab4ec;
        }
    }
    ctx->pc = 0x1AB4CCu;
    // 0x1ab4cc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab4d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab4d4: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab4d8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab4dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab4e0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB4E0u;
    SET_GPR_U32(ctx, 31, 0x1AB4E8u);
    ctx->pc = 0x1AB4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4E0u;
            // 0x1ab4e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4E8u; }
        if (ctx->pc != 0x1AB4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4E8u; }
        if (ctx->pc != 0x1AB4E8u) { return; }
    }
    ctx->pc = 0x1AB4E8u;
    // 0x1ab4e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab4ec:
    // 0x1ab4ec: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab4f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4f4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1ab4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab4f8: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB4F8u;
    SET_GPR_U32(ctx, 31, 0x1AB500u);
    ctx->pc = 0x1AB4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4F8u;
            // 0x1ab4fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB500u; }
        if (ctx->pc != 0x1AB500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB500u; }
        if (ctx->pc != 0x1AB500u) { return; }
    }
    ctx->pc = 0x1AB500u;
    // 0x1ab500: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1ab500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1ab504: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB504u;
    {
        const bool branch_taken_0x1ab504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB504u;
            // 0x1ab508: 0x261100d0  addiu       $s1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab504) {
            ctx->pc = 0x1AB52Cu;
            goto label_1ab52c;
        }
    }
    ctx->pc = 0x1AB50Cu;
    // 0x1ab50c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab510: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab514: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab518: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab51c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab520: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB520u;
    SET_GPR_U32(ctx, 31, 0x1AB528u);
    ctx->pc = 0x1AB524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB520u;
            // 0x1ab524: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB528u; }
        if (ctx->pc != 0x1AB528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB528u; }
        if (ctx->pc != 0x1AB528u) { return; }
    }
    ctx->pc = 0x1AB528u;
    // 0x1ab528: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab52c:
    // 0x1ab52c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab534: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1ab534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab538: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB538u;
    SET_GPR_U32(ctx, 31, 0x1AB540u);
    ctx->pc = 0x1AB53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB538u;
            // 0x1ab53c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB540u; }
        if (ctx->pc != 0x1AB540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB540u; }
        if (ctx->pc != 0x1AB540u) { return; }
    }
    ctx->pc = 0x1AB540u;
    // 0x1ab540: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1ab540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1ab544: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB544u;
    {
        const bool branch_taken_0x1ab544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB544u;
            // 0x1ab548: 0x261100d8  addiu       $s1, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab544) {
            ctx->pc = 0x1AB56Cu;
            goto label_1ab56c;
        }
    }
    ctx->pc = 0x1AB54Cu;
    // 0x1ab54c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab550: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab554: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab558: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab55c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab560: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB560u;
    SET_GPR_U32(ctx, 31, 0x1AB568u);
    ctx->pc = 0x1AB564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB560u;
            // 0x1ab564: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB568u; }
        if (ctx->pc != 0x1AB568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB568u; }
        if (ctx->pc != 0x1AB568u) { return; }
    }
    ctx->pc = 0x1AB568u;
    // 0x1ab568: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab56c:
    // 0x1ab56c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab574: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1ab574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab578: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB578u;
    SET_GPR_U32(ctx, 31, 0x1AB580u);
    ctx->pc = 0x1AB57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB578u;
            // 0x1ab57c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB580u; }
        if (ctx->pc != 0x1AB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB580u; }
        if (ctx->pc != 0x1AB580u) { return; }
    }
    ctx->pc = 0x1AB580u;
    // 0x1ab580: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1ab580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1ab584: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB584u;
    {
        const bool branch_taken_0x1ab584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB584u;
            // 0x1ab588: 0x261100e0  addiu       $s1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab584) {
            ctx->pc = 0x1AB5ACu;
            goto label_1ab5ac;
        }
    }
    ctx->pc = 0x1AB58Cu;
    // 0x1ab58c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab590: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab594: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab598: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab59c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab5a0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB5A0u;
    SET_GPR_U32(ctx, 31, 0x1AB5A8u);
    ctx->pc = 0x1AB5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5A0u;
            // 0x1ab5a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5A8u; }
        if (ctx->pc != 0x1AB5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5A8u; }
        if (ctx->pc != 0x1AB5A8u) { return; }
    }
    ctx->pc = 0x1AB5A8u;
    // 0x1ab5a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab5ac:
    // 0x1ab5ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5b4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1ab5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab5b8: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB5B8u;
    SET_GPR_U32(ctx, 31, 0x1AB5C0u);
    ctx->pc = 0x1AB5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5B8u;
            // 0x1ab5bc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5C0u; }
        if (ctx->pc != 0x1AB5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5C0u; }
        if (ctx->pc != 0x1AB5C0u) { return; }
    }
    ctx->pc = 0x1AB5C0u;
    // 0x1ab5c0: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x1ab5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1ab5c4: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB5C4u;
    {
        const bool branch_taken_0x1ab5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5C4u;
            // 0x1ab5c8: 0x261100e8  addiu       $s1, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5c4) {
            ctx->pc = 0x1AB5ECu;
            goto label_1ab5ec;
        }
    }
    ctx->pc = 0x1AB5CCu;
    // 0x1ab5cc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab5d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab5d4: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab5d8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab5dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab5e0: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB5E0u;
    SET_GPR_U32(ctx, 31, 0x1AB5E8u);
    ctx->pc = 0x1AB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5E0u;
            // 0x1ab5e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5E8u; }
        if (ctx->pc != 0x1AB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5E8u; }
        if (ctx->pc != 0x1AB5E8u) { return; }
    }
    ctx->pc = 0x1AB5E8u;
    // 0x1ab5e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab5ec:
    // 0x1ab5ec: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ab5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5f4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1ab5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ab5f8: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB5F8u;
    SET_GPR_U32(ctx, 31, 0x1AB600u);
    ctx->pc = 0x1AB5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5F8u;
            // 0x1ab5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB600u; }
        if (ctx->pc != 0x1AB600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB600u; }
        if (ctx->pc != 0x1AB600u) { return; }
    }
    ctx->pc = 0x1AB600u;
    // 0x1ab600: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1ab600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1ab604: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB604u;
    {
        const bool branch_taken_0x1ab604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB604u;
            // 0x1ab608: 0x261100f8  addiu       $s1, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab604) {
            ctx->pc = 0x1AB62Cu;
            goto label_1ab62c;
        }
    }
    ctx->pc = 0x1AB60Cu;
    // 0x1ab60c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab610: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab614: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab618: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab61c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab620: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB620u;
    SET_GPR_U32(ctx, 31, 0x1AB628u);
    ctx->pc = 0x1AB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB620u;
            // 0x1ab624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB628u; }
        if (ctx->pc != 0x1AB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB628u; }
        if (ctx->pc != 0x1AB628u) { return; }
    }
    ctx->pc = 0x1AB628u;
    // 0x1ab628: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab62c:
    // 0x1ab62c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab634: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ab638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab640: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB640u;
    SET_GPR_U32(ctx, 31, 0x1AB648u);
    ctx->pc = 0x1AB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB640u;
            // 0x1ab644: 0x261300f0  addiu       $s3, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB648u; }
        if (ctx->pc != 0x1AB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB648u; }
        if (ctx->pc != 0x1AB648u) { return; }
    }
    ctx->pc = 0x1AB648u;
    // 0x1ab648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ab648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab650: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ab650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab654: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB654u;
            // 0x1ab658: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB65Cu; }
        if (ctx->pc != 0x1AB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB65Cu; }
        if (ctx->pc != 0x1AB65Cu) { return; }
    }
    ctx->pc = 0x1AB65Cu;
    // 0x1ab65c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ab660: 0x10740008  beq         $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB660u;
    {
        const bool branch_taken_0x1ab660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB660u;
            // 0x1ab664: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab660) {
            ctx->pc = 0x1AB684u;
            goto label_1ab684;
        }
    }
    ctx->pc = 0x1AB668u;
    // 0x1ab668: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab66c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab670: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab674: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab678: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB678u;
    SET_GPR_U32(ctx, 31, 0x1AB680u);
    ctx->pc = 0x1AB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB678u;
            // 0x1ab67c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB680u; }
        if (ctx->pc != 0x1AB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB680u; }
        if (ctx->pc != 0x1AB680u) { return; }
    }
    ctx->pc = 0x1AB680u;
    // 0x1ab680: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1ab680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1ab684:
    // 0x1ab684: 0xc6740004  lwc1        $f20, 0x4($s3)
    ctx->pc = 0x1ab684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab68c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ab690: 0x26110100  addiu       $s1, $s0, 0x100
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1ab694: 0xc06c374  jal         func_1B0DD0
    ctx->pc = 0x1AB694u;
    SET_GPR_U32(ctx, 31, 0x1AB69Cu);
    ctx->pc = 0x1AB698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB694u;
            // 0x1ab698: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB69Cu; }
        if (ctx->pc != 0x1AB69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DD0_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB69Cu; }
        if (ctx->pc != 0x1AB69Cu) { return; }
    }
    ctx->pc = 0x1AB69Cu;
    // 0x1ab69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ab6a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ab6a4: 0xc06c374  jal         func_1B0DD0
    ctx->pc = 0x1AB6A4u;
    SET_GPR_U32(ctx, 31, 0x1AB6ACu);
    ctx->pc = 0x1AB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6A4u;
            // 0x1ab6a8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6ACu; }
        if (ctx->pc != 0x1AB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DD0_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6ACu; }
        if (ctx->pc != 0x1AB6ACu) { return; }
    }
    ctx->pc = 0x1AB6ACu;
    // 0x1ab6ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ab6acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ab6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6b4: 0xc06c374  jal         func_1B0DD0
    ctx->pc = 0x1AB6B4u;
    SET_GPR_U32(ctx, 31, 0x1AB6BCu);
    ctx->pc = 0x1AB6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6B4u;
            // 0x1ab6b8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0DD0u;
    if (runtime->hasFunction(0x1B0DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6BCu; }
        if (ctx->pc != 0x1AB6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0DD0_0x1b0dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6BCu; }
        if (ctx->pc != 0x1AB6BCu) { return; }
    }
    ctx->pc = 0x1AB6BCu;
    // 0x1ab6bc: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1ab6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1ab6c0: 0x10740008  beq         $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB6C0u;
    {
        const bool branch_taken_0x1ab6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6C0u;
            // 0x1ab6c4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6c0) {
            ctx->pc = 0x1AB6E4u;
            goto label_1ab6e4;
        }
    }
    ctx->pc = 0x1AB6C8u;
    // 0x1ab6c8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab6cc: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab6d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab6d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab6d8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB6D8u;
    SET_GPR_U32(ctx, 31, 0x1AB6E0u);
    ctx->pc = 0x1AB6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6D8u;
            // 0x1ab6dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6E0u; }
        if (ctx->pc != 0x1AB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6E0u; }
        if (ctx->pc != 0x1AB6E0u) { return; }
    }
    ctx->pc = 0x1AB6E0u;
    // 0x1ab6e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab6e4:
    // 0x1ab6e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ab6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab6e8: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AB6E8u;
    {
        const bool branch_taken_0x1ab6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6e8) {
            ctx->pc = 0x1AB6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6E8u;
            // 0x1ab6ec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB774u;
            goto label_1ab774;
        }
    }
    ctx->pc = 0x1AB6F0u;
    // 0x1ab6f0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1ab6f4: 0x8c510054  lw          $s1, 0x54($v0)
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ab6f8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB6F8u;
    {
        const bool branch_taken_0x1ab6f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6F8u;
            // 0x1ab6fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6f8) {
            ctx->pc = 0x1AB71Cu;
            goto label_1ab71c;
        }
    }
    ctx->pc = 0x1AB700u;
    // 0x1ab700: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1ab700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1ab704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab708: 0x24c642f8  addiu       $a2, $a2, 0x42F8
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17144));
    // 0x1ab70c: 0xc091258  jal         func_244960
    ctx->pc = 0x1AB70Cu;
    SET_GPR_U32(ctx, 31, 0x1AB714u);
    ctx->pc = 0x1AB710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB70Cu;
            // 0x1ab710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB714u; }
        if (ctx->pc != 0x1AB714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB714u; }
        if (ctx->pc != 0x1AB714u) { return; }
    }
    ctx->pc = 0x1AB714u;
    // 0x1ab714: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AB714u;
    {
        const bool branch_taken_0x1ab714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab714) {
            ctx->pc = 0x1AB754u;
            goto label_1ab754;
        }
    }
    ctx->pc = 0x1AB71Cu;
label_1ab71c:
    // 0x1ab71c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB71Cu;
    {
        const bool branch_taken_0x1ab71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB71Cu;
            // 0x1ab720: 0x96020040  lhu         $v0, 0x40($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab71c) {
            ctx->pc = 0x1AB740u;
            goto label_1ab740;
        }
    }
    ctx->pc = 0x1AB724u;
    // 0x1ab724: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ab728: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ab728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab72c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ab72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ab730: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ab734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ab734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB738u;
    {
        const bool branch_taken_0x1ab738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB738u;
            // 0x1ab73c: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab738) {
            ctx->pc = 0x1AB750u;
            goto label_1ab750;
        }
    }
    ctx->pc = 0x1AB740u;
label_1ab740:
    // 0x1ab740: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1ab740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ab744: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1ab744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ab748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ab748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ab74c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ab74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ab750:
    // 0x1ab750: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ab750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ab754:
    // 0x1ab754: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB754u;
    {
        const bool branch_taken_0x1ab754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB754u;
            // 0x1ab758: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab754) {
            ctx->pc = 0x1AB770u;
            goto label_1ab770;
        }
    }
    ctx->pc = 0x1AB75Cu;
    // 0x1ab75c: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1ab760: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1ab760u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ab764: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1ab764u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x1ab768: 0xfc43bdf8  sd          $v1, -0x4208($v0)
    ctx->pc = 0x1ab768u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294950392), GPR_U64(ctx, 3));
    // 0x1ab76c: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x1ab76cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_1ab770:
    // 0x1ab770: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ab770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab774:
    // 0x1ab774: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ab774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab778: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ab778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab77c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ab77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab780: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ab780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab788: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1ab788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab78c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB78Cu;
            // 0x1ab790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB794u;
    // 0x1ab794: 0x0  nop
    ctx->pc = 0x1ab794u;
    // NOP
    // 0x1ab798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab79c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ab79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab7a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ab7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7ac: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB7ACu;
    {
        const bool branch_taken_0x1ab7ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7ACu;
            // 0x1ab7b0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7ac) {
            ctx->pc = 0x1AB7FCu;
            goto label_1ab7fc;
        }
    }
    ctx->pc = 0x1AB7B4u;
    // 0x1ab7b4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab7b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ab7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ab7bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab7c0: 0x0  nop
    ctx->pc = 0x1ab7c0u;
    // NOP
    // 0x1ab7c4: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB7C4u;
    {
        const bool branch_taken_0x1ab7c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab7c4) {
            ctx->pc = 0x1AB7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7C4u;
            // 0x1ab7c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB814u;
            goto label_1ab814;
        }
    }
    ctx->pc = 0x1AB7CCu;
    // 0x1ab7cc: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AB7CCu;
    SET_GPR_U32(ctx, 31, 0x1AB7D4u);
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7D4u; }
        if (ctx->pc != 0x1AB7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7D4u; }
        if (ctx->pc != 0x1AB7D4u) { return; }
    }
    ctx->pc = 0x1AB7D4u;
    // 0x1ab7d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ab7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab7d8: 0x0  nop
    ctx->pc = 0x1ab7d8u;
    // NOP
    // 0x1ab7dc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1AB7DCu;
    {
        const bool branch_taken_0x1ab7dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7DCu;
            // 0x1ab7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7dc) {
            ctx->pc = 0x1AB810u;
            goto label_1ab810;
        }
    }
    ctx->pc = 0x1AB7E4u;
    // 0x1ab7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7e8: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1ab7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ab7ec: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AB7ECu;
    SET_GPR_U32(ctx, 31, 0x1AB7F4u);
    ctx->pc = 0x1AB7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7ECu;
            // 0x1ab7f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7F4u; }
        if (ctx->pc != 0x1AB7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7F4u; }
        if (ctx->pc != 0x1AB7F4u) { return; }
    }
    ctx->pc = 0x1AB7F4u;
    // 0x1ab7f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB7F4u;
    {
        const bool branch_taken_0x1ab7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7F4u;
            // 0x1ab7f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7f4) {
            ctx->pc = 0x1AB814u;
            goto label_1ab814;
        }
    }
    ctx->pc = 0x1AB7FCu;
label_1ab7fc:
    // 0x1ab7fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab800: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB800u;
    {
        const bool branch_taken_0x1ab800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab800) {
            ctx->pc = 0x1AB804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB800u;
            // 0x1ab804: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB814u;
            goto label_1ab814;
        }
    }
    ctx->pc = 0x1AB808u;
    // 0x1ab808: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ab808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab80c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1ab80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1ab810:
    // 0x1ab810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab814:
    // 0x1ab814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab818: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ab818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ab81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB81Cu;
            // 0x1ab820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB824u;
    // 0x1ab824: 0x0  nop
    ctx->pc = 0x1ab824u;
    // NOP
    // 0x1ab828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ab82c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab830: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ab830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ab834: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ab834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ab838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab83c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ab83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ab840: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ab840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ab844: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ab844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ab848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab84c: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1ab84cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ab850: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AB850u;
    {
        const bool branch_taken_0x1ab850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB850u;
            // 0x1ab854: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab850) {
            ctx->pc = 0x1AB900u;
            goto label_1ab900;
        }
    }
    ctx->pc = 0x1AB858u;
    // 0x1ab858: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1ab858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1ab85c: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB85Cu;
    {
        const bool branch_taken_0x1ab85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AB860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB85Cu;
            // 0x1ab860: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab85c) {
            ctx->pc = 0x1AB884u;
            goto label_1ab884;
        }
    }
    ctx->pc = 0x1AB864u;
    // 0x1ab864: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab868: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab86c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab870: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab874: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab878: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB878u;
    SET_GPR_U32(ctx, 31, 0x1AB880u);
    ctx->pc = 0x1AB87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB878u;
            // 0x1ab87c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB880u; }
        if (ctx->pc != 0x1AB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB880u; }
        if (ctx->pc != 0x1AB880u) { return; }
    }
    ctx->pc = 0x1AB880u;
    // 0x1ab880: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab884:
    // 0x1ab884: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1ab888: 0x261200b8  addiu       $s2, $s0, 0xB8
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x1ab88c: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB88Cu;
    {
        const bool branch_taken_0x1ab88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AB890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB88Cu;
            // 0x1ab890: 0x8e340004  lw          $s4, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab88c) {
            ctx->pc = 0x1AB8B4u;
            goto label_1ab8b4;
        }
    }
    ctx->pc = 0x1AB894u;
    // 0x1ab894: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab898: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab89c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab8a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab8a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab8a8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB8A8u;
    SET_GPR_U32(ctx, 31, 0x1AB8B0u);
    ctx->pc = 0x1AB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8A8u;
            // 0x1ab8ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8B0u; }
        if (ctx->pc != 0x1AB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8B0u; }
        if (ctx->pc != 0x1AB8B0u) { return; }
    }
    ctx->pc = 0x1AB8B0u;
    // 0x1ab8b0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ab8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ab8b4:
    // 0x1ab8b4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ab8b8: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x1ab8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1ab8bc: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB8BCu;
    {
        const bool branch_taken_0x1ab8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AB8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8BCu;
            // 0x1ab8c0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8bc) {
            ctx->pc = 0x1AB8E4u;
            goto label_1ab8e4;
        }
    }
    ctx->pc = 0x1AB8C4u;
    // 0x1ab8c4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab8c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab8cc: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab8d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab8d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab8d8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB8D8u;
    SET_GPR_U32(ctx, 31, 0x1AB8E0u);
    ctx->pc = 0x1AB8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8D8u;
            // 0x1ab8dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8E0u; }
        if (ctx->pc != 0x1AB8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8E0u; }
        if (ctx->pc != 0x1AB8E0u) { return; }
    }
    ctx->pc = 0x1AB8E0u;
    // 0x1ab8e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ab8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ab8e4:
    // 0x1ab8e4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab8e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ab8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8f0: 0xc06a1a4  jal         func_1A8690
    ctx->pc = 0x1AB8F0u;
    SET_GPR_U32(ctx, 31, 0x1AB8F8u);
    ctx->pc = 0x1AB8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8F0u;
            // 0x1ab8f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8690u;
    if (runtime->hasFunction(0x1A8690u)) {
        auto targetFn = runtime->lookupFunction(0x1A8690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F8u; }
        if (ctx->pc != 0x1AB8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8690_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F8u; }
        if (ctx->pc != 0x1AB8F8u) { return; }
    }
    ctx->pc = 0x1AB8F8u;
    // 0x1ab8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8F8u;
            // 0x1ab8fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB90Cu;
            goto label_1ab90c;
        }
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0xc06a498  jal         func_1A9260
    ctx->pc = 0x1AB900u;
    SET_GPR_U32(ctx, 31, 0x1AB908u);
    ctx->pc = 0x1AB904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB900u;
            // 0x1ab904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9260u;
    if (runtime->hasFunction(0x1A9260u)) {
        auto targetFn = runtime->lookupFunction(0x1A9260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB908u; }
        if (ctx->pc != 0x1AB908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9260_0x1a9260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB908u; }
        if (ctx->pc != 0x1AB908u) { return; }
    }
    ctx->pc = 0x1AB908u;
    // 0x1ab908: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ab908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab90c:
    // 0x1ab90c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ab90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ab910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab914: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ab914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab918: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ab918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab920: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB920u;
            // 0x1ab924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB928u;
    // 0x1ab928: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ab92c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ab92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ab930: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ab930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ab934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab938: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ab938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ab93c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab940: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ab940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ab944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ab944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ab948: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1ab948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1ab94c: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1AB94Cu;
    {
        const bool branch_taken_0x1ab94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB94Cu;
            // 0x1ab950: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab94c) {
            ctx->pc = 0x1ABAD8u;
            goto label_1abad8;
        }
    }
    ctx->pc = 0x1AB954u;
    // 0x1ab954: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1ab958: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab95c: 0x10750009  beq         $v1, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB95Cu;
    {
        const bool branch_taken_0x1ab95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1AB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB95Cu;
            // 0x1ab960: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab95c) {
            ctx->pc = 0x1AB984u;
            goto label_1ab984;
        }
    }
    ctx->pc = 0x1AB964u;
    // 0x1ab964: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab968: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab96c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab970: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab974: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab978: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB978u;
    SET_GPR_U32(ctx, 31, 0x1AB980u);
    ctx->pc = 0x1AB97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB978u;
            // 0x1ab97c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB980u; }
        if (ctx->pc != 0x1AB980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB980u; }
        if (ctx->pc != 0x1AB980u) { return; }
    }
    ctx->pc = 0x1AB980u;
    // 0x1ab980: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ab980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ab984:
    // 0x1ab984: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1ab984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1ab988: 0x261300b8  addiu       $s3, $s0, 0xB8
    ctx->pc = 0x1ab988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x1ab98c: 0x10750009  beq         $v1, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB98Cu;
    {
        const bool branch_taken_0x1ab98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1AB990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB98Cu;
            // 0x1ab990: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab98c) {
            ctx->pc = 0x1AB9B4u;
            goto label_1ab9b4;
        }
    }
    ctx->pc = 0x1AB994u;
    // 0x1ab994: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab998: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab99c: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab9a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab9a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab9a8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB9A8u;
    SET_GPR_U32(ctx, 31, 0x1AB9B0u);
    ctx->pc = 0x1AB9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9A8u;
            // 0x1ab9ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9B0u; }
        if (ctx->pc != 0x1AB9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9B0u; }
        if (ctx->pc != 0x1AB9B0u) { return; }
    }
    ctx->pc = 0x1AB9B0u;
    // 0x1ab9b0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1ab9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1ab9b4:
    // 0x1ab9b4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ab9b8: 0x261200c0  addiu       $s2, $s0, 0xC0
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1ab9bc: 0x10750009  beq         $v1, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB9BCu;
    {
        const bool branch_taken_0x1ab9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1AB9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9BCu;
            // 0x1ab9c0: 0x8e730004  lw          $s3, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9bc) {
            ctx->pc = 0x1AB9E4u;
            goto label_1ab9e4;
        }
    }
    ctx->pc = 0x1AB9C4u;
    // 0x1ab9c4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1ab9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ab9c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab9cc: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1ab9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1ab9d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1ab9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ab9d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ab9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab9d8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AB9D8u;
    SET_GPR_U32(ctx, 31, 0x1AB9E0u);
    ctx->pc = 0x1AB9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9D8u;
            // 0x1ab9dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E0u; }
        if (ctx->pc != 0x1AB9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E0u; }
        if (ctx->pc != 0x1AB9E0u) { return; }
    }
    ctx->pc = 0x1AB9E0u;
    // 0x1ab9e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ab9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1ab9e4:
    // 0x1ab9e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ab9e8: 0x8c42caa4  lw          $v0, -0x355C($v0)
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953636)));
    // 0x1ab9ec: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB9ECu;
    {
        const bool branch_taken_0x1ab9ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9ECu;
            // 0x1ab9f0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9ec) {
            ctx->pc = 0x1ABA38u;
            goto label_1aba38;
        }
    }
    ctx->pc = 0x1AB9F4u;
    // 0x1ab9f4: 0x2682fc07  addiu       $v0, $s4, -0x3F9
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966279));
    // 0x1ab9f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ab9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab9fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB9FCu;
    {
        const bool branch_taken_0x1ab9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9FCu;
            // 0x1aba00: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9fc) {
            ctx->pc = 0x1ABA38u;
            goto label_1aba38;
        }
    }
    ctx->pc = 0x1ABA04u;
    // 0x1aba04: 0x240303f9  addiu       $v1, $zero, 0x3F9
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
    // 0x1aba08: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABA08u;
    {
        const bool branch_taken_0x1aba08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ABA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA08u;
            // 0x1aba0c: 0x24464328  addiu       $a2, $v0, 0x4328 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 17192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba08) {
            ctx->pc = 0x1ABA1Cu;
            goto label_1aba1c;
        }
    }
    ctx->pc = 0x1ABA10u;
    // 0x1aba10: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1aba14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA14u;
    {
        const bool branch_taken_0x1aba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA14u;
            // 0x1aba18: 0x24471300  addiu       $a3, $v0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba14) {
            ctx->pc = 0x1ABA24u;
            goto label_1aba24;
        }
    }
    ctx->pc = 0x1ABA1Cu;
label_1aba1c:
    // 0x1aba1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1aba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1aba20: 0x24474348  addiu       $a3, $v0, 0x4348
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17224));
label_1aba24:
    // 0x1aba24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba28: 0xc091258  jal         func_244960
    ctx->pc = 0x1ABA28u;
    SET_GPR_U32(ctx, 31, 0x1ABA30u);
    ctx->pc = 0x1ABA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA28u;
            // 0x1aba2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA30u; }
        if (ctx->pc != 0x1ABA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA30u; }
        if (ctx->pc != 0x1ABA30u) { return; }
    }
    ctx->pc = 0x1ABA30u;
    // 0x1aba30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1ABA30u;
    {
        const bool branch_taken_0x1aba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA30u;
            // 0x1aba34: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba30) {
            ctx->pc = 0x1ABA5Cu;
            goto label_1aba5c;
        }
    }
    ctx->pc = 0x1ABA38u;
label_1aba38:
    // 0x1aba38: 0x8e28001c  lw          $t0, 0x1C($s1)
    ctx->pc = 0x1aba38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1aba3c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1aba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1aba40: 0x24c64350  addiu       $a2, $a2, 0x4350
    ctx->pc = 0x1aba40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17232));
    // 0x1aba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba48: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1aba48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1aba4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba50: 0xc091258  jal         func_244960
    ctx->pc = 0x1ABA50u;
    SET_GPR_U32(ctx, 31, 0x1ABA58u);
    ctx->pc = 0x1ABA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA50u;
            // 0x1aba54: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA58u; }
        if (ctx->pc != 0x1ABA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA58u; }
        if (ctx->pc != 0x1ABA58u) { return; }
    }
    ctx->pc = 0x1ABA58u;
    // 0x1aba58: 0x240203f0  addiu       $v0, $zero, 0x3F0
    ctx->pc = 0x1aba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1aba5c:
    // 0x1aba5c: 0x56820014  bnel        $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ABA5Cu;
    {
        const bool branch_taken_0x1aba5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba5c) {
            ctx->pc = 0x1ABA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA5Cu;
            // 0x1aba60: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABA64u;
    // 0x1aba64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1aba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1aba68: 0x8c42ecb4  lw          $v0, -0x134C($v0)
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962356)));
    // 0x1aba6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aba70: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1aba74: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1aba78: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1ABA78u;
    {
        const bool branch_taken_0x1aba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba78) {
            ctx->pc = 0x1ABA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA78u;
            // 0x1aba7c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABA80u;
    // 0x1aba80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba84: 0xc04c576  jal         func_1315D8
    ctx->pc = 0x1ABA84u;
    SET_GPR_U32(ctx, 31, 0x1ABA8Cu);
    ctx->pc = 0x1ABA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA84u;
            // 0x1aba88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D8u;
    if (runtime->hasFunction(0x1315D8u)) {
        auto targetFn = runtime->lookupFunction(0x1315D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315d8_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    }
    ctx->pc = 0x1ABA8Cu;
    // 0x1aba8c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1aba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1aba90: 0x2463d7c8  addiu       $v1, $v1, -0x2838
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957000));
    // 0x1aba94: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABA94u;
    {
        const bool branch_taken_0x1aba94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aba94) {
            ctx->pc = 0x1ABA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA94u;
            // 0x1aba98: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABA9Cu;
    // 0x1aba9c: 0xc06b74c  jal         func_1ADD30
    ctx->pc = 0x1ABA9Cu;
    SET_GPR_U32(ctx, 31, 0x1ABAA4u);
    ctx->pc = 0x1ABAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA9Cu;
            // 0x1abaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD30u;
    if (runtime->hasFunction(0x1ADD30u)) {
        auto targetFn = runtime->lookupFunction(0x1ADD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAA4u; }
        if (ctx->pc != 0x1ABAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADD30_0x1add30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAA4u; }
        if (ctx->pc != 0x1ABAA4u) { return; }
    }
    ctx->pc = 0x1ABAA4u;
    // 0x1abaa4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ABAA4u;
    {
        const bool branch_taken_0x1abaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAA4u;
            // 0x1abaa8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaa4) {
            ctx->pc = 0x1ABADCu;
            goto label_1abadc;
        }
    }
    ctx->pc = 0x1ABAACu;
    // 0x1abaac: 0x0  nop
    ctx->pc = 0x1abaacu;
    // NOP
label_1abab0:
    // 0x1abab0: 0xa7b40000  sh          $s4, 0x0($sp)
    ctx->pc = 0x1abab0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x1abab4: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1abab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1abab8: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1abab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x1ababc: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x1ababcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x1abac0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1abac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1abac4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1abac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1abac8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1abac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1abacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1abaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abad0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1ABAD0u;
    SET_GPR_U32(ctx, 31, 0x1ABAD8u);
    ctx->pc = 0x1ABAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAD0u;
            // 0x1abad4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAD8u; }
        if (ctx->pc != 0x1ABAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABAD8u; }
        if (ctx->pc != 0x1ABAD8u) { return; }
    }
    ctx->pc = 0x1ABAD8u;
label_1abad8:
    // 0x1abad8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1abad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1abadc:
    // 0x1abadc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1abadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abae0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1abae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1abae4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1abae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1abae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abaec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1abaecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abaf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAF4u;
            // 0x1abaf8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA454u: goto label_1aa454;
            case 0x1AA480u: goto label_1aa480;
            case 0x1AA4B8u: goto label_1aa4b8;
            case 0x1AA500u: goto label_1aa500;
            case 0x1AA510u: goto label_1aa510;
            case 0x1AA590u: goto label_1aa590;
            case 0x1AA5C8u: goto label_1aa5c8;
            case 0x1AA5F4u: goto label_1aa5f4;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB62Cu: goto label_1ab62c;
            case 0x1AB684u: goto label_1ab684;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB71Cu: goto label_1ab71c;
            case 0x1AB740u: goto label_1ab740;
            case 0x1AB750u: goto label_1ab750;
            case 0x1AB754u: goto label_1ab754;
            case 0x1AB770u: goto label_1ab770;
            case 0x1AB774u: goto label_1ab774;
            case 0x1AB7FCu: goto label_1ab7fc;
            case 0x1AB810u: goto label_1ab810;
            case 0x1AB814u: goto label_1ab814;
            case 0x1AB884u: goto label_1ab884;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8E4u: goto label_1ab8e4;
            case 0x1AB900u: goto label_1ab900;
            case 0x1AB90Cu: goto label_1ab90c;
            case 0x1AB984u: goto label_1ab984;
            case 0x1AB9B4u: goto label_1ab9b4;
            case 0x1AB9E4u: goto label_1ab9e4;
            case 0x1ABA1Cu: goto label_1aba1c;
            case 0x1ABA24u: goto label_1aba24;
            case 0x1ABA38u: goto label_1aba38;
            case 0x1ABA5Cu: goto label_1aba5c;
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABAFCu;
    // 0x1abafc: 0x0  nop
    ctx->pc = 0x1abafcu;
    // NOP
}
