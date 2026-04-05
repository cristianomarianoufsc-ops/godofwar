#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285650
// Address: 0x285650 - 0x285938
void sub_00285650_0x285650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285650_0x285650");
#endif

    ctx->pc = 0x285650u;

label_285650:
    // 0x285650: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x285650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_285654:
    // 0x285654: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x285654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_285658:
    // 0x285658: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x285658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_28565c:
    // 0x28565c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x28565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_285660:
    // 0x285660: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x285660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_285664:
    // 0x285664: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x285664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_285668:
    // 0x285668: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x285668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_28566c:
    // 0x28566c: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x28566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_285670:
    // 0x285670: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x285670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_285674:
    // 0x285674: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x285674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_285678:
    // 0x285678: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x285678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_28567c:
    // 0x28567c: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x28567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_285680:
    // 0x285680: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x285680u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_285684:
    // 0x285684: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x285684u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_285688:
    // 0x285688: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x285688u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_28568c:
    // 0x28568c: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x28568cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_285690:
    // 0x285690: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x285690u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_285694:
    // 0x285694: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x285694u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_285698:
    // 0x285698: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x285698u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_28569c:
    // 0x28569c: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x28569cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_2856a0:
    // 0x2856a0: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x2856a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_2856a4:
    // 0x2856a4: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x2856a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_2856a8:
    // 0x2856a8: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x2856a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_2856ac:
    // 0x2856ac: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x2856acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_2856b0:
    // 0x2856b0: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x2856b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
label_2856b4:
    // 0x2856b4: 0x40f809  jalr        $v0
label_2856b8:
    if (ctx->pc == 0x2856B8u) {
        ctx->pc = 0x2856B8u;
            // 0x2856b8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2856BCu;
        goto label_2856bc;
    }
    ctx->pc = 0x2856B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2856BCu);
        ctx->pc = 0x2856B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856B4u;
            // 0x2856b8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2856BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2856BCu; }
            if (ctx->pc != 0x2856BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2856BCu;
label_2856bc:
    // 0x2856bc: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x2856bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_2856c0:
    // 0x2856c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2856c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2856c4:
    // 0x2856c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2856c8:
    // 0x2856c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2856cc:
    // 0x2856cc: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x2856ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_2856d0:
    // 0x2856d0: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x2856d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_2856d4:
    // 0x2856d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2856d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2856d8:
    // 0x2856d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2856dc:
    if (ctx->pc == 0x2856DCu) {
        ctx->pc = 0x2856DCu;
            // 0x2856dc: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->pc = 0x2856E0u;
        goto label_2856e0;
    }
    ctx->pc = 0x2856D8u;
    {
        const bool branch_taken_0x2856d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856D8u;
            // 0x2856dc: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856d8) {
            ctx->pc = 0x285778u;
            goto label_285778;
        }
    }
    ctx->pc = 0x2856E0u;
label_2856e0:
    // 0x2856e0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2856e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2856e4:
    // 0x2856e4: 0x24425708  addiu       $v0, $v0, 0x5708
    ctx->pc = 0x2856e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22280));
label_2856e8:
    // 0x2856e8: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x2856e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_2856ec:
    // 0x2856ec: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2856f0:
    // 0x2856f0: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x2856f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_2856f4:
    // 0x2856f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2856f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2856f8:
    // 0x2856f8: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x2856f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_2856fc:
    // 0x2856fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2856fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285700:
    // 0x285700: 0x10000002  b           . + 4 + (0x2 << 2)
label_285704:
    if (ctx->pc == 0x285704u) {
        ctx->pc = 0x285704u;
            // 0x285704: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->pc = 0x285708u;
        goto label_285708;
    }
    ctx->pc = 0x285700u;
    {
        const bool branch_taken_0x285700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285700u;
            // 0x285704: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285700) {
            ctx->pc = 0x28570Cu;
            goto label_28570c;
        }
    }
    ctx->pc = 0x285708u;
label_285708:
    // 0x285708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28570c:
    // 0x28570c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_285710:
    if (ctx->pc == 0x285710u) {
        ctx->pc = 0x285710u;
            // 0x285710: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->pc = 0x285714u;
        goto label_285714;
    }
    ctx->pc = 0x28570Cu;
    {
        const bool branch_taken_0x28570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28570Cu;
            // 0x285710: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28570c) {
            ctx->pc = 0x285770u;
            goto label_285770;
        }
    }
    ctx->pc = 0x285714u;
label_285714:
    // 0x285714: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x285714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_285718:
    // 0x285718: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x285718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_28571c:
    // 0x28571c: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_285720:
    // 0x285720: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x285720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285724:
    // 0x285724: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_285728:
    if (ctx->pc == 0x285728u) {
        ctx->pc = 0x285728u;
            // 0x285728: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->pc = 0x28572Cu;
        goto label_28572c;
    }
    ctx->pc = 0x285724u;
    {
        const bool branch_taken_0x285724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285724u;
            // 0x285728: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285724) {
            ctx->pc = 0x285760u;
            goto label_285760;
        }
    }
    ctx->pc = 0x28572Cu;
label_28572c:
    // 0x28572c: 0x0  nop
    ctx->pc = 0x28572cu;
    // NOP
label_285730:
    // 0x285730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_285734:
    // 0x285734: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x285734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285738:
    // 0x285738: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x285738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28573c:
    // 0x28573c: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x28573cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_285740:
    // 0x285740: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x285740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285744:
    // 0x285744: 0x60f809  jalr        $v1
label_285748:
    if (ctx->pc == 0x285748u) {
        ctx->pc = 0x285748u;
            // 0x285748: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x28574Cu;
        goto label_28574c;
    }
    ctx->pc = 0x285744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28574Cu);
        ctx->pc = 0x285748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285744u;
            // 0x285748: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28574Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28574Cu; }
            if (ctx->pc != 0x28574Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28574Cu;
label_28574c:
    // 0x28574c: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x28574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_285750:
    // 0x285750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_285754:
    // 0x285754: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_285758:
    if (ctx->pc == 0x285758u) {
        ctx->pc = 0x285758u;
            // 0x285758: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28575Cu;
        goto label_28575c;
    }
    ctx->pc = 0x285754u;
    {
        const bool branch_taken_0x285754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285754u;
            // 0x285758: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285754) {
            ctx->pc = 0x285730u;
            runtime->cooperativeGuestYield();
            goto label_285730;
        }
    }
    ctx->pc = 0x28575Cu;
label_28575c:
    // 0x28575c: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x28575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_285760:
    // 0x285760: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x285760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_285764:
    // 0x285764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x285764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285768:
    // 0x285768: 0x10000003  b           . + 4 + (0x3 << 2)
label_28576c:
    if (ctx->pc == 0x28576Cu) {
        ctx->pc = 0x28576Cu;
            // 0x28576c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x285770u;
        goto label_285770;
    }
    ctx->pc = 0x285768u;
    {
        const bool branch_taken_0x285768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285768u;
            // 0x28576c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285768) {
            ctx->pc = 0x285778u;
            goto label_285778;
        }
    }
    ctx->pc = 0x285770u;
label_285770:
    // 0x285770: 0xc0a1524  jal         func_285490
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    SET_GPR_U32(ctx, 31, 0x285778u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285778u; }
        if (ctx->pc != 0x285778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285778u; }
        if (ctx->pc != 0x285778u) { return; }
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x285778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_28577c:
    // 0x28577c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_285780:
    // 0x285780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_285784:
    if (ctx->pc == 0x285784u) {
        ctx->pc = 0x285784u;
            // 0x285784: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->pc = 0x285788u;
        goto label_285788;
    }
    ctx->pc = 0x285780u;
    {
        const bool branch_taken_0x285780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285780u;
            // 0x285784: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285780) {
            ctx->pc = 0x285798u;
            goto label_285798;
        }
    }
    ctx->pc = 0x285788u;
label_285788:
    // 0x285788: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28578c:
    // 0x28578c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_285790:
    // 0x285790: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_285794:
    if (ctx->pc == 0x285794u) {
        ctx->pc = 0x285794u;
            // 0x285794: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x285798u;
        goto label_285798;
    }
    ctx->pc = 0x285790u;
    {
        const bool branch_taken_0x285790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285790u;
            // 0x285794: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285790) {
            ctx->pc = 0x2857B4u;
            goto label_2857b4;
        }
    }
    ctx->pc = 0x285798u;
label_285798:
    // 0x285798: 0xc0a1524  jal         func_285490
label_28579c:
    if (ctx->pc == 0x28579Cu) {
        ctx->pc = 0x2857A0u;
        goto label_2857a0;
    }
    ctx->pc = 0x285798u;
    SET_GPR_U32(ctx, 31, 0x2857A0u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857A0u; }
        if (ctx->pc != 0x2857A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857A0u; }
        if (ctx->pc != 0x2857A0u) { return; }
    }
    ctx->pc = 0x2857A0u;
label_2857a0:
    // 0x2857a0: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_2857a4:
    // 0x2857a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2857a8:
    // 0x2857a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2857ac:
    // 0x2857ac: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2857acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2857b0:
    // 0x2857b0: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_2857b4:
    // 0x2857b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2857b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2857b8:
    // 0x2857b8: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x2857b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2857bc:
    // 0x2857bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2857c0:
    // 0x2857c0: 0x400008  jr          $v0
label_2857c4:
    if (ctx->pc == 0x2857C4u) {
        ctx->pc = 0x2857C4u;
            // 0x2857c4: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = 0x2857C8u;
        goto label_2857c8;
    }
    ctx->pc = 0x2857C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857C0u;
            // 0x2857c4: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2857C8u;
label_2857c8:
    // 0x2857c8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2857c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2857cc:
    // 0x2857cc: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x2857ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_2857d0:
    // 0x2857d0: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x2857d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
label_2857d4:
    // 0x2857d4: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x2857d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_2857d8:
    // 0x2857d8: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x2857d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_2857dc:
    // 0x2857dc: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x2857dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_2857e0:
    // 0x2857e0: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x2857e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_2857e4:
    // 0x2857e4: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x2857e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_2857e8:
    // 0x2857e8: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x2857e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_2857ec:
    // 0x2857ec: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x2857ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_2857f0:
    // 0x2857f0: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x2857f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_2857f4:
    // 0x2857f4: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x2857f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_2857f8:
    // 0x2857f8: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x2857f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_2857fc:
    // 0x2857fc: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x2857fcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_285800:
    // 0x285800: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x285800u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_285804:
    // 0x285804: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x285804u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_285808:
    // 0x285808: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x285808u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_28580c:
    // 0x28580c: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x28580cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_285810:
    // 0x285810: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x285810u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_285814:
    // 0x285814: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x285814u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_285818:
    // 0x285818: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x285818u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_28581c:
    // 0x28581c: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x28581cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_285820:
    // 0x285820: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x285820u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_285824:
    // 0x285824: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x285824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_285828:
    // 0x285828: 0x40f809  jalr        $v0
label_28582c:
    if (ctx->pc == 0x28582Cu) {
        ctx->pc = 0x28582Cu;
            // 0x28582c: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->pc = 0x285830u;
        goto label_285830;
    }
    ctx->pc = 0x285828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285830u);
        ctx->pc = 0x28582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285828u;
            // 0x28582c: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285830u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285830u; }
            if (ctx->pc != 0x285830u) { return; }
        }
        }
    }
    ctx->pc = 0x285830u;
label_285830:
    // 0x285830: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285834:
    // 0x285834: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x285834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_285838:
    // 0x285838: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x285838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_28583c:
    // 0x28583c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x28583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_285840:
    // 0x285840: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x285840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_285844:
    // 0x285844: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x285844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285848:
    // 0x285848: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_28584c:
    if (ctx->pc == 0x28584Cu) {
        ctx->pc = 0x28584Cu;
            // 0x28584c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->pc = 0x285850u;
        goto label_285850;
    }
    ctx->pc = 0x285848u;
    {
        const bool branch_taken_0x285848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285848u;
            // 0x28584c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285848) {
            ctx->pc = 0x2858CCu;
            goto label_2858cc;
        }
    }
    ctx->pc = 0x285850u;
label_285850:
    // 0x285850: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x285850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_285854:
    // 0x285854: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x285854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_285858:
    // 0x285858: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_28585c:
    // 0x28585c: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x28585cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_285860:
    // 0x285860: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x285860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
label_285864:
    // 0x285864: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x285864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_285868:
    // 0x285868: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x285868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_28586c:
    // 0x28586c: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x28586cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
label_285870:
    // 0x285870: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x285870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_285874:
    // 0x285874: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x285874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_285878:
    // 0x285878: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x285878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_28587c:
    // 0x28587c: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_285880:
    // 0x285880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285884:
    // 0x285884: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_285888:
    if (ctx->pc == 0x285888u) {
        ctx->pc = 0x285888u;
            // 0x285888: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->pc = 0x28588Cu;
        goto label_28588c;
    }
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285884u;
            // 0x285888: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285884) {
            ctx->pc = 0x2858C0u;
            goto label_2858c0;
        }
    }
    ctx->pc = 0x28588Cu;
label_28588c:
    // 0x28588c: 0x0  nop
    ctx->pc = 0x28588cu;
    // NOP
label_285890:
    // 0x285890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_285894:
    // 0x285894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x285894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285898:
    // 0x285898: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x285898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28589c:
    // 0x28589c: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_2858a0:
    // 0x2858a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2858a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2858a4:
    // 0x2858a4: 0x60f809  jalr        $v1
label_2858a8:
    if (ctx->pc == 0x2858A8u) {
        ctx->pc = 0x2858A8u;
            // 0x2858a8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2858ACu;
        goto label_2858ac;
    }
    ctx->pc = 0x2858A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2858ACu);
        ctx->pc = 0x2858A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858A4u;
            // 0x2858a8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2858ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2858ACu; }
            if (ctx->pc != 0x2858ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2858ACu;
label_2858ac:
    // 0x2858ac: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x2858acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_2858b0:
    // 0x2858b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2858b4:
    // 0x2858b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2858b8:
    if (ctx->pc == 0x2858B8u) {
        ctx->pc = 0x2858B8u;
            // 0x2858b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2858BCu;
        goto label_2858bc;
    }
    ctx->pc = 0x2858B4u;
    {
        const bool branch_taken_0x2858b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2858B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858B4u;
            // 0x2858b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858b4) {
            ctx->pc = 0x285890u;
            runtime->cooperativeGuestYield();
            goto label_285890;
        }
    }
    ctx->pc = 0x2858BCu;
label_2858bc:
    // 0x2858bc: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x2858bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_2858c0:
    // 0x2858c0: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x2858c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_2858c4:
    // 0x2858c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2858c8:
    // 0x2858c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2858c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2858cc:
    // 0x2858cc: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x2858ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_2858d0:
    // 0x2858d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2858d4:
    // 0x2858d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2858d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2858d8:
    // 0x2858d8: 0xc0a1594  jal         func_285650
label_2858dc:
    if (ctx->pc == 0x2858DCu) {
        ctx->pc = 0x2858DCu;
            // 0x2858dc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2858E0u;
        goto label_2858e0;
    }
    ctx->pc = 0x2858D8u;
    SET_GPR_U32(ctx, 31, 0x2858E0u);
    ctx->pc = 0x2858DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858D8u;
            // 0x2858dc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285650u;
    runtime->cooperativeGuestYield();
    goto label_285650;
    ctx->pc = 0x2858E0u;
label_2858e0:
    // 0x2858e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2858e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2858e4:
    // 0x2858e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2858e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2858e8:
    // 0x2858e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2858e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2858ec:
    // 0x2858ec: 0xc0a155c  jal         func_285570
label_2858f0:
    if (ctx->pc == 0x2858F0u) {
        ctx->pc = 0x2858F0u;
            // 0x2858f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2858F4u;
        goto label_2858f4;
    }
    ctx->pc = 0x2858ECu;
    SET_GPR_U32(ctx, 31, 0x2858F4u);
    ctx->pc = 0x2858F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858ECu;
            // 0x2858f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285570u;
    if (runtime->hasFunction(0x285570u)) {
        auto targetFn = runtime->lookupFunction(0x285570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858F4u; }
        if (ctx->pc != 0x2858F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285570_0x285570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858F4u; }
        if (ctx->pc != 0x2858F4u) { return; }
    }
    ctx->pc = 0x2858F4u;
label_2858f4:
    // 0x2858f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2858f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2858f8:
    // 0x2858f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2858f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2858fc:
    // 0x2858fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285900:
    if (ctx->pc == 0x285900u) {
        ctx->pc = 0x285900u;
            // 0x285900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285904u;
        goto label_285904;
    }
    ctx->pc = 0x2858FCu;
    {
        const bool branch_taken_0x2858fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858FCu;
            // 0x285900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858fc) {
            ctx->pc = 0x28590Cu;
            goto label_28590c;
        }
    }
    ctx->pc = 0x285904u;
label_285904:
    // 0x285904: 0x10000004  b           . + 4 + (0x4 << 2)
label_285908:
    if (ctx->pc == 0x285908u) {
        ctx->pc = 0x285908u;
            // 0x285908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28590Cu;
        goto label_28590c;
    }
    ctx->pc = 0x285904u;
    {
        const bool branch_taken_0x285904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285904u;
            // 0x285908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285904) {
            ctx->pc = 0x285918u;
            goto label_285918;
        }
    }
    ctx->pc = 0x28590Cu;
label_28590c:
    // 0x28590c: 0x40f809  jalr        $v0
label_285910:
    if (ctx->pc == 0x285910u) {
        ctx->pc = 0x285910u;
            // 0x285910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285914u;
        goto label_285914;
    }
    ctx->pc = 0x28590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285914u);
        ctx->pc = 0x285910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28590Cu;
            // 0x285910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285914u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285914u; }
            if (ctx->pc != 0x285914u) { return; }
        }
        }
    }
    ctx->pc = 0x285914u;
label_285914:
    // 0x285914: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x285914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285918:
    // 0x285918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28591c:
    // 0x28591c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28591cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285920:
    // 0x285920: 0x3e00008  jr          $ra
label_285924:
    if (ctx->pc == 0x285924u) {
        ctx->pc = 0x285924u;
            // 0x285924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x285928u;
        goto label_285928;
    }
    ctx->pc = 0x285920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285920u;
            // 0x285924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285928u;
label_285928:
    // 0x285928: 0x3e00008  jr          $ra
label_28592c:
    if (ctx->pc == 0x28592Cu) {
        ctx->pc = 0x28592Cu;
            // 0x28592c: 0x84820006  lh          $v0, 0x6($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->pc = 0x285930u;
        goto label_285930;
    }
    ctx->pc = 0x285928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285928u;
            // 0x28592c: 0x84820006  lh          $v0, 0x6($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285930u;
label_285930:
    // 0x285930: 0x3e00008  jr          $ra
label_285934:
    if (ctx->pc == 0x285934u) {
        ctx->pc = 0x285934u;
            // 0x285934: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x285938u;
        goto label_fallthrough_0x285930;
    }
    ctx->pc = 0x285930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285930u;
            // 0x285934: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285650u: goto label_285650;
            case 0x285654u: goto label_285654;
            case 0x285658u: goto label_285658;
            case 0x28565Cu: goto label_28565c;
            case 0x285660u: goto label_285660;
            case 0x285664u: goto label_285664;
            case 0x285668u: goto label_285668;
            case 0x28566Cu: goto label_28566c;
            case 0x285670u: goto label_285670;
            case 0x285674u: goto label_285674;
            case 0x285678u: goto label_285678;
            case 0x28567Cu: goto label_28567c;
            case 0x285680u: goto label_285680;
            case 0x285684u: goto label_285684;
            case 0x285688u: goto label_285688;
            case 0x28568Cu: goto label_28568c;
            case 0x285690u: goto label_285690;
            case 0x285694u: goto label_285694;
            case 0x285698u: goto label_285698;
            case 0x28569Cu: goto label_28569c;
            case 0x2856A0u: goto label_2856a0;
            case 0x2856A4u: goto label_2856a4;
            case 0x2856A8u: goto label_2856a8;
            case 0x2856ACu: goto label_2856ac;
            case 0x2856B0u: goto label_2856b0;
            case 0x2856B4u: goto label_2856b4;
            case 0x2856B8u: goto label_2856b8;
            case 0x2856BCu: goto label_2856bc;
            case 0x2856C0u: goto label_2856c0;
            case 0x2856C4u: goto label_2856c4;
            case 0x2856C8u: goto label_2856c8;
            case 0x2856CCu: goto label_2856cc;
            case 0x2856D0u: goto label_2856d0;
            case 0x2856D4u: goto label_2856d4;
            case 0x2856D8u: goto label_2856d8;
            case 0x2856DCu: goto label_2856dc;
            case 0x2856E0u: goto label_2856e0;
            case 0x2856E4u: goto label_2856e4;
            case 0x2856E8u: goto label_2856e8;
            case 0x2856ECu: goto label_2856ec;
            case 0x2856F0u: goto label_2856f0;
            case 0x2856F4u: goto label_2856f4;
            case 0x2856F8u: goto label_2856f8;
            case 0x2856FCu: goto label_2856fc;
            case 0x285700u: goto label_285700;
            case 0x285704u: goto label_285704;
            case 0x285708u: goto label_285708;
            case 0x28570Cu: goto label_28570c;
            case 0x285710u: goto label_285710;
            case 0x285714u: goto label_285714;
            case 0x285718u: goto label_285718;
            case 0x28571Cu: goto label_28571c;
            case 0x285720u: goto label_285720;
            case 0x285724u: goto label_285724;
            case 0x285728u: goto label_285728;
            case 0x28572Cu: goto label_28572c;
            case 0x285730u: goto label_285730;
            case 0x285734u: goto label_285734;
            case 0x285738u: goto label_285738;
            case 0x28573Cu: goto label_28573c;
            case 0x285740u: goto label_285740;
            case 0x285744u: goto label_285744;
            case 0x285748u: goto label_285748;
            case 0x28574Cu: goto label_28574c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285758u: goto label_285758;
            case 0x28575Cu: goto label_28575c;
            case 0x285760u: goto label_285760;
            case 0x285764u: goto label_285764;
            case 0x285768u: goto label_285768;
            case 0x28576Cu: goto label_28576c;
            case 0x285770u: goto label_285770;
            case 0x285774u: goto label_285774;
            case 0x285778u: goto label_285778;
            case 0x28577Cu: goto label_28577c;
            case 0x285780u: goto label_285780;
            case 0x285784u: goto label_285784;
            case 0x285788u: goto label_285788;
            case 0x28578Cu: goto label_28578c;
            case 0x285790u: goto label_285790;
            case 0x285794u: goto label_285794;
            case 0x285798u: goto label_285798;
            case 0x28579Cu: goto label_28579c;
            case 0x2857A0u: goto label_2857a0;
            case 0x2857A4u: goto label_2857a4;
            case 0x2857A8u: goto label_2857a8;
            case 0x2857ACu: goto label_2857ac;
            case 0x2857B0u: goto label_2857b0;
            case 0x2857B4u: goto label_2857b4;
            case 0x2857B8u: goto label_2857b8;
            case 0x2857BCu: goto label_2857bc;
            case 0x2857C0u: goto label_2857c0;
            case 0x2857C4u: goto label_2857c4;
            case 0x2857C8u: goto label_2857c8;
            case 0x2857CCu: goto label_2857cc;
            case 0x2857D0u: goto label_2857d0;
            case 0x2857D4u: goto label_2857d4;
            case 0x2857D8u: goto label_2857d8;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857E0u: goto label_2857e0;
            case 0x2857E4u: goto label_2857e4;
            case 0x2857E8u: goto label_2857e8;
            case 0x2857ECu: goto label_2857ec;
            case 0x2857F0u: goto label_2857f0;
            case 0x2857F4u: goto label_2857f4;
            case 0x2857F8u: goto label_2857f8;
            case 0x2857FCu: goto label_2857fc;
            case 0x285800u: goto label_285800;
            case 0x285804u: goto label_285804;
            case 0x285808u: goto label_285808;
            case 0x28580Cu: goto label_28580c;
            case 0x285810u: goto label_285810;
            case 0x285814u: goto label_285814;
            case 0x285818u: goto label_285818;
            case 0x28581Cu: goto label_28581c;
            case 0x285820u: goto label_285820;
            case 0x285824u: goto label_285824;
            case 0x285828u: goto label_285828;
            case 0x28582Cu: goto label_28582c;
            case 0x285830u: goto label_285830;
            case 0x285834u: goto label_285834;
            case 0x285838u: goto label_285838;
            case 0x28583Cu: goto label_28583c;
            case 0x285840u: goto label_285840;
            case 0x285844u: goto label_285844;
            case 0x285848u: goto label_285848;
            case 0x28584Cu: goto label_28584c;
            case 0x285850u: goto label_285850;
            case 0x285854u: goto label_285854;
            case 0x285858u: goto label_285858;
            case 0x28585Cu: goto label_28585c;
            case 0x285860u: goto label_285860;
            case 0x285864u: goto label_285864;
            case 0x285868u: goto label_285868;
            case 0x28586Cu: goto label_28586c;
            case 0x285870u: goto label_285870;
            case 0x285874u: goto label_285874;
            case 0x285878u: goto label_285878;
            case 0x28587Cu: goto label_28587c;
            case 0x285880u: goto label_285880;
            case 0x285884u: goto label_285884;
            case 0x285888u: goto label_285888;
            case 0x28588Cu: goto label_28588c;
            case 0x285890u: goto label_285890;
            case 0x285894u: goto label_285894;
            case 0x285898u: goto label_285898;
            case 0x28589Cu: goto label_28589c;
            case 0x2858A0u: goto label_2858a0;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858A8u: goto label_2858a8;
            case 0x2858ACu: goto label_2858ac;
            case 0x2858B0u: goto label_2858b0;
            case 0x2858B4u: goto label_2858b4;
            case 0x2858B8u: goto label_2858b8;
            case 0x2858BCu: goto label_2858bc;
            case 0x2858C0u: goto label_2858c0;
            case 0x2858C4u: goto label_2858c4;
            case 0x2858C8u: goto label_2858c8;
            case 0x2858CCu: goto label_2858cc;
            case 0x2858D0u: goto label_2858d0;
            case 0x2858D4u: goto label_2858d4;
            case 0x2858D8u: goto label_2858d8;
            case 0x2858DCu: goto label_2858dc;
            case 0x2858E0u: goto label_2858e0;
            case 0x2858E4u: goto label_2858e4;
            case 0x2858E8u: goto label_2858e8;
            case 0x2858ECu: goto label_2858ec;
            case 0x2858F0u: goto label_2858f0;
            case 0x2858F4u: goto label_2858f4;
            case 0x2858F8u: goto label_2858f8;
            case 0x2858FCu: goto label_2858fc;
            case 0x285900u: goto label_285900;
            case 0x285904u: goto label_285904;
            case 0x285908u: goto label_285908;
            case 0x28590Cu: goto label_28590c;
            case 0x285910u: goto label_285910;
            case 0x285914u: goto label_285914;
            case 0x285918u: goto label_285918;
            case 0x28591Cu: goto label_28591c;
            case 0x285920u: goto label_285920;
            case 0x285924u: goto label_285924;
            case 0x285928u: goto label_285928;
            case 0x28592Cu: goto label_28592c;
            case 0x285930u: goto label_285930;
            case 0x285934u: goto label_285934;
            default: break;
        }
        return;
    }
label_fallthrough_0x285930:
    ctx->pc = 0x285938u;
}
