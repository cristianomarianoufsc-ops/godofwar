#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171708
// Address: 0x171708 - 0x172230
void sub_00171708_0x171708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171708_0x171708");
#endif

    ctx->pc = 0x171708u;

    // 0x171708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17170c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x17170cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x171710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171714: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x171714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x171718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17171c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17171cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171728: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x171728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x17172c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x17172cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x171730: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171734: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x171738: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x171738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x17173c: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x171740: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x171740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x171744: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x171744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x171748: 0xa6270004  sh          $a3, 0x4($s1)
    ctx->pc = 0x171748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x17174c: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x17174cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x171750: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x171750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x171754: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x171754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x171758: 0xc08e222  jal         func_238888
    ctx->pc = 0x171758u;
    SET_GPR_U32(ctx, 31, 0x171760u);
    ctx->pc = 0x17175Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171758u;
            // 0x17175c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171760u; }
        if (ctx->pc != 0x171760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171760u; }
        if (ctx->pc != 0x171760u) { return; }
    }
    ctx->pc = 0x171760u;
    // 0x171760: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x171760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x171764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17176c: 0xc08e222  jal         func_238888
    ctx->pc = 0x17176Cu;
    SET_GPR_U32(ctx, 31, 0x171774u);
    ctx->pc = 0x171770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17176Cu;
            // 0x171770: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171774u; }
        if (ctx->pc != 0x171774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171774u; }
        if (ctx->pc != 0x171774u) { return; }
    }
    ctx->pc = 0x171774u;
    // 0x171774: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171778: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x17177c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x171780: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x171780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x171784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x171784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x171788: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x171788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x17178c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x17178cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x171790: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x171794: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x171798: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x171798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x17179c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1717a0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1717a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1717a4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1717a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x1717a8: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x1717A8u;
    SET_GPR_U32(ctx, 31, 0x1717B0u);
    ctx->pc = 0x1717ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717A8u;
            // 0x1717ac: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B0u; }
        if (ctx->pc != 0x1717B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B0u; }
        if (ctx->pc != 0x1717B0u) { return; }
    }
    ctx->pc = 0x1717B0u;
    // 0x1717b0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x1717b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1717b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1717b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1717b8: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x1717b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x1717bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1717bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1717c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1717c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1717c4: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x1717c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1717c8: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1717c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1717cc: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x1717ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x1717d0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1717d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1717d4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1717d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1717d8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1717d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1717dc: 0x2602e848  addiu       $v0, $s0, -0x17B8
    ctx->pc = 0x1717dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1717e0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1717e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1717e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1717e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1717e8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1717e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1717ec: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1717ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1717f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1717F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1717F8u);
        ctx->pc = 0x1717F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717F0u;
            // 0x1717f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1717F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1717F8u; }
            if (ctx->pc != 0x1717F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1717F8u;
    // 0x1717f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1717f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1717fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171800:
    // 0x171800: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x171800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x171804: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171804u;
    {
        const bool branch_taken_0x171804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171804) {
            ctx->pc = 0x171808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171804u;
            // 0x171808: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171814u;
            goto label_171814;
        }
    }
    ctx->pc = 0x17180Cu;
    // 0x17180c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x17180Cu;
    {
        const bool branch_taken_0x17180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17180Cu;
            // 0x171810: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17180c) {
            ctx->pc = 0x171800u;
            runtime->cooperativeGuestYield();
            goto label_171800;
        }
    }
    ctx->pc = 0x171814u;
label_171814:
    // 0x171814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171818: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17181c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x17181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x171820: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x171820u;
    {
        const bool branch_taken_0x171820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171820) {
            ctx->pc = 0x171824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171820u;
            // 0x171824: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171848u;
            goto label_171848;
        }
    }
    ctx->pc = 0x171828u;
    // 0x171828: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x17182c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x171830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x171830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171834: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171838: 0xc061e1a  jal         func_187868
    ctx->pc = 0x171838u;
    SET_GPR_U32(ctx, 31, 0x171840u);
    ctx->pc = 0x17183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171838u;
            // 0x17183c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171840u; }
        if (ctx->pc != 0x171840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171840u; }
        if (ctx->pc != 0x171840u) { return; }
    }
    ctx->pc = 0x171840u;
    // 0x171840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171840u;
    {
        const bool branch_taken_0x171840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171840u;
            // 0x171844: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171840) {
            ctx->pc = 0x171850u;
            goto label_171850;
        }
    }
    ctx->pc = 0x171848u;
label_171848:
    // 0x171848: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17184c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x17184cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_171850:
    // 0x171850: 0x2602e848  addiu       $v0, $s0, -0x17B8
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x171854: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x171858: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x171858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x17185c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x17185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x171860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171864: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x171864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171868: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17186c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17186cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171870: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171878: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x171878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x17187c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17187cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171880: 0x3e00008  jr          $ra
    ctx->pc = 0x171880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171880u;
            // 0x171884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171888u;
    // 0x171888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17188c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x171890: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x171890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x171894: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x171894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x171898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x171898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17189c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1718a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1718a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1718a8: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1718ac: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1718acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1718b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1718b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718b4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1718b8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1718b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1718bc: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1718BCu;
    {
        const bool branch_taken_0x1718bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1718C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718BCu;
            // 0x1718c0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718bc) {
            ctx->pc = 0x1718ECu;
            goto label_1718ec;
        }
    }
    ctx->pc = 0x1718C4u;
    // 0x1718c4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1718c8:
    // 0x1718c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1718cc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1718ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x1718d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1718d4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1718D4u;
    SET_GPR_U32(ctx, 31, 0x1718DCu);
    ctx->pc = 0x1718D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718D4u;
            // 0x1718d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718DCu; }
        if (ctx->pc != 0x1718DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718DCu; }
        if (ctx->pc != 0x1718DCu) { return; }
    }
    ctx->pc = 0x1718DCu;
    // 0x1718dc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1718e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1718e4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1718E4u;
    {
        const bool branch_taken_0x1718e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1718E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718E4u;
            // 0x1718e8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718e4) {
            ctx->pc = 0x1718C8u;
            runtime->cooperativeGuestYield();
            goto label_1718c8;
        }
    }
    ctx->pc = 0x1718ECu;
label_1718ec:
    // 0x1718ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1718ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1718f0: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x1718f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x1718f4: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x1718f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x1718f8: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x1718f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x1718fc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1718fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x171900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171904: 0xc08e218  jal         func_238860
    ctx->pc = 0x171904u;
    SET_GPR_U32(ctx, 31, 0x17190Cu);
    ctx->pc = 0x171908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171904u;
            // 0x171908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17190Cu; }
        if (ctx->pc != 0x17190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17190Cu; }
        if (ctx->pc != 0x17190Cu) { return; }
    }
    ctx->pc = 0x17190Cu;
    // 0x17190c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x171910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17191c: 0x3e00008  jr          $ra
    ctx->pc = 0x17191Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17191Cu;
            // 0x171920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171924u;
    // 0x171924: 0x0  nop
    ctx->pc = 0x171924u;
    // NOP
    // 0x171928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17192c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17193c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17193cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171940: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x171940u;
    SET_GPR_U32(ctx, 31, 0x171948u);
    ctx->pc = 0x171944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171940u;
            // 0x171944: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171948u; }
        if (ctx->pc != 0x171948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171948u; }
        if (ctx->pc != 0x171948u) { return; }
    }
    ctx->pc = 0x171948u;
    // 0x171948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17194c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171950: 0xc05c188  jal         func_170620
    ctx->pc = 0x171950u;
    SET_GPR_U32(ctx, 31, 0x171958u);
    ctx->pc = 0x171954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171950u;
            // 0x171954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170620u;
    if (runtime->hasFunction(0x170620u)) {
        auto targetFn = runtime->lookupFunction(0x170620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171958u; }
        if (ctx->pc != 0x171958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170620_0x170620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171958u; }
        if (ctx->pc != 0x171958u) { return; }
    }
    ctx->pc = 0x171958u;
    // 0x171958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17195c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17195cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171964: 0x3e00008  jr          $ra
    ctx->pc = 0x171964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171964u;
            // 0x171968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17196Cu;
    // 0x17196c: 0x0  nop
    ctx->pc = 0x17196cu;
    // NOP
    // 0x171970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17197c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17197cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x171980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171988: 0xc05cac8  jal         func_172B20
    ctx->pc = 0x171988u;
    SET_GPR_U32(ctx, 31, 0x171990u);
    ctx->pc = 0x17198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171988u;
            // 0x17198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B20u;
    if (runtime->hasFunction(0x172B20u)) {
        auto targetFn = runtime->lookupFunction(0x172B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171990u; }
        if (ctx->pc != 0x171990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B20_0x172b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171990u; }
        if (ctx->pc != 0x171990u) { return; }
    }
    ctx->pc = 0x171990u;
    // 0x171990: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x171994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171998: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17199c: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x17199cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1719a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1719a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1719a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1719A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719A8u;
            // 0x1719ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1719B0u;
    // 0x1719b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1719b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1719b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1719b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1719b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1719bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1719c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1719c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1719c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719cc: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x1719CCu;
    SET_GPR_U32(ctx, 31, 0x1719D4u);
    ctx->pc = 0x1719D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1719CCu;
            // 0x1719d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719D4u; }
        if (ctx->pc != 0x1719D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170760_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719D4u; }
        if (ctx->pc != 0x1719D4u) { return; }
    }
    ctx->pc = 0x1719D4u;
    // 0x1719d4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1719d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1719d8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1719D8u;
    SET_GPR_U32(ctx, 31, 0x1719E0u);
    ctx->pc = 0x1719DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1719D8u;
            // 0x1719dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719E0u; }
        if (ctx->pc != 0x1719E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719E0u; }
        if (ctx->pc != 0x1719E0u) { return; }
    }
    ctx->pc = 0x1719E0u;
    // 0x1719e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1719e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1719e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1719e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1719e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1719ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719ECu;
            // 0x1719f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1719F4u;
    // 0x1719f4: 0x0  nop
    ctx->pc = 0x1719f4u;
    // NOP
    // 0x1719f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1719f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1719fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1719fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171a00: 0xc05c208  jal         func_170820
    ctx->pc = 0x171A00u;
    SET_GPR_U32(ctx, 31, 0x171A08u);
    ctx->pc = 0x171A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A00u;
            // 0x171a04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170820u;
    if (runtime->hasFunction(0x170820u)) {
        auto targetFn = runtime->lookupFunction(0x170820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A08u; }
        if (ctx->pc != 0x171A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170820_0x170820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A08u; }
        if (ctx->pc != 0x171A08u) { return; }
    }
    ctx->pc = 0x171A08u;
    // 0x171a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a10: 0x3e00008  jr          $ra
    ctx->pc = 0x171A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A10u;
            // 0x171a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171A18u;
    // 0x171a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171a20: 0xc05c22c  jal         func_1708B0
    ctx->pc = 0x171A20u;
    SET_GPR_U32(ctx, 31, 0x171A28u);
    ctx->pc = 0x171A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A20u;
            // 0x171a24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B0u;
    if (runtime->hasFunction(0x1708B0u)) {
        auto targetFn = runtime->lookupFunction(0x1708B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A28u; }
        if (ctx->pc != 0x171A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B0_0x1708b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A28u; }
        if (ctx->pc != 0x171A28u) { return; }
    }
    ctx->pc = 0x171A28u;
    // 0x171a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a30: 0x3e00008  jr          $ra
    ctx->pc = 0x171A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A30u;
            // 0x171a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171A38u;
    // 0x171a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171a3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171a44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171a4c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x171A4Cu;
    SET_GPR_U32(ctx, 31, 0x171A54u);
    ctx->pc = 0x171A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A4Cu;
            // 0x171a50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A54u; }
        if (ctx->pc != 0x171A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A54u; }
        if (ctx->pc != 0x171A54u) { return; }
    }
    ctx->pc = 0x171A54u;
    // 0x171a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a58: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x171a5c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x171A5Cu;
    SET_GPR_U32(ctx, 31, 0x171A64u);
    ctx->pc = 0x171A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A5Cu;
            // 0x171a60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A64u; }
        if (ctx->pc != 0x171A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A64u; }
        if (ctx->pc != 0x171A64u) { return; }
    }
    ctx->pc = 0x171A64u;
    // 0x171a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a6c: 0xc05c0d4  jal         func_170350
    ctx->pc = 0x171A6Cu;
    SET_GPR_U32(ctx, 31, 0x171A74u);
    ctx->pc = 0x171A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A6Cu;
            // 0x171a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170350u;
    if (runtime->hasFunction(0x170350u)) {
        auto targetFn = runtime->lookupFunction(0x170350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A74u; }
        if (ctx->pc != 0x171A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170350_0x170350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A74u; }
        if (ctx->pc != 0x171A74u) { return; }
    }
    ctx->pc = 0x171A74u;
    // 0x171a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a80: 0x3e00008  jr          $ra
    ctx->pc = 0x171A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A80u;
            // 0x171a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171A88u;
    // 0x171a88: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x171a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x171a8c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x171a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x171a90: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x171a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x171a94: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a98: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x171a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x171a9c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x171a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x171aa0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x171aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x171aa4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x171aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x171aa8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x171aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x171aac: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x171aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x171ab0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x171ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x171ab4: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x171ab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x171ab8: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x171ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x171abc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x171abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x171ac0: 0x8ef40024  lw          $s4, 0x24($s7)
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x171ac4: 0x128001cc  beqz        $s4, . + 4 + (0x1CC << 2)
    ctx->pc = 0x171AC4u;
    {
        const bool branch_taken_0x171ac4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AC4u;
            // 0x171ac8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ac4) {
            ctx->pc = 0x1721F8u;
            goto label_1721f8;
        }
    }
    ctx->pc = 0x171ACCu;
    // 0x171acc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x171accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_171ad0:
    // 0x171ad0: 0x2682fff8  addiu       $v0, $s4, -0x8
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x171ad4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ad8: 0x54880b  movn        $s1, $v0, $s4
    ctx->pc = 0x171ad8u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x171adc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x171adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x171ae0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x171ae0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171ae4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x171ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x171ae8: 0x144001bf  bnez        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x171AE8u;
    {
        const bool branch_taken_0x171ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AE8u;
            // 0x171aec: 0x8fb40060  lw          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ae8) {
            ctx->pc = 0x1721E8u;
            goto label_1721e8;
        }
    }
    ctx->pc = 0x171AF0u;
    // 0x171af0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x171af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x171af4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x171AF4u;
    {
        const bool branch_taken_0x171af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AF4u;
            // 0x171af8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171af4) {
            ctx->pc = 0x171B18u;
            goto label_171b18;
        }
    }
    ctx->pc = 0x171AFCu;
    // 0x171afc: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x171b00: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b04: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x171b08: 0x40f809  jalr        $v0
    ctx->pc = 0x171B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171B10u);
        ctx->pc = 0x171B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B08u;
            // 0x171b0c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171B10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171B10u; }
            if (ctx->pc != 0x171B10u) { return; }
        }
        }
    }
    ctx->pc = 0x171B10u;
    // 0x171b10: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x171B10u;
    {
        const bool branch_taken_0x171b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B10u;
            // 0x171b14: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b10) {
            ctx->pc = 0x1721ECu;
            goto label_1721ec;
        }
    }
    ctx->pc = 0x171B18u;
label_171b18:
    // 0x171b18: 0xc04c0ae  jal         func_1302B8
    ctx->pc = 0x171B18u;
    SET_GPR_U32(ctx, 31, 0x171B20u);
    ctx->pc = 0x171B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B18u;
            // 0x171b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302B8u;
    if (runtime->hasFunction(0x1302B8u)) {
        auto targetFn = runtime->lookupFunction(0x1302B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B20u; }
        if (ctx->pc != 0x171B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1302b8_0x130310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B20u; }
        if (ctx->pc != 0x171B20u) { return; }
    }
    ctx->pc = 0x171B20u;
    // 0x171b20: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x171B20u;
    {
        const bool branch_taken_0x171b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B20u;
            // 0x171b24: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b20) {
            ctx->pc = 0x1721ECu;
            goto label_1721ec;
        }
    }
    ctx->pc = 0x171B28u;
    // 0x171b28: 0x962200c2  lhu         $v0, 0xC2($s1)
    ctx->pc = 0x171b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x171b2c: 0x3042c010  andi        $v0, $v0, 0xC010
    ctx->pc = 0x171b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49168);
    // 0x171b30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171B30u;
    {
        const bool branch_taken_0x171b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B30u;
            // 0x171b34: 0x8e30009c  lw          $s0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b30) {
            ctx->pc = 0x171B48u;
            goto label_171b48;
        }
    }
    ctx->pc = 0x171B38u;
    // 0x171b38: 0xc05c3aa  jal         func_170EA8
    ctx->pc = 0x171B38u;
    SET_GPR_U32(ctx, 31, 0x171B40u);
    ctx->pc = 0x171B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B38u;
            // 0x171b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170EA8u;
    if (runtime->hasFunction(0x170EA8u)) {
        auto targetFn = runtime->lookupFunction(0x170EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B40u; }
        if (ctx->pc != 0x171B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170EA8_0x170ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B40u; }
        if (ctx->pc != 0x171B40u) { return; }
    }
    ctx->pc = 0x171B40u;
    // 0x171b40: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x171b40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x171b44: 0x0  nop
    ctx->pc = 0x171b44u;
    // NOP
label_171b48:
    // 0x171b48: 0x862200cc  lh          $v0, 0xCC($s1)
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x171b4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171B4Cu;
    {
        const bool branch_taken_0x171b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B4Cu;
            // 0x171b50: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b4c) {
            ctx->pc = 0x171B64u;
            goto label_171b64;
        }
    }
    ctx->pc = 0x171B54u;
    // 0x171b54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171b58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x171b5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171B5Cu;
    {
        const bool branch_taken_0x171b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B5Cu;
            // 0x171b60: 0x8c43008c  lw          $v1, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b5c) {
            ctx->pc = 0x171B68u;
            goto label_171b68;
        }
    }
    ctx->pc = 0x171B64u;
label_171b64:
    // 0x171b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x171b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171b68:
    // 0x171b68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171B68u;
    {
        const bool branch_taken_0x171b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B68u;
            // 0x171b6c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b68) {
            ctx->pc = 0x171B80u;
            goto label_171b80;
        }
    }
    ctx->pc = 0x171B70u;
    // 0x171b70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171b74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x171b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171B78u;
    {
        const bool branch_taken_0x171b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B78u;
            // 0x171b7c: 0x8c45008c  lw          $a1, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b78) {
            ctx->pc = 0x171B84u;
            goto label_171b84;
        }
    }
    ctx->pc = 0x171B80u;
label_171b80:
    // 0x171b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171b84:
    // 0x171b84: 0x962200c2  lhu         $v0, 0xC2($s1)
    ctx->pc = 0x171b84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x171b88: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x171b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x171b8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171B8Cu;
    {
        const bool branch_taken_0x171b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B8Cu;
            // 0x171b90: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b8c) {
            ctx->pc = 0x171BA4u;
            goto label_171ba4;
        }
    }
    ctx->pc = 0x171B94u;
    // 0x171b94: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x171b98: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x171b9c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x171b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x171ba0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_171ba4:
    // 0x171ba4: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x171ba8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171BA8u;
    {
        const bool branch_taken_0x171ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171ba8) {
            ctx->pc = 0x171BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171BA8u;
            // 0x171bac: 0x8e350084  lw          $s5, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171BC8u;
            goto label_171bc8;
        }
    }
    ctx->pc = 0x171BB0u;
    // 0x171bb0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171BB0u;
    {
        const bool branch_taken_0x171bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x171bb0) {
            ctx->pc = 0x171BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171BB0u;
            // 0x171bb4: 0x8e350084  lw          $s5, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171BC8u;
            goto label_171bc8;
        }
    }
    ctx->pc = 0x171BB8u;
    // 0x171bb8: 0xa63000cc  sh          $s0, 0xCC($s1)
    ctx->pc = 0x171bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 204), (uint16_t)GPR_U32(ctx, 16));
    // 0x171bbc: 0xc05c294  jal         func_170A50
    ctx->pc = 0x171BBCu;
    SET_GPR_U32(ctx, 31, 0x171BC4u);
    ctx->pc = 0x171BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BBCu;
            // 0x171bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BC4u; }
        if (ctx->pc != 0x171BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BC4u; }
        if (ctx->pc != 0x171BC4u) { return; }
    }
    ctx->pc = 0x171BC4u;
    // 0x171bc4: 0x8e350084  lw          $s5, 0x84($s1)
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_171bc8:
    // 0x171bc8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x171bcc: 0xc6340080  lwc1        $f20, 0x80($s1)
    ctx->pc = 0x171bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171bd0: 0x26300074  addiu       $s0, $s1, 0x74
    ctx->pc = 0x171bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x171bd4: 0x8e360088  lw          $s6, 0x88($s1)
    ctx->pc = 0x171bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x171bd8: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x171bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x171bdc: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x171bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x171be0: 0xa22000ce  sb          $zero, 0xCE($s1)
    ctx->pc = 0x171be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x171be4: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x171be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x171be8: 0x1070017f  beq         $v1, $s0, . + 4 + (0x17F << 2)
    ctx->pc = 0x171BE8u;
    {
        const bool branch_taken_0x171be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x171BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171BE8u;
            // 0x171bec: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171be8) {
            ctx->pc = 0x1721E8u;
            goto label_1721e8;
        }
    }
    ctx->pc = 0x171BF0u;
    // 0x171bf0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x171bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x171bf4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x171bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bf8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x171bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x171bfc: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x171bfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171c00: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x171c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x171c04: 0x922200c0  lbu         $v0, 0xC0($s1)
    ctx->pc = 0x171c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x171c08: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x171c08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171c0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171C0Cu;
    {
        const bool branch_taken_0x171c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C0Cu;
            // 0x171c10: 0xc6350080  lwc1        $f21, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c0c) {
            ctx->pc = 0x171C24u;
            goto label_171c24;
        }
    }
    ctx->pc = 0x171C14u;
    // 0x171c14: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171C14u;
    {
        const bool branch_taken_0x171c14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x171C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C14u;
            // 0x171c18: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c14) {
            ctx->pc = 0x171C24u;
            goto label_171c24;
        }
    }
    ctx->pc = 0x171C1Cu;
    // 0x171c1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x171C1Cu;
    {
        const bool branch_taken_0x171c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171c1c) {
            ctx->pc = 0x171C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171C1Cu;
            // 0x171c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171C34u;
            goto label_171c34;
        }
    }
    ctx->pc = 0x171C24u;
label_171c24:
    // 0x171c24: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x171c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x171c28: 0x3f402  srl         $fp, $v1, 16
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x171c2c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x171C2Cu;
    {
        const bool branch_taken_0x171c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C2Cu;
            // 0x171c30: 0xafa40064  sw          $a0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c2c) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x171C34u;
label_171c34:
    // 0x171c34: 0xc04c050  jal         func_130140
    ctx->pc = 0x171C34u;
    SET_GPR_U32(ctx, 31, 0x171C3Cu);
    ctx->pc = 0x171C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C34u;
            // 0x171c38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C3Cu; }
        if (ctx->pc != 0x171C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C3Cu; }
        if (ctx->pc != 0x171C3Cu) { return; }
    }
    ctx->pc = 0x171C3Cu;
    // 0x171c3c: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x171c3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171c40: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x171c44: 0xd8810080  lqc2        $vf1, 0x80($a0)
    ctx->pc = 0x171c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x171c48: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x171c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171c4c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x171c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171c50: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x171c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171c54: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x171c58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x171c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x171c5c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x171c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171c60: 0xc62200c4  lwc1        $f2, 0xC4($s1)
    ctx->pc = 0x171c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171c64: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x171c64u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x171c68: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x171c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171c6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x171c6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171c70: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x171c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x171c74: 0x46010104  c1          0x10104
    ctx->pc = 0x171c74u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x171c78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x171c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x171c7c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x171c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171c80: 0x0  nop
    ctx->pc = 0x171c80u;
    // NOP
    // 0x171c84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x171C84u;
    {
        const bool branch_taken_0x171c84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C84u;
            // 0x171c88: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c84) {
            ctx->pc = 0x171CA0u;
            goto label_171ca0;
        }
    }
    ctx->pc = 0x171C8Cu;
    // 0x171c8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171c90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x171c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x171c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171C94u;
    {
        const bool branch_taken_0x171c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171c94) {
            ctx->pc = 0x171CB8u;
            goto label_171cb8;
        }
    }
    ctx->pc = 0x171C9Cu;
    // 0x171c9c: 0x0  nop
    ctx->pc = 0x171c9cu;
    // NOP
label_171ca0:
    // 0x171ca0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x171ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171ca4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171CA4u;
    {
        const bool branch_taken_0x171ca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171ca4) {
            ctx->pc = 0x171CB8u;
            goto label_171cb8;
        }
    }
    ctx->pc = 0x171CACu;
    // 0x171cac: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x171cacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x171cb0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x171cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x171cb4: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x171cb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_171cb8:
    // 0x171cb8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x171cb8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171cc0: 0x962300c2  lhu         $v1, 0xC2($s1)
    ctx->pc = 0x171cc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x171cc4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x171cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171cc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171ccc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x171cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x171cd0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x171cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x171cd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171cd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171cd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171cdc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x171cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x171ce0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x171CE0u;
    {
        const bool branch_taken_0x171ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CE0u;
            // 0x171ce4: 0x29283  sra         $s2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ce0) {
            ctx->pc = 0x171D08u;
            goto label_171d08;
        }
    }
    ctx->pc = 0x171CE8u;
    // 0x171ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x171cecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171cf0: 0x0  nop
    ctx->pc = 0x171cf0u;
    // NOP
    // 0x171cf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x171CF4u;
    {
        const bool branch_taken_0x171cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CF4u;
            // 0x171cf8: 0x2551821  addu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cf4) {
            ctx->pc = 0x171D10u;
            goto label_171d10;
        }
    }
    ctx->pc = 0x171CFCu;
    // 0x171cfc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x171cfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x171d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171D00u;
    {
        const bool branch_taken_0x171d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D00u;
            // 0x171d04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d00) {
            ctx->pc = 0x171D0Cu;
            goto label_171d0c;
        }
    }
    ctx->pc = 0x171D08u;
label_171d08:
    // 0x171d08: 0x4614ad68  max.s       $f21, $f21, $f20
    ctx->pc = 0x171d08u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[20]);
label_171d0c:
    // 0x171d0c: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x171d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_171d10:
    // 0x171d10: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x171d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x171d14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x171d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171d1c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x171d1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x171d20: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x171d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x171d24: 0x29283  sra         $s2, $v0, 10
    ctx->pc = 0x171d24u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 10));
    // 0x171d28: 0x1a400051  blez        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x171D28u;
    {
        const bool branch_taken_0x171d28 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x171D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D28u;
            // 0x171d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d28) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x171D30u;
    // 0x171d30: 0x922300c0  lbu         $v1, 0xC0($s1)
    ctx->pc = 0x171d30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x171d34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171D34u;
    {
        const bool branch_taken_0x171d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D34u;
            // 0x171d38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d34) {
            ctx->pc = 0x171D44u;
            goto label_171d44;
        }
    }
    ctx->pc = 0x171D3Cu;
    // 0x171d3c: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x171D3Cu;
    {
        const bool branch_taken_0x171d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D3Cu;
            // 0x171d40: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d3c) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x171D44u;
label_171d44:
    // 0x171d44: 0xd8810090  lqc2        $vf1, 0x90($a0)
    ctx->pc = 0x171d44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x171d48: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x171d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x171d4c: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x171d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x171d50: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x171d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x171d54: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x171d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x171d58: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x171d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x171d5c: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x171d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x171d60: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x171d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x171d64: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x171d64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x171d68: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x171d68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x171d6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171d70: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x171d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x171d74: 0x4b030046  vsubz.x     $vf1, $vf0, $vf3z
    ctx->pc = 0x171d74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171d78: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x171d78u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171d7c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x171d7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171d80: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x171D80u;
    SET_GPR_U32(ctx, 31, 0x171D88u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D88u; }
        if (ctx->pc != 0x171D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D88u; }
        if (ctx->pc != 0x171D88u) { return; }
    }
    ctx->pc = 0x171D88u;
    // 0x171d88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x171d8c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x171d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x171d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171d94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171d98: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x171d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x171d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171da0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x171da0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x171da4: 0x922200c0  lbu         $v0, 0xC0($s1)
    ctx->pc = 0x171da4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x171da8: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x171da8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x171dac: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x171DACu;
    {
        const bool branch_taken_0x171dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x171DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171DACu;
            // 0x171db0: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dac) {
            ctx->pc = 0x171DD8u;
            goto label_171dd8;
        }
    }
    ctx->pc = 0x171DB4u;
    // 0x171db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171dbc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x171dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x171dc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x171dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x171dc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171dc8: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x171dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x171dcc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x171DCCu;
    {
        const bool branch_taken_0x171dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171DCCu;
            // 0x171dd0: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dcc) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x171DD4u;
    // 0x171dd4: 0x0  nop
    ctx->pc = 0x171dd4u;
    // NOP
label_171dd8:
    // 0x171dd8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x171dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x171ddc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x171ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171de0: 0xc441c308  lwc1        $f1, -0x3CF8($v0)
    ctx->pc = 0x171de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171de4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171de8: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x171de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x171dec: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x171decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171df0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x171df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171df4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x171df4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x171df8: 0x4a0003bf  vwaitq
    ctx->pc = 0x171df8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171dfc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x171dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x171e00: 0x4a0002ff  vnop
    ctx->pc = 0x171e00u;
    // NOP operation, no action needed for VU0
    // 0x171e04: 0x4a0002ff  vnop
    ctx->pc = 0x171e04u;
    // NOP operation, no action needed for VU0
    // 0x171e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171e0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x171e0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x171e10: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x171e10u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x171e14: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x171e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171e18: 0x4b011086  vsubz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x171e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171e1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x171e1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x171e20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x171e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x171e24: 0x4b011098  vmulx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x171e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171e28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x171e2c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x171e30: 0x4b011098  vmulx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x171e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171e34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171e3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x171e40: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171e44: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x171e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x171e48: 0x4b011080  vaddx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x171e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x171e4c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x171e4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171e50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171e54: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x171e54u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x171e58: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x171e58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171e5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x171e60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171e64: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x171e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x171e68: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x171e68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e6c: 0x0  nop
    ctx->pc = 0x171e6cu;
    // NOP
label_171e70:
    // 0x171e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171e74: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x171e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171e78: 0x0  nop
    ctx->pc = 0x171e78u;
    // NOP
    // 0x171e7c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x171E7Cu;
    {
        const bool branch_taken_0x171e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171e7c) {
            ctx->pc = 0x171E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171E7Cu;
            // 0x171e80: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171EC8u;
            goto label_171ec8;
        }
    }
    ctx->pc = 0x171E84u;
    // 0x171e84: 0x962200c2  lhu         $v0, 0xC2($s1)
    ctx->pc = 0x171e84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x171e88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x171e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x171e8c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x171E8Cu;
    {
        const bool branch_taken_0x171e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e8c) {
            ctx->pc = 0x171E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171E8Cu;
            // 0x171e90: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171EC8u;
            goto label_171ec8;
        }
    }
    ctx->pc = 0x171E94u;
    // 0x171e94: 0x922200c1  lbu         $v0, 0xC1($s1)
    ctx->pc = 0x171e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 193)));
    // 0x171e98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x171E98u;
    {
        const bool branch_taken_0x171e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E98u;
            // 0x171e9c: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e98) {
            ctx->pc = 0x171EB8u;
            goto label_171eb8;
        }
    }
    ctx->pc = 0x171EA0u;
    // 0x171ea0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x171ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ea4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x171ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171eac: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x171eb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171eb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_171eb8:
    // 0x171eb8: 0xc05ca1c  jal         func_172870
    ctx->pc = 0x171EB8u;
    SET_GPR_U32(ctx, 31, 0x171EC0u);
    ctx->pc = 0x171EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EB8u;
            // 0x171ebc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x172870u;
    if (runtime->hasFunction(0x172870u)) {
        auto targetFn = runtime->lookupFunction(0x172870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EC0u; }
        if (ctx->pc != 0x171EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_172870_0x172a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EC0u; }
        if (ctx->pc != 0x171EC0u) { return; }
    }
    ctx->pc = 0x171EC0u;
    // 0x171ec0: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x171ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x171ec4: 0x0  nop
    ctx->pc = 0x171ec4u;
    // NOP
label_171ec8:
    // 0x171ec8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x171ecc: 0x105000c6  beq         $v0, $s0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x171ECCu;
    {
        const bool branch_taken_0x171ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x171ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171ECCu;
            // 0x171ed0: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ecc) {
            ctx->pc = 0x1721E8u;
            goto label_1721e8;
        }
    }
    ctx->pc = 0x171ED4u;
    // 0x171ed4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_171ed8:
    // 0x171ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ee0: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x171ee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x171ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171ee8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x171ee8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x171eec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x171eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x171ef0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171EF0u;
    {
        const bool branch_taken_0x171ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EF0u;
            // 0x171ef4: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ef0) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171EF8u;
    // 0x171ef8: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x171efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171f00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171F00u;
    {
        const bool branch_taken_0x171f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x171f00) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171F08u;
    // 0x171f08: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x171f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x171f0c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x171f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x171f10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171F10u;
    {
        const bool branch_taken_0x171f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171f10) {
            ctx->pc = 0x171F24u;
            goto label_171f24;
        }
    }
    ctx->pc = 0x171F18u;
label_171f18:
    // 0x171f18: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x171F18u;
    SET_GPR_U32(ctx, 31, 0x171F20u);
    ctx->pc = 0x171F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F18u;
            // 0x171f1c: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F20u; }
        if (ctx->pc != 0x171F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F20u; }
        if (ctx->pc != 0x171F20u) { return; }
    }
    ctx->pc = 0x171F20u;
    // 0x171f20: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x171f20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_171f24:
    // 0x171f24: 0x10a00086  beqz        $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x171F24u;
    {
        const bool branch_taken_0x171f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F24u;
            // 0x171f28: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f24) {
            ctx->pc = 0x172140u;
            goto label_172140;
        }
    }
    ctx->pc = 0x171F2Cu;
    // 0x171f2c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x171f30: 0x246353f0  addiu       $v1, $v1, 0x53F0
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21488));
    // 0x171f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171f38: 0x23702  srl         $a2, $v0, 28
    ctx->pc = 0x171f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x171f3c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x171f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x171f40: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171f44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x171f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x171f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171f4c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x171f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x171f50: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x171f54: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x171f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171f58: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x171f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x171f5c: 0x34282  srl         $t0, $v1, 10
    ctx->pc = 0x171f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x171f60: 0x10c50006  beq         $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x171F60u;
    {
        const bool branch_taken_0x171f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x171F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F60u;
            // 0x171f64: 0x22282  srl         $a0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f60) {
            ctx->pc = 0x171F7Cu;
            goto label_171f7c;
        }
    }
    ctx->pc = 0x171F68u;
    // 0x171f68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x171f6c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171F6Cu;
    {
        const bool branch_taken_0x171f6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x171F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F6Cu;
            // 0x171f70: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f6c) {
            ctx->pc = 0x171F7Cu;
            goto label_171f7c;
        }
    }
    ctx->pc = 0x171F74u;
    // 0x171f74: 0x8c42c320  lw          $v0, -0x3CE0($v0)
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951712)));
    // 0x171f78: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_171f7c:
    // 0x171f7c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x171f80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x171f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171f84: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x171f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x171f88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x171f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f8c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x171f8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x171f90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x171f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f94: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x171f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171f98: 0x86040028  lh          $a0, 0x28($s0)
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x171f9c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x171f9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x171fa0: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171FA0u;
    {
        const bool branch_taken_0x171fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x171FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171FA0u;
            // 0x171fa4: 0x8e2900a8  lw          $t1, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fa0) {
            ctx->pc = 0x171FB8u;
            goto label_171fb8;
        }
    }
    ctx->pc = 0x171FA8u;
    // 0x171fa8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x171fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x171fac: 0xa6050028  sh          $a1, 0x28($s0)
    ctx->pc = 0x171facu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x171fb0: 0x34420801  ori         $v0, $v0, 0x801
    ctx->pc = 0x171fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2049);
    // 0x171fb4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x171fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_171fb8:
    // 0x171fb8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x171fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fbc: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x171fc0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x171fc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171fc4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171FC4u;
    {
        const bool branch_taken_0x171fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171fc4) {
            ctx->pc = 0x171FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171FC4u;
            // 0x171fc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171FCCu;
            goto label_171fcc;
        }
    }
    ctx->pc = 0x171FCCu;
label_171fcc:
    // 0x171fcc: 0x2010  mfhi        $a0
    ctx->pc = 0x171fccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x171fd0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x171FD0u;
    {
        const bool branch_taken_0x171fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x171fd0) {
            ctx->pc = 0x171FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171FD0u;
            // 0x171fd4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171FE8u;
            goto label_171fe8;
        }
    }
    ctx->pc = 0x171FD8u;
    // 0x171fd8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x171FD8u;
    {
        const bool branch_taken_0x171fd8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x171FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171FD8u;
            // 0x171fdc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fd8) {
            ctx->pc = 0x171FE8u;
            goto label_171fe8;
        }
    }
    ctx->pc = 0x171FE0u;
    // 0x171fe0: 0x24830168  addiu       $v1, $a0, 0x168
    ctx->pc = 0x171fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x171fe4: 0x0  nop
    ctx->pc = 0x171fe4u;
    // NOP
label_171fe8:
    // 0x171fe8: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x171fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x171fec: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x171FECu;
    {
        const bool branch_taken_0x171fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171fec) {
            ctx->pc = 0x171FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171FECu;
            // 0x171ff0: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172008u;
            goto label_172008;
        }
    }
    ctx->pc = 0x171FF4u;
    // 0x171ff4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x171ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x171ff8: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x171ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x171ffc: 0x34420804  ori         $v0, $v0, 0x804
    ctx->pc = 0x171ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2052);
    // 0x172000: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x172000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x172004: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x172004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_172008:
    // 0x172008: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x172008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17200c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x17200cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x172010: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x172010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172014: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x172014u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x172018: 0x8604002a  lh          $a0, 0x2A($s0)
    ctx->pc = 0x172018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x17201c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x17201cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172020: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x172020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x172024: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x172024u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x172028: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172028u;
    {
        const bool branch_taken_0x172028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x17202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172028u;
            // 0x17202c: 0x3c0182d  daddu       $v1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172028) {
            ctx->pc = 0x172040u;
            goto label_172040;
        }
    }
    ctx->pc = 0x172030u;
    // 0x172030: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x172030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x172034: 0xa605002a  sh          $a1, 0x2A($s0)
    ctx->pc = 0x172034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x172038: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x172038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
    // 0x17203c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17203cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_172040:
    // 0x172040: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x172044: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x172044u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x172048: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x172048u;
    {
        const bool branch_taken_0x172048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172048) {
            ctx->pc = 0x17204Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172048u;
            // 0x17204c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172050u;
            goto label_172050;
        }
    }
    ctx->pc = 0x172050u;
label_172050:
    // 0x172050: 0x2010  mfhi        $a0
    ctx->pc = 0x172050u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x172054: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172054u;
    {
        const bool branch_taken_0x172054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172054) {
            ctx->pc = 0x172058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172054u;
            // 0x172058: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172068u;
            goto label_172068;
        }
    }
    ctx->pc = 0x17205Cu;
    // 0x17205c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17205Cu;
    {
        const bool branch_taken_0x17205c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x172060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17205Cu;
            // 0x172060: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17205c) {
            ctx->pc = 0x172068u;
            goto label_172068;
        }
    }
    ctx->pc = 0x172064u;
    // 0x172064: 0x24830168  addiu       $v1, $a0, 0x168
    ctx->pc = 0x172064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
label_172068:
    // 0x172068: 0x8602002e  lh          $v0, 0x2E($s0)
    ctx->pc = 0x172068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x17206c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17206Cu;
    {
        const bool branch_taken_0x17206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17206c) {
            ctx->pc = 0x172070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17206Cu;
            // 0x172070: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172088u;
            goto label_172088;
        }
    }
    ctx->pc = 0x172074u;
    // 0x172074: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x172078: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x172078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x17207c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x17207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x172080: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x172080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x172084: 0x86020030  lh          $v0, 0x30($s0)
    ctx->pc = 0x172084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_172088:
    // 0x172088: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x172088u;
    {
        const bool branch_taken_0x172088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x17208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172088u;
            // 0x17208c: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172088) {
            ctx->pc = 0x1720A0u;
            goto label_1720a0;
        }
    }
    ctx->pc = 0x172090u;
    // 0x172090: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x172094: 0xa6070030  sh          $a3, 0x30($s0)
    ctx->pc = 0x172094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x172098: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x172098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17209c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17209cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1720a0:
    // 0x1720a0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1720a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1720a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1720a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1720a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720ac: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1720acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1720b0: 0x86050032  lh          $a1, 0x32($s0)
    ctx->pc = 0x1720b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1720b4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x1720b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1720b8: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x1720b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x1720bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1720bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1720c0: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x1720c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1720c4: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1720C4u;
    {
        const bool branch_taken_0x1720c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1720C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720C4u;
            // 0x1720c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720c4) {
            ctx->pc = 0x1720E0u;
            goto label_1720e0;
        }
    }
    ctx->pc = 0x1720CCu;
    // 0x1720cc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1720d0: 0xa6060032  sh          $a2, 0x32($s0)
    ctx->pc = 0x1720d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x1720d4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1720d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1720d8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1720d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1720dc: 0x0  nop
    ctx->pc = 0x1720dcu;
    // NOP
label_1720e0:
    // 0x1720e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1720e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1720e4:
    // 0x1720e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1720e8: 0x804400ac  lb          $a0, 0xAC($v0)
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1720ec: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1720f0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1720f4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1720f8: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1720F8u;
    {
        const bool branch_taken_0x1720f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1720FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720F8u;
            // 0x1720fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720f8) {
            ctx->pc = 0x172120u;
            goto label_172120;
        }
    }
    ctx->pc = 0x172100u;
    // 0x172100: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x172100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x172104: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17210c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x17210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x172110: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x172114: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x172118: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x172118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x17211c: 0x0  nop
    ctx->pc = 0x17211cu;
    // NOP
label_172120:
    // 0x172120: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x172124: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x172124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x172128: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x172128u;
    {
        const bool branch_taken_0x172128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172128u;
            // 0x17212c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172128) {
            ctx->pc = 0x1720E4u;
            runtime->cooperativeGuestYield();
            goto label_1720e4;
        }
    }
    ctx->pc = 0x172130u;
    // 0x172130: 0x922200ce  lbu         $v0, 0xCE($s1)
    ctx->pc = 0x172130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 206)));
    // 0x172134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172138: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x172138u;
    {
        const bool branch_taken_0x172138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172138u;
            // 0x17213c: 0xa22200ce  sb          $v0, 0xCE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 206), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172138) {
            ctx->pc = 0x1721D8u;
            goto label_1721d8;
        }
    }
    ctx->pc = 0x172140u;
label_172140:
    // 0x172140: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x172144: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x172144u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x172148: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x172148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17214c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172150: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x172150u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x172154: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x172154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x172158: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x172158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x17215c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17215cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172164: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x172164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x172168: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x172168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17216c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x17216Cu;
    {
        const bool branch_taken_0x17216c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17216Cu;
            // 0x172170: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17216c) {
            ctx->pc = 0x1721A8u;
            goto label_1721a8;
        }
    }
    ctx->pc = 0x172174u;
    // 0x172174: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x172174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172178: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17217c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x172180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x172184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17218c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172190: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x172190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x172194: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x172198: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17219c: 0x40f809  jalr        $v0
    ctx->pc = 0x17219Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1721A4u);
        ctx->pc = 0x1721A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17219Cu;
            // 0x1721a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1721A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1721A4u; }
            if (ctx->pc != 0x1721A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1721A4u;
    // 0x1721a4: 0x0  nop
    ctx->pc = 0x1721a4u;
    // NOP
label_1721a8:
    // 0x1721a8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1721a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1721ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1721acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1721b0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1721b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1721b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1721b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1721b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1721b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1721bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1721bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1721c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1721c8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1721cc: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1721ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1721d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1721D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1721D8u);
        ctx->pc = 0x1721D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721D0u;
            // 0x1721d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1721D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1721D8u; }
            if (ctx->pc != 0x1721D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1721D8u;
label_1721d8:
    // 0x1721d8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1721d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1721dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1721e0: 0x1462ff3d  bne         $v1, $v0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x1721E0u;
    {
        const bool branch_taken_0x1721e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1721E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721E0u;
            // 0x1721e4: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721e0) {
            ctx->pc = 0x171ED8u;
            runtime->cooperativeGuestYield();
            goto label_171ed8;
        }
    }
    ctx->pc = 0x1721E8u;
label_1721e8:
    // 0x1721e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1721e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1721ec:
    // 0x1721ec: 0x5440fe38  bnel        $v0, $zero, . + 4 + (-0x1C8 << 2)
    ctx->pc = 0x1721ECu;
    {
        const bool branch_taken_0x1721ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1721ec) {
            ctx->pc = 0x1721F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1721ECu;
            // 0x1721f0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171AD0u;
            runtime->cooperativeGuestYield();
            goto label_171ad0;
        }
    }
    ctx->pc = 0x1721F4u;
    // 0x1721f4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1721f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1721f8:
    // 0x1721f8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1721f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1721fc: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1721fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x172200: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x172200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x172204: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x172204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x172208: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x172208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17220c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x17220cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172210: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x172210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172214: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x172214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x172218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17221c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x17221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x172220: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x172220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x172224: 0x3e00008  jr          $ra
    ctx->pc = 0x172224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172224u;
            // 0x172228: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171800u: goto label_171800;
            case 0x171814u: goto label_171814;
            case 0x171848u: goto label_171848;
            case 0x171850u: goto label_171850;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718ECu: goto label_1718ec;
            case 0x171AD0u: goto label_171ad0;
            case 0x171B18u: goto label_171b18;
            case 0x171B48u: goto label_171b48;
            case 0x171B64u: goto label_171b64;
            case 0x171B68u: goto label_171b68;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171C24u: goto label_171c24;
            case 0x171C34u: goto label_171c34;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CB8u: goto label_171cb8;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D44u: goto label_171d44;
            case 0x171DD8u: goto label_171dd8;
            case 0x171E70u: goto label_171e70;
            case 0x171EB8u: goto label_171eb8;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED8u: goto label_171ed8;
            case 0x171F18u: goto label_171f18;
            case 0x171F24u: goto label_171f24;
            case 0x171F7Cu: goto label_171f7c;
            case 0x171FB8u: goto label_171fb8;
            case 0x171FCCu: goto label_171fcc;
            case 0x171FE8u: goto label_171fe8;
            case 0x172008u: goto label_172008;
            case 0x172040u: goto label_172040;
            case 0x172050u: goto label_172050;
            case 0x172068u: goto label_172068;
            case 0x172088u: goto label_172088;
            case 0x1720A0u: goto label_1720a0;
            case 0x1720E0u: goto label_1720e0;
            case 0x1720E4u: goto label_1720e4;
            case 0x172120u: goto label_172120;
            case 0x172140u: goto label_172140;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721D8u: goto label_1721d8;
            case 0x1721E8u: goto label_1721e8;
            case 0x1721ECu: goto label_1721ec;
            case 0x1721F8u: goto label_1721f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17222Cu;
    // 0x17222c: 0x0  nop
    ctx->pc = 0x17222cu;
    // NOP
}
