#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001188F0
// Address: 0x1188f0 - 0x11aec8
void sub_001188F0_0x1188f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001188F0_0x1188f0");
#endif

    ctx->pc = 0x1188f0u;

    // 0x1188f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1188f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1188f4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1188f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1188f8: 0x8c464638  lw          $a2, 0x4638($v0)
    ctx->pc = 0x1188f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x1188fc: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1188fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x118900: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x118900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x118904: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x118904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x118908: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x118908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11890c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118910: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x118910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x118914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118918: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11891c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x11891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x118920: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x118920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x118924: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x118928: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x118928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x11892c: 0x3463d410  ori         $v1, $v1, 0xD410
    ctx->pc = 0x11892cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54288);
    // 0x118930: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x118934: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x118934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x118938: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x118938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x11893c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x118940: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x118940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x118944: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x118944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x118948: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11894c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x11894cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x118950: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x118950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x118954: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x118954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x118958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11895c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11895cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x118960: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x118960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118964: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x118964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x118968: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x118968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11896c: 0xac45c300  sw          $a1, -0x3D00($v0)
    ctx->pc = 0x11896cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 5));
    // 0x118970: 0x8c9300d8  lw          $s3, 0xD8($a0)
    ctx->pc = 0x118970u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x118974: 0x248200dc  addiu       $v0, $a0, 0xDC
    ctx->pc = 0x118974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x118978: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x118978u;
    {
        const bool branch_taken_0x118978 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118978u;
            // 0x11897c: 0x8c72ed58  lw          $s2, -0x12A8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118978) {
            ctx->pc = 0x1189B4u;
            goto label_1189b4;
        }
    }
    ctx->pc = 0x118980u;
    // 0x118980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118984: 0x0  nop
    ctx->pc = 0x118984u;
    // NOP
label_118988:
    // 0x118988: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x118988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11898c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x118990: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118990u;
    {
        const bool branch_taken_0x118990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x118994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118990u;
            // 0x118994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118990) {
            ctx->pc = 0x1189A8u;
            goto label_1189a8;
        }
    }
    ctx->pc = 0x118998u;
    // 0x118998: 0xc040622  jal         func_101888
    ctx->pc = 0x118998u;
    SET_GPR_U32(ctx, 31, 0x1189A0u);
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189A0u; }
        if (ctx->pc != 0x1189A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189A0u; }
        if (ctx->pc != 0x1189A0u) { return; }
    }
    ctx->pc = 0x1189A0u;
    // 0x1189a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1189a4: 0xac520040  sw          $s2, 0x40($v0)
    ctx->pc = 0x1189a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 18));
label_1189a8:
    // 0x1189a8: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x1189a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1189ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1189ACu;
    {
        const bool branch_taken_0x1189ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1189B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1189ACu;
            // 0x1189b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189ac) {
            ctx->pc = 0x118988u;
            runtime->cooperativeGuestYield();
            goto label_118988;
        }
    }
    ctx->pc = 0x1189B4u;
label_1189b4:
    // 0x1189b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1189b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1189b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1189b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1189bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1189bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1189c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1189c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1189c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1189C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1189C8u;
            // 0x1189cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1189D0u;
    // 0x1189d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1189d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1189d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1189d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1189d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1189dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1189e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1189e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1189e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1189e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1189e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1189e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1189ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1189ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1189f0: 0xc045b74  jal         func_116DD0
    ctx->pc = 0x1189F0u;
    SET_GPR_U32(ctx, 31, 0x1189F8u);
    ctx->pc = 0x1189F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1189F0u;
            // 0x1189f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116DD0u;
    if (runtime->hasFunction(0x116DD0u)) {
        auto targetFn = runtime->lookupFunction(0x116DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189F8u; }
        if (ctx->pc != 0x1189F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116DD0_0x116dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189F8u; }
        if (ctx->pc != 0x1189F8u) { return; }
    }
    ctx->pc = 0x1189F8u;
    // 0x1189f8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1189f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1189fc: 0x8e140074  lw          $s4, 0x74($s0)
    ctx->pc = 0x1189fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x118a00: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x118A00u;
    {
        const bool branch_taken_0x118a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118A00u;
            // 0x118a04: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a00) {
            ctx->pc = 0x118A8Cu;
            goto label_118a8c;
        }
    }
    ctx->pc = 0x118A08u;
    // 0x118a08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x118a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x118a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x118a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x118a14: 0x0  nop
    ctx->pc = 0x118a14u;
    // NOP
label_118a18:
    // 0x118a18: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x118a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x118a1c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x118a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118a20: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x118A20u;
    {
        const bool branch_taken_0x118a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118A20u;
            // 0x118a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a20) {
            ctx->pc = 0x118A4Cu;
            goto label_118a4c;
        }
    }
    ctx->pc = 0x118A28u;
label_118a28:
    // 0x118a28: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x118a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x118a2c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x118a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118a30: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x118a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118a34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x118a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x118a38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x118a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x118a3c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x118a40: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x118a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x118a44: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118A44u;
    {
        const bool branch_taken_0x118a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118A44u;
            // 0x118a48: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a44) {
            ctx->pc = 0x118A28u;
            runtime->cooperativeGuestYield();
            goto label_118a28;
        }
    }
    ctx->pc = 0x118A4Cu;
label_118a4c:
    // 0x118a4c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x118a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a54: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x118a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x118a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118a5c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x118a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x118a60: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x118a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x118a64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x118a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x118a68: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x118a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118a6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118a70: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x118a74: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x118A74u;
    SET_GPR_U32(ctx, 31, 0x118A7Cu);
    ctx->pc = 0x118A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118A74u;
            // 0x118a78: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118A7Cu; }
        if (ctx->pc != 0x118A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118A7Cu; }
        if (ctx->pc != 0x118A7Cu) { return; }
    }
    ctx->pc = 0x118A7Cu;
    // 0x118a7c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x118a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x118a80: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x118a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118a84: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x118A84u;
    {
        const bool branch_taken_0x118a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118a84) {
            ctx->pc = 0x118A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118A84u;
            // 0x118a88: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118A18u;
            runtime->cooperativeGuestYield();
            goto label_118a18;
        }
    }
    ctx->pc = 0x118A8Cu;
label_118a8c:
    // 0x118a8c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x118a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x118a90: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x118a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x118a94: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x118a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x118a98: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x118a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x118a9c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x118a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x118aa0: 0x40f809  jalr        $v0
    ctx->pc = 0x118AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x118AA8u);
        ctx->pc = 0x118AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118AA0u;
            // 0x118aa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x118AA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x118AA8u; }
            if (ctx->pc != 0x118AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x118AA8u;
    // 0x118aa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x118aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118aac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x118aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118ab0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x118ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118ab4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x118ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118ab8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x118ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x118AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118AC0u;
            // 0x118ac4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118AC8u;
    // 0x118ac8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x118ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x118acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ad0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x118ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x118ad4: 0x8c890074  lw          $t1, 0x74($a0)
    ctx->pc = 0x118ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x118ad8: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x118ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x118adc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x118ADCu;
    {
        const bool branch_taken_0x118adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118ADCu;
            // 0x118ae0: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118adc) {
            ctx->pc = 0x118B38u;
            goto label_118b38;
        }
    }
    ctx->pc = 0x118AE4u;
    // 0x118ae4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x118ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_118ae8:
    // 0x118ae8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118aec: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x118aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x118af0: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x118af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118af4: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x118AF4u;
    {
        const bool branch_taken_0x118af4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118AF4u;
            // 0x118af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118af4) {
            ctx->pc = 0x118B24u;
            goto label_118b24;
        }
    }
    ctx->pc = 0x118AFCu;
    // 0x118afc: 0x0  nop
    ctx->pc = 0x118afcu;
    // NOP
label_118b00:
    // 0x118b00: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x118b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x118b04: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x118b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118b08: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x118b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x118b0c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x118b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x118b10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118b14: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x118b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x118b18: 0xa8182b  sltu        $v1, $a1, $t0
    ctx->pc = 0x118b18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x118b1c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118B1Cu;
    {
        const bool branch_taken_0x118b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B1Cu;
            // 0x118b20: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b1c) {
            ctx->pc = 0x118B00u;
            runtime->cooperativeGuestYield();
            goto label_118b00;
        }
    }
    ctx->pc = 0x118B24u;
label_118b24:
    // 0x118b24: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x118b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x118b28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118b2c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x118b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118b30: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x118B30u;
    {
        const bool branch_taken_0x118b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B30u;
            // 0x118b34: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b30) {
            ctx->pc = 0x118AE8u;
            runtime->cooperativeGuestYield();
            goto label_118ae8;
        }
    }
    ctx->pc = 0x118B38u;
label_118b38:
    // 0x118b38: 0x3e00008  jr          $ra
    ctx->pc = 0x118B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118B40u;
    // 0x118b40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x118b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x118b44: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x118b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x118b48: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x118b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x118b4c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x118b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x118b50: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x118b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x118b54: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x118b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x118b58: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x118b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x118b5c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x118b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x118b60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x118b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x118b64: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x118b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x118b68: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x118b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x118b6c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x118b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x118b70: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x118b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x118b74: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x118b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x118b78: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x118b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x118b7c: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x118b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x118b80: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x118b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x118b84: 0xc4660070  lwc1        $f6, 0x70($v1)
    ctx->pc = 0x118b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x118b88: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x118b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x118b8c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x118b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118b90: 0x8cc20068  lw          $v0, 0x68($a2)
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x118b94: 0x10400866  beqz        $v0, . + 4 + (0x866 << 2)
    ctx->pc = 0x118B94u;
    {
        const bool branch_taken_0x118b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B94u;
            // 0x118b98: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b94) {
            ctx->pc = 0x11AD30u;
            goto label_11ad30;
        }
    }
    ctx->pc = 0x118B9Cu;
    // 0x118b9c: 0x0  nop
    ctx->pc = 0x118b9cu;
    // NOP
label_118ba0:
    // 0x118ba0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x118ba4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x118ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118ba8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x118ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118bac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x118bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x118bb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x118bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x118bb4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x118bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118bb8: 0x800013  mtlo        $a0
    ctx->pc = 0x118bb8u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x118bbc: 0x8cc6006c  lw          $a2, 0x6C($a2)
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x118bc0: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x118bc0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118bc4: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x118bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x118bc8: 0x94420066  lhu         $v0, 0x66($v0)
    ctx->pc = 0x118bc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x118bcc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x118bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x118bd0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x118bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118bd4: 0x1040084f  beqz        $v0, . + 4 + (0x84F << 2)
    ctx->pc = 0x118BD4u;
    {
        const bool branch_taken_0x118bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118BD4u;
            // 0x118bd8: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bd4) {
            ctx->pc = 0x11AD14u;
            goto label_11ad14;
        }
    }
    ctx->pc = 0x118BDCu;
    // 0x118bdc: 0x0  nop
    ctx->pc = 0x118bdcu;
    // NOP
label_118be0:
    // 0x118be0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118be4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x118be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118be8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x118be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x118bec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118bf0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x118bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x118bf4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x118bf8: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x118bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118bfc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x118bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x118c00: 0x800013  mtlo        $a0
    ctx->pc = 0x118c00u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x118c04: 0x70621800  madd        $v1, $v1, $v0
    ctx->pc = 0x118c04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118c08: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x118c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x118c0c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x118c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x118c10: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x118c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x118c14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x118c18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x118c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118c1c: 0x446821  addu        $t5, $v0, $a0
    ctx->pc = 0x118c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x118c20: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x118C20u;
    {
        const bool branch_taken_0x118c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C20u;
            // 0x118c24: 0x25a30004  addiu       $v1, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c20) {
            ctx->pc = 0x118C88u;
            goto label_118c88;
        }
    }
    ctx->pc = 0x118C28u;
    // 0x118c28: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x118c28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x118c2c: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x118c2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x118c30: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x118c30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118c34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x118c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118c38: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x118c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x118c3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118c44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118c48: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x118c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x118c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118c54: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x118c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x118c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x118c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118c5c: 0x0  nop
    ctx->pc = 0x118c5cu;
    // NOP
    // 0x118c60: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x118C60u;
    {
        const bool branch_taken_0x118c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C60u;
            // 0x118c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c60) {
            ctx->pc = 0x118CE8u;
            goto label_118ce8;
        }
    }
    ctx->pc = 0x118C68u;
    // 0x118c68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x118c68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118c70: 0x46026840  add.s       $f1, $f13, $f2
    ctx->pc = 0x118c70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x118c74: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x118c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x118c78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x118c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118c7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x118C7Cu;
    {
        const bool branch_taken_0x118c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c7c) {
            ctx->pc = 0x118CE0u;
            goto label_118ce0;
        }
    }
    ctx->pc = 0x118C84u;
    // 0x118c84: 0x0  nop
    ctx->pc = 0x118c84u;
    // NOP
label_118c88:
    // 0x118c88: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x118c88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x118c8c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x118c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x118c90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118c94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x118c94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118c9c: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x118c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x118ca0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x118ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x118ca4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x118ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118ca8: 0x0  nop
    ctx->pc = 0x118ca8u;
    // NOP
    // 0x118cac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x118CACu;
    {
        const bool branch_taken_0x118cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CACu;
            // 0x118cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cac) {
            ctx->pc = 0x118CE8u;
            goto label_118ce8;
        }
    }
    ctx->pc = 0x118CB4u;
    // 0x118cb4: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x118cb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x118cb8: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x118cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x118cbc: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x118cbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118cc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118cc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118cd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118cd4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x118cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x118cd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x118cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118cdc: 0x0  nop
    ctx->pc = 0x118cdcu;
    // NOP
label_118ce0:
    // 0x118ce0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x118CE0u;
    {
        const bool branch_taken_0x118ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118ce0) {
            ctx->pc = 0x118CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118CE0u;
            // 0x118ce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118CE8u;
            goto label_118ce8;
        }
    }
    ctx->pc = 0x118CE8u;
label_118ce8:
    // 0x118ce8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x118ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cec: 0x10400802  beqz        $v0, . + 4 + (0x802 << 2)
    ctx->pc = 0x118CECu;
    {
        const bool branch_taken_0x118cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CECu;
            // 0x118cf0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cec) {
            ctx->pc = 0x11ACF8u;
            goto label_11acf8;
        }
    }
    ctx->pc = 0x118CF4u;
    // 0x118cf4: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x118cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x118cf8: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x118cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x118cfc: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x118cfcu;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x118d00: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x118d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x118d04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x118d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118d08: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x118d08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x118d0c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x118d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x118d10: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x118d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x118d14: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x118d14u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x118d18: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x118d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x118d1c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x118d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118d24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x118d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x118d28: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x118d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x118d2c: 0x450003ef  bc1f        . + 4 + (0x3EF << 2)
    ctx->pc = 0x118D2Cu;
    {
        const bool branch_taken_0x118d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D2Cu;
            // 0x118d30: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d2c) {
            ctx->pc = 0x119CECu;
            goto label_119cec;
        }
    }
    ctx->pc = 0x118D34u;
    // 0x118d34: 0x460d3834  c.lt.s      $f7, $f13
    ctx->pc = 0x118d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118d38: 0x0  nop
    ctx->pc = 0x118d38u;
    // NOP
    // 0x118d3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x118D3Cu;
    {
        const bool branch_taken_0x118d3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x118D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D3Cu;
            // 0x118d40: 0x46003246  mov.s       $f9, $f6 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d3c) {
            ctx->pc = 0x118D48u;
            goto label_118d48;
        }
    }
    ctx->pc = 0x118D44u;
    // 0x118d44: 0x46003247  neg.s       $f9, $f6
    ctx->pc = 0x118d44u;
    ctx->f[9] = FPU_NEG_S(ctx->f[6]);
label_118d48:
    // 0x118d48: 0x100003e2  b           . + 4 + (0x3E2 << 2)
    ctx->pc = 0x118D48u;
    {
        const bool branch_taken_0x118d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D48u;
            // 0x118d4c: 0x46003a06  mov.s       $f8, $f7 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d48) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x118D50u;
label_118d50:
    // 0x118d50: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x118d50u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x118d54: 0x108001b0  beqz        $a0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x118D54u;
    {
        const bool branch_taken_0x118d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D54u;
            // 0x118d58: 0x25ab0004  addiu       $t3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d54) {
            ctx->pc = 0x119418u;
            goto label_119418;
        }
    }
    ctx->pc = 0x118D5Cu;
    // 0x118d5c: 0x91ae0002  lbu         $t6, 0x2($t5)
    ctx->pc = 0x118d5cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x118d60: 0x31c20002  andi        $v0, $t6, 0x2
    ctx->pc = 0x118d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x118d64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118D64u;
    {
        const bool branch_taken_0x118d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D64u;
            // 0x118d68: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d64) {
            ctx->pc = 0x118D84u;
            goto label_118d84;
        }
    }
    ctx->pc = 0x118D6Cu;
    // 0x118d6c: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x118d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x118d70: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x118d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x118d74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x118d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x118d78: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x118d7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118D7Cu;
    {
        const bool branch_taken_0x118d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D7Cu;
            // 0x118d80: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d7c) {
            ctx->pc = 0x118D88u;
            goto label_118d88;
        }
    }
    ctx->pc = 0x118D84u;
label_118d84:
    // 0x118d84: 0x244c7788  addiu       $t4, $v0, 0x7788
    ctx->pc = 0x118d84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_118d88:
    // 0x118d88: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x118d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x118d8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x118d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x118d90: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x118D90u;
    {
        const bool branch_taken_0x118d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D90u;
            // 0x118d94: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d90) {
            ctx->pc = 0x1190E8u;
            goto label_1190e8;
        }
    }
    ctx->pc = 0x118D98u;
    // 0x118d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118d9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118da0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x118da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x118da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118da8: 0x46004086  mov.s       $f2, $f8
    ctx->pc = 0x118da8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[8]);
    // 0x118dac: 0x46060143  div.s       $f5, $f0, $f6
    ctx->pc = 0x118dacu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[6];
    // 0x118db0: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x118db0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x118db4: 0x46014000  add.s       $f0, $f8, $f1
    ctx->pc = 0x118db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x118db8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x118db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x118dbc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x118dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x118dc0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x118dc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x118dc4: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x118dc8: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x118dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x118dcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x118dd0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x118dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x118dd4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x118dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x118dd8: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x118DD8u;
    {
        const bool branch_taken_0x118dd8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x118DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DD8u;
            // 0x118ddc: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dd8) {
            ctx->pc = 0x118DF0u;
            goto label_118df0;
        }
    }
    ctx->pc = 0x118DE0u;
    // 0x118de0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x118de0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118de4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dec: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x118decu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_118df0:
    // 0x118df0: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x118DF0u;
    {
        const bool branch_taken_0x118df0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x118DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DF0u;
            // 0x118df4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118df0) {
            ctx->pc = 0x118E08u;
            goto label_118e08;
        }
    }
    ctx->pc = 0x118DF8u;
    // 0x118df8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x118df8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118dfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e04: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x118e04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_118e08:
    // 0x118e08: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x118e08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x118e0c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x118e0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x118e10: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x118e14: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x118e14u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x118e18: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x118e18u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x118e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118e20: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x118e20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x118e24: 0x3c29821  addu        $s3, $fp, $v0
    ctx->pc = 0x118e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x118e28: 0x91890001  lbu         $t1, 0x1($t4)
    ctx->pc = 0x118e28u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x118e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118e30: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x118e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x118e34: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x118e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x118e38: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118E38u;
    {
        const bool branch_taken_0x118e38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x118E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E38u;
            // 0x118e3c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e38) {
            ctx->pc = 0x118E48u;
            goto label_118e48;
        }
    }
    ctx->pc = 0x118E40u;
    // 0x118e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118E40u;
    {
        const bool branch_taken_0x118e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E40u;
            // 0x118e44: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e40) {
            ctx->pc = 0x118E58u;
            goto label_118e58;
        }
    }
    ctx->pc = 0x118E48u;
label_118e48:
    // 0x118e48: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x118e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x118e4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x118e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x118e50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x118e54: 0x1829021  addu        $s2, $t4, $v0
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_118e58:
    // 0x118e58: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x118E58u;
    {
        const bool branch_taken_0x118e58 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E58u;
            // 0x118e5c: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e58) {
            ctx->pc = 0x118F50u;
            goto label_118f50;
        }
    }
    ctx->pc = 0x118E60u;
    // 0x118e60: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x118e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x118e64: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x118e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x118e68: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x118e68u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e6c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x118e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x118e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118e74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x118e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x118e78: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x118e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x118e7c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x118e7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x118e80: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x118e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118e84: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x118e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x118e88: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x118e88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x118e8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x118e90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x118e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x118e94: 0x91900000  lbu         $s0, 0x0($t4)
    ctx->pc = 0x118e94u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x118e98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x118e9c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118ea0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118ea4: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x118ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x118ea8: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x118ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x118eac: 0x10400388  beqz        $v0, . + 4 + (0x388 << 2)
    ctx->pc = 0x118EACu;
    {
        const bool branch_taken_0x118eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118EACu;
            // 0x118eb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118eac) {
            ctx->pc = 0x119CD0u;
            goto label_119cd0;
        }
    }
    ctx->pc = 0x118EB4u;
    // 0x118eb4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x118eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118eb8:
    // 0x118eb8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x118eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x118ebc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x118ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x118ec0: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x118ec0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118ec4: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x118EC4u;
    {
        const bool branch_taken_0x118ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ec4) {
            ctx->pc = 0x118EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118EC4u;
            // 0x118ec8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118F3Cu;
            goto label_118f3c;
        }
    }
    ctx->pc = 0x118ECCu;
    // 0x118ecc: 0x1d14021  addu        $t0, $t6, $s1
    ctx->pc = 0x118eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_118ed0:
    // 0x118ed0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x118ed4: 0x24e1821  addu        $v1, $s2, $t6
    ctx->pc = 0x118ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x118ed8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x118ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x118edc: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118ee0: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x118ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x118ee4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x118ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x118ee8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x118ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x118eec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x118eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x118ef0: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x118ef0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x118ef4: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x118ef4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x118ef8: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x118ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118efc: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118EFCu;
    {
        const bool branch_taken_0x118efc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x118F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118EFCu;
            // 0x118f00: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118efc) {
            ctx->pc = 0x118F10u;
            goto label_118f10;
        }
    }
    ctx->pc = 0x118F04u;
    // 0x118f04: 0x51023  negu        $v0, $a1
    ctx->pc = 0x118f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x118f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118F08u;
    {
        const bool branch_taken_0x118f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F08u;
            // 0x118f0c: 0x4f1004  sllv        $v0, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f08) {
            ctx->pc = 0x118F14u;
            goto label_118f14;
        }
    }
    ctx->pc = 0x118F10u;
label_118f10:
    // 0x118f10: 0xaf1007  srav        $v0, $t7, $a1
    ctx->pc = 0x118f10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 5) & 0x1F));
label_118f14:
    // 0x118f14: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x118f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x118f18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x118f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118f1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x118f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x118f20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x118f24: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x118f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118f2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x118f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x118f30: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x118F30u;
    {
        const bool branch_taken_0x118f30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x118F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F30u;
            // 0x118f34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f30) {
            ctx->pc = 0x118ED0u;
            runtime->cooperativeGuestYield();
            goto label_118ed0;
        }
    }
    ctx->pc = 0x118F38u;
    // 0x118f38: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_118f3c:
    // 0x118f3c: 0x170102b  sltu        $v0, $t3, $s0
    ctx->pc = 0x118f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x118f40: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x118F40u;
    {
        const bool branch_taken_0x118f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F40u;
            // 0x118f44: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f40) {
            ctx->pc = 0x118EB8u;
            runtime->cooperativeGuestYield();
            goto label_118eb8;
        }
    }
    ctx->pc = 0x118F48u;
    // 0x118f48: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x118F48u;
    {
        const bool branch_taken_0x118f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F48u;
            // 0x118f4c: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f48) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x118F50u;
label_118f50:
    // 0x118f50: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x118f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x118f54: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x118f54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x118f58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x118f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x118f5c: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x118f5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x118f60: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x118f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x118f64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x118f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x118f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118f6c: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x118f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118f70: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x118f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x118f74: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x118F74u;
    {
        const bool branch_taken_0x118f74 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x118F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F74u;
            // 0x118f78: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f74) {
            ctx->pc = 0x118FBCu;
            goto label_118fbc;
        }
    }
    ctx->pc = 0x118F7Cu;
    // 0x118f7c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x118f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x118f80: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x118f80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x118f84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x118f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118f88: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x118f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x118f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118f94: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x118f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x118f98: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x118f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x118f9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x118f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118fa0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x118fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x118fa4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x118fa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x118fa8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x118fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x118fac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x118facu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x118fb0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x118fb0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x118fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118FB4u;
    {
        const bool branch_taken_0x118fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118FB4u;
            // 0x118fb8: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fb4) {
            ctx->pc = 0x118FF0u;
            goto label_118ff0;
        }
    }
    ctx->pc = 0x118FBCu;
label_118fbc:
    // 0x118fbc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x118fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x118fc0: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x118fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x118fc4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x118fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118fc8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x118fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x118fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118fd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118fd4: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x118fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x118fd8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x118fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x118fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x118fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118fe0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x118fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x118fe4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x118fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x118fe8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x118fe8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x118fec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x118fecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_118ff0:
    // 0x118ff0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x118ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ff8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x118ff8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ffc: 0x91910000  lbu         $s1, 0x0($t4)
    ctx->pc = 0x118ffcu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119000: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x119000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119004: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x119004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x119008: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11900c: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x11900cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x119010: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119014: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x119014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x119018: 0x1220032d  beqz        $s1, . + 4 + (0x32D << 2)
    ctx->pc = 0x119018u;
    {
        const bool branch_taken_0x119018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119018u;
            // 0x11901c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119018) {
            ctx->pc = 0x119CD0u;
            goto label_119cd0;
        }
    }
    ctx->pc = 0x119020u;
    // 0x119020: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x119020u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119024: 0x0  nop
    ctx->pc = 0x119024u;
    // NOP
label_119028:
    // 0x119028: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x119028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11902c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x11902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x119030: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x119030u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119034: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x119034u;
    {
        const bool branch_taken_0x119034 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x119034) {
            ctx->pc = 0x119038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119034u;
            // 0x119038: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1190D4u;
            goto label_1190d4;
        }
    }
    ctx->pc = 0x11903Cu;
    // 0x11903c: 0x1f44821  addu        $t1, $t7, $s4
    ctx->pc = 0x11903cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x119040: 0x1f54021  addu        $t0, $t7, $s5
    ctx->pc = 0x119040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x119044: 0x0  nop
    ctx->pc = 0x119044u;
    // NOP
label_119048:
    // 0x119048: 0x71023  negu        $v0, $a3
    ctx->pc = 0x119048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11904c: 0x24f1821  addu        $v1, $s2, $t7
    ctx->pc = 0x11904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x119050: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x119050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x119054: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x119054u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119058: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x119058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11905c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119060: 0x21023  negu        $v0, $v0
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119064: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x119064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x119068: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x119068u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11906c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x11906cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x119070: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x119070u;
    {
        const bool branch_taken_0x119070 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x119074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119070u;
            // 0x119074: 0x827023  subu        $t6, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119070) {
            ctx->pc = 0x119090u;
            goto label_119090;
        }
    }
    ctx->pc = 0x119078u;
    // 0x119078: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11907c: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11907cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119080: 0x581804  sllv        $v1, $t8, $v0
    ctx->pc = 0x119080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x119084: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x119084u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119088u;
    {
        const bool branch_taken_0x119088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119088u;
            // 0x11908c: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119088) {
            ctx->pc = 0x1190A0u;
            goto label_1190a0;
        }
    }
    ctx->pc = 0x119090u;
label_119090:
    // 0x119090: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x119090u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119094: 0xd82807  srav        $a1, $t8, $a2
    ctx->pc = 0x119094u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 6) & 0x1F));
    // 0x119098: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11909c: 0xd01007  srav        $v0, $s0, $a2
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
label_1190a0:
    // 0x1190a0: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x1190a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1190a4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1190a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1190a8: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x1190a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1190ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1190acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1190b0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1190b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1190b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1190bc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1190c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1190c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1190c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1190c8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1190C8u;
    {
        const bool branch_taken_0x1190c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1190CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190C8u;
            // 0x1190cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c8) {
            ctx->pc = 0x119048u;
            runtime->cooperativeGuestYield();
            goto label_119048;
        }
    }
    ctx->pc = 0x1190D0u;
    // 0x1190d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1190d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1190d4:
    // 0x1190d4: 0x151102b  sltu        $v0, $t2, $s1
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1190d8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1190D8u;
    {
        const bool branch_taken_0x1190d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1190DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190D8u;
            // 0x1190dc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190d8) {
            ctx->pc = 0x119028u;
            runtime->cooperativeGuestYield();
            goto label_119028;
        }
    }
    ctx->pc = 0x1190E0u;
    // 0x1190e0: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x1190E0u;
    {
        const bool branch_taken_0x1190e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190E0u;
            // 0x1190e4: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190e0) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x1190E8u;
label_1190e8:
    // 0x1190e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1190ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1190ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1190f0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1190f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1190f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1190f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1190f8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x1190f8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x1190fc: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x1190fcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x119100: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x119100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x119104: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x119104u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x119108: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11910c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11910cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119110: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x119110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x119114: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x119114u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119118: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x119118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11911c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11911Cu;
    {
        const bool branch_taken_0x11911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11911Cu;
            // 0x119120: 0x46004086  mov.s       $f2, $f8 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11911c) {
            ctx->pc = 0x119138u;
            goto label_119138;
        }
    }
    ctx->pc = 0x119124u;
    // 0x119124: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x119124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x119128: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x119128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119134: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x119134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119138:
    // 0x119138: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x119138u;
    {
        const bool branch_taken_0x119138 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x119138) {
            ctx->pc = 0x11913Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119138u;
            // 0x11913c: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119178u;
            goto label_119178;
        }
    }
    ctx->pc = 0x119140u;
    // 0x119140: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119140u;
    {
        const bool branch_taken_0x119140 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x119144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119140u;
            // 0x119144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119140) {
            ctx->pc = 0x119158u;
            goto label_119158;
        }
    }
    ctx->pc = 0x119148u;
    // 0x119148: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x119148u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11914c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11914cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119150u;
    {
        const bool branch_taken_0x119150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119150u;
            // 0x119154: 0x46060082  mul.s       $f2, $f0, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119150) {
            ctx->pc = 0x119174u;
            goto label_119174;
        }
    }
    ctx->pc = 0x119158u;
label_119158:
    // 0x119158: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x119158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11915c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x11915cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x119160: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11916c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11916cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x119170: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x119170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119174:
    // 0x119174: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x119174u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_119178:
    // 0x119178: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x119178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x11917c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x11917cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119180: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119188: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x119188u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11918c: 0x3c24021  addu        $t0, $fp, $v0
    ctx->pc = 0x11918cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x119190: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x119190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x119194: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119194u;
    {
        const bool branch_taken_0x119194 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119194u;
            // 0x119198: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119194) {
            ctx->pc = 0x1191ACu;
            goto label_1191ac;
        }
    }
    ctx->pc = 0x11919Cu;
    // 0x11919c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1191a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1191a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1191a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1191A4u;
    {
        const bool branch_taken_0x1191a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1191A4u;
            // 0x1191a8: 0x460600c2  mul.s       $f3, $f0, $f6 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191a4) {
            ctx->pc = 0x1191C8u;
            goto label_1191c8;
        }
    }
    ctx->pc = 0x1191ACu;
label_1191ac:
    // 0x1191ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1191acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1191b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1191b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1191b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1191b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1191b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1191b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1191bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1191bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1191c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1191c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1191c4: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x1191c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1191c8:
    // 0x1191c8: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1191c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1191cc: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1191CCu;
    {
        const bool branch_taken_0x1191cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1191cc) {
            ctx->pc = 0x1191D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1191CCu;
            // 0x1191d0: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1191F8u;
            goto label_1191f8;
        }
    }
    ctx->pc = 0x1191D4u;
    // 0x1191d4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x1191d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1191d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1191dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1191dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1191e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1191e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1191e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1191e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1191e8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1191e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1191ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1191ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1191f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1191F0u;
    {
        const bool branch_taken_0x1191f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1191F0u;
            // 0x1191f4: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191f0) {
            ctx->pc = 0x1191FCu;
            goto label_1191fc;
        }
    }
    ctx->pc = 0x1191F8u;
label_1191f8:
    // 0x1191f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1191f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1191fc:
    // 0x1191fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1191fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119200: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x119200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119204: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x119204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119208: 0x0  nop
    ctx->pc = 0x119208u;
    // NOP
    // 0x11920c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11920Cu;
    {
        const bool branch_taken_0x11920c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11920c) {
            ctx->pc = 0x119210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11920Cu;
            // 0x119210: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119214u;
            goto label_119214;
        }
    }
    ctx->pc = 0x119214u;
label_119214:
    // 0x119214: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x119214u;
    {
        const bool branch_taken_0x119214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x119214) {
            ctx->pc = 0x119338u;
            goto label_119338;
        }
    }
    ctx->pc = 0x11921Cu;
    // 0x11921c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119224: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x119224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x119228: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x119228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11922c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x11922Cu;
    {
        const bool branch_taken_0x11922c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11922c) {
            ctx->pc = 0x119338u;
            goto label_119338;
        }
    }
    ctx->pc = 0x119234u;
    // 0x119234: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x119234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x119238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11923c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11923cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119244: 0x0  nop
    ctx->pc = 0x119244u;
    // NOP
    // 0x119248: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x119248u;
    {
        const bool branch_taken_0x119248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119248u;
            // 0x11924c: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119248) {
            ctx->pc = 0x119338u;
            goto label_119338;
        }
    }
    ctx->pc = 0x119250u;
    // 0x119250: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x119250u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x119254: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119254u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x119258: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x119258u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11925c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x11925cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119260: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x119260u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119264: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119268: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11926c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11926cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119270: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119274: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x119274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x119278: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11927c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11927cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119284: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x119284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x119288: 0x44c021  addu        $t8, $v0, $a0
    ctx->pc = 0x119288u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11928c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x11928cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119290: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119294: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x119294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x119298: 0x3058021  addu        $s0, $t8, $a1
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x11929c: 0x11e0028c  beqz        $t7, . + 4 + (0x28C << 2)
    ctx->pc = 0x11929Cu;
    {
        const bool branch_taken_0x11929c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11929Cu;
            // 0x1192a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11929c) {
            ctx->pc = 0x119CD0u;
            goto label_119cd0;
        }
    }
    ctx->pc = 0x1192A4u;
    // 0x1192a4: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1192a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1192a8:
    // 0x1192a8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1192a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1192ac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1192acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1192b0: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1192b4: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1192B4u;
    {
        const bool branch_taken_0x1192b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1192B4u;
            // 0x1192b8: 0xe1040  sll         $v0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192b4) {
            ctx->pc = 0x119320u;
            goto label_119320;
        }
    }
    ctx->pc = 0x1192BCu;
    // 0x1192bc: 0x584821  addu        $t1, $v0, $t8
    ctx->pc = 0x1192bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1192c0: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x1192c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1192c4: 0x0  nop
    ctx->pc = 0x1192c4u;
    // NOP
label_1192c8:
    // 0x1192c8: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x1192c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1192cc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x1192ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1192d0: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1192d4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1192d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1192d8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1192d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1192dc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1192dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1192e0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1192e4: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x1192e4u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x1192e8: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x1192e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1192ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1192ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1192f0: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x1192f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x1192f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1192f8: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x1192fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119300: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x119304: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x119308: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11930c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x119310: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x119310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x119314: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x119318: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x119318u;
    {
        const bool branch_taken_0x119318 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119318u;
            // 0x11931c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119318) {
            ctx->pc = 0x1192C8u;
            runtime->cooperativeGuestYield();
            goto label_1192c8;
        }
    }
    ctx->pc = 0x119320u;
label_119320:
    // 0x119320: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x119320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x119324: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x119328: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x119328u;
    {
        const bool branch_taken_0x119328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119328u;
            // 0x11932c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119328) {
            ctx->pc = 0x1192A8u;
            runtime->cooperativeGuestYield();
            goto label_1192a8;
        }
    }
    ctx->pc = 0x119330u;
    // 0x119330: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x119330u;
    {
        const bool branch_taken_0x119330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119330u;
            // 0x119334: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119330) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x119338u;
label_119338:
    // 0x119338: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11933c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11933cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119340: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x119340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119344: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x119344u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x119348: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x119348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11934c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x11934cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x119350: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119350u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x119354: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x119354u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x119358: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x119358u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11935c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11935cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x119360: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x119360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119364: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x119364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x119368: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11936c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x11936cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119370: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119374: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x119374u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x119378: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11937c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x11937cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119380: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x119380u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11938c: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x119390: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119394: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x119394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x119398: 0x11c0024d  beqz        $t6, . + 4 + (0x24D << 2)
    ctx->pc = 0x119398u;
    {
        const bool branch_taken_0x119398 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119398u;
            // 0x11939c: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119398) {
            ctx->pc = 0x119CD0u;
            goto label_119cd0;
        }
    }
    ctx->pc = 0x1193A0u;
    // 0x1193a0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193a4: 0x0  nop
    ctx->pc = 0x1193a4u;
    // NOP
label_1193a8:
    // 0x1193a8: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x1193a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1193ac: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1193ACu;
    {
        const bool branch_taken_0x1193ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193ACu;
            // 0x1193b0: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193ac) {
            ctx->pc = 0x1193FCu;
            goto label_1193fc;
        }
    }
    ctx->pc = 0x1193B4u;
    // 0x1193b4: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x1193b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1193b8:
    // 0x1193b8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1193b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1193bc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1193c0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1193c4: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x1193c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1193c8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1193c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1193cc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1193ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1193d0: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x1193d0u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x1193d4: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x1193d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x1193d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1193d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1193dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1193dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1193e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1193e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1193e4: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x1193e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x1193e8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1193e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1193ec: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1193ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1193f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1193f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1193f4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1193F4u;
    {
        const bool branch_taken_0x1193f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1193F4u;
            // 0x1193f8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193f4) {
            ctx->pc = 0x1193B8u;
            runtime->cooperativeGuestYield();
            goto label_1193b8;
        }
    }
    ctx->pc = 0x1193FCu;
label_1193fc:
    // 0x1193fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1193fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x119400: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x119404: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x119404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x119408: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x119408u;
    {
        const bool branch_taken_0x119408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119408u;
            // 0x11940c: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119408) {
            ctx->pc = 0x1193A8u;
            runtime->cooperativeGuestYield();
            goto label_1193a8;
        }
    }
    ctx->pc = 0x119410u;
    // 0x119410: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x119410u;
    {
        const bool branch_taken_0x119410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119410u;
            // 0x119414: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119410) {
            ctx->pc = 0x119CD4u;
            goto label_119cd4;
        }
    }
    ctx->pc = 0x119418u;
label_119418:
    // 0x119418: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11941c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11941cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119420: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119424: 0x91a30002  lbu         $v1, 0x2($t5)
    ctx->pc = 0x119424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x119428: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11942c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x119430: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x119430u;
    {
        const bool branch_taken_0x119430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119430u;
            // 0x119434: 0x44a021  addu        $s4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119430) {
            ctx->pc = 0x11944Cu;
            goto label_11944c;
        }
    }
    ctx->pc = 0x119438u;
    // 0x119438: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x119438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x11943c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x119440: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x119440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x119444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x119444u;
    {
        const bool branch_taken_0x119444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119444u;
            // 0x119448: 0x2827021  addu        $t6, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119444) {
            ctx->pc = 0x119454u;
            goto label_119454;
        }
    }
    ctx->pc = 0x11944Cu;
label_11944c:
    // 0x11944c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x119450: 0x244e7788  addiu       $t6, $v0, 0x7788
    ctx->pc = 0x119450u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_119454:
    // 0x119454: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x119454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119458: 0x26830002  addiu       $v1, $s4, 0x2
    ctx->pc = 0x119458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x11945c: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x11945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x119460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x119460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119464: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x119464u;
    {
        const bool branch_taken_0x119464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119464u;
            // 0x119468: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119464) {
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x11946Cu;
    // 0x11946c: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x11946cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_119470:
    // 0x119470: 0x46083834  c.lt.s      $f7, $f8
    ctx->pc = 0x119470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119474: 0x0  nop
    ctx->pc = 0x119474u;
    // NOP
    // 0x119478: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x119478u;
    {
        const bool branch_taken_0x119478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119478u;
            // 0x11947c: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119478) {
            ctx->pc = 0x1194D8u;
            goto label_1194d8;
        }
    }
    ctx->pc = 0x119480u;
    // 0x119480: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x119480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119484: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x119484u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x119488: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11948c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119490: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119498: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11949c: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x11949cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1194a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1194a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1194a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1194a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1194a8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1194a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1194ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1194acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1194b0: 0x0  nop
    ctx->pc = 0x1194b0u;
    // NOP
    // 0x1194b4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1194B4u;
    {
        const bool branch_taken_0x1194b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1194B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194B4u;
            // 0x1194b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194b4) {
            ctx->pc = 0x119534u;
            goto label_119534;
        }
    }
    ctx->pc = 0x1194BCu;
    // 0x1194bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1194bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1194c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1194c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1194c4: 0x46024041  sub.s       $f1, $f8, $f2
    ctx->pc = 0x1194c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x1194c8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1194c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1194cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1194ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1194d0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1194D0u;
    {
        const bool branch_taken_0x1194d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1194d0) {
            ctx->pc = 0x11952Cu;
            goto label_11952c;
        }
    }
    ctx->pc = 0x1194D8u;
label_1194d8:
    // 0x1194d8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1194d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1194dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1194dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1194e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1194e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1194e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1194e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1194e8: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x1194e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1194ec: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1194ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1194f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1194f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1194f4: 0x0  nop
    ctx->pc = 0x1194f4u;
    // NOP
    // 0x1194f8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1194F8u;
    {
        const bool branch_taken_0x1194f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1194FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194F8u;
            // 0x1194fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f8) {
            ctx->pc = 0x119534u;
            goto label_119534;
        }
    }
    ctx->pc = 0x119500u;
    // 0x119500: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x119500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119504: 0x46024041  sub.s       $f1, $f8, $f2
    ctx->pc = 0x119504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x119508: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x119508u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11950c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119514: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11951c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11951cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119520: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x119520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x119524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x119524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119528: 0x0  nop
    ctx->pc = 0x119528u;
    // NOP
label_11952c:
    // 0x11952c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11952Cu;
    {
        const bool branch_taken_0x11952c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11952c) {
            ctx->pc = 0x119530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11952Cu;
            // 0x119530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119534u;
            goto label_119534;
        }
    }
    ctx->pc = 0x119534u;
label_119534:
    // 0x119534: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x119534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119538: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x119538u;
    {
        const bool branch_taken_0x119538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119538u;
            // 0x11953c: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119538) {
            ctx->pc = 0x119898u;
            goto label_119898;
        }
    }
    ctx->pc = 0x119540u;
    // 0x119540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119548: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11954c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11954cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119550: 0x46004086  mov.s       $f2, $f8
    ctx->pc = 0x119550u;
    ctx->f[2] = FPU_MOV_S(ctx->f[8]);
    // 0x119554: 0x46060143  div.s       $f5, $f0, $f6
    ctx->pc = 0x119554u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[6];
    // 0x119558: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x119558u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11955c: 0x46014000  add.s       $f0, $f8, $f1
    ctx->pc = 0x11955cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x119560: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x119560u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119564: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x119564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x119568: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x119568u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11956c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x11956cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x119570: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x119570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x119574: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x119578: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x119578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x11957c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11957cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119580: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x119580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x119584: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x119584u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119588: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x119588u;
    {
        const bool branch_taken_0x119588 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x11958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119588u;
            // 0x11958c: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119588) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119590u;
    // 0x119590: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x119590u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x119598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11959c: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x11959cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1195a0:
    // 0x1195a0: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1195A0u;
    {
        const bool branch_taken_0x1195a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1195A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195A0u;
            // 0x1195a4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195a0) {
            ctx->pc = 0x1195B8u;
            goto label_1195b8;
        }
    }
    ctx->pc = 0x1195A8u;
    // 0x1195a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1195a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1195ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1195acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1195b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1195b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195b4: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x1195b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1195b8:
    // 0x1195b8: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x1195b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1195bc: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x1195bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1195c0: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1195c4: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x1195c4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1195c8: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x1195c8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1195cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1195ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1195d0: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1195d4: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x1195d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1195d8: 0x91c90001  lbu         $t1, 0x1($t6)
    ctx->pc = 0x1195d8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x1195dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1195dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1195e0: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x1195e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1195e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1195e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1195e8: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x1195ec: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1195ECu;
    {
        const bool branch_taken_0x1195ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x1195F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195ECu;
            // 0x1195f0: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195ec) {
            ctx->pc = 0x119600u;
            goto label_119600;
        }
    }
    ctx->pc = 0x1195F4u;
    // 0x1195f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1195F4u;
    {
        const bool branch_taken_0x1195f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195F4u;
            // 0x1195f8: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195f4) {
            ctx->pc = 0x119610u;
            goto label_119610;
        }
    }
    ctx->pc = 0x1195FCu;
    // 0x1195fc: 0x0  nop
    ctx->pc = 0x1195fcu;
    // NOP
label_119600:
    // 0x119600: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x119600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x119604: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119608: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11960c: 0x1c29821  addu        $s3, $t6, $v0
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_119610:
    // 0x119610: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x119610u;
    {
        const bool branch_taken_0x119610 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x119614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119610u;
            // 0x119614: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119610) {
            ctx->pc = 0x119708u;
            goto label_119708;
        }
    }
    ctx->pc = 0x119618u;
    // 0x119618: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x119618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x11961c: 0x91c30001  lbu         $v1, 0x1($t6)
    ctx->pc = 0x11961cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x119620: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x119620u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119624: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x119624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x119628: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11962c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119630: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x119630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x119634: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x119634u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119638: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x119638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11963c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119640: 0x95c50002  lhu         $a1, 0x2($t6)
    ctx->pc = 0x119640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x119644: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119648: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11964c: 0x91d90000  lbu         $t9, 0x0($t6)
    ctx->pc = 0x11964cu;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x119650: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119654: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x119654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119658: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11965c: 0x44180800  mfc1        $t8, $f1
    ctx->pc = 0x11965cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x119660: 0x159102b  sltu        $v0, $t2, $t9
    ctx->pc = 0x119660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x119664: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x119664u;
    {
        const bool branch_taken_0x119664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119664u;
            // 0x119668: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119664) {
            ctx->pc = 0x119898u;
            goto label_119898;
        }
    }
    ctx->pc = 0x11966Cu;
    // 0x11966c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x11966cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_119670:
    // 0x119670: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x119674: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x119674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x119678: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x119678u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11967c: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x11967Cu;
    {
        const bool branch_taken_0x11967c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11967c) {
            ctx->pc = 0x119680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11967Cu;
            // 0x119680: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x119684u;
    // 0x119684: 0x1f14021  addu        $t0, $t7, $s1
    ctx->pc = 0x119684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
label_119688:
    // 0x119688: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11968c: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x119690: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x119690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x119694: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x119694u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119698: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x119698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11969c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1196a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1196a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1196a4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1196a8: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x1196a8u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x1196ac: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1196b0: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1196b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1196b4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1196B4u;
    {
        const bool branch_taken_0x1196b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1196B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196B4u;
            // 0x1196b8: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b4) {
            ctx->pc = 0x1196C8u;
            goto label_1196c8;
        }
    }
    ctx->pc = 0x1196BCu;
    // 0x1196bc: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1196c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1196C0u;
    {
        const bool branch_taken_0x1196c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196C0u;
            // 0x1196c4: 0x581004  sllv        $v0, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196c0) {
            ctx->pc = 0x1196CCu;
            goto label_1196cc;
        }
    }
    ctx->pc = 0x1196C8u;
label_1196c8:
    // 0x1196c8: 0xb81007  srav        $v0, $t8, $a1
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 5) & 0x1F));
label_1196cc:
    // 0x1196cc: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x1196ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1196d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1196d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1196d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1196d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1196d8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1196d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1196dc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1196dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1196e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1196e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1196e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1196e8: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1196E8u;
    {
        const bool branch_taken_0x1196e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196E8u;
            // 0x1196ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196e8) {
            ctx->pc = 0x119688u;
            runtime->cooperativeGuestYield();
            goto label_119688;
        }
    }
    ctx->pc = 0x1196F0u;
    // 0x1196f0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1196f4:
    // 0x1196f4: 0x179102b  sltu        $v0, $t3, $t9
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x1196f8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1196F8u;
    {
        const bool branch_taken_0x1196f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196F8u;
            // 0x1196fc: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196f8) {
            ctx->pc = 0x119670u;
            runtime->cooperativeGuestYield();
            goto label_119670;
        }
    }
    ctx->pc = 0x119700u;
    // 0x119700: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x119700u;
    {
        const bool branch_taken_0x119700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119700u;
            // 0x119704: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119700) {
            ctx->pc = 0x11989Cu;
            goto label_11989c;
        }
    }
    ctx->pc = 0x119708u;
label_119708:
    // 0x119708: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x119708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11970c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11970cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119710: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119714: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x119714u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x119718: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11971c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119724: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x119724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119728: 0x45b821  addu        $s7, $v0, $a1
    ctx->pc = 0x119728u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11972c: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11972Cu;
    {
        const bool branch_taken_0x11972c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x119730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11972Cu;
            // 0x119730: 0x62b021  addu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11972c) {
            ctx->pc = 0x119774u;
            goto label_119774;
        }
    }
    ctx->pc = 0x119734u;
    // 0x119734: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x119738: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x119738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11973c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x11973cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119740: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x119740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x119744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11974c: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x11974cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x119750: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x119750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119754: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x119754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119758: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x119758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x11975c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11975cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x119760: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x119760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x119764: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x119764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x119768: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x119768u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x11976c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11976Cu;
    {
        const bool branch_taken_0x11976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11976Cu;
            // 0x119770: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11976c) {
            ctx->pc = 0x1197A8u;
            goto label_1197a8;
        }
    }
    ctx->pc = 0x119774u;
label_119774:
    // 0x119774: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119778: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x119778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11977c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x11977cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119780: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x119780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x119784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119788: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11978c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x119790: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x119790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x119794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x119794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119798: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x119798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11979c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x11979cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1197a0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1197a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1197a4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1197a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1197a8:
    // 0x1197a8: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x1197ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1197acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1197b0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1197b0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197b4: 0x91d20000  lbu         $s2, 0x0($t6)
    ctx->pc = 0x1197b4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1197b8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1197b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1197bc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1197bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1197c0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1197c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1197c4: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x1197c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1197c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1197c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1197cc: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x1197ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x1197d0: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1197D0u;
    {
        const bool branch_taken_0x1197d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197D0u;
            // 0x1197d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197d0) {
            ctx->pc = 0x119898u;
            goto label_119898;
        }
    }
    ctx->pc = 0x1197D8u;
    // 0x1197d8: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x1197d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197dc: 0x0  nop
    ctx->pc = 0x1197dcu;
    // NOP
label_1197e0:
    // 0x1197e0: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1197e4: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1197e8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1197e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1197ec: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1197ECu;
    {
        const bool branch_taken_0x1197ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197ec) {
            ctx->pc = 0x1197F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1197ECu;
            // 0x1197f0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11988Cu;
            goto label_11988c;
        }
    }
    ctx->pc = 0x1197F4u;
    // 0x1197f4: 0x3164821  addu        $t1, $t8, $s6
    ctx->pc = 0x1197f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 22)));
    // 0x1197f8: 0x3174021  addu        $t0, $t8, $s7
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x1197fc: 0x0  nop
    ctx->pc = 0x1197fcu;
    // NOP
label_119800:
    // 0x119800: 0x71023  negu        $v0, $a3
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x119804: 0x2781821  addu        $v1, $s3, $t8
    ctx->pc = 0x119804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 24)));
    // 0x119808: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x119808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11980c: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x11980cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119810: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x119810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x119814: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119818: 0x21023  negu        $v0, $v0
    ctx->pc = 0x119818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11981c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x11981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x119820: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x119820u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x119824: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x119824u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x119828: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x119828u;
    {
        const bool branch_taken_0x119828 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119828u;
            // 0x11982c: 0x827823  subu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119828) {
            ctx->pc = 0x119848u;
            goto label_119848;
        }
    }
    ctx->pc = 0x119830u;
    // 0x119830: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x119834: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119838: 0x511804  sllv        $v1, $s1, $v0
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x11983c: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119840u;
    {
        const bool branch_taken_0x119840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119840u;
            // 0x119844: 0x591004  sllv        $v0, $t9, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119840) {
            ctx->pc = 0x119858u;
            goto label_119858;
        }
    }
    ctx->pc = 0x119848u;
label_119848:
    // 0x119848: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11984c: 0xd12807  srav        $a1, $s1, $a2
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x119850: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119854: 0xd91007  srav        $v0, $t9, $a2
    ctx->pc = 0x119854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 6) & 0x1F));
label_119858:
    // 0x119858: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x119858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11985c: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x11985cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119860: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x119860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x119864: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x119864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x119868: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11986c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x119870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119874: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x119874u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x119878: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11987c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119880: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x119880u;
    {
        const bool branch_taken_0x119880 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x119884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119880u;
            // 0x119884: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119880) {
            ctx->pc = 0x119800u;
            runtime->cooperativeGuestYield();
            goto label_119800;
        }
    }
    ctx->pc = 0x119888u;
    // 0x119888: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x119888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_11988c:
    // 0x11988c: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x11988cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x119890: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x119890u;
    {
        const bool branch_taken_0x119890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119890u;
            // 0x119894: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119890) {
            ctx->pc = 0x1197E0u;
            runtime->cooperativeGuestYield();
            goto label_1197e0;
        }
    }
    ctx->pc = 0x119898u;
label_119898:
    // 0x119898: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x119898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_11989c:
    // 0x11989c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1198a0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1198a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1198a4: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x1198A4u;
    {
        const bool branch_taken_0x1198a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1198A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198A4u;
            // 0x1198a8: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198a4) {
            ctx->pc = 0x119470u;
            runtime->cooperativeGuestYield();
            goto label_119470;
        }
    }
    ctx->pc = 0x1198ACu;
label_1198ac:
    // 0x1198ac: 0x92940001  lbu         $s4, 0x1($s4)
    ctx->pc = 0x1198acu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x1198b0: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1198b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1198b4: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1198B4u;
    {
        const bool branch_taken_0x1198b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198B4u;
            // 0x1198b8: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b4) {
            ctx->pc = 0x119CD0u;
            goto label_119cd0;
        }
    }
    ctx->pc = 0x1198BCu;
    // 0x1198bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1198c0: 0x446021  addu        $t4, $v0, $a0
    ctx->pc = 0x1198c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1198c4: 0x0  nop
    ctx->pc = 0x1198c4u;
    // NOP
label_1198c8:
    // 0x1198c8: 0x46083834  c.lt.s      $f7, $f8
    ctx->pc = 0x1198c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1198cc: 0x0  nop
    ctx->pc = 0x1198ccu;
    // NOP
    // 0x1198d0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1198D0u;
    {
        const bool branch_taken_0x1198d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1198D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D0u;
            // 0x1198d4: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198d0) {
            ctx->pc = 0x119930u;
            goto label_119930;
        }
    }
    ctx->pc = 0x1198D8u;
    // 0x1198d8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1198d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1198dc: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x1198dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1198e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1198e4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1198e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1198e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1198e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1198ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1198ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1198f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1198f4: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x1198f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1198f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1198f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1198fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1198fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119900: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x119900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x119904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119908: 0x0  nop
    ctx->pc = 0x119908u;
    // NOP
    // 0x11990c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11990Cu;
    {
        const bool branch_taken_0x11990c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11990Cu;
            // 0x119910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11990c) {
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x119914u;
    // 0x119914: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x119914u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11991c: 0x46024040  add.s       $f1, $f8, $f2
    ctx->pc = 0x11991cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x119920: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x119920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x119924: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x119924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119928: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x119928u;
    {
        const bool branch_taken_0x119928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119928) {
            ctx->pc = 0x119984u;
            goto label_119984;
        }
    }
    ctx->pc = 0x119930u;
label_119930:
    // 0x119930: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119934: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119938: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x119938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11993c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11993cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119940: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x119940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x119944: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x119944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x119948: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x119948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11994c: 0x0  nop
    ctx->pc = 0x11994cu;
    // NOP
    // 0x119950: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x119950u;
    {
        const bool branch_taken_0x119950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119950u;
            // 0x119954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119950) {
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x119958u;
    // 0x119958: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x119958u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11995c: 0x46024041  sub.s       $f1, $f8, $f2
    ctx->pc = 0x11995cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x119960: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x119960u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x119964: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11996c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119978: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x119978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11997c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11997cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119980: 0x0  nop
    ctx->pc = 0x119980u;
    // NOP
label_119984:
    // 0x119984: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x119984u;
    {
        const bool branch_taken_0x119984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119984) {
            ctx->pc = 0x119988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119984u;
            // 0x119988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11998Cu;
            goto label_11998c;
        }
    }
    ctx->pc = 0x11998Cu;
label_11998c:
    // 0x11998c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11998cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119990: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x119990u;
    {
        const bool branch_taken_0x119990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119990u;
            // 0x119994: 0x46004086  mov.s       $f2, $f8 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119990) {
            ctx->pc = 0x119CC0u;
            goto label_119cc0;
        }
    }
    ctx->pc = 0x119998u;
    // 0x119998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11999c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11999cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1199a0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1199a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1199a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199a8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x1199a8u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x1199ac: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x1199acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1199b0: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x1199b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1199b4: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x1199b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1199b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1199b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1199bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1199bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1199c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1199c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1199c4: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1199c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1199c8: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1199c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1199cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1199CCu;
    {
        const bool branch_taken_0x1199cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199CCu;
            // 0x1199d0: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199cc) {
            ctx->pc = 0x1199E8u;
            goto label_1199e8;
        }
    }
    ctx->pc = 0x1199D4u;
    // 0x1199d4: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x1199d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1199d8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1199dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1199dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1199e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1199e4: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x1199e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1199e8:
    // 0x1199e8: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1199E8u;
    {
        const bool branch_taken_0x1199e8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1199e8) {
            ctx->pc = 0x1199ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1199E8u;
            // 0x1199ec: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119A28u;
            goto label_119a28;
        }
    }
    ctx->pc = 0x1199F0u;
    // 0x1199f0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1199F0u;
    {
        const bool branch_taken_0x1199f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1199F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199F0u;
            // 0x1199f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f0) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x1199F8u;
    // 0x1199f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1199f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1199fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119a00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119A00u;
    {
        const bool branch_taken_0x119a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A00u;
            // 0x119a04: 0x46060082  mul.s       $f2, $f0, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a00) {
            ctx->pc = 0x119A24u;
            goto label_119a24;
        }
    }
    ctx->pc = 0x119A08u;
label_119a08:
    // 0x119a08: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x119a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x119a0c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x119a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119a1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x119a20: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x119a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119a24:
    // 0x119a24: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x119a24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_119a28:
    // 0x119a28: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x119a2c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119a30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119a38: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x119a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x119a3c: 0x3c29821  addu        $s3, $fp, $v0
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x119a40: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x119a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x119a44: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119A44u;
    {
        const bool branch_taken_0x119a44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x119A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A44u;
            // 0x119a48: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a44) {
            ctx->pc = 0x119A5Cu;
            goto label_119a5c;
        }
    }
    ctx->pc = 0x119A4Cu;
    // 0x119a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119a54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119A54u;
    {
        const bool branch_taken_0x119a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A54u;
            // 0x119a58: 0x460600c2  mul.s       $f3, $f0, $f6 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a54) {
            ctx->pc = 0x119A78u;
            goto label_119a78;
        }
    }
    ctx->pc = 0x119A5Cu;
label_119a5c:
    // 0x119a5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x119a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119a64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119a70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x119a74: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x119a74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119a78:
    // 0x119a78: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x119a7c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x119A7Cu;
    {
        const bool branch_taken_0x119a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x119a7c) {
            ctx->pc = 0x119A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119A7Cu;
            // 0x119a80: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119AA8u;
            goto label_119aa8;
        }
    }
    ctx->pc = 0x119A84u;
    // 0x119a84: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x119a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119a8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119a98: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x119a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x119a9c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x119a9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x119aa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119AA0u;
    {
        const bool branch_taken_0x119aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AA0u;
            // 0x119aa4: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119aa0) {
            ctx->pc = 0x119AACu;
            goto label_119aac;
        }
    }
    ctx->pc = 0x119AA8u;
label_119aa8:
    // 0x119aa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x119aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_119aac:
    // 0x119aac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x119aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119ab0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x119ab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119ab4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x119ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119ab8: 0x0  nop
    ctx->pc = 0x119ab8u;
    // NOP
    // 0x119abc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x119ABCu;
    {
        const bool branch_taken_0x119abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119abc) {
            ctx->pc = 0x119AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119ABCu;
            // 0x119ac0: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119AC4u;
            goto label_119ac4;
        }
    }
    ctx->pc = 0x119AC4u;
label_119ac4:
    // 0x119ac4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x119AC4u;
    {
        const bool branch_taken_0x119ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x119ac4) {
            ctx->pc = 0x119BE8u;
            goto label_119be8;
        }
    }
    ctx->pc = 0x119ACCu;
    // 0x119acc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119ad4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x119ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x119ad8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x119ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119adc: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x119ADCu;
    {
        const bool branch_taken_0x119adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119adc) {
            ctx->pc = 0x119BE8u;
            goto label_119be8;
        }
    }
    ctx->pc = 0x119AE4u;
    // 0x119ae4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x119ae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x119ae8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119af0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119af0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119af4: 0x0  nop
    ctx->pc = 0x119af4u;
    // NOP
    // 0x119af8: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x119AF8u;
    {
        const bool branch_taken_0x119af8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AF8u;
            // 0x119afc: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119af8) {
            ctx->pc = 0x119BE8u;
            goto label_119be8;
        }
    }
    ctx->pc = 0x119B00u;
    // 0x119b00: 0x91c50001  lbu         $a1, 0x1($t6)
    ctx->pc = 0x119b00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x119b04: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119b04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x119b08: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b0c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x119b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119b10: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x119b10u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x119b14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119b18: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x119b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x119b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119b20: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119b24: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x119b24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x119b28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119b2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x119b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119b34: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x119b34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x119b38: 0x44c821  addu        $t9, $v0, $a0
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119b3c: 0x91d80000  lbu         $t8, 0x0($t6)
    ctx->pc = 0x119b3cu;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x119b40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119b44: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x119b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x119b48: 0x3258821  addu        $s1, $t9, $a1
    ctx->pc = 0x119b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x119b4c: 0x1300005c  beqz        $t8, . + 4 + (0x5C << 2)
    ctx->pc = 0x119B4Cu;
    {
        const bool branch_taken_0x119b4c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B4Cu;
            // 0x119b50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b4c) {
            ctx->pc = 0x119CC0u;
            goto label_119cc0;
        }
    }
    ctx->pc = 0x119B54u;
    // 0x119b54: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x119b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119b58:
    // 0x119b58: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x119b5c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x119b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x119b60: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x119b60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119b64: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x119B64u;
    {
        const bool branch_taken_0x119b64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B64u;
            // 0x119b68: 0xf1040  sll         $v0, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b64) {
            ctx->pc = 0x119BD0u;
            goto label_119bd0;
        }
    }
    ctx->pc = 0x119B6Cu;
    // 0x119b6c: 0x594821  addu        $t1, $v0, $t9
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x119b70: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x119b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119b74: 0x0  nop
    ctx->pc = 0x119b74u;
    // NOP
label_119b78:
    // 0x119b78: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x119b78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119b7c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x119b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x119b80: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x119b80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119b84: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x119b88: 0x22023  negu        $a0, $v0
    ctx->pc = 0x119b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119b8c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x119b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119b90: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x119b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x119b94: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x119b94u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x119b98: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x119b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119b9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119ba0: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x119ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x119ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119ba8: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x119ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x119bac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119bb0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x119bb4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x119bb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x119bb8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x119bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x119bbc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x119bc0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x119bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x119bc4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x119bc8: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x119BC8u;
    {
        const bool branch_taken_0x119bc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x119BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BC8u;
            // 0x119bcc: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bc8) {
            ctx->pc = 0x119B78u;
            runtime->cooperativeGuestYield();
            goto label_119b78;
        }
    }
    ctx->pc = 0x119BD0u;
label_119bd0:
    // 0x119bd0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x119bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x119bd4: 0x158102b  sltu        $v0, $t2, $t8
    ctx->pc = 0x119bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x119bd8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x119BD8u;
    {
        const bool branch_taken_0x119bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BD8u;
            // 0x119bdc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bd8) {
            ctx->pc = 0x119B58u;
            runtime->cooperativeGuestYield();
            goto label_119b58;
        }
    }
    ctx->pc = 0x119BE0u;
    // 0x119be0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x119BE0u;
    {
        const bool branch_taken_0x119be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BE0u;
            // 0x119be4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119be0) {
            ctx->pc = 0x119CC4u;
            goto label_119cc4;
        }
    }
    ctx->pc = 0x119BE8u;
label_119be8:
    // 0x119be8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119bf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x119bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119bf4: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x119bf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x119bf8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x119bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x119bfc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x119bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x119c00: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x119c04: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x119c04u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x119c08: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x119c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119c0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119c0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x119c10: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x119c10u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x119c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x119c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x119c18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119c1c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x119c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119c20: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119c24: 0x95c40002  lhu         $a0, 0x2($t6)
    ctx->pc = 0x119c24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x119c28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119c2c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x119c2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x119c30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x119c30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119c38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x119c38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119c40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x119c44: 0x25c40004  addiu       $a0, $t6, 0x4
    ctx->pc = 0x119c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x119c48: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x119C48u;
    {
        const bool branch_taken_0x119c48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C48u;
            // 0x119c4c: 0x43c021  addu        $t8, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c48) {
            ctx->pc = 0x119CC0u;
            goto label_119cc0;
        }
    }
    ctx->pc = 0x119C50u;
    // 0x119c50: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x119c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c54: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x119c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119c58:
    // 0x119c58: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x119c58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119c5c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x119C5Cu;
    {
        const bool branch_taken_0x119c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C5Cu;
            // 0x119c60: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c5c) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C64u;
    // 0x119c64: 0x583821  addu        $a3, $v0, $t8
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_119c68:
    // 0x119c68: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x119c6c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x119c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119c70: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x119c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x119c74: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x119c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x119c78: 0x21823  negu        $v1, $v0
    ctx->pc = 0x119c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119c7c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x119c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x119c80: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x119c80u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x119c84: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x119c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x119c88: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119c8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119c90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x119c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x119c94: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x119c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x119c98: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x119c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x119c9c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x119c9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x119ca0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x119ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x119ca4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x119CA4u;
    {
        const bool branch_taken_0x119ca4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x119CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CA4u;
            // 0x119ca8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ca4) {
            ctx->pc = 0x119C68u;
            runtime->cooperativeGuestYield();
            goto label_119c68;
        }
    }
    ctx->pc = 0x119CACu;
label_119cac:
    // 0x119cac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x119cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x119cb0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x119cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x119cb4: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x119cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x119cb8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x119CB8u;
    {
        const bool branch_taken_0x119cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CB8u;
            // 0x119cbc: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb8) {
            ctx->pc = 0x119C58u;
            runtime->cooperativeGuestYield();
            goto label_119c58;
        }
    }
    ctx->pc = 0x119CC0u;
label_119cc0:
    // 0x119cc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_119cc4:
    // 0x119cc4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x119cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x119cc8: 0x1440feff  bnez        $v0, . + 4 + (-0x101 << 2)
    ctx->pc = 0x119CC8u;
    {
        const bool branch_taken_0x119cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CC8u;
            // 0x119ccc: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cc8) {
            ctx->pc = 0x1198C8u;
            runtime->cooperativeGuestYield();
            goto label_1198c8;
        }
    }
    ctx->pc = 0x119CD0u;
label_119cd0:
    // 0x119cd0: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x119cd0u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
label_119cd4:
    // 0x119cd4: 0x46086801  sub.s       $f0, $f13, $f8
    ctx->pc = 0x119cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[8]);
    // 0x119cd8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x119cd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x119cdc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x119cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119ce0: 0x0  nop
    ctx->pc = 0x119ce0u;
    // NOP
    // 0x119ce4: 0x4503fc1a  bc1tl       . + 4 + (-0x3E6 << 2)
    ctx->pc = 0x119CE4u;
    {
        const bool branch_taken_0x119ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119ce4) {
            ctx->pc = 0x119CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119CE4u;
            // 0x119ce8: 0x95a40004  lhu         $a0, 0x4($t5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118D50u;
            runtime->cooperativeGuestYield();
            goto label_118d50;
        }
    }
    ctx->pc = 0x119CECu;
label_119cec:
    // 0x119cec: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x119cecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x119cf0: 0x108001b1  beqz        $a0, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x119CF0u;
    {
        const bool branch_taken_0x119cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119CF0u;
            // 0x119cf4: 0x25ab0004  addiu       $t3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cf0) {
            ctx->pc = 0x11A3B8u;
            goto label_11a3b8;
        }
    }
    ctx->pc = 0x119CF8u;
    // 0x119cf8: 0x91ae0002  lbu         $t6, 0x2($t5)
    ctx->pc = 0x119cf8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x119cfc: 0x31c20002  andi        $v0, $t6, 0x2
    ctx->pc = 0x119cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x119d00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119D00u;
    {
        const bool branch_taken_0x119d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D00u;
            // 0x119d04: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d00) {
            ctx->pc = 0x119D20u;
            goto label_119d20;
        }
    }
    ctx->pc = 0x119D08u;
    // 0x119d08: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x119d08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x119d0c: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x119d0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119d10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119d14: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119D18u;
    {
        const bool branch_taken_0x119d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D18u;
            // 0x119d1c: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d18) {
            ctx->pc = 0x119D24u;
            goto label_119d24;
        }
    }
    ctx->pc = 0x119D20u;
label_119d20:
    // 0x119d20: 0x244c7788  addiu       $t4, $v0, 0x7788
    ctx->pc = 0x119d20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_119d24:
    // 0x119d24: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x119d24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x119d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119d2c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x119D2Cu;
    {
        const bool branch_taken_0x119d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D2Cu;
            // 0x119d30: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d2c) {
            ctx->pc = 0x11A088u;
            goto label_11a088;
        }
    }
    ctx->pc = 0x119D34u;
    // 0x119d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119d3c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x119d40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119d44: 0x46006886  mov.s       $f2, $f13
    ctx->pc = 0x119d44u;
    ctx->f[2] = FPU_MOV_S(ctx->f[13]);
    // 0x119d48: 0x46060143  div.s       $f5, $f0, $f6
    ctx->pc = 0x119d48u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[6];
    // 0x119d4c: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x119d4cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x119d50: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x119d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x119d54: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x119d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x119d58: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x119d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x119d5c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x119d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x119d60: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x119d64: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x119d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x119d68: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x119d6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x119d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x119d70: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119d74: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x119D74u;
    {
        const bool branch_taken_0x119d74 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x119D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D74u;
            // 0x119d78: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d74) {
            ctx->pc = 0x119D8Cu;
            goto label_119d8c;
        }
    }
    ctx->pc = 0x119D7Cu;
    // 0x119d7c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x119d7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119d84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x119d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d88: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x119d88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119d8c:
    // 0x119d8c: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x119D8Cu;
    {
        const bool branch_taken_0x119d8c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x119D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D8Cu;
            // 0x119d90: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d8c) {
            ctx->pc = 0x119DA4u;
            goto label_119da4;
        }
    }
    ctx->pc = 0x119D94u;
    // 0x119d94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x119d94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119da0: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x119da0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_119da4:
    // 0x119da4: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x119da4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x119da8: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x119da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x119dac: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x119dacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x119db0: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x119db0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x119db4: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x119db4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x119db8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119dbc: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x119dc0: 0x3c2a021  addu        $s4, $fp, $v0
    ctx->pc = 0x119dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x119dc4: 0x91890001  lbu         $t1, 0x1($t4)
    ctx->pc = 0x119dc4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x119dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119dcc: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x119dd0: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x119dd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x119dd4: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119DD4u;
    {
        const bool branch_taken_0x119dd4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x119DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DD4u;
            // 0x119dd8: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dd4) {
            ctx->pc = 0x119DE8u;
            goto label_119de8;
        }
    }
    ctx->pc = 0x119DDCu;
    // 0x119ddc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119DDCu;
    {
        const bool branch_taken_0x119ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DDCu;
            // 0x119de0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ddc) {
            ctx->pc = 0x119DF8u;
            goto label_119df8;
        }
    }
    ctx->pc = 0x119DE4u;
    // 0x119de4: 0x0  nop
    ctx->pc = 0x119de4u;
    // NOP
label_119de8:
    // 0x119de8: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x119de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119dec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119df0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x119df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x119df4: 0x1829821  addu        $s3, $t4, $v0
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_119df8:
    // 0x119df8: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x119DF8u;
    {
        const bool branch_taken_0x119df8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x119DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DF8u;
            // 0x119dfc: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119df8) {
            ctx->pc = 0x119EF0u;
            goto label_119ef0;
        }
    }
    ctx->pc = 0x119E00u;
    // 0x119e00: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x119e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x119e04: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x119e04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x119e08: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x119e08u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e0c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x119e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x119e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119e14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119e18: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x119e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x119e1c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x119e1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119e20: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x119e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119e24: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119e28: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x119e28u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x119e2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119e30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119e34: 0x91900000  lbu         $s0, 0x0($t4)
    ctx->pc = 0x119e34u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119e38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119e3c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x119e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119e40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119e44: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x119e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x119e48: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x119e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x119e4c: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x119E4Cu;
    {
        const bool branch_taken_0x119e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E4Cu;
            // 0x119e50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e4c) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x119E54u;
    // 0x119e54: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x119e54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_119e58:
    // 0x119e58: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x119e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x119e5c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x119e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x119e60: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119e64: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x119E64u;
    {
        const bool branch_taken_0x119e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e64) {
            ctx->pc = 0x119E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119E64u;
            // 0x119e68: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119EDCu;
            goto label_119edc;
        }
    }
    ctx->pc = 0x119E6Cu;
    // 0x119e6c: 0x1d14021  addu        $t0, $t6, $s1
    ctx->pc = 0x119e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_119e70:
    // 0x119e70: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x119e74: 0x26e1821  addu        $v1, $s3, $t6
    ctx->pc = 0x119e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x119e78: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x119e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x119e7c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119e80: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x119e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x119e84: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x119e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x119e88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x119e8c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x119e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119e90: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x119e90u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x119e94: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x119e98: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x119e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119e9c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E9Cu;
    {
        const bool branch_taken_0x119e9c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x119EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E9Cu;
            // 0x119ea0: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e9c) {
            ctx->pc = 0x119EB0u;
            goto label_119eb0;
        }
    }
    ctx->pc = 0x119EA4u;
    // 0x119ea4: 0x51023  negu        $v0, $a1
    ctx->pc = 0x119ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x119ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119EA8u;
    {
        const bool branch_taken_0x119ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EA8u;
            // 0x119eac: 0x4f1004  sllv        $v0, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea8) {
            ctx->pc = 0x119EB4u;
            goto label_119eb4;
        }
    }
    ctx->pc = 0x119EB0u;
label_119eb0:
    // 0x119eb0: 0xaf1007  srav        $v0, $t7, $a1
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 5) & 0x1F));
label_119eb4:
    // 0x119eb4: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x119eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119ebc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x119ec0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x119ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x119ec4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x119ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x119ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119ecc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119ed0: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x119ED0u;
    {
        const bool branch_taken_0x119ed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x119ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119ED0u;
            // 0x119ed4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ed0) {
            ctx->pc = 0x119E70u;
            runtime->cooperativeGuestYield();
            goto label_119e70;
        }
    }
    ctx->pc = 0x119ED8u;
    // 0x119ed8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x119ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_119edc:
    // 0x119edc: 0x170102b  sltu        $v0, $t3, $s0
    ctx->pc = 0x119edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x119ee0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x119EE0u;
    {
        const bool branch_taken_0x119ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EE0u;
            // 0x119ee4: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ee0) {
            ctx->pc = 0x119E58u;
            runtime->cooperativeGuestYield();
            goto label_119e58;
        }
    }
    ctx->pc = 0x119EE8u;
    // 0x119ee8: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x119EE8u;
    {
        const bool branch_taken_0x119ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EE8u;
            // 0x119eec: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ee8) {
            ctx->pc = 0x11AC74u;
            goto label_11ac74;
        }
    }
    ctx->pc = 0x119EF0u;
label_119ef0:
    // 0x119ef0: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x119ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119ef4: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x119ef4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x119ef8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x119ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x119efc: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x119efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x119f00: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x119f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x119f04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119f0c: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x119f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119f10: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x119f10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119f14: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x119F14u;
    {
        const bool branch_taken_0x119f14 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F14u;
            // 0x119f18: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f14) {
            ctx->pc = 0x119F5Cu;
            goto label_119f5c;
        }
    }
    ctx->pc = 0x119F1Cu;
    // 0x119f1c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x119f20: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x119f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x119f24: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x119f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119f28: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x119f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x119f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119f34: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x119f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x119f38: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119f3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x119f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119f40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x119f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x119f44: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x119f44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x119f48: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x119f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x119f4c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x119f4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x119f50: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x119f50u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x119f54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119F54u;
    {
        const bool branch_taken_0x119f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F54u;
            // 0x119f58: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f54) {
            ctx->pc = 0x119F90u;
            goto label_119f90;
        }
    }
    ctx->pc = 0x119F5Cu;
label_119f5c:
    // 0x119f5c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x119f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x119f60: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x119f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x119f64: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x119f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119f68: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x119f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x119f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119f70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119f74: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x119f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x119f78: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x119f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x119f7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x119f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119f80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x119f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x119f84: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x119f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x119f88: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x119f88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x119f8c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x119f8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_119f90:
    // 0x119f90: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x119f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f98: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x119f98u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f9c: 0x91920000  lbu         $s2, 0x0($t4)
    ctx->pc = 0x119f9cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x119fa0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x119fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x119fa4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x119fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x119fa8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x119fac: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x119facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x119fb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119fb4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x119fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x119fb8: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x119FB8u;
    {
        const bool branch_taken_0x119fb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FB8u;
            // 0x119fbc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fb8) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x119FC0u;
    // 0x119fc0: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x119fc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fc4: 0x0  nop
    ctx->pc = 0x119fc4u;
    // NOP
label_119fc8:
    // 0x119fc8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x119fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x119fcc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x119fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x119fd0: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x119fd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119fd4: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x119FD4u;
    {
        const bool branch_taken_0x119fd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fd4) {
            ctx->pc = 0x119FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119FD4u;
            // 0x119fd8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A074u;
            goto label_11a074;
        }
    }
    ctx->pc = 0x119FDCu;
    // 0x119fdc: 0x1f54821  addu        $t1, $t7, $s5
    ctx->pc = 0x119fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x119fe0: 0x1f64021  addu        $t0, $t7, $s6
    ctx->pc = 0x119fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x119fe4: 0x0  nop
    ctx->pc = 0x119fe4u;
    // NOP
label_119fe8:
    // 0x119fe8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x119fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x119fec: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x119ff0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x119ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x119ff4: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x119ff4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119ff8: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x119ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x119ffc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a000: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a004: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x11a004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11a008: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x11a008u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11a00c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x11a00cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11a010: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A010u;
    {
        const bool branch_taken_0x11a010 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A010u;
            // 0x11a014: 0x827023  subu        $t6, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a010) {
            ctx->pc = 0x11A030u;
            goto label_11a030;
        }
    }
    ctx->pc = 0x11A018u;
    // 0x11a018: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11a018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11a01c: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11a01cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11a020: 0x511804  sllv        $v1, $s1, $v0
    ctx->pc = 0x11a020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x11a024: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x11a024u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a028: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11A028u;
    {
        const bool branch_taken_0x11a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A028u;
            // 0x11a02c: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a028) {
            ctx->pc = 0x11A040u;
            goto label_11a040;
        }
    }
    ctx->pc = 0x11A030u;
label_11a030:
    // 0x11a030: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11a030u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11a034: 0xd12807  srav        $a1, $s1, $a2
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a038: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a03c: 0xd01007  srav        $v0, $s0, $a2
    ctx->pc = 0x11a03cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
label_11a040:
    // 0x11a040: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x11a040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11a044: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x11a044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11a048: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x11a048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11a04c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11a050: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x11a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11a054: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11a058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a05c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x11a05cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x11a060: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11a064: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a068: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11A068u;
    {
        const bool branch_taken_0x11a068 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A068u;
            // 0x11a06c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a068) {
            ctx->pc = 0x119FE8u;
            runtime->cooperativeGuestYield();
            goto label_119fe8;
        }
    }
    ctx->pc = 0x11A070u;
    // 0x11a070: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11a070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_11a074:
    // 0x11a074: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x11a074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11a078: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x11A078u;
    {
        const bool branch_taken_0x11a078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A078u;
            // 0x11a07c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a078) {
            ctx->pc = 0x119FC8u;
            runtime->cooperativeGuestYield();
            goto label_119fc8;
        }
    }
    ctx->pc = 0x11A080u;
    // 0x11a080: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x11A080u;
    {
        const bool branch_taken_0x11a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A080u;
            // 0x11a084: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a080) {
            ctx->pc = 0x11AC74u;
            goto label_11ac74;
        }
    }
    ctx->pc = 0x11A088u;
label_11a088:
    // 0x11a088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a08c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a090: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a098: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x11a098u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x11a09c: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x11a09cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x11a0a0: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x11a0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11a0a4: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x11a0a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x11a0a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a0ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a0b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x11a0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11a0b4: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x11a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a0b8: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x11a0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11a0bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A0BCu;
    {
        const bool branch_taken_0x11a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0BCu;
            // 0x11a0c0: 0x46006886  mov.s       $f2, $f13 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0bc) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x11A0C4u;
    // 0x11a0c4: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x11a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11a0c8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11a0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a0d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a0d4: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x11a0d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a0d8:
    // 0x11a0d8: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x11A0D8u;
    {
        const bool branch_taken_0x11a0d8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11a0d8) {
            ctx->pc = 0x11A0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0D8u;
            // 0x11a0dc: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A118u;
            goto label_11a118;
        }
    }
    ctx->pc = 0x11A0E0u;
    // 0x11a0e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0E0u;
            // 0x11a0e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A0F8u;
            goto label_11a0f8;
        }
    }
    ctx->pc = 0x11A0E8u;
    // 0x11a0e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11a0e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a0ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a0f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11A0F0u;
    {
        const bool branch_taken_0x11a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0F0u;
            // 0x11a0f4: 0x46060082  mul.s       $f2, $f0, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0f0) {
            ctx->pc = 0x11A114u;
            goto label_11a114;
        }
    }
    ctx->pc = 0x11A0F8u;
label_11a0f8:
    // 0x11a0f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11a0fc: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x11a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11a100: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a10c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11a10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11a110: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x11a110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a114:
    // 0x11a114: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x11a114u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_11a118:
    // 0x11a118: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x11a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x11a11c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11a120: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11a120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11a124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a128: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x11a128u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11a12c: 0x3c24021  addu        $t0, $fp, $v0
    ctx->pc = 0x11a12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11a130: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11a134: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A134u;
    {
        const bool branch_taken_0x11a134 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A134u;
            // 0x11a138: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a134) {
            ctx->pc = 0x11A14Cu;
            goto label_11a14c;
        }
    }
    ctx->pc = 0x11A13Cu;
    // 0x11a13c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11A144u;
    {
        const bool branch_taken_0x11a144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A144u;
            // 0x11a148: 0x460600c2  mul.s       $f3, $f0, $f6 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a144) {
            ctx->pc = 0x11A168u;
            goto label_11a168;
        }
    }
    ctx->pc = 0x11A14Cu;
label_11a14c:
    // 0x11a14c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x11a150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11a154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a15c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a160: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11a160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11a164: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x11a164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a168:
    // 0x11a168: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x11a168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a16c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11A16Cu;
    {
        const bool branch_taken_0x11a16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a16c) {
            ctx->pc = 0x11A170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A16Cu;
            // 0x11a170: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A198u;
            goto label_11a198;
        }
    }
    ctx->pc = 0x11A174u;
    // 0x11a174: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x11a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11a178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a17c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a188: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11a188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a18c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11a18cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11a190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11A190u;
    {
        const bool branch_taken_0x11a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A190u;
            // 0x11a194: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a190) {
            ctx->pc = 0x11A19Cu;
            goto label_11a19c;
        }
    }
    ctx->pc = 0x11A198u;
label_11a198:
    // 0x11a198: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11a198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a19c:
    // 0x11a19c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x11a19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a1a0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x11a1a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a1a4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x11a1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a1a8: 0x0  nop
    ctx->pc = 0x11a1a8u;
    // NOP
    // 0x11a1ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11A1ACu;
    {
        const bool branch_taken_0x11a1ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a1ac) {
            ctx->pc = 0x11A1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1ACu;
            // 0x11a1b0: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A1B4u;
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A1B4u;
label_11a1b4:
    // 0x11a1b4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x11A1B4u;
    {
        const bool branch_taken_0x11a1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a1b4) {
            ctx->pc = 0x11A2D8u;
            goto label_11a2d8;
        }
    }
    ctx->pc = 0x11A1BCu;
    // 0x11a1bc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a1c4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x11a1c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11a1c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11a1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a1cc: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x11A1CCu;
    {
        const bool branch_taken_0x11a1cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a1cc) {
            ctx->pc = 0x11A2D8u;
            goto label_11a2d8;
        }
    }
    ctx->pc = 0x11A1D4u;
    // 0x11a1d4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x11a1d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11a1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a1dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a1e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a1e4: 0x0  nop
    ctx->pc = 0x11a1e4u;
    // NOP
    // 0x11a1e8: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x11A1E8u;
    {
        const bool branch_taken_0x11a1e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1E8u;
            // 0x11a1ec: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1e8) {
            ctx->pc = 0x11A2D8u;
            goto label_11a2d8;
        }
    }
    ctx->pc = 0x11A1F0u;
    // 0x11a1f0: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x11a1f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x11a1f4: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x11a1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11a1f8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11a1f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1fc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x11a1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11a200: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x11a200u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11a204: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a208: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11a20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a210: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11a214: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x11a214u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11a218: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11a21c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a224: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11a228: 0x44c021  addu        $t8, $v0, $a0
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a22c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x11a22cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a234: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x11a234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11a238: 0x3058021  addu        $s0, $t8, $a1
    ctx->pc = 0x11a238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x11a23c: 0x11e0005c  beqz        $t7, . + 4 + (0x5C << 2)
    ctx->pc = 0x11A23Cu;
    {
        const bool branch_taken_0x11a23c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A23Cu;
            // 0x11a240: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a23c) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x11A244u;
    // 0x11a244: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x11a244u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11a248:
    // 0x11a248: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x11a248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11a24c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x11a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x11a250: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x11a250u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11a254: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x11A254u;
    {
        const bool branch_taken_0x11a254 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A254u;
            // 0x11a258: 0xe1040  sll         $v0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a254) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A25Cu;
    // 0x11a25c: 0x584821  addu        $t1, $v0, $t8
    ctx->pc = 0x11a25cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x11a260: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x11a260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11a264: 0x0  nop
    ctx->pc = 0x11a264u;
    // NOP
label_11a268:
    // 0x11a268: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x11a268u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a26c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11a270: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11a274: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x11a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11a278: 0x22023  negu        $a0, $v0
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a27c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a280: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x11a280u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11a284: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x11a284u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x11a288: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x11a288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11a28c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11a290: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x11a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11a294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a298: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x11a298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x11a29c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a2a0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11a2a4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x11a2a4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11a2a8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11a2ac: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x11a2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x11a2b0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x11a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x11a2b4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11a2b8: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11A2B8u;
    {
        const bool branch_taken_0x11a2b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2B8u;
            // 0x11a2bc: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2b8) {
            ctx->pc = 0x11A268u;
            runtime->cooperativeGuestYield();
            goto label_11a268;
        }
    }
    ctx->pc = 0x11A2C0u;
label_11a2c0:
    // 0x11a2c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11a2c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11a2c4: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x11a2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11a2c8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11A2C8u;
    {
        const bool branch_taken_0x11a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2C8u;
            // 0x11a2cc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2c8) {
            ctx->pc = 0x11A248u;
            runtime->cooperativeGuestYield();
            goto label_11a248;
        }
    }
    ctx->pc = 0x11A2D0u;
    // 0x11a2d0: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x11A2D0u;
    {
        const bool branch_taken_0x11a2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2D0u;
            // 0x11a2d4: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d0) {
            ctx->pc = 0x11AC74u;
            goto label_11ac74;
        }
    }
    ctx->pc = 0x11A2D8u;
label_11a2d8:
    // 0x11a2d8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a2e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11a2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a2e4: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x11a2e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x11a2e8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x11a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11a2ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x11a2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a2f0: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x11a2f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11a2f4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x11a2f4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x11a2f8: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x11a2f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11a2fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a2fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a300: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x11a300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11a304: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11a304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11a308: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a30c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x11a30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11a310: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11a314: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x11a314u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11a318: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11a31c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x11a31cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a320: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11a320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a324: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a328: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11a328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a32c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a330: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11a330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11a334: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x11a334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x11a338: 0x11c0001d  beqz        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x11A338u;
    {
        const bool branch_taken_0x11a338 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A338u;
            // 0x11a33c: 0x437821  addu        $t7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a338) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x11A340u;
    // 0x11a340: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a344: 0x0  nop
    ctx->pc = 0x11a344u;
    // NOP
label_11a348:
    // 0x11a348: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x11a348u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a34c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11A34Cu;
    {
        const bool branch_taken_0x11a34c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A34Cu;
            // 0x11a350: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a34c) {
            ctx->pc = 0x11A39Cu;
            goto label_11a39c;
        }
    }
    ctx->pc = 0x11A354u;
    // 0x11a354: 0x4f3821  addu        $a3, $v0, $t7
    ctx->pc = 0x11a354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_11a358:
    // 0x11a358: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11a35c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a360: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a364: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x11a364u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11a368: 0x21823  negu        $v1, $v0
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a36c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x11a370: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x11a370u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11a374: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x11a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11a378: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a37c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a380: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11a380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11a384: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x11a388: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x11a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x11a38c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x11a38cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11a390: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11a390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11a394: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11A394u;
    {
        const bool branch_taken_0x11a394 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A394u;
            // 0x11a398: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a394) {
            ctx->pc = 0x11A358u;
            runtime->cooperativeGuestYield();
            goto label_11a358;
        }
    }
    ctx->pc = 0x11A39Cu;
label_11a39c:
    // 0x11a39c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11a39cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11a3a0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x11a3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11a3a4: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x11a3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x11a3a8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11A3A8u;
    {
        const bool branch_taken_0x11a3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3A8u;
            // 0x11a3ac: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a8) {
            ctx->pc = 0x11A348u;
            runtime->cooperativeGuestYield();
            goto label_11a348;
        }
    }
    ctx->pc = 0x11A3B0u;
label_11a3b0:
    // 0x11a3b0: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x11A3B0u;
    {
        const bool branch_taken_0x11a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3B0u;
            // 0x11a3b4: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b0) {
            ctx->pc = 0x11AC74u;
            goto label_11ac74;
        }
    }
    ctx->pc = 0x11A3B8u;
label_11a3b8:
    // 0x11a3b8: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x11a3b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11a3bc: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11a3bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11a3c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a3c4: 0x91a30002  lbu         $v1, 0x2($t5)
    ctx->pc = 0x11a3c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x11a3c8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11a3cc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11a3d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A3D0u;
    {
        const bool branch_taken_0x11a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3D0u;
            // 0x11a3d4: 0x44a021  addu        $s4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3d0) {
            ctx->pc = 0x11A3ECu;
            goto label_11a3ec;
        }
    }
    ctx->pc = 0x11A3D8u;
    // 0x11a3d8: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x11a3d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x11a3dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11a3e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x11a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11a3e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A3E4u;
    {
        const bool branch_taken_0x11a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3E4u;
            // 0x11a3e8: 0x2827021  addu        $t6, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3e4) {
            ctx->pc = 0x11A3F4u;
            goto label_11a3f4;
        }
    }
    ctx->pc = 0x11A3ECu;
label_11a3ec:
    // 0x11a3ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11a3f0: 0x244e7788  addiu       $t6, $v0, 0x7788
    ctx->pc = 0x11a3f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_11a3f4:
    // 0x11a3f4: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x11a3f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11a3f8: 0x26830002  addiu       $v1, $s4, 0x2
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x11a3fc: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x11a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x11a400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a404: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x11A404u;
    {
        const bool branch_taken_0x11a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A404u;
            // 0x11a408: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a404) {
            ctx->pc = 0x11A84Cu;
            goto label_11a84c;
        }
    }
    ctx->pc = 0x11A40Cu;
    // 0x11a40c: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x11a40cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a410:
    // 0x11a410: 0x460d3834  c.lt.s      $f7, $f13
    ctx->pc = 0x11a410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a414: 0x0  nop
    ctx->pc = 0x11a414u;
    // NOP
    // 0x11a418: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x11A418u;
    {
        const bool branch_taken_0x11a418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A418u;
            // 0x11a41c: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a418) {
            ctx->pc = 0x11A478u;
            goto label_11a478;
        }
    }
    ctx->pc = 0x11A420u;
    // 0x11a420: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x11a420u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a424: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11a424u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11a428: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a42c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a430: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11a43c: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x11a43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x11a440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a448: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a450: 0x0  nop
    ctx->pc = 0x11a450u;
    // NOP
    // 0x11a454: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11A454u;
    {
        const bool branch_taken_0x11a454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A454u;
            // 0x11a458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a454) {
            ctx->pc = 0x11A4D4u;
            goto label_11a4d4;
        }
    }
    ctx->pc = 0x11A45Cu;
    // 0x11a45c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a45cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a464: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x11a464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x11a468: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a46c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a470: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11A470u;
    {
        const bool branch_taken_0x11a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a470) {
            ctx->pc = 0x11A4CCu;
            goto label_11a4cc;
        }
    }
    ctx->pc = 0x11A478u;
label_11a478:
    // 0x11a478: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a47c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a480: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a488: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x11a488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x11a48c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a490: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11a490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a494: 0x0  nop
    ctx->pc = 0x11a494u;
    // NOP
    // 0x11a498: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x11A498u;
    {
        const bool branch_taken_0x11a498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A498u;
            // 0x11a49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a498) {
            ctx->pc = 0x11A4D4u;
            goto label_11a4d4;
        }
    }
    ctx->pc = 0x11A4A0u;
    // 0x11a4a0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x11a4a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a4a4: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x11a4a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x11a4a8: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11a4a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11a4ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a4b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11a4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a4bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a4c0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a4c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11a4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a4c8: 0x0  nop
    ctx->pc = 0x11a4c8u;
    // NOP
label_11a4cc:
    // 0x11a4cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11A4CCu;
    {
        const bool branch_taken_0x11a4cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a4cc) {
            ctx->pc = 0x11A4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4CCu;
            // 0x11a4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A4D4u;
            goto label_11a4d4;
        }
    }
    ctx->pc = 0x11A4D4u;
label_11a4d4:
    // 0x11a4d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4d8: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x11A4D8u;
    {
        const bool branch_taken_0x11a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A4D8u;
            // 0x11a4dc: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d8) {
            ctx->pc = 0x11A838u;
            goto label_11a838;
        }
    }
    ctx->pc = 0x11A4E0u;
    // 0x11a4e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a4e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a4e8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a4ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a4f0: 0x46006886  mov.s       $f2, $f13
    ctx->pc = 0x11a4f0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[13]);
    // 0x11a4f4: 0x46060143  div.s       $f5, $f0, $f6
    ctx->pc = 0x11a4f4u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[6];
    // 0x11a4f8: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x11a4f8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11a4fc: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x11a4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x11a500: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x11a500u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a504: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x11a504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x11a508: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x11a508u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a50c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x11a50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11a510: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11a510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11a514: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x11a518: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x11a518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x11a51c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a51cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a520: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x11a520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11a524: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11a528: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A528u;
    {
        const bool branch_taken_0x11a528 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x11A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A528u;
            // 0x11a52c: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a528) {
            ctx->pc = 0x11A540u;
            goto label_11a540;
        }
    }
    ctx->pc = 0x11A530u;
    // 0x11a530: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x11a530u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a53c: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x11a53cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a540:
    // 0x11a540: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A540u;
    {
        const bool branch_taken_0x11a540 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A540u;
            // 0x11a544: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a540) {
            ctx->pc = 0x11A558u;
            goto label_11a558;
        }
    }
    ctx->pc = 0x11A548u;
    // 0x11a548: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x11a548u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a554: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x11a554u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a558:
    // 0x11a558: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x11a558u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11a55c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x11a55cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11a560: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x11a560u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11a564: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x11a564u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11a568: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x11a568u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x11a56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a570: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x11a570u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x11a574: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x11a574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11a578: 0x91c90001  lbu         $t1, 0x1($t6)
    ctx->pc = 0x11a578u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x11a57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a580: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x11a580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x11a584: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x11a584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11a588: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x11a58c: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A58Cu;
    {
        const bool branch_taken_0x11a58c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x11A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A58Cu;
            // 0x11a590: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a58c) {
            ctx->pc = 0x11A5A0u;
            goto label_11a5a0;
        }
    }
    ctx->pc = 0x11A594u;
    // 0x11a594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11A594u;
    {
        const bool branch_taken_0x11a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A594u;
            // 0x11a598: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a594) {
            ctx->pc = 0x11A5B0u;
            goto label_11a5b0;
        }
    }
    ctx->pc = 0x11A59Cu;
    // 0x11a59c: 0x0  nop
    ctx->pc = 0x11a59cu;
    // NOP
label_11a5a0:
    // 0x11a5a0: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x11a5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11a5a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11a5a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11a5ac: 0x1c29821  addu        $s3, $t6, $v0
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_11a5b0:
    // 0x11a5b0: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x11A5B0u;
    {
        const bool branch_taken_0x11a5b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5B0u;
            // 0x11a5b4: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5b0) {
            ctx->pc = 0x11A6A8u;
            goto label_11a6a8;
        }
    }
    ctx->pc = 0x11A5B8u;
    // 0x11a5b8: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x11a5b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x11a5bc: 0x91c30001  lbu         $v1, 0x1($t6)
    ctx->pc = 0x11a5bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x11a5c0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x11a5c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5c4: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x11a5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11a5c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a5cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a5d0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x11a5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11a5d4: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11a5d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11a5d8: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x11a5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11a5dc: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11a5e0: 0x95c50002  lhu         $a1, 0x2($t6)
    ctx->pc = 0x11a5e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11a5e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a5e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a5ec: 0x91d90000  lbu         $t9, 0x0($t6)
    ctx->pc = 0x11a5ecu;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11a5f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a5f4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x11a5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a5f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a5fc: 0x44180800  mfc1        $t8, $f1
    ctx->pc = 0x11a5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x11a600: 0x159102b  sltu        $v0, $t2, $t9
    ctx->pc = 0x11a600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x11a604: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A604u;
            // 0x11a608: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A838u;
            goto label_11a838;
        }
    }
    ctx->pc = 0x11A60Cu;
    // 0x11a60c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x11a60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a610:
    // 0x11a610: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x11a614: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11a618: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11a61c: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x11A61Cu;
    {
        const bool branch_taken_0x11a61c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a61c) {
            ctx->pc = 0x11A620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A61Cu;
            // 0x11a620: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A694u;
            goto label_11a694;
        }
    }
    ctx->pc = 0x11A624u;
    // 0x11a624: 0x1f14021  addu        $t0, $t7, $s1
    ctx->pc = 0x11a624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
label_11a628:
    // 0x11a628: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11a62c: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x11a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x11a630: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a634: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x11a634u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a638: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x11a638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11a63c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a640: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x11a640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11a644: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a648: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x11a648u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11a64c: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x11a64cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11a650: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x11a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a654: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A654u;
    {
        const bool branch_taken_0x11a654 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A654u;
            // 0x11a658: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a654) {
            ctx->pc = 0x11A668u;
            goto label_11a668;
        }
    }
    ctx->pc = 0x11A65Cu;
    // 0x11a65c: 0x51023  negu        $v0, $a1
    ctx->pc = 0x11a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x11a660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11A660u;
    {
        const bool branch_taken_0x11a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A660u;
            // 0x11a664: 0x581004  sllv        $v0, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a660) {
            ctx->pc = 0x11A66Cu;
            goto label_11a66c;
        }
    }
    ctx->pc = 0x11A668u;
label_11a668:
    // 0x11a668: 0xb81007  srav        $v0, $t8, $a1
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 5) & 0x1F));
label_11a66c:
    // 0x11a66c: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x11a66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11a670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a674: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11a674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11a678: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11a67c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x11a67cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x11a680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a684: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a688: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11A688u;
    {
        const bool branch_taken_0x11a688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A688u;
            // 0x11a68c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a688) {
            ctx->pc = 0x11A628u;
            runtime->cooperativeGuestYield();
            goto label_11a628;
        }
    }
    ctx->pc = 0x11A690u;
    // 0x11a690: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x11a690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_11a694:
    // 0x11a694: 0x179102b  sltu        $v0, $t3, $t9
    ctx->pc = 0x11a694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x11a698: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x11A698u;
    {
        const bool branch_taken_0x11a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A698u;
            // 0x11a69c: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a698) {
            ctx->pc = 0x11A610u;
            runtime->cooperativeGuestYield();
            goto label_11a610;
        }
    }
    ctx->pc = 0x11A6A0u;
    // 0x11a6a0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x11A6A0u;
    {
        const bool branch_taken_0x11a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6A0u;
            // 0x11a6a4: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6a0) {
            ctx->pc = 0x11A83Cu;
            goto label_11a83c;
        }
    }
    ctx->pc = 0x11A6A8u;
label_11a6a8:
    // 0x11a6a8: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x11a6a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11a6ac: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11a6acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x11a6b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11a6b4: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x11a6b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11a6b8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11a6bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a6c4: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x11a6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11a6c8: 0x45b821  addu        $s7, $v0, $a1
    ctx->pc = 0x11a6c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a6cc: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A6CCu;
    {
        const bool branch_taken_0x11a6cc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x11A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6CCu;
            // 0x11a6d0: 0x62b021  addu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6cc) {
            ctx->pc = 0x11A714u;
            goto label_11a714;
        }
    }
    ctx->pc = 0x11A6D4u;
    // 0x11a6d4: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x11a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11a6d8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x11a6d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11a6dc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x11a6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11a6e0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x11a6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11a6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a6ec: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x11a6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11a6f0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x11a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11a6f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x11a6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a6f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x11a6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x11a6fc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11a6fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11a700: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11a700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11a704: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11a704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11a708: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x11a708u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x11a70c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11A70Cu;
    {
        const bool branch_taken_0x11a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A70Cu;
            // 0x11a710: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a70c) {
            ctx->pc = 0x11A748u;
            goto label_11a748;
        }
    }
    ctx->pc = 0x11A714u;
label_11a714:
    // 0x11a714: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x11a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11a718: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x11a718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11a71c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x11a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11a720: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x11a720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11a724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a728: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11a728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11a72c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11a730: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x11a730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11a734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a73c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x11a73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x11a740: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x11a740u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11a744: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11a744u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_11a748:
    // 0x11a748: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x11a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11a74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a750: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x11a750u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a754: 0x91d20000  lbu         $s2, 0x0($t6)
    ctx->pc = 0x11a754u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11a758: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x11a758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a75c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11a760: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11a764: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x11a764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11a768: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a76c: 0x44190800  mfc1        $t9, $f1
    ctx->pc = 0x11a76cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x11a770: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x11A770u;
    {
        const bool branch_taken_0x11a770 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A770u;
            // 0x11a774: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a770) {
            ctx->pc = 0x11A838u;
            goto label_11a838;
        }
    }
    ctx->pc = 0x11A778u;
    // 0x11a778: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x11a778u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a77c: 0x0  nop
    ctx->pc = 0x11a77cu;
    // NOP
label_11a780:
    // 0x11a780: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x11a780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11a784: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11a784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11a788: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x11a788u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11a78c: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x11A78Cu;
    {
        const bool branch_taken_0x11a78c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a78c) {
            ctx->pc = 0x11A790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A78Cu;
            // 0x11a790: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A82Cu;
            goto label_11a82c;
        }
    }
    ctx->pc = 0x11A794u;
    // 0x11a794: 0x3164821  addu        $t1, $t8, $s6
    ctx->pc = 0x11a794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 22)));
    // 0x11a798: 0x3174021  addu        $t0, $t8, $s7
    ctx->pc = 0x11a798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x11a79c: 0x0  nop
    ctx->pc = 0x11a79cu;
    // NOP
label_11a7a0:
    // 0x11a7a0: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11a7a4: 0x2781821  addu        $v1, $s3, $t8
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 24)));
    // 0x11a7a8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x11a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11a7ac: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x11a7acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a7b0: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x11a7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11a7b4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a7b8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a7bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11a7c0: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x11a7c0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11a7c4: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11a7c8: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A7C8u;
    {
        const bool branch_taken_0x11a7c8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7C8u;
            // 0x11a7cc: 0x827823  subu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7c8) {
            ctx->pc = 0x11A7E8u;
            goto label_11a7e8;
        }
    }
    ctx->pc = 0x11A7D0u;
    // 0x11a7d0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11a7d4: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11a7d8: 0x511804  sllv        $v1, $s1, $v0
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x11a7dc: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x11a7dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a7e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11A7E0u;
    {
        const bool branch_taken_0x11a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7E0u;
            // 0x11a7e4: 0x591004  sllv        $v0, $t9, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7e0) {
            ctx->pc = 0x11A7F8u;
            goto label_11a7f8;
        }
    }
    ctx->pc = 0x11A7E8u;
label_11a7e8:
    // 0x11a7e8: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11a7e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11a7ec: 0xd12807  srav        $a1, $s1, $a2
    ctx->pc = 0x11a7ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a7f0: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x11a7f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11a7f4: 0xd91007  srav        $v0, $t9, $a2
    ctx->pc = 0x11a7f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 6) & 0x1F));
label_11a7f8:
    // 0x11a7f8: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x11a7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11a7fc: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x11a7fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11a800: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x11a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11a804: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11a804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11a808: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x11a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11a80c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11a810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a814: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x11a814u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x11a818: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11a81c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a820: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11A820u;
    {
        const bool branch_taken_0x11a820 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A820u;
            // 0x11a824: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a820) {
            ctx->pc = 0x11A7A0u;
            runtime->cooperativeGuestYield();
            goto label_11a7a0;
        }
    }
    ctx->pc = 0x11A828u;
    // 0x11a828: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_11a82c:
    // 0x11a82c: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x11a82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11a830: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x11A830u;
    {
        const bool branch_taken_0x11a830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A830u;
            // 0x11a834: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a830) {
            ctx->pc = 0x11A780u;
            runtime->cooperativeGuestYield();
            goto label_11a780;
        }
    }
    ctx->pc = 0x11A838u;
label_11a838:
    // 0x11a838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x11a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_11a83c:
    // 0x11a83c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11a83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11a840: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x11a840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11a844: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x11A844u;
    {
        const bool branch_taken_0x11a844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A844u;
            // 0x11a848: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a844) {
            ctx->pc = 0x11A410u;
            runtime->cooperativeGuestYield();
            goto label_11a410;
        }
    }
    ctx->pc = 0x11A84Cu;
label_11a84c:
    // 0x11a84c: 0x92940001  lbu         $s4, 0x1($s4)
    ctx->pc = 0x11a84cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x11a850: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x11a850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x11a854: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x11A854u;
    {
        const bool branch_taken_0x11a854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A854u;
            // 0x11a858: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a854) {
            ctx->pc = 0x11AC70u;
            goto label_11ac70;
        }
    }
    ctx->pc = 0x11A85Cu;
    // 0x11a85c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x11a860: 0x446021  addu        $t4, $v0, $a0
    ctx->pc = 0x11a860u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11a864: 0x0  nop
    ctx->pc = 0x11a864u;
    // NOP
label_11a868:
    // 0x11a868: 0x460d3834  c.lt.s      $f7, $f13
    ctx->pc = 0x11a868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a86c: 0x0  nop
    ctx->pc = 0x11a86cu;
    // NOP
    // 0x11a870: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x11A870u;
    {
        const bool branch_taken_0x11a870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A870u;
            // 0x11a874: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a870) {
            ctx->pc = 0x11A8D0u;
            goto label_11a8d0;
        }
    }
    ctx->pc = 0x11A878u;
    // 0x11a878: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x11a878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a87c: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11a87cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11a880: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a884: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a888: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11a894: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x11a894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x11a898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a89c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a8a0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a8a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a8a8: 0x0  nop
    ctx->pc = 0x11a8a8u;
    // NOP
    // 0x11a8ac: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11A8ACu;
    {
        const bool branch_taken_0x11a8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8ACu;
            // 0x11a8b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8ac) {
            ctx->pc = 0x11A92Cu;
            goto label_11a92c;
        }
    }
    ctx->pc = 0x11A8B4u;
    // 0x11a8b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a8b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a8b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a8bc: 0x46026840  add.s       $f1, $f13, $f2
    ctx->pc = 0x11a8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x11a8c0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a8c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11a8c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a8c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11A8C8u;
    {
        const bool branch_taken_0x11a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a8c8) {
            ctx->pc = 0x11A924u;
            goto label_11a924;
        }
    }
    ctx->pc = 0x11A8D0u;
label_11a8d0:
    // 0x11a8d0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a8d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11a8d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11a8d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a8dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a8e0: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x11a8e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x11a8e4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a8e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11a8e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a8ec: 0x0  nop
    ctx->pc = 0x11a8ecu;
    // NOP
    // 0x11a8f0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x11A8F0u;
    {
        const bool branch_taken_0x11a8f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8F0u;
            // 0x11a8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8f0) {
            ctx->pc = 0x11A92Cu;
            goto label_11a92c;
        }
    }
    ctx->pc = 0x11A8F8u;
    // 0x11a8f8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x11a8f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a8fc: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x11a8fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x11a900: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11a900u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11a904: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a90c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11a910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a918: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x11a918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x11a91c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11a91cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a920: 0x0  nop
    ctx->pc = 0x11a920u;
    // NOP
label_11a924:
    // 0x11a924: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11A924u;
    {
        const bool branch_taken_0x11a924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a924) {
            ctx->pc = 0x11A928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A924u;
            // 0x11a928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A92Cu;
            goto label_11a92c;
        }
    }
    ctx->pc = 0x11A92Cu;
label_11a92c:
    // 0x11a92c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11a92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a930: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x11A930u;
    {
        const bool branch_taken_0x11a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A930u;
            // 0x11a934: 0x46006886  mov.s       $f2, $f13 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a930) {
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    ctx->pc = 0x11A938u;
    // 0x11a938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a93c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a940: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11a940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11a944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a948: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x11a948u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x11a94c: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x11a94cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x11a950: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x11a950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11a954: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x11a954u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11a958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11a958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11a95c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11a960: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x11a960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11a964: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x11a964u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a968: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x11a968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11a96c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A96Cu;
    {
        const bool branch_taken_0x11a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A96Cu;
            // 0x11a970: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a96c) {
            ctx->pc = 0x11A988u;
            goto label_11a988;
        }
    }
    ctx->pc = 0x11A974u;
    // 0x11a974: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x11a974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11a978: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11a97c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a984: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x11a984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a988:
    // 0x11a988: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x11A988u;
    {
        const bool branch_taken_0x11a988 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11a988) {
            ctx->pc = 0x11A98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A988u;
            // 0x11a98c: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A9C8u;
            goto label_11a9c8;
        }
    }
    ctx->pc = 0x11A990u;
    // 0x11a990: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A990u;
    {
        const bool branch_taken_0x11a990 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A990u;
            // 0x11a994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a990) {
            ctx->pc = 0x11A9A8u;
            goto label_11a9a8;
        }
    }
    ctx->pc = 0x11A998u;
    // 0x11a998: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11a998u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a99c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a9a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11A9A0u;
    {
        const bool branch_taken_0x11a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9A0u;
            // 0x11a9a4: 0x46060082  mul.s       $f2, $f0, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9a0) {
            ctx->pc = 0x11A9C4u;
            goto label_11a9c4;
        }
    }
    ctx->pc = 0x11A9A8u;
label_11a9a8:
    // 0x11a9a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x11a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11a9ac: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x11a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11a9b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a9b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a9bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11a9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11a9c0: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x11a9c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11a9c4:
    // 0x11a9c4: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x11a9c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_11a9c8:
    // 0x11a9c8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x11a9cc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x11a9ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11a9d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11a9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a9d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a9d8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11a9dc: 0x3c29821  addu        $s3, $fp, $v0
    ctx->pc = 0x11a9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11a9e0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11a9e4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A9E4u;
    {
        const bool branch_taken_0x11a9e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9E4u;
            // 0x11a9e8: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9e4) {
            ctx->pc = 0x11A9FCu;
            goto label_11a9fc;
        }
    }
    ctx->pc = 0x11A9ECu;
    // 0x11a9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11a9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11a9f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11A9F4u;
    {
        const bool branch_taken_0x11a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9F4u;
            // 0x11a9f8: 0x460600c2  mul.s       $f3, $f0, $f6 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f4) {
            ctx->pc = 0x11AA18u;
            goto label_11aa18;
        }
    }
    ctx->pc = 0x11A9FCu;
label_11a9fc:
    // 0x11a9fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x11aa00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11aa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11aa04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11aa08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11aa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11aa0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11aa10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aa14: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x11aa14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11aa18:
    // 0x11aa18: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x11aa18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11aa1c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11AA1Cu;
    {
        const bool branch_taken_0x11aa1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa1c) {
            ctx->pc = 0x11AA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA1Cu;
            // 0x11aa20: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AA48u;
            goto label_11aa48;
        }
    }
    ctx->pc = 0x11AA24u;
    // 0x11aa24: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11aa28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11aa2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aa30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11aa30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11aa34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11aa38: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11aa38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11aa3c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11aa3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11aa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11AA40u;
    {
        const bool branch_taken_0x11aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA40u;
            // 0x11aa44: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa40) {
            ctx->pc = 0x11AA4Cu;
            goto label_11aa4c;
        }
    }
    ctx->pc = 0x11AA48u;
label_11aa48:
    // 0x11aa48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11aa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aa4c:
    // 0x11aa4c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x11aa4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11aa50: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x11aa50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11aa54: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x11aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa58: 0x0  nop
    ctx->pc = 0x11aa58u;
    // NOP
    // 0x11aa5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11AA5Cu;
    {
        const bool branch_taken_0x11aa5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa5c) {
            ctx->pc = 0x11AA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA5Cu;
            // 0x11aa60: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AA64u;
            goto label_11aa64;
        }
    }
    ctx->pc = 0x11AA64u;
label_11aa64:
    // 0x11aa64: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x11AA64u;
    {
        const bool branch_taken_0x11aa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa64) {
            ctx->pc = 0x11AB88u;
            goto label_11ab88;
        }
    }
    ctx->pc = 0x11AA6Cu;
    // 0x11aa6c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11aa70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aa74: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x11aa74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11aa78: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11aa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa7c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x11AA7Cu;
    {
        const bool branch_taken_0x11aa7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa7c) {
            ctx->pc = 0x11AB88u;
            goto label_11ab88;
        }
    }
    ctx->pc = 0x11AA84u;
    // 0x11aa84: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x11aa84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11aa88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11aa8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aa90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11aa90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11aa94: 0x0  nop
    ctx->pc = 0x11aa94u;
    // NOP
    // 0x11aa98: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x11AA98u;
    {
        const bool branch_taken_0x11aa98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA98u;
            // 0x11aa9c: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa98) {
            ctx->pc = 0x11AB88u;
            goto label_11ab88;
        }
    }
    ctx->pc = 0x11AAA0u;
    // 0x11aaa0: 0x91c50001  lbu         $a1, 0x1($t6)
    ctx->pc = 0x11aaa0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x11aaa4: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x11aaa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11aaa8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x11aaa8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaac: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x11aaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11aab0: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x11aab0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x11aab4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11aab8: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11aabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aac0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11aac4: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x11aac4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11aac8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11aacc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11aaccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11aad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11aad4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11aad8: 0x44c821  addu        $t9, $v0, $a0
    ctx->pc = 0x11aad8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11aadc: 0x91d80000  lbu         $t8, 0x0($t6)
    ctx->pc = 0x11aadcu;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11aae0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11aae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11aae4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x11aae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x11aae8: 0x3258821  addu        $s1, $t9, $a1
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x11aaec: 0x1300005c  beqz        $t8, . + 4 + (0x5C << 2)
    ctx->pc = 0x11AAECu;
    {
        const bool branch_taken_0x11aaec = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAECu;
            // 0x11aaf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaec) {
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    ctx->pc = 0x11AAF4u;
    // 0x11aaf4: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x11aaf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11aaf8:
    // 0x11aaf8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x11aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11aafc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11ab00: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11ab04: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x11AB04u;
    {
        const bool branch_taken_0x11ab04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB04u;
            // 0x11ab08: 0xf1040  sll         $v0, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab04) {
            ctx->pc = 0x11AB70u;
            goto label_11ab70;
        }
    }
    ctx->pc = 0x11AB0Cu;
    // 0x11ab0c: 0x594821  addu        $t1, $v0, $t9
    ctx->pc = 0x11ab0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x11ab10: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x11ab10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11ab14: 0x0  nop
    ctx->pc = 0x11ab14u;
    // NOP
label_11ab18:
    // 0x11ab18: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x11ab18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11ab1c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11ab20: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11ab24: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x11ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11ab28: 0x22023  negu        $a0, $v0
    ctx->pc = 0x11ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11ab2c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11ab30: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11ab34: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x11ab34u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x11ab38: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x11ab38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11ab3c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11ab40: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x11ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11ab44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ab48: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x11ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x11ab4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11ab50: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x11ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11ab54: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x11ab54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11ab58: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x11ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11ab5c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x11ab60: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x11ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x11ab64: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11ab68: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11AB68u;
    {
        const bool branch_taken_0x11ab68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB68u;
            // 0x11ab6c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab68) {
            ctx->pc = 0x11AB18u;
            runtime->cooperativeGuestYield();
            goto label_11ab18;
        }
    }
    ctx->pc = 0x11AB70u;
label_11ab70:
    // 0x11ab70: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11ab70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11ab74: 0x158102b  sltu        $v0, $t2, $t8
    ctx->pc = 0x11ab74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x11ab78: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11AB78u;
    {
        const bool branch_taken_0x11ab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB78u;
            // 0x11ab7c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab78) {
            ctx->pc = 0x11AAF8u;
            runtime->cooperativeGuestYield();
            goto label_11aaf8;
        }
    }
    ctx->pc = 0x11AB80u;
    // 0x11ab80: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11AB80u;
    {
        const bool branch_taken_0x11ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB80u;
            // 0x11ab84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab80) {
            ctx->pc = 0x11AC64u;
            goto label_11ac64;
        }
    }
    ctx->pc = 0x11AB88u;
label_11ab88:
    // 0x11ab88: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11ab8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ab8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ab90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ab90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ab94: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x11ab94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x11ab98: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x11ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11ab9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x11ab9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11aba0: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x11aba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11aba4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x11aba4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x11aba8: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x11aba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11abac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11abacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11abb0: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x11abb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x11abb4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11abb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11abb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11abbc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x11abbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11abc0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x11abc4: 0x95c40002  lhu         $a0, 0x2($t6)
    ctx->pc = 0x11abc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11abc8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11abcc: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x11abccu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11abd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11abd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11abd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11abd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11abe0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11abe4: 0x25c40004  addiu       $a0, $t6, 0x4
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x11abe8: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x11ABE8u;
    {
        const bool branch_taken_0x11abe8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABE8u;
            // 0x11abec: 0x43c021  addu        $t8, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abe8) {
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    ctx->pc = 0x11ABF0u;
    // 0x11abf0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11abf8:
    // 0x11abf8: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x11abf8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11abfc: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11ABFCu;
    {
        const bool branch_taken_0x11abfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABFCu;
            // 0x11ac00: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abfc) {
            ctx->pc = 0x11AC4Cu;
            goto label_11ac4c;
        }
    }
    ctx->pc = 0x11AC04u;
    // 0x11ac04: 0x583821  addu        $a3, $v0, $t8
    ctx->pc = 0x11ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
label_11ac08:
    // 0x11ac08: 0x61023  negu        $v0, $a2
    ctx->pc = 0x11ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11ac0c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11ac10: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11ac14: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x11ac14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11ac18: 0x21823  negu        $v1, $v0
    ctx->pc = 0x11ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11ac1c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x11ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x11ac20: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x11ac20u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11ac24: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x11ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11ac28: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x11ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11ac2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11ac30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11ac34: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x11ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x11ac38: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x11ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x11ac3c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x11ac3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x11ac40: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11ac44: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11AC44u;
    {
        const bool branch_taken_0x11ac44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC44u;
            // 0x11ac48: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac44) {
            ctx->pc = 0x11AC08u;
            runtime->cooperativeGuestYield();
            goto label_11ac08;
        }
    }
    ctx->pc = 0x11AC4Cu;
label_11ac4c:
    // 0x11ac4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11ac4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11ac50: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x11ac50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11ac54: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x11ac54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11ac58: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11AC58u;
    {
        const bool branch_taken_0x11ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC58u;
            // 0x11ac5c: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac58) {
            ctx->pc = 0x11ABF8u;
            runtime->cooperativeGuestYield();
            goto label_11abf8;
        }
    }
    ctx->pc = 0x11AC60u;
label_11ac60:
    // 0x11ac60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ac60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11ac64:
    // 0x11ac64: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x11ac64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x11ac68: 0x1440feff  bnez        $v0, . + 4 + (-0x101 << 2)
    ctx->pc = 0x11AC68u;
    {
        const bool branch_taken_0x11ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC68u;
            // 0x11ac6c: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac68) {
            ctx->pc = 0x11A868u;
            runtime->cooperativeGuestYield();
            goto label_11a868;
        }
    }
    ctx->pc = 0x11AC70u;
label_11ac70:
    // 0x11ac70: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x11ac70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_11ac74:
    // 0x11ac74: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x11ac74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x11ac78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11ac7c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11AC7Cu;
    {
        const bool branch_taken_0x11ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC7Cu;
            // 0x11ac80: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac7c) {
            ctx->pc = 0x11ACD0u;
            goto label_11acd0;
        }
    }
    ctx->pc = 0x11AC84u;
    // 0x11ac84: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x11ac84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11ac88: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AC88u;
    {
        const bool branch_taken_0x11ac88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC88u;
            // 0x11ac8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac88) {
            ctx->pc = 0x11ACF8u;
            goto label_11acf8;
        }
    }
    ctx->pc = 0x11AC90u;
    // 0x11ac90: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x11ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x11ac94: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x11ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x11ac98: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11ac9c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x11ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_11aca0:
    // 0x11aca0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11aca4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11aca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11aca8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11acac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11acb0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x11acb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11acb4: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x11acb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11acb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11acb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11acbc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x11acbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x11acc0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11ACC0u;
    {
        const bool branch_taken_0x11acc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ACC0u;
            // 0x11acc4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acc0) {
            ctx->pc = 0x11ACA0u;
            runtime->cooperativeGuestYield();
            goto label_11aca0;
        }
    }
    ctx->pc = 0x11ACC8u;
    // 0x11acc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11ACC8u;
    {
        const bool branch_taken_0x11acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ACC8u;
            // 0x11accc: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acc8) {
            ctx->pc = 0x11ACFCu;
            goto label_11acfc;
        }
    }
    ctx->pc = 0x11ACD0u;
label_11acd0:
    // 0x11acd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11acd4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x11acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x11acd8: 0x95a50000  lhu         $a1, 0x0($t5)
    ctx->pc = 0x11acd8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11acdc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11ace0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ace4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11ace4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ace8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x11acec: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x11acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x11acf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11acf4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x11acf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_11acf8:
    // 0x11acf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x11acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11acfc:
    // 0x11acfc: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x11acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x11ad00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11ad04: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11ad04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11ad08: 0x1440f7b5  bnez        $v0, . + 4 + (-0x84B << 2)
    ctx->pc = 0x11AD08u;
    {
        const bool branch_taken_0x11ad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD08u;
            // 0x11ad0c: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad08) {
            ctx->pc = 0x118BE0u;
            runtime->cooperativeGuestYield();
            goto label_118be0;
        }
    }
    ctx->pc = 0x11AD10u;
    // 0x11ad10: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11ad14:
    // 0x11ad14: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x11ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ad18: 0x8cc20068  lw          $v0, 0x68($a2)
    ctx->pc = 0x11ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x11ad1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11ad20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x11ad20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ad24: 0x1440f79e  bnez        $v0, . + 4 + (-0x862 << 2)
    ctx->pc = 0x11AD24u;
    {
        const bool branch_taken_0x11ad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD24u;
            // 0x11ad28: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad24) {
            ctx->pc = 0x118BA0u;
            runtime->cooperativeGuestYield();
            goto label_118ba0;
        }
    }
    ctx->pc = 0x11AD2Cu;
    // 0x11ad2c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x11ad2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_11ad30:
    // 0x11ad30: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x11ad30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11ad34: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x11ad34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11ad38: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x11ad38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11ad3c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x11ad3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ad40: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x11ad40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ad44: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x11ad44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ad48: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x11ad48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ad4c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x11ad4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ad50: 0x3e00008  jr          $ra
    ctx->pc = 0x11AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD50u;
            // 0x11ad54: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AD58u;
    // 0x11ad58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ad5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11ad60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11ad64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ad6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11ad70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ad74: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x11ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11ad78: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x11ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x11ad7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11AD7Cu;
    {
        const bool branch_taken_0x11ad7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD7Cu;
            // 0x11ad80: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad7c) {
            ctx->pc = 0x11ADC8u;
            goto label_11adc8;
        }
    }
    ctx->pc = 0x11AD84u;
    // 0x11ad84: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x11ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11ad88: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x11ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ad8c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11ad90: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x11ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad94: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x11ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ad98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ad98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ad9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11ad9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11ada0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11ada0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11ada4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x11ada4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ada8: 0x0  nop
    ctx->pc = 0x11ada8u;
    // NOP
    // 0x11adac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11ADACu;
    {
        const bool branch_taken_0x11adac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADACu;
            // 0x11adb0: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adac) {
            ctx->pc = 0x11ADC8u;
            goto label_11adc8;
        }
    }
    ctx->pc = 0x11ADB4u;
    // 0x11adb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11adb8: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x11adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x11adbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11adc0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x11adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x11adc4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x11adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_11adc8:
    // 0x11adc8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x11adc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11adcc: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x11adccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11add0: 0x12130035  beq         $s0, $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x11ADD0u;
    {
        const bool branch_taken_0x11add0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x11ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADD0u;
            // 0x11add4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11add0) {
            ctx->pc = 0x11AEA8u;
            goto label_11aea8;
        }
    }
    ctx->pc = 0x11ADD8u;
    // 0x11add8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11addc: 0x0  nop
    ctx->pc = 0x11addcu;
    // NOP
label_11ade0:
    // 0x11ade0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x11ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x11ade4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11ADE4u;
    {
        const bool branch_taken_0x11ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADE4u;
            // 0x11ade8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade4) {
            ctx->pc = 0x11AE00u;
            goto label_11ae00;
        }
    }
    ctx->pc = 0x11ADECu;
    // 0x11adec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adf0: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x11ADF0u;
    SET_GPR_U32(ctx, 31, 0x11ADF8u);
    ctx->pc = 0x11ADF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADF0u;
            // 0x11adf4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADF8u; }
        if (ctx->pc != 0x11ADF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADF8u; }
        if (ctx->pc != 0x11ADF8u) { return; }
    }
    ctx->pc = 0x11ADF8u;
    // 0x11adf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11ADF8u;
    {
        const bool branch_taken_0x11adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11adf8) {
            ctx->pc = 0x11AEA0u;
            goto label_11aea0;
        }
    }
    ctx->pc = 0x11AE00u;
label_11ae00:
    // 0x11ae00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae04: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11AE04u;
    SET_GPR_U32(ctx, 31, 0x11AE0Cu);
    ctx->pc = 0x11AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE04u;
            // 0x11ae08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE0Cu; }
        if (ctx->pc != 0x11AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EF0_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE0Cu; }
        if (ctx->pc != 0x11AE0Cu) { return; }
    }
    ctx->pc = 0x11AE0Cu;
    // 0x11ae0c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x11ae0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae10: 0x51400022  beql        $t2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x11AE10u;
    {
        const bool branch_taken_0x11ae10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae10) {
            ctx->pc = 0x11AE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE10u;
            // 0x11ae14: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AE9Cu;
            goto label_11ae9c;
        }
    }
    ctx->pc = 0x11AE18u;
    // 0x11ae18: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x11ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x11ae1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ae1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae20: 0x8e2c0040  lw          $t4, 0x40($s1)
    ctx->pc = 0x11ae20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11ae24: 0x8e0b0074  lw          $t3, 0x74($s0)
    ctx->pc = 0x11ae24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x11ae28: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AE28u;
    {
        const bool branch_taken_0x11ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE28u;
            // 0x11ae2c: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae28) {
            ctx->pc = 0x11AE98u;
            goto label_11ae98;
        }
    }
    ctx->pc = 0x11AE30u;
    // 0x11ae30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x11ae30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae34: 0x0  nop
    ctx->pc = 0x11ae34u;
    // NOP
label_11ae38:
    // 0x11ae38: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x11ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11ae3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11ae40: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x11ae40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ae44: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x11AE44u;
    {
        const bool branch_taken_0x11ae44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE44u;
            // 0x11ae48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae44) {
            ctx->pc = 0x11AE84u;
            goto label_11ae84;
        }
    }
    ctx->pc = 0x11AE4Cu;
    // 0x11ae4c: 0x0  nop
    ctx->pc = 0x11ae4cu;
    // NOP
label_11ae50:
    // 0x11ae50: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x11ae54: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x11ae54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11ae58: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11ae5c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11ae60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ae64: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x11ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x11ae68: 0xc9282b  sltu        $a1, $a2, $t1
    ctx->pc = 0x11ae68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11ae6c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x11ae6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ae70: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x11ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x11ae74: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x11ae74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ae78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11ae7c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11AE7Cu;
    {
        const bool branch_taken_0x11ae7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE7Cu;
            // 0x11ae80: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae7c) {
            ctx->pc = 0x11AE50u;
            runtime->cooperativeGuestYield();
            goto label_11ae50;
        }
    }
    ctx->pc = 0x11AE84u;
label_11ae84:
    // 0x11ae84: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x11ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x11ae88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11ae88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11ae8c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x11ae8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ae90: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11AE90u;
    {
        const bool branch_taken_0x11ae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE90u;
            // 0x11ae94: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae90) {
            ctx->pc = 0x11AE38u;
            runtime->cooperativeGuestYield();
            goto label_11ae38;
        }
    }
    ctx->pc = 0x11AE98u;
label_11ae98:
    // 0x11ae98: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11ae98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ae9c:
    // 0x11ae9c: 0x24a9025  or          $s2, $s2, $t2
    ctx->pc = 0x11ae9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 10));
label_11aea0:
    // 0x11aea0: 0x5613ffcf  bnel        $s0, $s3, . + 4 + (-0x31 << 2)
    ctx->pc = 0x11AEA0u;
    {
        const bool branch_taken_0x11aea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x11aea0) {
            ctx->pc = 0x11AEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEA0u;
            // 0x11aea4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11ADE0u;
            runtime->cooperativeGuestYield();
            goto label_11ade0;
        }
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11aeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11aeb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11aeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11aeb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11aeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aeb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11aeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aec0: 0x3e00008  jr          $ra
    ctx->pc = 0x11AEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEC0u;
            // 0x11aec4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118988u: goto label_118988;
            case 0x1189A8u: goto label_1189a8;
            case 0x1189B4u: goto label_1189b4;
            case 0x118A18u: goto label_118a18;
            case 0x118A28u: goto label_118a28;
            case 0x118A4Cu: goto label_118a4c;
            case 0x118A8Cu: goto label_118a8c;
            case 0x118AE8u: goto label_118ae8;
            case 0x118B00u: goto label_118b00;
            case 0x118B24u: goto label_118b24;
            case 0x118B38u: goto label_118b38;
            case 0x118BA0u: goto label_118ba0;
            case 0x118BE0u: goto label_118be0;
            case 0x118C88u: goto label_118c88;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE8u: goto label_118ce8;
            case 0x118D48u: goto label_118d48;
            case 0x118D50u: goto label_118d50;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118DF0u: goto label_118df0;
            case 0x118E08u: goto label_118e08;
            case 0x118E48u: goto label_118e48;
            case 0x118E58u: goto label_118e58;
            case 0x118EB8u: goto label_118eb8;
            case 0x118ED0u: goto label_118ed0;
            case 0x118F10u: goto label_118f10;
            case 0x118F14u: goto label_118f14;
            case 0x118F3Cu: goto label_118f3c;
            case 0x118F50u: goto label_118f50;
            case 0x118FBCu: goto label_118fbc;
            case 0x118FF0u: goto label_118ff0;
            case 0x119028u: goto label_119028;
            case 0x119048u: goto label_119048;
            case 0x119090u: goto label_119090;
            case 0x1190A0u: goto label_1190a0;
            case 0x1190D4u: goto label_1190d4;
            case 0x1190E8u: goto label_1190e8;
            case 0x119138u: goto label_119138;
            case 0x119158u: goto label_119158;
            case 0x119174u: goto label_119174;
            case 0x119178u: goto label_119178;
            case 0x1191ACu: goto label_1191ac;
            case 0x1191C8u: goto label_1191c8;
            case 0x1191F8u: goto label_1191f8;
            case 0x1191FCu: goto label_1191fc;
            case 0x119214u: goto label_119214;
            case 0x1192A8u: goto label_1192a8;
            case 0x1192C8u: goto label_1192c8;
            case 0x119320u: goto label_119320;
            case 0x119338u: goto label_119338;
            case 0x1193A8u: goto label_1193a8;
            case 0x1193B8u: goto label_1193b8;
            case 0x1193FCu: goto label_1193fc;
            case 0x119418u: goto label_119418;
            case 0x11944Cu: goto label_11944c;
            case 0x119454u: goto label_119454;
            case 0x119470u: goto label_119470;
            case 0x1194D8u: goto label_1194d8;
            case 0x11952Cu: goto label_11952c;
            case 0x119534u: goto label_119534;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195B8u: goto label_1195b8;
            case 0x119600u: goto label_119600;
            case 0x119610u: goto label_119610;
            case 0x119670u: goto label_119670;
            case 0x119688u: goto label_119688;
            case 0x1196C8u: goto label_1196c8;
            case 0x1196CCu: goto label_1196cc;
            case 0x1196F4u: goto label_1196f4;
            case 0x119708u: goto label_119708;
            case 0x119774u: goto label_119774;
            case 0x1197A8u: goto label_1197a8;
            case 0x1197E0u: goto label_1197e0;
            case 0x119800u: goto label_119800;
            case 0x119848u: goto label_119848;
            case 0x119858u: goto label_119858;
            case 0x11988Cu: goto label_11988c;
            case 0x119898u: goto label_119898;
            case 0x11989Cu: goto label_11989c;
            case 0x1198ACu: goto label_1198ac;
            case 0x1198C8u: goto label_1198c8;
            case 0x119930u: goto label_119930;
            case 0x119984u: goto label_119984;
            case 0x11998Cu: goto label_11998c;
            case 0x1199E8u: goto label_1199e8;
            case 0x119A08u: goto label_119a08;
            case 0x119A24u: goto label_119a24;
            case 0x119A28u: goto label_119a28;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A78u: goto label_119a78;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AACu: goto label_119aac;
            case 0x119AC4u: goto label_119ac4;
            case 0x119B58u: goto label_119b58;
            case 0x119B78u: goto label_119b78;
            case 0x119BD0u: goto label_119bd0;
            case 0x119BE8u: goto label_119be8;
            case 0x119C58u: goto label_119c58;
            case 0x119C68u: goto label_119c68;
            case 0x119CACu: goto label_119cac;
            case 0x119CC0u: goto label_119cc0;
            case 0x119CC4u: goto label_119cc4;
            case 0x119CD0u: goto label_119cd0;
            case 0x119CD4u: goto label_119cd4;
            case 0x119CECu: goto label_119cec;
            case 0x119D20u: goto label_119d20;
            case 0x119D24u: goto label_119d24;
            case 0x119D8Cu: goto label_119d8c;
            case 0x119DA4u: goto label_119da4;
            case 0x119DE8u: goto label_119de8;
            case 0x119DF8u: goto label_119df8;
            case 0x119E58u: goto label_119e58;
            case 0x119E70u: goto label_119e70;
            case 0x119EB0u: goto label_119eb0;
            case 0x119EB4u: goto label_119eb4;
            case 0x119EDCu: goto label_119edc;
            case 0x119EF0u: goto label_119ef0;
            case 0x119F5Cu: goto label_119f5c;
            case 0x119F90u: goto label_119f90;
            case 0x119FC8u: goto label_119fc8;
            case 0x119FE8u: goto label_119fe8;
            case 0x11A030u: goto label_11a030;
            case 0x11A040u: goto label_11a040;
            case 0x11A074u: goto label_11a074;
            case 0x11A088u: goto label_11a088;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F8u: goto label_11a0f8;
            case 0x11A114u: goto label_11a114;
            case 0x11A118u: goto label_11a118;
            case 0x11A14Cu: goto label_11a14c;
            case 0x11A168u: goto label_11a168;
            case 0x11A198u: goto label_11a198;
            case 0x11A19Cu: goto label_11a19c;
            case 0x11A1B4u: goto label_11a1b4;
            case 0x11A248u: goto label_11a248;
            case 0x11A268u: goto label_11a268;
            case 0x11A2C0u: goto label_11a2c0;
            case 0x11A2D8u: goto label_11a2d8;
            case 0x11A348u: goto label_11a348;
            case 0x11A358u: goto label_11a358;
            case 0x11A39Cu: goto label_11a39c;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3B8u: goto label_11a3b8;
            case 0x11A3ECu: goto label_11a3ec;
            case 0x11A3F4u: goto label_11a3f4;
            case 0x11A410u: goto label_11a410;
            case 0x11A478u: goto label_11a478;
            case 0x11A4CCu: goto label_11a4cc;
            case 0x11A4D4u: goto label_11a4d4;
            case 0x11A540u: goto label_11a540;
            case 0x11A558u: goto label_11a558;
            case 0x11A5A0u: goto label_11a5a0;
            case 0x11A5B0u: goto label_11a5b0;
            case 0x11A610u: goto label_11a610;
            case 0x11A628u: goto label_11a628;
            case 0x11A668u: goto label_11a668;
            case 0x11A66Cu: goto label_11a66c;
            case 0x11A694u: goto label_11a694;
            case 0x11A6A8u: goto label_11a6a8;
            case 0x11A714u: goto label_11a714;
            case 0x11A748u: goto label_11a748;
            case 0x11A780u: goto label_11a780;
            case 0x11A7A0u: goto label_11a7a0;
            case 0x11A7E8u: goto label_11a7e8;
            case 0x11A7F8u: goto label_11a7f8;
            case 0x11A82Cu: goto label_11a82c;
            case 0x11A838u: goto label_11a838;
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A84Cu: goto label_11a84c;
            case 0x11A868u: goto label_11a868;
            case 0x11A8D0u: goto label_11a8d0;
            case 0x11A924u: goto label_11a924;
            case 0x11A92Cu: goto label_11a92c;
            case 0x11A988u: goto label_11a988;
            case 0x11A9A8u: goto label_11a9a8;
            case 0x11A9C4u: goto label_11a9c4;
            case 0x11A9C8u: goto label_11a9c8;
            case 0x11A9FCu: goto label_11a9fc;
            case 0x11AA18u: goto label_11aa18;
            case 0x11AA48u: goto label_11aa48;
            case 0x11AA4Cu: goto label_11aa4c;
            case 0x11AA64u: goto label_11aa64;
            case 0x11AAF8u: goto label_11aaf8;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB70u: goto label_11ab70;
            case 0x11AB88u: goto label_11ab88;
            case 0x11ABF8u: goto label_11abf8;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC4Cu: goto label_11ac4c;
            case 0x11AC60u: goto label_11ac60;
            case 0x11AC64u: goto label_11ac64;
            case 0x11AC70u: goto label_11ac70;
            case 0x11AC74u: goto label_11ac74;
            case 0x11ACA0u: goto label_11aca0;
            case 0x11ACD0u: goto label_11acd0;
            case 0x11ACF8u: goto label_11acf8;
            case 0x11ACFCu: goto label_11acfc;
            case 0x11AD14u: goto label_11ad14;
            case 0x11AD30u: goto label_11ad30;
            case 0x11ADC8u: goto label_11adc8;
            case 0x11ADE0u: goto label_11ade0;
            case 0x11AE00u: goto label_11ae00;
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE50u: goto label_11ae50;
            case 0x11AE84u: goto label_11ae84;
            case 0x11AE98u: goto label_11ae98;
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEA0u: goto label_11aea0;
            case 0x11AEA8u: goto label_11aea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AEC8u;
}
