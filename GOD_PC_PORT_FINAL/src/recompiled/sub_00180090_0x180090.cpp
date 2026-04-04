#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180090
// Address: 0x180090 - 0x180928
void sub_00180090_0x180090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180090_0x180090");
#endif

    ctx->pc = 0x180090u;

    // 0x180090: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x180094: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x180094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
    // 0x180098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x180098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18009c: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x18009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
    // 0x1800a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a4: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x1800a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
    // 0x1800a8: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x1800a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
    // 0x1800ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1800acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b0: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x1800b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
    // 0x1800b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b8: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x1800b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
    // 0x1800bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1800bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800c0: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x1800c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
    // 0x1800c4: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x1800c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
    // 0x1800c8: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x1800c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
    // 0x1800cc: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x1800ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
    // 0x1800d0: 0xc05fbd8  jal         func_17EF60
    ctx->pc = 0x1800D0u;
    SET_GPR_U32(ctx, 31, 0x1800D8u);
    ctx->pc = 0x1800D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800D0u;
            // 0x1800d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF60u;
    if (runtime->hasFunction(0x17EF60u)) {
        auto targetFn = runtime->lookupFunction(0x17EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF60_0x17ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    }
    ctx->pc = 0x1800D8u;
    // 0x1800d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1800dc: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x1800dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x1800e0: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1800e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x1800e4: 0x60001d0  bltz        $s0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1800E4u;
    {
        const bool branch_taken_0x1800e4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1800E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1800E4u;
            // 0x1800e8: 0xa7a00250  sh          $zero, 0x250($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 592), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800e4) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x1800ECu;
    // 0x1800ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1800ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800f0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1800f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1800f4: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x1800F4u;
    {
        const bool branch_taken_0x1800f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1800F4u;
            // 0x1800f8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800f4) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x1800FCu;
    // 0x1800fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x180100: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180104: 0xac60c790  sw          $zero, -0x3870($v1)
    ctx->pc = 0x180104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952848), GPR_U32(ctx, 0));
    // 0x180108: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x180108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x18010c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180110: 0xc05fbcc  jal         func_17EF30
    ctx->pc = 0x180110u;
    SET_GPR_U32(ctx, 31, 0x180118u);
    ctx->pc = 0x180114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180110u;
            // 0x180114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF30u;
    if (runtime->hasFunction(0x17EF30u)) {
        auto targetFn = runtime->lookupFunction(0x17EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180118u; }
        if (ctx->pc != 0x180118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF30_0x17ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180118u; }
        if (ctx->pc != 0x180118u) { return; }
    }
    ctx->pc = 0x180118u;
    // 0x180118: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x180118u;
    {
        const bool branch_taken_0x180118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180118u;
            // 0x18011c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180118) {
            ctx->pc = 0x1808F4u;
            goto label_1808f4;
        }
    }
    ctx->pc = 0x180120u;
label_180120:
    // 0x180120: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x180120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180128: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18012c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x18012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x180130: 0x40f809  jalr        $v0
    ctx->pc = 0x180130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180138u);
        ctx->pc = 0x180134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180130u;
            // 0x180134: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180138u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180138u; }
            if (ctx->pc != 0x180138u) { return; }
        }
        }
    }
    ctx->pc = 0x180138u;
    // 0x180138: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x180138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18013c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x180140: 0x304400f0  andi        $a0, $v0, 0xF0
    ctx->pc = 0x180140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x180144: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x180144u;
    {
        const bool branch_taken_0x180144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x180148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180144u;
            // 0x180148: 0x28820021  slti        $v0, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180144) {
            ctx->pc = 0x1804C0u;
            goto label_1804c0;
        }
    }
    ctx->pc = 0x18014Cu;
    // 0x18014c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18014Cu;
    {
        const bool branch_taken_0x18014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18014Cu;
            // 0x180150: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18014c) {
            ctx->pc = 0x180164u;
            goto label_180164;
        }
    }
    ctx->pc = 0x180154u;
    // 0x180154: 0x1082008f  beq         $a0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x180154u;
    {
        const bool branch_taken_0x180154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x180158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180154u;
            // 0x180158: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180154) {
            ctx->pc = 0x180394u;
            goto label_180394;
        }
    }
    ctx->pc = 0x18015Cu;
    // 0x18015c: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18015c) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180164u;
label_180164:
    // 0x180164: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x180164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180168: 0x10820183  beq         $a0, $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x180168u;
    {
        const bool branch_taken_0x180168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180168u;
            // 0x18016c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180168) {
            ctx->pc = 0x180778u;
            goto label_180778;
        }
    }
    ctx->pc = 0x180170u;
    // 0x180170: 0x148201ad  bne         $a0, $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x180170u;
    {
        const bool branch_taken_0x180170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x180174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180170u;
            // 0x180174: 0x27b10031  addiu       $s1, $sp, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180170) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180178u;
    // 0x180178: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x180178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18017c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180180: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x180180u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180184: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x180184u;
    {
        const bool branch_taken_0x180184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180184u;
            // 0x180188: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180184) {
            ctx->pc = 0x1801B8u;
            goto label_1801b8;
        }
    }
    ctx->pc = 0x18018Cu;
    // 0x18018c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x18018Cu;
    SET_GPR_U32(ctx, 31, 0x180194u);
    ctx->pc = 0x180190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18018Cu;
            // 0x180190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180194u; }
        if (ctx->pc != 0x180194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180194u; }
        if (ctx->pc != 0x180194u) { return; }
    }
    ctx->pc = 0x180194u;
    // 0x180194: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x180198: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x180198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18019c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801a0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1801a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1801a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1801a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1801A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1801B0u);
        ctx->pc = 0x1801ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801A8u;
            // 0x1801ac: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1801B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1801B0u; }
            if (ctx->pc != 0x1801B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1801B0u;
    // 0x1801b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1801B0u;
    {
        const bool branch_taken_0x1801b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801B0u;
            // 0x1801b4: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b0) {
            ctx->pc = 0x180204u;
            goto label_180204;
        }
    }
    ctx->pc = 0x1801B8u;
label_1801b8:
    // 0x1801b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1801b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801bc: 0x0  nop
    ctx->pc = 0x1801bcu;
    // NOP
label_1801c0:
    // 0x1801c0: 0x2e420100  sltiu       $v0, $s2, 0x100
    ctx->pc = 0x1801c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1801c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1801C4u;
    {
        const bool branch_taken_0x1801c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801C4u;
            // 0x1801c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801c4) {
            ctx->pc = 0x1801FCu;
            goto label_1801fc;
        }
    }
    ctx->pc = 0x1801CCu;
    // 0x1801cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1801d0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1801d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1801d4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1801d8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1801dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1801DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1801E4u);
        ctx->pc = 0x1801E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801DCu;
            // 0x1801e0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1801E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1801E4u; }
            if (ctx->pc != 0x1801E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1801E4u;
    // 0x1801e4: 0x93a30130  lbu         $v1, 0x130($sp)
    ctx->pc = 0x1801e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1801e8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1801ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1801ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1801f0: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x1801f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1801f4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1801F4u;
    {
        const bool branch_taken_0x1801f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801f4) {
            ctx->pc = 0x1801F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1801F4u;
            // 0x1801f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1801C0u;
            runtime->cooperativeGuestYield();
            goto label_1801c0;
        }
    }
    ctx->pc = 0x1801FCu;
label_1801fc:
    // 0x1801fc: 0xa3a0012f  sb          $zero, 0x12F($sp)
    ctx->pc = 0x1801fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 0));
    // 0x180200: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x180200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_180204:
    // 0x180204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180208: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x180208u;
    SET_GPR_U32(ctx, 31, 0x180210u);
    ctx->pc = 0x18020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180208u;
            // 0x18020c: 0x24a51800  addiu       $a1, $a1, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180210u; }
        if (ctx->pc != 0x180210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180210u; }
        if (ctx->pc != 0x180210u) { return; }
    }
    ctx->pc = 0x180210u;
    // 0x180210: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180214: 0x50400184  beql        $v0, $zero, . + 4 + (0x184 << 2)
    ctx->pc = 0x180214u;
    {
        const bool branch_taken_0x180214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180214) {
            ctx->pc = 0x180218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180214u;
            // 0x180218: 0xafa00280  sw          $zero, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x18021Cu;
    // 0x18021c: 0x0  nop
    ctx->pc = 0x18021cu;
    // NOP
label_180220:
    // 0x180220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180220u;
            // 0x180224: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180220) {
            ctx->pc = 0x18022Cu;
            goto label_18022c;
        }
    }
    ctx->pc = 0x180228u;
label_180228:
    // 0x180228: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_18022c:
    // 0x18022c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18022Cu;
    {
        const bool branch_taken_0x18022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18022Cu;
            // 0x180230: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18022c) {
            ctx->pc = 0x180248u;
            goto label_180248;
        }
    }
    ctx->pc = 0x180234u;
    // 0x180234: 0x5462fffc  bnel        $v1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x180234u;
    {
        const bool branch_taken_0x180234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180234) {
            ctx->pc = 0x180238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180234u;
            // 0x180238: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180228u;
            runtime->cooperativeGuestYield();
            goto label_180228;
        }
    }
    ctx->pc = 0x18023Cu;
    // 0x18023c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x180240: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x180240u;
    {
        const bool branch_taken_0x180240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180240) {
            ctx->pc = 0x180244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180240u;
            // 0x180244: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180248u;
            goto label_180248;
        }
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18024c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18024cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180254: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x180254u;
    SET_GPR_U32(ctx, 31, 0x18025Cu);
    ctx->pc = 0x180258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180254u;
            // 0x180258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18025Cu; }
        if (ctx->pc != 0x18025Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18025Cu; }
        if (ctx->pc != 0x18025Cu) { return; }
    }
    ctx->pc = 0x18025Cu;
    // 0x18025c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18025Cu;
    {
        const bool branch_taken_0x18025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18025Cu;
            // 0x180260: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18025c) {
            ctx->pc = 0x1802D0u;
            goto label_1802d0;
        }
    }
    ctx->pc = 0x180264u;
    // 0x180264: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x180264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x180268: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18026c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x180270: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x180274: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x180274u;
    {
        const bool branch_taken_0x180274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180274u;
            // 0x180278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180274) {
            ctx->pc = 0x180348u;
            goto label_180348;
        }
    }
    ctx->pc = 0x18027Cu;
    // 0x18027c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x180280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180284: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x180288: 0xc0a28ce  jal         func_28A338
    ctx->pc = 0x180288u;
    SET_GPR_U32(ctx, 31, 0x180290u);
    ctx->pc = 0x18028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180288u;
            // 0x18028c: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A338u;
    if (runtime->hasFunction(0x28A338u)) {
        auto targetFn = runtime->lookupFunction(0x28A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180290u; }
        if (ctx->pc != 0x180290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A338_0x28a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180290u; }
        if (ctx->pc != 0x180290u) { return; }
    }
    ctx->pc = 0x180290u;
    // 0x180290: 0x97a50270  lhu         $a1, 0x270($sp)
    ctx->pc = 0x180290u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x180294: 0xc06042e  jal         func_1810B8
    ctx->pc = 0x180294u;
    SET_GPR_U32(ctx, 31, 0x18029Cu);
    ctx->pc = 0x180298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180294u;
            // 0x180298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810B8u;
    if (runtime->hasFunction(0x1810B8u)) {
        auto targetFn = runtime->lookupFunction(0x1810B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18029Cu; }
        if (ctx->pc != 0x18029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810B8_0x1810b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18029Cu; }
        if (ctx->pc != 0x18029Cu) { return; }
    }
    ctx->pc = 0x18029Cu;
    // 0x18029c: 0x14400182  bnez        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x18029Cu;
    {
        const bool branch_taken_0x18029c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1802A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18029Cu;
            // 0x1802a0: 0x97a50270  lhu         $a1, 0x270($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18029c) {
            ctx->pc = 0x1808A8u;
            goto label_1808a8;
        }
    }
    ctx->pc = 0x1802A4u;
    // 0x1802a4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1802a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1802ac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1802b0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1802b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1802B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1802BCu);
        ctx->pc = 0x1802B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802B4u;
            // 0x1802b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1802BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1802BCu; }
            if (ctx->pc != 0x1802BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1802BCu;
    // 0x1802bc: 0xc060274  jal         func_1809D0
    ctx->pc = 0x1802BCu;
    SET_GPR_U32(ctx, 31, 0x1802C4u);
    ctx->pc = 0x1802C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1802BCu;
            // 0x1802c0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1809D0u;
    if (runtime->hasFunction(0x1809D0u)) {
        auto targetFn = runtime->lookupFunction(0x1809D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802C4u; }
        if (ctx->pc != 0x1802C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D0_0x1809d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802C4u; }
        if (ctx->pc != 0x1802C4u) { return; }
    }
    ctx->pc = 0x1802C4u;
    // 0x1802c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1802C4u;
    {
        const bool branch_taken_0x1802c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802C4u;
            // 0x1802c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802c4) {
            ctx->pc = 0x180348u;
            goto label_180348;
        }
    }
    ctx->pc = 0x1802CCu;
    // 0x1802cc: 0x0  nop
    ctx->pc = 0x1802ccu;
    // NOP
label_1802d0:
    // 0x1802d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1802d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1802d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1802d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802d8: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x1802d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x1802dc: 0xc0a28ce  jal         func_28A338
    ctx->pc = 0x1802DCu;
    SET_GPR_U32(ctx, 31, 0x1802E4u);
    ctx->pc = 0x1802E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1802DCu;
            // 0x1802e0: 0x27a60274  addiu       $a2, $sp, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A338u;
    if (runtime->hasFunction(0x28A338u)) {
        auto targetFn = runtime->lookupFunction(0x28A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802E4u; }
        if (ctx->pc != 0x1802E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A338_0x28a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802E4u; }
        if (ctx->pc != 0x1802E4u) { return; }
    }
    ctx->pc = 0x1802E4u;
    // 0x1802e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1802e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1802e8: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1802E8u;
    {
        const bool branch_taken_0x1802e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1802ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802E8u;
            // 0x1802ec: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802e8) {
            ctx->pc = 0x180358u;
            goto label_180358;
        }
    }
    ctx->pc = 0x1802F0u;
    // 0x1802f0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1802f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1802f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1802fc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1802fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x180300: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x180304: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x180304u;
    {
        const bool branch_taken_0x180304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180304u;
            // 0x180308: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180304) {
            ctx->pc = 0x180358u;
            goto label_180358;
        }
    }
    ctx->pc = 0x18030Cu;
    // 0x18030c: 0x97a50274  lhu         $a1, 0x274($sp)
    ctx->pc = 0x18030cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x180310: 0xc06042e  jal         func_1810B8
    ctx->pc = 0x180310u;
    SET_GPR_U32(ctx, 31, 0x180318u);
    ctx->pc = 0x180314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180310u;
            // 0x180314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810B8u;
    if (runtime->hasFunction(0x1810B8u)) {
        auto targetFn = runtime->lookupFunction(0x1810B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180318u; }
        if (ctx->pc != 0x180318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810B8_0x1810b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180318u; }
        if (ctx->pc != 0x180318u) { return; }
    }
    ctx->pc = 0x180318u;
    // 0x180318: 0x14400163  bnez        $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x180318u;
    {
        const bool branch_taken_0x180318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180318u;
            // 0x18031c: 0x97a50274  lhu         $a1, 0x274($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180318) {
            ctx->pc = 0x1808A8u;
            goto label_1808a8;
        }
    }
    ctx->pc = 0x180320u;
    // 0x180320: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x180324: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x180328: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x180328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x18032c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x180330: 0x40f809  jalr        $v0
    ctx->pc = 0x180330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180338u);
        ctx->pc = 0x180334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180330u;
            // 0x180334: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180338u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180338u; }
            if (ctx->pc != 0x180338u) { return; }
        }
        }
    }
    ctx->pc = 0x180338u;
    // 0x180338: 0xc060274  jal         func_1809D0
    ctx->pc = 0x180338u;
    SET_GPR_U32(ctx, 31, 0x180340u);
    ctx->pc = 0x18033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180338u;
            // 0x18033c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1809D0u;
    if (runtime->hasFunction(0x1809D0u)) {
        auto targetFn = runtime->lookupFunction(0x1809D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180340u; }
        if (ctx->pc != 0x180340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D0_0x1809d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180340u; }
        if (ctx->pc != 0x180340u) { return; }
    }
    ctx->pc = 0x180340u;
    // 0x180340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180344: 0x0  nop
    ctx->pc = 0x180344u;
    // NOP
label_180348:
    // 0x180348: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x180348u;
    SET_GPR_U32(ctx, 31, 0x180350u);
    ctx->pc = 0x18034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180348u;
            // 0x18034c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180350u; }
        if (ctx->pc != 0x180350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180350u; }
        if (ctx->pc != 0x180350u) { return; }
    }
    ctx->pc = 0x180350u;
    // 0x180350: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180350u;
    {
        const bool branch_taken_0x180350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180350u;
            // 0x180354: 0x8e760004  lw          $s6, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180350) {
            ctx->pc = 0x18037Cu;
            goto label_18037c;
        }
    }
    ctx->pc = 0x180358u;
label_180358:
    // 0x180358: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18035c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180360: 0xac60c790  sw          $zero, -0x3870($v1)
    ctx->pc = 0x180360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952848), GPR_U32(ctx, 0));
    // 0x180364: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x180364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x180368: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18036c: 0xc05fbcc  jal         func_17EF30
    ctx->pc = 0x18036Cu;
    SET_GPR_U32(ctx, 31, 0x180374u);
    ctx->pc = 0x180370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18036Cu;
            // 0x180370: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF30u;
    if (runtime->hasFunction(0x17EF30u)) {
        auto targetFn = runtime->lookupFunction(0x17EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180374u; }
        if (ctx->pc != 0x180374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF30_0x17ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180374u; }
        if (ctx->pc != 0x180374u) { return; }
    }
    ctx->pc = 0x180374u;
    // 0x180374: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x180374u;
    {
        const bool branch_taken_0x180374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180374u;
            // 0x180378: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180374) {
            ctx->pc = 0x1808F4u;
            goto label_1808f4;
        }
    }
    ctx->pc = 0x18037Cu;
label_18037c:
    // 0x18037c: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x180380: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x180380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180384: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x180384u;
    {
        const bool branch_taken_0x180384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180384u;
            // 0x180388: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180384) {
            ctx->pc = 0x180220u;
            runtime->cooperativeGuestYield();
            goto label_180220;
        }
    }
    ctx->pc = 0x18038Cu;
    // 0x18038c: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x18038Cu;
    {
        const bool branch_taken_0x18038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18038Cu;
            // 0x180390: 0xafa00280  sw          $zero, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18038c) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180394u;
label_180394:
    // 0x180394: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x180394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180398: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x180398u;
    {
        const bool branch_taken_0x180398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180398u;
            // 0x18039c: 0x27b10140  addiu       $s1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180398) {
            ctx->pc = 0x1803CCu;
            goto label_1803cc;
        }
    }
    ctx->pc = 0x1803A0u;
    // 0x1803a0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1803A0u;
    SET_GPR_U32(ctx, 31, 0x1803A8u);
    ctx->pc = 0x1803A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803A0u;
            // 0x1803a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A8u; }
        if (ctx->pc != 0x1803A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A8u; }
        if (ctx->pc != 0x1803A8u) { return; }
    }
    ctx->pc = 0x1803A8u;
    // 0x1803a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1803ac: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1803acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1803b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1803b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803b4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1803b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1803bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1803BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1803C4u);
        ctx->pc = 0x1803C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803BCu;
            // 0x1803c0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1803C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1803C4u; }
            if (ctx->pc != 0x1803C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1803C4u;
    // 0x1803c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1803C4u;
    {
        const bool branch_taken_0x1803c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803c4) {
            ctx->pc = 0x180410u;
            goto label_180410;
        }
    }
    ctx->pc = 0x1803CCu;
label_1803cc:
    // 0x1803cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1803ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1803d0:
    // 0x1803d0: 0x2e020100  sltiu       $v0, $s0, 0x100
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1803d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1803D4u;
    {
        const bool branch_taken_0x1803d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803D4u;
            // 0x1803d8: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803d4) {
            ctx->pc = 0x18040Cu;
            goto label_18040c;
        }
    }
    ctx->pc = 0x1803DCu;
    // 0x1803dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1803e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1803e4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1803e8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1803ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1803ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1803F4u);
        ctx->pc = 0x1803F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803ECu;
            // 0x1803f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1803F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1803F4u; }
            if (ctx->pc != 0x1803F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1803F4u;
    // 0x1803f4: 0x93a30240  lbu         $v1, 0x240($sp)
    ctx->pc = 0x1803f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1803f8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1803fc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1803fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x180400: 0x93a20240  lbu         $v0, 0x240($sp)
    ctx->pc = 0x180400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x180404: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x180404u;
    {
        const bool branch_taken_0x180404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180404) {
            ctx->pc = 0x180408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180404u;
            // 0x180408: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1803D0u;
            runtime->cooperativeGuestYield();
            goto label_1803d0;
        }
    }
    ctx->pc = 0x18040Cu;
label_18040c:
    // 0x18040c: 0xa3a0023f  sb          $zero, 0x23F($sp)
    ctx->pc = 0x18040cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 575), (uint8_t)GPR_U32(ctx, 0));
label_180410:
    // 0x180410: 0x56e00104  bnel        $s7, $zero, . + 4 + (0x104 << 2)
    ctx->pc = 0x180410u;
    {
        const bool branch_taken_0x180410 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x180410) {
            ctx->pc = 0x180414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180410u;
            // 0x180414: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180824u;
            goto label_180824;
        }
    }
    ctx->pc = 0x180418u;
    // 0x180418: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18041c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180420: 0x87a70250  lh          $a3, 0x250($sp)
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x180424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180428: 0xc0603d6  jal         func_180F58
    ctx->pc = 0x180428u;
    SET_GPR_U32(ctx, 31, 0x180430u);
    ctx->pc = 0x18042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180428u;
            // 0x18042c: 0x27a80250  addiu       $t0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180F58u;
    if (runtime->hasFunction(0x180F58u)) {
        auto targetFn = runtime->lookupFunction(0x180F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180430u; }
        if (ctx->pc != 0x180430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180f58_0x181020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180430u; }
        if (ctx->pc != 0x180430u) { return; }
    }
    ctx->pc = 0x180430u;
    // 0x180430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180430u;
    {
        const bool branch_taken_0x180430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180430u;
            // 0x180434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180430) {
            ctx->pc = 0x180448u;
            goto label_180448;
        }
    }
    ctx->pc = 0x180438u;
    // 0x180438: 0xc060342  jal         func_180D08
    ctx->pc = 0x180438u;
    SET_GPR_U32(ctx, 31, 0x180440u);
    ctx->pc = 0x18043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180438u;
            // 0x18043c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180440u; }
        if (ctx->pc != 0x180440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180440u; }
        if (ctx->pc != 0x180440u) { return; }
    }
    ctx->pc = 0x180440u;
    // 0x180440: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x180440u;
    {
        const bool branch_taken_0x180440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180440u;
            // 0x180444: 0xafa00280  sw          $zero, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180440) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180448u;
label_180448:
    // 0x180448: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x180448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18044c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180450: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x180454: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x180458: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18045c: 0x544300f1  bnel        $v0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x18045Cu;
    {
        const bool branch_taken_0x18045c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18045c) {
            ctx->pc = 0x180460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18045Cu;
            // 0x180460: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180824u;
            goto label_180824;
        }
    }
    ctx->pc = 0x180464u;
    // 0x180464: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x180468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18046c: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x180470: 0xc0a28ce  jal         func_28A338
    ctx->pc = 0x180470u;
    SET_GPR_U32(ctx, 31, 0x180478u);
    ctx->pc = 0x180474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180470u;
            // 0x180474: 0x27a60278  addiu       $a2, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A338u;
    if (runtime->hasFunction(0x28A338u)) {
        auto targetFn = runtime->lookupFunction(0x28A338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180478u; }
        if (ctx->pc != 0x180478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A338_0x28a338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180478u; }
        if (ctx->pc != 0x180478u) { return; }
    }
    ctx->pc = 0x180478u;
    // 0x180478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18047c: 0x544300e9  bnel        $v0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x18047Cu;
    {
        const bool branch_taken_0x18047c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18047c) {
            ctx->pc = 0x180480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18047Cu;
            // 0x180480: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180824u;
            goto label_180824;
        }
    }
    ctx->pc = 0x180484u;
    // 0x180484: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x180488: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18048c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x180490: 0x97a50278  lhu         $a1, 0x278($sp)
    ctx->pc = 0x180490u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x180494: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x180494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x180498: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18049c: 0x40f809  jalr        $v0
    ctx->pc = 0x18049Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1804A4u);
        ctx->pc = 0x1804A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18049Cu;
            // 0x1804a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1804A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1804A4u; }
            if (ctx->pc != 0x1804A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1804A4u;
    // 0x1804a4: 0xc060274  jal         func_1809D0
    ctx->pc = 0x1804A4u;
    SET_GPR_U32(ctx, 31, 0x1804ACu);
    ctx->pc = 0x1804A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804A4u;
            // 0x1804a8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1809D0u;
    if (runtime->hasFunction(0x1809D0u)) {
        auto targetFn = runtime->lookupFunction(0x1809D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804ACu; }
        if (ctx->pc != 0x1804ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D0_0x1809d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804ACu; }
        if (ctx->pc != 0x1804ACu) { return; }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1804acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804b0: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x1804B0u;
    SET_GPR_U32(ctx, 31, 0x1804B8u);
    ctx->pc = 0x1804B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804B0u;
            // 0x1804b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B8u; }
        if (ctx->pc != 0x1804B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B8u; }
        if (ctx->pc != 0x1804B8u) { return; }
    }
    ctx->pc = 0x1804B8u;
    // 0x1804b8: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1804B8u;
    {
        const bool branch_taken_0x1804b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804B8u;
            // 0x1804bc: 0xafa00280  sw          $zero, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804b8) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x1804C0u;
label_1804c0:
    // 0x1804c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1804c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1804c4: 0x27a5027c  addiu       $a1, $sp, 0x27C
    ctx->pc = 0x1804c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
    // 0x1804c8: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1804cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1804d0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1804d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1804d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804d8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1804d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1804dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1804DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1804E4u);
        ctx->pc = 0x1804E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804DCu;
            // 0x1804e0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1804E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1804E4u; }
            if (ctx->pc != 0x1804E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1804E4u;
    // 0x1804e4: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1804e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1804e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1804e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1804ec: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1804ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1804f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1804F0u;
    {
        const bool branch_taken_0x1804f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804F0u;
            // 0x1804f4: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804f0) {
            ctx->pc = 0x180554u;
            goto label_180554;
        }
    }
    ctx->pc = 0x1804F8u;
    // 0x1804f8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1804fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1804fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180500: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x180500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x180504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x180508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18050c: 0x400008  jr          $v0
    ctx->pc = 0x18050Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180514u;
label_180514:
    // 0x180514: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x180514u;
    {
        const bool branch_taken_0x180514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180514u;
            // 0x180518: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180514) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x18051Cu;
label_18051c:
    // 0x18051c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18051Cu;
    {
        const bool branch_taken_0x18051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18051Cu;
            // 0x180520: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18051c) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x180524u;
label_180524:
    // 0x180524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180524u;
    {
        const bool branch_taken_0x180524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180524u;
            // 0x180528: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180524) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x18052Cu;
label_18052c:
    // 0x18052c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18052Cu;
    {
        const bool branch_taken_0x18052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18052Cu;
            // 0x180530: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18052c) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x180534u;
label_180534:
    // 0x180534: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x180534u;
    {
        const bool branch_taken_0x180534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180534u;
            // 0x180538: 0x24100200  addiu       $s0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180534) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x18053Cu;
label_18053c:
    // 0x18053c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18053Cu;
    {
        const bool branch_taken_0x18053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18053Cu;
            // 0x180540: 0x24100400  addiu       $s0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18053c) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x180544u;
label_180544:
    // 0x180544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180544u;
    {
        const bool branch_taken_0x180544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180544u;
            // 0x180548: 0x24100800  addiu       $s0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180544) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x18054Cu;
label_18054c:
    // 0x18054c: 0x24101000  addiu       $s0, $zero, 0x1000
    ctx->pc = 0x18054cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_180550:
    // 0x180550: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x180550u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
label_180554:
    // 0x180554: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x180558: 0x8ea5c794  lw          $a1, -0x386C($s5)
    ctx->pc = 0x180558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952852)));
    // 0x18055c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x180560: 0x249eabd8  addiu       $fp, $a0, -0x5428
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945752));
    // 0x180564: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x180564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x180568: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x18056c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x180570: 0xafbe0264  sw          $fp, 0x264($sp)
    ctx->pc = 0x180570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 30));
    // 0x180574: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x180578: 0xa7a00268  sh          $zero, 0x268($sp)
    ctx->pc = 0x180578u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 616), (uint16_t)GPR_U32(ctx, 0));
    // 0x18057c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x180580: 0xa7b0026a  sh          $s0, 0x26A($sp)
    ctx->pc = 0x180580u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 618), (uint16_t)GPR_U32(ctx, 16));
    // 0x180584: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180588: 0xafa5026c  sw          $a1, 0x26C($sp)
    ctx->pc = 0x180588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 5));
    // 0x18058c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18058cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180590: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x180594: 0x84840010  lh          $a0, 0x10($a0)
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x180598: 0xac47c300  sw          $a3, -0x3D00($v0)
    ctx->pc = 0x180598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 7));
    // 0x18059c: 0xad09c798  sw          $t1, -0x3868($t0)
    ctx->pc = 0x18059cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294952856), GPR_U32(ctx, 9));
    // 0x1805a0: 0x60f809  jalr        $v1
    ctx->pc = 0x1805A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1805A8u);
        ctx->pc = 0x1805A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1805A0u;
            // 0x1805a4: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1805A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1805A8u; }
            if (ctx->pc != 0x1805A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1805A8u;
    // 0x1805a8: 0x8ea2c794  lw          $v0, -0x386C($s5)
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952852)));
    // 0x1805ac: 0x97a3026a  lhu         $v1, 0x26A($sp)
    ctx->pc = 0x1805acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 618)));
    // 0x1805b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1805b4: 0x16e00064  bnez        $s7, . + 4 + (0x64 << 2)
    ctx->pc = 0x1805B4u;
    {
        const bool branch_taken_0x1805b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1805B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1805B4u;
            // 0x1805b8: 0xaea2c794  sw          $v0, -0x386C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294952852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805b4) {
            ctx->pc = 0x180748u;
            goto label_180748;
        }
    }
    ctx->pc = 0x1805BCu;
    // 0x1805bc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1805c0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1805c4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1805c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1805C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1805D0u);
        ctx->pc = 0x1805CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1805C8u;
            // 0x1805cc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1805D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1805D0u; }
            if (ctx->pc != 0x1805D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1805D0u;
    // 0x1805d0: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1805d4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1805d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1805d8: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x1805d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1805dc: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1805DCu;
    {
        const bool branch_taken_0x1805dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1805dc) {
            ctx->pc = 0x180694u;
            goto label_180694;
        }
    }
    ctx->pc = 0x1805E4u;
    // 0x1805e4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1805e8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1805ec: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1805f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1805F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1805F8u);
        ctx->pc = 0x1805F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1805F0u;
            // 0x1805f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1805F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1805F8u; }
            if (ctx->pc != 0x1805F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1805F8u;
    // 0x1805f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805fc: 0x8fa3027c  lw          $v1, 0x27C($sp)
    ctx->pc = 0x1805fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x180600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x180600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180604: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x180604u;
    {
        const bool branch_taken_0x180604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x180608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180604u;
            // 0x180608: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180604) {
            ctx->pc = 0x180694u;
            goto label_180694;
        }
    }
    ctx->pc = 0x18060Cu;
    // 0x18060c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x180610: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x180614: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x180618: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x180618u;
    {
        const bool branch_taken_0x180618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180618u;
            // 0x18061c: 0x27b10260  addiu       $s1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180618) {
            ctx->pc = 0x180694u;
            goto label_180694;
        }
    }
    ctx->pc = 0x180620u;
    // 0x180620: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x180620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x180624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180628: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18062c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x180630: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x180634: 0x40f809  jalr        $v0
    ctx->pc = 0x180634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18063Cu);
        ctx->pc = 0x180638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180634u;
            // 0x180638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18063Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18063Cu; }
            if (ctx->pc != 0x18063Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18063Cu;
    // 0x18063c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x180640: 0x3c02f800  lui         $v0, 0xF800
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63488 << 16));
    // 0x180644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180648: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180648u;
    {
        const bool branch_taken_0x180648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180648u;
            // 0x18064c: 0x316c2  srl         $v0, $v1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180648) {
            ctx->pc = 0x180670u;
            goto label_180670;
        }
    }
    ctx->pc = 0x180650u;
    // 0x180650: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x180654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180658: 0x2463c680  addiu       $v1, $v1, -0x3980
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952576));
    // 0x18065c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180664: 0x40f809  jalr        $v0
    ctx->pc = 0x180664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18066Cu);
        ctx->pc = 0x180668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180664u;
            // 0x180668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18066Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18066Cu; }
            if (ctx->pc != 0x18066Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18066Cu;
    // 0x18066c: 0x0  nop
    ctx->pc = 0x18066cu;
    // NOP
label_180670:
    // 0x180670: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x180674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x180674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180678: 0x8ea2c794  lw          $v0, -0x386C($s5)
    ctx->pc = 0x180678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952852)));
    // 0x18067c: 0x97a3026a  lhu         $v1, 0x26A($sp)
    ctx->pc = 0x18067cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 618)));
    // 0x180680: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x180680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x180684: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x180684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
    // 0x180688: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18068c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18068Cu;
    {
        const bool branch_taken_0x18068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18068Cu;
            // 0x180690: 0xafbe0264  sw          $fp, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18068c) {
            ctx->pc = 0x180764u;
            goto label_180764;
        }
    }
    ctx->pc = 0x180694u;
label_180694:
    // 0x180694: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x180694u;
    {
        const bool branch_taken_0x180694 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180694u;
            // 0x180698: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180694) {
            ctx->pc = 0x180748u;
            goto label_180748;
        }
    }
    ctx->pc = 0x18069Cu;
    // 0x18069c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1806a0:
    // 0x1806a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1806a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1806a4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1806a8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1806ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1806ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1806B4u);
        ctx->pc = 0x1806B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806ACu;
            // 0x1806b0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1806B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1806B4u; }
            if (ctx->pc != 0x1806B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1806B4u;
    // 0x1806b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1806b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1806b8: 0x8fa3027c  lw          $v1, 0x27C($sp)
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x1806bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1806bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1806c0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1806C0u;
    {
        const bool branch_taken_0x1806c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1806C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806C0u;
            // 0x1806c4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806c0) {
            ctx->pc = 0x180738u;
            goto label_180738;
        }
    }
    ctx->pc = 0x1806C8u;
    // 0x1806c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1806cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1806d0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1806d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1806d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1806d8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1806D8u;
    {
        const bool branch_taken_0x1806d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1806DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806D8u;
            // 0x1806dc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806d8) {
            ctx->pc = 0x180738u;
            goto label_180738;
        }
    }
    ctx->pc = 0x1806E0u;
    // 0x1806e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1806e4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1806e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1806ec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1806f0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1806f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1806F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1806FCu);
        ctx->pc = 0x1806F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806F4u;
            // 0x1806f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1806FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1806FCu; }
            if (ctx->pc != 0x1806FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1806FCu;
    // 0x1806fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x180700: 0x3c02f800  lui         $v0, 0xF800
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63488 << 16));
    // 0x180704: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180708: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180708u;
    {
        const bool branch_taken_0x180708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180708u;
            // 0x18070c: 0x316c2  srl         $v0, $v1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180708) {
            ctx->pc = 0x18072Cu;
            goto label_18072c;
        }
    }
    ctx->pc = 0x180710u;
    // 0x180710: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x180714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180718: 0x2463c680  addiu       $v1, $v1, -0x3980
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952576));
    // 0x18071c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180724: 0x40f809  jalr        $v0
    ctx->pc = 0x180724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18072Cu);
        ctx->pc = 0x180728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180724u;
            // 0x180728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18072Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18072Cu; }
            if (ctx->pc != 0x18072Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18072Cu;
label_18072c:
    // 0x18072c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x180730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180730u;
    {
        const bool branch_taken_0x180730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180730u;
            // 0x180734: 0xafb10280  sw          $s1, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180730) {
            ctx->pc = 0x180748u;
            goto label_180748;
        }
    }
    ctx->pc = 0x180738u;
label_180738:
    // 0x180738: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x180738u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18073c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x18073cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x180740: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x180740u;
    {
        const bool branch_taken_0x180740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180740) {
            ctx->pc = 0x180744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180740u;
            // 0x180744: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1806A0u;
            runtime->cooperativeGuestYield();
            goto label_1806a0;
        }
    }
    ctx->pc = 0x180748u;
label_180748:
    // 0x180748: 0x8ea2c794  lw          $v0, -0x386C($s5)
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952852)));
    // 0x18074c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x180750: 0x97a6026a  lhu         $a2, 0x26A($sp)
    ctx->pc = 0x180750u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 618)));
    // 0x180754: 0x2483abd8  addiu       $v1, $a0, -0x5428
    ctx->pc = 0x180754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945752));
    // 0x180758: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x18075c: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x18075cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x180760: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180764:
    // 0x180764: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180768: 0xc05fbcc  jal         func_17EF30
    ctx->pc = 0x180768u;
    SET_GPR_U32(ctx, 31, 0x180770u);
    ctx->pc = 0x18076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180768u;
            // 0x18076c: 0xaea2c794  sw          $v0, -0x386C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294952852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF30u;
    if (runtime->hasFunction(0x17EF30u)) {
        auto targetFn = runtime->lookupFunction(0x17EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180770u; }
        if (ctx->pc != 0x180770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF30_0x17ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180770u; }
        if (ctx->pc != 0x180770u) { return; }
    }
    ctx->pc = 0x180770u;
    // 0x180770: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x180770u;
    {
        const bool branch_taken_0x180770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180770) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180778u;
label_180778:
    // 0x180778: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x180778u;
    {
        const bool branch_taken_0x180778 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x18077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180778u;
            // 0x18077c: 0x8e710004  lw          $s1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180778) {
            ctx->pc = 0x180798u;
            goto label_180798;
        }
    }
    ctx->pc = 0x180780u;
    // 0x180780: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x180784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180788: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x180788u;
    SET_GPR_U32(ctx, 31, 0x180790u);
    ctx->pc = 0x18078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180788u;
            // 0x18078c: 0x24a51808  addiu       $a1, $a1, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180790u; }
        if (ctx->pc != 0x180790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180790u; }
        if (ctx->pc != 0x180790u) { return; }
    }
    ctx->pc = 0x180790u;
    // 0x180790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180790u;
    {
        const bool branch_taken_0x180790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180790u;
            // 0x180794: 0x2361026  xor         $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180790) {
            ctx->pc = 0x1807A0u;
            goto label_1807a0;
        }
    }
    ctx->pc = 0x180798u;
label_180798:
    // 0x180798: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x18079c: 0x2361026  xor         $v0, $s1, $s6
    ctx->pc = 0x18079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 22));
label_1807a0:
    // 0x1807a0: 0x87a30250  lh          $v1, 0x250($sp)
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1807a4: 0x2b00a  movz        $s6, $zero, $v0
    ctx->pc = 0x1807a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x1807a8: 0x4600017  bltz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1807A8u;
    {
        const bool branch_taken_0x1807a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1807ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807A8u;
            // 0x1807ac: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807a8) {
            ctx->pc = 0x180808u;
            goto label_180808;
        }
    }
    ctx->pc = 0x1807B0u;
    // 0x1807b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1807b4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1807b8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1807bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1807BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1807C4u);
        ctx->pc = 0x1807C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807BCu;
            // 0x1807c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1807C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1807C4u; }
            if (ctx->pc != 0x1807C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1807C4u;
    // 0x1807c4: 0x87a50250  lh          $a1, 0x250($sp)
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1807c8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1807cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1807CCu;
    {
        const bool branch_taken_0x1807cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807CCu;
            // 0x1807d0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807cc) {
            ctx->pc = 0x18080Cu;
            goto label_18080c;
        }
    }
    ctx->pc = 0x1807D4u;
    // 0x1807d4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1807d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1807d8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1807dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1807DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1807E4u);
        ctx->pc = 0x1807E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807DCu;
            // 0x1807e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1807E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1807E4u; }
            if (ctx->pc != 0x1807E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1807E4u;
    // 0x1807e4: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1807E4u;
    {
        const bool branch_taken_0x1807e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1807E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807E4u;
            // 0x1807e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807e4) {
            ctx->pc = 0x18080Cu;
            goto label_18080c;
        }
    }
    ctx->pc = 0x1807ECu;
    // 0x1807ec: 0x87a50250  lh          $a1, 0x250($sp)
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1807f0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1807f4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1807f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1807F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180800u);
        ctx->pc = 0x1807FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1807F8u;
            // 0x1807fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180800u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180800u; }
            if (ctx->pc != 0x180800u) { return; }
        }
        }
    }
    ctx->pc = 0x180800u;
    // 0x180800: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180800u;
    {
        const bool branch_taken_0x180800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180800u;
            // 0x180804: 0xafa00280  sw          $zero, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180800) {
            ctx->pc = 0x180828u;
            goto label_180828;
        }
    }
    ctx->pc = 0x180808u;
label_180808:
    // 0x180808: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18080c:
    // 0x18080c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180810: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x180814: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x180818: 0x40f809  jalr        $v0
    ctx->pc = 0x180818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180820u);
        ctx->pc = 0x18081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180818u;
            // 0x18081c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180820u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180820u; }
            if (ctx->pc != 0x180820u) { return; }
        }
        }
    }
    ctx->pc = 0x180820u;
    // 0x180820: 0xa7a20250  sh          $v0, 0x250($sp)
    ctx->pc = 0x180820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 592), (uint16_t)GPR_U32(ctx, 2));
label_180824:
    // 0x180824: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x180824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_180828:
    // 0x180828: 0xc05fc0a  jal         func_17F028
    ctx->pc = 0x180828u;
    SET_GPR_U32(ctx, 31, 0x180830u);
    ctx->pc = 0x18082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180828u;
            // 0x18082c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F028u;
    if (runtime->hasFunction(0x17F028u)) {
        auto targetFn = runtime->lookupFunction(0x17F028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180830u; }
        if (ctx->pc != 0x180830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17f028_0x17f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180830u; }
        if (ctx->pc != 0x180830u) { return; }
    }
    ctx->pc = 0x180830u;
    // 0x180830: 0x5040fe3b  beql        $v0, $zero, . + 4 + (-0x1C5 << 2)
    ctx->pc = 0x180830u;
    {
        const bool branch_taken_0x180830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180830) {
            ctx->pc = 0x180834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180830u;
            // 0x180834: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180120u;
            runtime->cooperativeGuestYield();
            goto label_180120;
        }
    }
    ctx->pc = 0x180838u;
    // 0x180838: 0x12c00026  beqz        $s6, . + 4 + (0x26 << 2)
    ctx->pc = 0x180838u;
    {
        const bool branch_taken_0x180838 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x18083Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180838u;
            // 0x18083c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180838) {
            ctx->pc = 0x1808D4u;
            goto label_1808d4;
        }
    }
    ctx->pc = 0x180840u;
    // 0x180840: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x180844: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x180844u;
    {
        const bool branch_taken_0x180844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180844u;
            // 0x180848: 0x87a20250  lh          $v0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180844) {
            ctx->pc = 0x1808D0u;
            goto label_1808d0;
        }
    }
    ctx->pc = 0x18084Cu;
    // 0x18084c: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18084Cu;
    {
        const bool branch_taken_0x18084c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x180850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18084Cu;
            // 0x180850: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18084c) {
            ctx->pc = 0x1808B8u;
            goto label_1808b8;
        }
    }
    ctx->pc = 0x180854u;
    // 0x180854: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x180854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x180858: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18085c: 0x40f809  jalr        $v0
    ctx->pc = 0x18085Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180864u);
        ctx->pc = 0x180860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18085Cu;
            // 0x180860: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180864u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180864u; }
            if (ctx->pc != 0x180864u) { return; }
        }
        }
    }
    ctx->pc = 0x180864u;
    // 0x180864: 0x87a50250  lh          $a1, 0x250($sp)
    ctx->pc = 0x180864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x180868: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x180868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18086c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18086Cu;
    {
        const bool branch_taken_0x18086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18086Cu;
            // 0x180870: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18086c) {
            ctx->pc = 0x1808B8u;
            goto label_1808b8;
        }
    }
    ctx->pc = 0x180874u;
    // 0x180874: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x180878: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x18087c: 0x40f809  jalr        $v0
    ctx->pc = 0x18087Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180884u);
        ctx->pc = 0x180880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18087Cu;
            // 0x180880: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180884u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180884u; }
            if (ctx->pc != 0x180884u) { return; }
        }
        }
    }
    ctx->pc = 0x180884u;
    // 0x180884: 0x1456000c  bne         $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x180884u;
    {
        const bool branch_taken_0x180884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x180888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180884u;
            // 0x180888: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180884) {
            ctx->pc = 0x1808B8u;
            goto label_1808b8;
        }
    }
    ctx->pc = 0x18088Cu;
    // 0x18088c: 0x87a50250  lh          $a1, 0x250($sp)
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x180890: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x180894: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x180898: 0x40f809  jalr        $v0
    ctx->pc = 0x180898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1808A0u);
        ctx->pc = 0x18089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180898u;
            // 0x18089c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1808A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1808A0u; }
            if (ctx->pc != 0x1808A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1808A0u;
    // 0x1808a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1808A0u;
    {
        const bool branch_taken_0x1808a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808A0u;
            // 0x1808a4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808a0) {
            ctx->pc = 0x1808D4u;
            goto label_1808d4;
        }
    }
    ctx->pc = 0x1808A8u;
label_1808a8:
    // 0x1808a8: 0xc060438  jal         func_1810E0
    ctx->pc = 0x1808A8u;
    SET_GPR_U32(ctx, 31, 0x1808B0u);
    ctx->pc = 0x1808ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808A8u;
            // 0x1808ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810E0u;
    if (runtime->hasFunction(0x1810E0u)) {
        auto targetFn = runtime->lookupFunction(0x1810E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808B0u; }
        if (ctx->pc != 0x1808B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001810E0_0x1810e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808B0u; }
        if (ctx->pc != 0x1808B0u) { return; }
    }
    ctx->pc = 0x1808B0u;
    // 0x1808b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1808B0u;
    {
        const bool branch_taken_0x1808b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808B0u;
            // 0x1808b4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808b0) {
            ctx->pc = 0x1808D4u;
            goto label_1808d4;
        }
    }
    ctx->pc = 0x1808B8u;
label_1808b8:
    // 0x1808b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808bc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1808c0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1808c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1808C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1808CCu);
        ctx->pc = 0x1808C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808C4u;
            // 0x1808c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1808CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1808CCu; }
            if (ctx->pc != 0x1808CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1808CCu;
    // 0x1808cc: 0xa7a20250  sh          $v0, 0x250($sp)
    ctx->pc = 0x1808ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 592), (uint16_t)GPR_U32(ctx, 2));
label_1808d0:
    // 0x1808d0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1808d4:
    // 0x1808d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1808d8: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1808dc: 0xac60c790  sw          $zero, -0x3870($v1)
    ctx->pc = 0x1808dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952848), GPR_U32(ctx, 0));
    // 0x1808e0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1808e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1808e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1808e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808e8: 0xc05fbcc  jal         func_17EF30
    ctx->pc = 0x1808E8u;
    SET_GPR_U32(ctx, 31, 0x1808F0u);
    ctx->pc = 0x1808ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808E8u;
            // 0x1808ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EF30u;
    if (runtime->hasFunction(0x17EF30u)) {
        auto targetFn = runtime->lookupFunction(0x17EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808F0u; }
        if (ctx->pc != 0x1808F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EF30_0x17ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808F0u; }
        if (ctx->pc != 0x1808F0u) { return; }
    }
    ctx->pc = 0x1808F0u;
    // 0x1808f0: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1808f4:
    // 0x1808f4: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x1808f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1808f8: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x1808f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1808fc: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x1808fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x180900: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x180900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x180904: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x180904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x180908: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x180908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x18090c: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x18090cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x180910: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x180910u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x180914: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x180914u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x180918: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x180918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x18091c: 0x3e00008  jr          $ra
    ctx->pc = 0x18091Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18091Cu;
            // 0x180920: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180120u: goto label_180120;
            case 0x180164u: goto label_180164;
            case 0x1801B8u: goto label_1801b8;
            case 0x1801C0u: goto label_1801c0;
            case 0x1801FCu: goto label_1801fc;
            case 0x180204u: goto label_180204;
            case 0x180220u: goto label_180220;
            case 0x180228u: goto label_180228;
            case 0x18022Cu: goto label_18022c;
            case 0x180248u: goto label_180248;
            case 0x1802D0u: goto label_1802d0;
            case 0x180348u: goto label_180348;
            case 0x180358u: goto label_180358;
            case 0x18037Cu: goto label_18037c;
            case 0x180394u: goto label_180394;
            case 0x1803CCu: goto label_1803cc;
            case 0x1803D0u: goto label_1803d0;
            case 0x18040Cu: goto label_18040c;
            case 0x180410u: goto label_180410;
            case 0x180448u: goto label_180448;
            case 0x1804C0u: goto label_1804c0;
            case 0x180514u: goto label_180514;
            case 0x18051Cu: goto label_18051c;
            case 0x180524u: goto label_180524;
            case 0x18052Cu: goto label_18052c;
            case 0x180534u: goto label_180534;
            case 0x18053Cu: goto label_18053c;
            case 0x180544u: goto label_180544;
            case 0x18054Cu: goto label_18054c;
            case 0x180550u: goto label_180550;
            case 0x180554u: goto label_180554;
            case 0x180670u: goto label_180670;
            case 0x180694u: goto label_180694;
            case 0x1806A0u: goto label_1806a0;
            case 0x18072Cu: goto label_18072c;
            case 0x180738u: goto label_180738;
            case 0x180748u: goto label_180748;
            case 0x180764u: goto label_180764;
            case 0x180778u: goto label_180778;
            case 0x180798u: goto label_180798;
            case 0x1807A0u: goto label_1807a0;
            case 0x180808u: goto label_180808;
            case 0x18080Cu: goto label_18080c;
            case 0x180824u: goto label_180824;
            case 0x180828u: goto label_180828;
            case 0x1808A8u: goto label_1808a8;
            case 0x1808B8u: goto label_1808b8;
            case 0x1808D0u: goto label_1808d0;
            case 0x1808D4u: goto label_1808d4;
            case 0x1808F4u: goto label_1808f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180924u;
    // 0x180924: 0x0  nop
    ctx->pc = 0x180924u;
    // NOP
}
