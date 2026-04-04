#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002875B8
// Address: 0x2875b8 - 0x287ad8
void sub_002875B8_0x2875b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002875B8_0x2875b8");
#endif

    ctx->pc = 0x2875b8u;

    // 0x2875b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2875b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2875bc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2875bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2875c0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2875c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2875c4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2875c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2875c8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2875c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2875cc: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2875ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2875d0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2875d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2875d4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2875d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2875d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2875d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2875dc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2875dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2875e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2875e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2875e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2875e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875e8: 0x2f03f  dsra32      $fp, $v0, 0
    ctx->pc = 0x2875e8u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2875ec: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2875ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2875f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2875f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2875f4: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x2875f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x2875f8: 0x3c38024  and         $s0, $fp, $v1
    ctx->pc = 0x2875f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x2875fc: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x2875fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x287600: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287604: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287604u;
    {
        const bool branch_taken_0x287604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287604u;
            // 0x287608: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287604) {
            ctx->pc = 0x287620u;
            goto label_287620;
        }
    }
    ctx->pc = 0x28760Cu;
    // 0x28760c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28760cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287610: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x287610u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x287614: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287614u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287618: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x287618u;
    {
        const bool branch_taken_0x287618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287618u;
            // 0x28761c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287618) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x287620u;
label_287620:
    // 0x287620: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x287620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x287624: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x287624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x287628: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28762c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x28762Cu;
    {
        const bool branch_taken_0x28762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28762Cu;
            // 0x287630: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28762c) {
            ctx->pc = 0x28774Cu;
            goto label_28774c;
        }
    }
    ctx->pc = 0x287634u;
    // 0x287634: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x287634u;
    {
        const bool branch_taken_0x287634 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x287634) {
            ctx->pc = 0x2876C4u;
            goto label_2876c4;
        }
    }
    ctx->pc = 0x28763Cu;
    // 0x28763c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x28763cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287640: 0xdc2557d8  ld          $a1, 0x57D8($at)
    ctx->pc = 0x287640u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22488)));
    // 0x287644: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287644u;
    SET_GPR_U32(ctx, 31, 0x28764Cu);
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28764Cu; }
        if (ctx->pc != 0x28764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28764Cu; }
        if (ctx->pc != 0x28764Cu) { return; }
    }
    ctx->pc = 0x28764Cu;
    // 0x28764c: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x28764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x287650: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x287650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x287654: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287654u;
    {
        const bool branch_taken_0x287654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x287658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287654u;
            // 0x287658: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287654) {
            ctx->pc = 0x287670u;
            goto label_287670;
        }
    }
    ctx->pc = 0x28765Cu;
    // 0x28765c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x28765cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287660: 0xdc3057e0  ld          $s0, 0x57E0($at)
    ctx->pc = 0x287660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 22496)));
    // 0x287664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287668: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x287668u;
    {
        const bool branch_taken_0x287668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287668u;
            // 0x28766c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287668) {
            ctx->pc = 0x287694u;
            goto label_287694;
        }
    }
    ctx->pc = 0x287670u;
label_287670:
    // 0x287670: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287674: 0xdc2557e8  ld          $a1, 0x57E8($at)
    ctx->pc = 0x287674u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22504)));
    // 0x287678: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x28767c: 0xdc3057f0  ld          $s0, 0x57F0($at)
    ctx->pc = 0x28767cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 22512)));
    // 0x287680: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287680u;
    SET_GPR_U32(ctx, 31, 0x287688u);
    ctx->pc = 0x287684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287680u;
            // 0x287684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287688u; }
        if (ctx->pc != 0x287688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287688u; }
        if (ctx->pc != 0x287688u) { return; }
    }
    ctx->pc = 0x287688u;
    // 0x287688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28768c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_287694:
    // 0x287694: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287694u;
    SET_GPR_U32(ctx, 31, 0x28769Cu);
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28769Cu; }
        if (ctx->pc != 0x28769Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28769Cu; }
        if (ctx->pc != 0x28769Cu) { return; }
    }
    ctx->pc = 0x28769Cu;
    // 0x28769c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2876a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876a4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2876A4u;
    SET_GPR_U32(ctx, 31, 0x2876ACu);
    ctx->pc = 0x2876A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2876A4u;
            // 0x2876a8: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876ACu; }
        if (ctx->pc != 0x2876ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876ACu; }
        if (ctx->pc != 0x2876ACu) { return; }
    }
    ctx->pc = 0x2876ACu;
    // 0x2876ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2876acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876b0: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2876B0u;
    SET_GPR_U32(ctx, 31, 0x2876B8u);
    ctx->pc = 0x2876B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2876B0u;
            // 0x2876b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876B8u; }
        if (ctx->pc != 0x2876B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876B8u; }
        if (ctx->pc != 0x2876B8u) { return; }
    }
    ctx->pc = 0x2876B8u;
    // 0x2876b8: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2876b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x2876bc: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x2876BCu;
    {
        const bool branch_taken_0x2876bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876BCu;
            // 0x2876c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876bc) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x2876C4u;
label_2876c4:
    // 0x2876c4: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2876c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2876c8: 0xdc2557f8  ld          $a1, 0x57F8($at)
    ctx->pc = 0x2876c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22520)));
    // 0x2876cc: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2876CCu;
    SET_GPR_U32(ctx, 31, 0x2876D4u);
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876D4u; }
        if (ctx->pc != 0x2876D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2876D4u; }
        if (ctx->pc != 0x2876D4u) { return; }
    }
    ctx->pc = 0x2876D4u;
    // 0x2876d4: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x2876d8: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x2876d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x2876dc: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2876DCu;
    {
        const bool branch_taken_0x2876dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2876E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876DCu;
            // 0x2876e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876dc) {
            ctx->pc = 0x2876F8u;
            goto label_2876f8;
        }
    }
    ctx->pc = 0x2876E4u;
    // 0x2876e4: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2876e8: 0xdc305800  ld          $s0, 0x5800($at)
    ctx->pc = 0x2876e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 22528)));
    // 0x2876ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2876ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2876F0u;
    {
        const bool branch_taken_0x2876f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876F0u;
            // 0x2876f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876f0) {
            ctx->pc = 0x28771Cu;
            goto label_28771c;
        }
    }
    ctx->pc = 0x2876F8u;
label_2876f8:
    // 0x2876f8: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2876f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2876fc: 0xdc255808  ld          $a1, 0x5808($at)
    ctx->pc = 0x2876fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22536)));
    // 0x287700: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287704: 0xdc305810  ld          $s0, 0x5810($at)
    ctx->pc = 0x287704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 22544)));
    // 0x287708: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287708u;
    SET_GPR_U32(ctx, 31, 0x287710u);
    ctx->pc = 0x28770Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287708u;
            // 0x28770c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287710u; }
        if (ctx->pc != 0x287710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287710u; }
        if (ctx->pc != 0x287710u) { return; }
    }
    ctx->pc = 0x287710u;
    // 0x287710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28771c:
    // 0x28771c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28771Cu;
    SET_GPR_U32(ctx, 31, 0x287724u);
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287724u; }
        if (ctx->pc != 0x287724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287724u; }
        if (ctx->pc != 0x287724u) { return; }
    }
    ctx->pc = 0x287724u;
    // 0x287724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28772c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28772Cu;
    SET_GPR_U32(ctx, 31, 0x287734u);
    ctx->pc = 0x287730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28772Cu;
            // 0x287730: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287734u; }
        if (ctx->pc != 0x287734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287734u; }
        if (ctx->pc != 0x287734u) { return; }
    }
    ctx->pc = 0x287734u;
    // 0x287734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287738: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287738u;
    SET_GPR_U32(ctx, 31, 0x287740u);
    ctx->pc = 0x28773Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287738u;
            // 0x28773c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287740u; }
        if (ctx->pc != 0x287740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287740u; }
        if (ctx->pc != 0x287740u) { return; }
    }
    ctx->pc = 0x287740u;
    // 0x287740: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287740u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287744: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x287744u;
    {
        const bool branch_taken_0x287744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287744u;
            // 0x287748: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287744) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x28774Cu;
label_28774c:
    // 0x28774c: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x287750: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287754: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x287754u;
    {
        const bool branch_taken_0x287754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287754u;
            // 0x287758: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287754) {
            ctx->pc = 0x28797Cu;
            goto label_28797c;
        }
    }
    ctx->pc = 0x28775Cu;
    // 0x28775c: 0xc0a2364  jal         func_288D90
    ctx->pc = 0x28775Cu;
    SET_GPR_U32(ctx, 31, 0x287764u);
    ctx->pc = 0x288D90u;
    if (runtime->hasFunction(0x288D90u)) {
        auto targetFn = runtime->lookupFunction(0x288D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287764u; }
        if (ctx->pc != 0x287764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_288d90_0x288dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287764u; }
        if (ctx->pc != 0x287764u) { return; }
    }
    ctx->pc = 0x287764u;
    // 0x287764: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287768: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x28776c: 0xdc255818  ld          $a1, 0x5818($at)
    ctx->pc = 0x28776cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22552)));
    // 0x287770: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287770u;
    SET_GPR_U32(ctx, 31, 0x287778u);
    ctx->pc = 0x287774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287770u;
            // 0x287774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287778u; }
        if (ctx->pc != 0x287778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287778u; }
        if (ctx->pc != 0x287778u) { return; }
    }
    ctx->pc = 0x287778u;
    // 0x287778: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x287778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28777c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28777cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x287780: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287780u;
    SET_GPR_U32(ctx, 31, 0x287788u);
    ctx->pc = 0x287784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287780u;
            // 0x287784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287788u; }
        if (ctx->pc != 0x287788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287788u; }
        if (ctx->pc != 0x287788u) { return; }
    }
    ctx->pc = 0x287788u;
    // 0x287788: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x287788u;
    SET_GPR_U32(ctx, 31, 0x287790u);
    ctx->pc = 0x28778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287788u;
            // 0x28778c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287790u; }
        if (ctx->pc != 0x287790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287790u; }
        if (ctx->pc != 0x287790u) { return; }
    }
    ctx->pc = 0x287790u;
    // 0x287790: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x287790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287794: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x287794u;
    SET_GPR_U32(ctx, 31, 0x28779Cu);
    ctx->pc = 0x287798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287794u;
            // 0x287798: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28779Cu; }
        if (ctx->pc != 0x28779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28779Cu; }
        if (ctx->pc != 0x28779Cu) { return; }
    }
    ctx->pc = 0x28779Cu;
    // 0x28779c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28779cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877a0: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2877a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2877a4: 0xdc255820  ld          $a1, 0x5820($at)
    ctx->pc = 0x2877a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22560)));
    // 0x2877a8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2877A8u;
    SET_GPR_U32(ctx, 31, 0x2877B0u);
    ctx->pc = 0x2877ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2877A8u;
            // 0x2877ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877B0u; }
        if (ctx->pc != 0x2877B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877B0u; }
        if (ctx->pc != 0x2877B0u) { return; }
    }
    ctx->pc = 0x2877B0u;
    // 0x2877b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2877b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877b4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2877B4u;
    SET_GPR_U32(ctx, 31, 0x2877BCu);
    ctx->pc = 0x2877B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2877B4u;
            // 0x2877b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877BCu; }
        if (ctx->pc != 0x2877BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877BCu; }
        if (ctx->pc != 0x2877BCu) { return; }
    }
    ctx->pc = 0x2877BCu;
    // 0x2877bc: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2877bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2877c0: 0xdc255828  ld          $a1, 0x5828($at)
    ctx->pc = 0x2877c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22568)));
    // 0x2877c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2877c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877c8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2877C8u;
    SET_GPR_U32(ctx, 31, 0x2877D0u);
    ctx->pc = 0x2877CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2877C8u;
            // 0x2877cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877D0u; }
        if (ctx->pc != 0x2877D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2877D0u; }
        if (ctx->pc != 0x2877D0u) { return; }
    }
    ctx->pc = 0x2877D0u;
    // 0x2877d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2877d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2877d4: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2877d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2877D8u;
    {
        const bool branch_taken_0x2877d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2877D8u;
            // 0x2877dc: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877d8) {
            ctx->pc = 0x2877FCu;
            goto label_2877fc;
        }
    }
    ctx->pc = 0x2877E0u;
    // 0x2877e0: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2877e4: 0x24425708  addiu       $v0, $v0, 0x5708
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22280));
    // 0x2877e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2877ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2877f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2877f4: 0x1604004c  bne         $s0, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2877F4u;
    {
        const bool branch_taken_0x2877f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2877F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2877F4u;
            // 0x2877f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877f4) {
            ctx->pc = 0x287928u;
            goto label_287928;
        }
    }
    ctx->pc = 0x2877FCu;
label_2877fc:
    // 0x2877fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2877fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287800: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287800u;
    SET_GPR_U32(ctx, 31, 0x287808u);
    ctx->pc = 0x287804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287800u;
            // 0x287804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287808u; }
        if (ctx->pc != 0x287808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287808u; }
        if (ctx->pc != 0x287808u) { return; }
    }
    ctx->pc = 0x287808u;
    // 0x287808: 0x10bd03  sra         $s7, $s0, 20
    ctx->pc = 0x287808u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    // 0x28780c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x28780cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x287810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287814: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x287814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x287818: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x287818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x28781c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x287820: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x287820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x287824: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x287824u;
    {
        const bool branch_taken_0x287824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287824) {
            ctx->pc = 0x287828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287824u;
            // 0x287828: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287938u;
            goto label_287938;
        }
    }
    ctx->pc = 0x28782Cu;
    // 0x28782c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x28782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287830: 0xdc255830  ld          $a1, 0x5830($at)
    ctx->pc = 0x287830u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22576)));
    // 0x287834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x287834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287838: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287838u;
    SET_GPR_U32(ctx, 31, 0x287840u);
    ctx->pc = 0x28783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287838u;
            // 0x28783c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287840u; }
        if (ctx->pc != 0x287840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287840u; }
        if (ctx->pc != 0x287840u) { return; }
    }
    ctx->pc = 0x287840u;
    // 0x287840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287848: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287848u;
    SET_GPR_U32(ctx, 31, 0x287850u);
    ctx->pc = 0x28784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287848u;
            // 0x28784c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287850u; }
        if (ctx->pc != 0x287850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287850u; }
        if (ctx->pc != 0x287850u) { return; }
    }
    ctx->pc = 0x287850u;
    // 0x287850: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287854: 0xdc255838  ld          $a1, 0x5838($at)
    ctx->pc = 0x287854u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x287858: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28785c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28785Cu;
    SET_GPR_U32(ctx, 31, 0x287864u);
    ctx->pc = 0x287860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28785Cu;
            // 0x287860: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287864u; }
        if (ctx->pc != 0x287864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287864u; }
        if (ctx->pc != 0x287864u) { return; }
    }
    ctx->pc = 0x287864u;
    // 0x287864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28786c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28786Cu;
    SET_GPR_U32(ctx, 31, 0x287874u);
    ctx->pc = 0x287870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28786Cu;
            // 0x287870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287874u; }
        if (ctx->pc != 0x287874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287874u; }
        if (ctx->pc != 0x287874u) { return; }
    }
    ctx->pc = 0x287874u;
    // 0x287874: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287878: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287878u;
    SET_GPR_U32(ctx, 31, 0x287880u);
    ctx->pc = 0x28787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287878u;
            // 0x28787c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287880u; }
        if (ctx->pc != 0x287880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287880u; }
        if (ctx->pc != 0x287880u) { return; }
    }
    ctx->pc = 0x287880u;
    // 0x287880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287884: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287884u;
    SET_GPR_U32(ctx, 31, 0x28788Cu);
    ctx->pc = 0x287888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287884u;
            // 0x287888: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28788Cu; }
        if (ctx->pc != 0x28788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28788Cu; }
        if (ctx->pc != 0x28788Cu) { return; }
    }
    ctx->pc = 0x28788Cu;
    // 0x28788c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28788cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287894: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287894u;
    SET_GPR_U32(ctx, 31, 0x28789Cu);
    ctx->pc = 0x287898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287894u;
            // 0x287898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28789Cu; }
        if (ctx->pc != 0x28789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28789Cu; }
        if (ctx->pc != 0x28789Cu) { return; }
    }
    ctx->pc = 0x28789Cu;
    // 0x28789c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x28789cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x2878a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2878a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878a4: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x2878a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x2878a8: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2878a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2878ac: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x2878acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2878b0: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x2878b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2878b4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2878B4u;
    {
        const bool branch_taken_0x2878b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878b4) {
            ctx->pc = 0x2878B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2878B4u;
            // 0x2878b8: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287938u;
            goto label_287938;
        }
    }
    ctx->pc = 0x2878BCu;
    // 0x2878bc: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2878bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2878c0: 0xdc255840  ld          $a1, 0x5840($at)
    ctx->pc = 0x2878c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22592)));
    // 0x2878c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2878c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878c8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2878C8u;
    SET_GPR_U32(ctx, 31, 0x2878D0u);
    ctx->pc = 0x2878CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2878C8u;
            // 0x2878cc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878D0u; }
        if (ctx->pc != 0x2878D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878D0u; }
        if (ctx->pc != 0x2878D0u) { return; }
    }
    ctx->pc = 0x2878D0u;
    // 0x2878d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2878d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2878d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878d8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2878D8u;
    SET_GPR_U32(ctx, 31, 0x2878E0u);
    ctx->pc = 0x2878DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2878D8u;
            // 0x2878dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878E0u; }
        if (ctx->pc != 0x2878E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878E0u; }
        if (ctx->pc != 0x2878E0u) { return; }
    }
    ctx->pc = 0x2878E0u;
    // 0x2878e0: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2878e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2878e4: 0xdc255848  ld          $a1, 0x5848($at)
    ctx->pc = 0x2878e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22600)));
    // 0x2878e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878ec: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2878ECu;
    SET_GPR_U32(ctx, 31, 0x2878F4u);
    ctx->pc = 0x2878F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2878ECu;
            // 0x2878f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878F4u; }
        if (ctx->pc != 0x2878F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2878F4u; }
        if (ctx->pc != 0x2878F4u) { return; }
    }
    ctx->pc = 0x2878F4u;
    // 0x2878f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2878f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2878f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878fc: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2878FCu;
    SET_GPR_U32(ctx, 31, 0x287904u);
    ctx->pc = 0x287900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2878FCu;
            // 0x287900: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287904u; }
        if (ctx->pc != 0x287904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287904u; }
        if (ctx->pc != 0x287904u) { return; }
    }
    ctx->pc = 0x287904u;
    // 0x287904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287908: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287908u;
    SET_GPR_U32(ctx, 31, 0x287910u);
    ctx->pc = 0x28790Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287908u;
            // 0x28790c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287910u; }
        if (ctx->pc != 0x287910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287910u; }
        if (ctx->pc != 0x287910u) { return; }
    }
    ctx->pc = 0x287910u;
    // 0x287910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287914: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287914u;
    SET_GPR_U32(ctx, 31, 0x28791Cu);
    ctx->pc = 0x287918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287914u;
            // 0x287918: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28791Cu; }
        if (ctx->pc != 0x28791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28791Cu; }
        if (ctx->pc != 0x28791Cu) { return; }
    }
    ctx->pc = 0x28791Cu;
    // 0x28791c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287924: 0x0  nop
    ctx->pc = 0x287924u;
    // NOP
label_287928:
    // 0x287928: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287928u;
    SET_GPR_U32(ctx, 31, 0x287930u);
    ctx->pc = 0x28792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287928u;
            // 0x28792c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287930u; }
        if (ctx->pc != 0x287930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287930u; }
        if (ctx->pc != 0x287930u) { return; }
    }
    ctx->pc = 0x287930u;
    // 0x287930: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x287930u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x287934: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x287934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_287938:
    // 0x287938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28793c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28793Cu;
    SET_GPR_U32(ctx, 31, 0x287944u);
    ctx->pc = 0x287940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28793Cu;
            // 0x287940: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287944u; }
        if (ctx->pc != 0x287944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287944u; }
        if (ctx->pc != 0x287944u) { return; }
    }
    ctx->pc = 0x287944u;
    // 0x287944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287948: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287948u;
    SET_GPR_U32(ctx, 31, 0x287950u);
    ctx->pc = 0x28794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287948u;
            // 0x28794c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287950u; }
        if (ctx->pc != 0x287950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287950u; }
        if (ctx->pc != 0x287950u) { return; }
    }
    ctx->pc = 0x287950u;
    // 0x287950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287954: 0x7c10052  bgez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x287954u;
    {
        const bool branch_taken_0x287954 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x287958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287954u;
            // 0x287958: 0xfe910008  sd          $s1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287954) {
            ctx->pc = 0x287AA0u;
            goto label_287aa0;
        }
    }
    ctx->pc = 0x28795Cu;
    // 0x28795c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28795cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287960: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287964: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287964u;
    SET_GPR_U32(ctx, 31, 0x28796Cu);
    ctx->pc = 0x287968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287964u;
            // 0x287968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28796Cu; }
        if (ctx->pc != 0x28796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28796Cu; }
        if (ctx->pc != 0x28796Cu) { return; }
    }
    ctx->pc = 0x28796Cu;
    // 0x28796c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x28796cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x287970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287974: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x287974u;
    {
        const bool branch_taken_0x287974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287974u;
            // 0x287978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287974) {
            ctx->pc = 0x287A8Cu;
            goto label_287a8c;
        }
    }
    ctx->pc = 0x28797Cu;
label_28797c:
    // 0x28797c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287980: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287984u;
    {
        const bool branch_taken_0x287984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287984u;
            // 0x287988: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287984) {
            ctx->pc = 0x2879A8u;
            goto label_2879a8;
        }
    }
    ctx->pc = 0x28798Cu;
    // 0x28798c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28798Cu;
    SET_GPR_U32(ctx, 31, 0x287994u);
    ctx->pc = 0x287990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28798Cu;
            // 0x287990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287994u; }
        if (ctx->pc != 0x287994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287994u; }
        if (ctx->pc != 0x287994u) { return; }
    }
    ctx->pc = 0x287994u;
    // 0x287994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287998: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x287998u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x28799c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28799cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2879A0u;
    {
        const bool branch_taken_0x2879a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2879A0u;
            // 0x2879a4: 0xfe830008  sd          $v1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879a0) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x2879A8u;
label_2879a8:
    // 0x2879a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2879a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2879ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2879acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2879b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2879b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2879b4: 0x102503  sra         $a0, $s0, 20
    ctx->pc = 0x2879b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
    // 0x2879b8: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x2879bc: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x2879c0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2879c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2879c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2879c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2879c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2879c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2879cc: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x2879ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2879d0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2879d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2879d8:
    // 0x2879d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2879d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879dc: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x2879DCu;
    SET_GPR_U32(ctx, 31, 0x2879E4u);
    ctx->pc = 0x2879E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2879DCu;
            // 0x2879e0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879E4u; }
        if (ctx->pc != 0x2879E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879E4u; }
        if (ctx->pc != 0x2879E4u) { return; }
    }
    ctx->pc = 0x2879E4u;
    // 0x2879e4: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x2879E4u;
    SET_GPR_U32(ctx, 31, 0x2879ECu);
    ctx->pc = 0x2879E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2879E4u;
            // 0x2879e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879ECu; }
        if (ctx->pc != 0x2879ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2879ECu; }
        if (ctx->pc != 0x2879ECu) { return; }
    }
    ctx->pc = 0x2879ECu;
    // 0x2879ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2879ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879f0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2879f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2879f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2879f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879f8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2879F8u;
    SET_GPR_U32(ctx, 31, 0x287A00u);
    ctx->pc = 0x2879FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2879F8u;
            // 0x2879fc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A00u; }
        if (ctx->pc != 0x287A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A00u; }
        if (ctx->pc != 0x287A00u) { return; }
    }
    ctx->pc = 0x287A00u;
    // 0x287a00: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x287a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x287a04: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x287a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x287a08: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287A08u;
    SET_GPR_U32(ctx, 31, 0x287A10u);
    ctx->pc = 0x287A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287A08u;
            // 0x287a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A10u; }
        if (ctx->pc != 0x287A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A10u; }
        if (ctx->pc != 0x287A10u) { return; }
    }
    ctx->pc = 0x287A10u;
    // 0x287a10: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x287A10u;
    {
        const bool branch_taken_0x287a10 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x287A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A10u;
            // 0x287a14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a10) {
            ctx->pc = 0x2879D8u;
            runtime->cooperativeGuestYield();
            goto label_2879d8;
        }
    }
    ctx->pc = 0x287A18u;
    // 0x287a18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287A1Cu;
    {
        const bool branch_taken_0x287a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A1Cu;
            // 0x287a20: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a1c) {
            ctx->pc = 0x287A2Cu;
            goto label_287a2c;
        }
    }
    ctx->pc = 0x287A24u;
    // 0x287a24: 0x0  nop
    ctx->pc = 0x287a24u;
    // NOP
label_287a28:
    // 0x287a28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x287a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287a2c:
    // 0x287a2c: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x287a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x287a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a34: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x287a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x287a38: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x287a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x287a3c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x287A3Cu;
    SET_GPR_U32(ctx, 31, 0x287A44u);
    ctx->pc = 0x287A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287A3Cu;
            // 0x287a40: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A44u; }
        if (ctx->pc != 0x287A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A44u; }
        if (ctx->pc != 0x287A44u) { return; }
    }
    ctx->pc = 0x287A44u;
    // 0x287a44: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x287A44u;
    {
        const bool branch_taken_0x287a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A44u;
            // 0x287a48: 0x3c09002c  lui         $t1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a44) {
            ctx->pc = 0x287A28u;
            runtime->cooperativeGuestYield();
            goto label_287a28;
        }
    }
    ctx->pc = 0x287A4Cu;
    // 0x287a4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x287a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x287a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a54: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x287a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
    // 0x287a58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x287a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a60: 0xc0a2014  jal         func_288050
    ctx->pc = 0x287A60u;
    SET_GPR_U32(ctx, 31, 0x287A68u);
    ctx->pc = 0x287A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287A60u;
            // 0x287a64: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288050u;
    if (runtime->hasFunction(0x288050u)) {
        auto targetFn = runtime->lookupFunction(0x288050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A68u; }
        if (ctx->pc != 0x287A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_288050_0x288bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A68u; }
        if (ctx->pc != 0x287A68u) { return; }
    }
    ctx->pc = 0x287A68u;
    // 0x287a68: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x287A68u;
    {
        const bool branch_taken_0x287a68 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x287A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A68u;
            // 0x287a6c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a68) {
            ctx->pc = 0x287AA0u;
            goto label_287aa0;
        }
    }
    ctx->pc = 0x287A70u;
    // 0x287a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a74: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x287a74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x287a78: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287A78u;
    SET_GPR_U32(ctx, 31, 0x287A80u);
    ctx->pc = 0x287A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287A78u;
            // 0x287a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A80u; }
        if (ctx->pc != 0x287A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A80u; }
        if (ctx->pc != 0x287A80u) { return; }
    }
    ctx->pc = 0x287A80u;
    // 0x287a80: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x287a80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x287a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a88: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x287a88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_287a8c:
    // 0x287a8c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287A8Cu;
    SET_GPR_U32(ctx, 31, 0x287A94u);
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A94u; }
        if (ctx->pc != 0x287A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287A94u; }
        if (ctx->pc != 0x287A94u) { return; }
    }
    ctx->pc = 0x287A94u;
    // 0x287a94: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287a94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287A98u;
    {
        const bool branch_taken_0x287a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A98u;
            // 0x287a9c: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a98) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x287AA0u;
label_287aa0:
    // 0x287aa0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x287aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_287aa4:
    // 0x287aa4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x287aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287aa8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x287aa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x287aac: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x287aacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287ab0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x287ab0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x287ab4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x287ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287ab8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x287ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287abc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x287abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287ac0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x287ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287ac4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x287ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287ac8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x287ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287acc: 0x3e00008  jr          $ra
    ctx->pc = 0x287ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287ACCu;
            // 0x287ad0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287620u: goto label_287620;
            case 0x287670u: goto label_287670;
            case 0x287694u: goto label_287694;
            case 0x2876C4u: goto label_2876c4;
            case 0x2876F8u: goto label_2876f8;
            case 0x28771Cu: goto label_28771c;
            case 0x28774Cu: goto label_28774c;
            case 0x2877FCu: goto label_2877fc;
            case 0x287928u: goto label_287928;
            case 0x287938u: goto label_287938;
            case 0x28797Cu: goto label_28797c;
            case 0x2879A8u: goto label_2879a8;
            case 0x2879D8u: goto label_2879d8;
            case 0x287A28u: goto label_287a28;
            case 0x287A2Cu: goto label_287a2c;
            case 0x287A8Cu: goto label_287a8c;
            case 0x287AA0u: goto label_287aa0;
            case 0x287AA4u: goto label_287aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287AD4u;
    // 0x287ad4: 0x0  nop
    ctx->pc = 0x287ad4u;
    // NOP
}
