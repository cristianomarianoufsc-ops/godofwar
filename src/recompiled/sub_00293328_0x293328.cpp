#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00293328
// Address: 0x293328 - 0x2934c0
void sub_00293328_0x293328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293328_0x293328");
#endif

    ctx->pc = 0x293328u;

    // 0x293328: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x293328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29332c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x29332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x293330: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x293330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x293334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x293334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293338: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x293338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x29333c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x29333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x293340: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x293340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x293344: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x293344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x293348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29334c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x293350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293354: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x293354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x293358: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x293358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x29335c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x293360: 0xc0a4aa2  jal         func_292A88
    ctx->pc = 0x293360u;
    SET_GPR_U32(ctx, 31, 0x293368u);
    ctx->pc = 0x293364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293360u;
            // 0x293364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292A88u;
    if (runtime->hasFunction(0x292A88u)) {
        auto targetFn = runtime->lookupFunction(0x292A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293368u; }
        if (ctx->pc != 0x293368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292a88_0x292b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293368u; }
        if (ctx->pc != 0x293368u) { return; }
    }
    ctx->pc = 0x293368u;
    // 0x293368: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x293368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29336c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x293370: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x293370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x293374: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x293374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x293378: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x293378u;
    {
        const bool branch_taken_0x293378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293378u;
            // 0x29337c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293378) {
            ctx->pc = 0x2933E8u;
            goto label_2933e8;
        }
    }
    ctx->pc = 0x293380u;
    // 0x293380: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x293380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x293384: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x293384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x293388: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x293388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29338c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293390: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x293390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x293394: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x293394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x293398: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x293398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x29339c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2933a0: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2933a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2933a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2933a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2933a8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2933a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2933ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2933ACu;
    {
        const bool branch_taken_0x2933ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933ACu;
            // 0x2933b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933ac) {
            ctx->pc = 0x2933B8u;
            goto label_2933b8;
        }
    }
    ctx->pc = 0x2933B4u;
    // 0x2933b4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x2933b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2933b8:
    // 0x2933b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2933bc: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2933bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x2933c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2933c4: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x2933c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x2933c8: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x2933c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2933cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2933ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2933d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2933d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2933d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2933d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2933d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2933d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2933dc: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x2933dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2933e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2933E0u;
    {
        const bool branch_taken_0x2933e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933E0u;
            // 0x2933e4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933e0) {
            ctx->pc = 0x293498u;
            goto label_293498;
        }
    }
    ctx->pc = 0x2933E8u;
label_2933e8:
    // 0x2933e8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2933e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2933ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2933ECu;
    {
        const bool branch_taken_0x2933ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2933ECu;
            // 0x2933f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933ec) {
            ctx->pc = 0x2933FCu;
            goto label_2933fc;
        }
    }
    ctx->pc = 0x2933F4u;
    // 0x2933f4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x2933f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x2933f8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2933f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2933fc:
    // 0x2933fc: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x2933fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x293400: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x293400u;
    {
        const bool branch_taken_0x293400 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x293404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293400u;
            // 0x293404: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293400) {
            ctx->pc = 0x293468u;
            goto label_293468;
        }
    }
    ctx->pc = 0x293408u;
    // 0x293408: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x293408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x29340c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x29340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x293410: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x293410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x293414: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x293414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x293418: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29341c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x29341cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x293420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293424: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x293424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x293428: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x293428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29342c: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x29342cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x293430: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x293430u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x293434: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293434u;
    {
        const bool branch_taken_0x293434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293434u;
            // 0x293438: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293434) {
            ctx->pc = 0x293440u;
            goto label_293440;
        }
    }
    ctx->pc = 0x29343Cu;
    // 0x29343c: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x29343cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_293440:
    // 0x293440: 0x61023  negu        $v0, $a2
    ctx->pc = 0x293440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x293444: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x293444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x293448: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x293448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x29344c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293450: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x293450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293458: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x293458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x29345c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x293460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x293460u;
    {
        const bool branch_taken_0x293460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293460u;
            // 0x293464: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293460) {
            ctx->pc = 0x293498u;
            goto label_293498;
        }
    }
    ctx->pc = 0x293468u;
label_293468:
    // 0x293468: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x293468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x29346c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293470: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x293470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x293474: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x293474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x293478: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x293478u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x29347c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x293480: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x293480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x293484: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x293488: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x293488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29348c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29348cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293490: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x293490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x293494: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x293494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_293498:
    // 0x293498: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x293498u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x29349c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29349cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2934a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2934a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2934a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2934a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2934a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2934ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2934acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2934b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2934b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2934b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2934b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2934b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2934B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2934BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2934B8u;
            // 0x2934bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2933B8u: goto label_2933b8;
            case 0x2933E8u: goto label_2933e8;
            case 0x2933FCu: goto label_2933fc;
            case 0x293440u: goto label_293440;
            case 0x293468u: goto label_293468;
            case 0x293498u: goto label_293498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2934C0u;
}
