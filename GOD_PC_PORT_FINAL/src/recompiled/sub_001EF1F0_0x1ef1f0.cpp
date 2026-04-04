#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF1F0
// Address: 0x1ef1f0 - 0x1ef2d8
void sub_001EF1F0_0x1ef1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF1F0_0x1ef1f0");
#endif

    ctx->pc = 0x1ef1f0u;

    // 0x1ef1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef1f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ef1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ef1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef1fc: 0xc07bf62  jal         func_1EFD88
    ctx->pc = 0x1EF1FCu;
    SET_GPR_U32(ctx, 31, 0x1EF204u);
    ctx->pc = 0x1EF200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1FCu;
            // 0x1ef200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD88u;
    if (runtime->hasFunction(0x1EFD88u)) {
        auto targetFn = runtime->lookupFunction(0x1EFD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF204u; }
        if (ctx->pc != 0x1EF204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFD88_0x1efd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF204u; }
        if (ctx->pc != 0x1EF204u) { return; }
    }
    ctx->pc = 0x1EF204u;
    // 0x1ef204: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef208: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1ef208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ef20c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EF20Cu;
    {
        const bool branch_taken_0x1ef20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF20Cu;
            // 0x1ef210: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef20c) {
            ctx->pc = 0x1EF2C4u;
            goto label_1ef2c4;
        }
    }
    ctx->pc = 0x1EF214u;
    // 0x1ef214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ef218: 0x244272d0  addiu       $v0, $v0, 0x72D0
    ctx->pc = 0x1ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29392));
    // 0x1ef21c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef224: 0x400008  jr          $v0
    ctx->pc = 0x1EF224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF22Cu: goto label_1ef22c;
            case 0x1EF25Cu: goto label_1ef25c;
            case 0x1EF27Cu: goto label_1ef27c;
            case 0x1EF29Cu: goto label_1ef29c;
            case 0x1EF2B4u: goto label_1ef2b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF22Cu;
label_1ef22c:
    // 0x1ef22c: 0x8e0408c4  lw          $a0, 0x8C4($s0)
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
    // 0x1ef230: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ef234: 0xc05ee32  jal         func_17B8C8
    ctx->pc = 0x1EF234u;
    SET_GPR_U32(ctx, 31, 0x1EF23Cu);
    ctx->pc = 0x1EF238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF234u;
            // 0x1ef238: 0x24a5d230  addiu       $a1, $a1, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C8u;
    if (runtime->hasFunction(0x17B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF23Cu; }
        if (ctx->pc != 0x1EF23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b8c8_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF23Cu; }
        if (ctx->pc != 0x1EF23Cu) { return; }
    }
    ctx->pc = 0x1EF23Cu;
    // 0x1ef23c: 0xc07ba9a  jal         func_1EEA68
    ctx->pc = 0x1EF23Cu;
    SET_GPR_U32(ctx, 31, 0x1EF244u);
    ctx->pc = 0x1EF240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF23Cu;
            // 0x1ef240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA68u;
    if (runtime->hasFunction(0x1EEA68u)) {
        auto targetFn = runtime->lookupFunction(0x1EEA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF244u; }
        if (ctx->pc != 0x1EF244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEA68_0x1eea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF244u; }
        if (ctx->pc != 0x1EF244u) { return; }
    }
    ctx->pc = 0x1EF244u;
    // 0x1ef244: 0xc07bf54  jal         func_1EFD50
    ctx->pc = 0x1EF244u;
    SET_GPR_U32(ctx, 31, 0x1EF24Cu);
    ctx->pc = 0x1EF248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF244u;
            // 0x1ef248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD50u;
    if (runtime->hasFunction(0x1EFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1EFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF24Cu; }
        if (ctx->pc != 0x1EF24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1efd50_0x1efd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF24Cu; }
        if (ctx->pc != 0x1EF24Cu) { return; }
    }
    ctx->pc = 0x1EF24Cu;
    // 0x1ef24c: 0xc07bf9e  jal         func_1EFE78
    ctx->pc = 0x1EF24Cu;
    SET_GPR_U32(ctx, 31, 0x1EF254u);
    ctx->pc = 0x1EF250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF24Cu;
            // 0x1ef250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE78u;
    if (runtime->hasFunction(0x1EFE78u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF254u; }
        if (ctx->pc != 0x1EF254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFE78_0x1efe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF254u; }
        if (ctx->pc != 0x1EF254u) { return; }
    }
    ctx->pc = 0x1EF254u;
    // 0x1ef254: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF254u;
    {
        const bool branch_taken_0x1ef254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF254u;
            // 0x1ef258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef254) {
            ctx->pc = 0x1EF2C8u;
            goto label_1ef2c8;
        }
    }
    ctx->pc = 0x1EF25Cu;
label_1ef25c:
    // 0x1ef25c: 0x8e0408c4  lw          $a0, 0x8C4($s0)
    ctx->pc = 0x1ef25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
    // 0x1ef260: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ef264: 0xc05ee32  jal         func_17B8C8
    ctx->pc = 0x1EF264u;
    SET_GPR_U32(ctx, 31, 0x1EF26Cu);
    ctx->pc = 0x1EF268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF264u;
            // 0x1ef268: 0x24a5d210  addiu       $a1, $a1, -0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C8u;
    if (runtime->hasFunction(0x17B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF26Cu; }
        if (ctx->pc != 0x1EF26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b8c8_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF26Cu; }
        if (ctx->pc != 0x1EF26Cu) { return; }
    }
    ctx->pc = 0x1EF26Cu;
    // 0x1ef26c: 0xc07bcb6  jal         func_1EF2D8
    ctx->pc = 0x1EF26Cu;
    SET_GPR_U32(ctx, 31, 0x1EF274u);
    ctx->pc = 0x1EF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF26Cu;
            // 0x1ef270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2D8u;
    if (runtime->hasFunction(0x1EF2D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF274u; }
        if (ctx->pc != 0x1EF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF2D8_0x1ef2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF274u; }
        if (ctx->pc != 0x1EF274u) { return; }
    }
    ctx->pc = 0x1EF274u;
    // 0x1ef274: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EF274u;
    {
        const bool branch_taken_0x1ef274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF274u;
            // 0x1ef278: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef274) {
            ctx->pc = 0x1EF2C8u;
            goto label_1ef2c8;
        }
    }
    ctx->pc = 0x1EF27Cu;
label_1ef27c:
    // 0x1ef27c: 0x8e0408c4  lw          $a0, 0x8C4($s0)
    ctx->pc = 0x1ef27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
    // 0x1ef280: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ef280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ef284: 0xc05ee32  jal         func_17B8C8
    ctx->pc = 0x1EF284u;
    SET_GPR_U32(ctx, 31, 0x1EF28Cu);
    ctx->pc = 0x1EF288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF284u;
            // 0x1ef288: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C8u;
    if (runtime->hasFunction(0x17B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF28Cu; }
        if (ctx->pc != 0x1EF28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b8c8_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF28Cu; }
        if (ctx->pc != 0x1EF28Cu) { return; }
    }
    ctx->pc = 0x1EF28Cu;
    // 0x1ef28c: 0xc07bdaa  jal         func_1EF6A8
    ctx->pc = 0x1EF28Cu;
    SET_GPR_U32(ctx, 31, 0x1EF294u);
    ctx->pc = 0x1EF290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF28Cu;
            // 0x1ef290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF6A8u;
    if (runtime->hasFunction(0x1EF6A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF294u; }
        if (ctx->pc != 0x1EF294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF6A8_0x1ef6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF294u; }
        if (ctx->pc != 0x1EF294u) { return; }
    }
    ctx->pc = 0x1EF294u;
    // 0x1ef294: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF294u;
    {
        const bool branch_taken_0x1ef294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF294u;
            // 0x1ef298: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef294) {
            ctx->pc = 0x1EF2C8u;
            goto label_1ef2c8;
        }
    }
    ctx->pc = 0x1EF29Cu;
label_1ef29c:
    // 0x1ef29c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ef29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ef2a0: 0x8e0408c4  lw          $a0, 0x8C4($s0)
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
    // 0x1ef2a4: 0xc05ee32  jal         func_17B8C8
    ctx->pc = 0x1EF2A4u;
    SET_GPR_U32(ctx, 31, 0x1EF2ACu);
    ctx->pc = 0x1EF2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2A4u;
            // 0x1ef2a8: 0x24a5d230  addiu       $a1, $a1, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C8u;
    if (runtime->hasFunction(0x17B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2ACu; }
        if (ctx->pc != 0x1EF2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b8c8_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2ACu; }
        if (ctx->pc != 0x1EF2ACu) { return; }
    }
    ctx->pc = 0x1EF2ACu;
    // 0x1ef2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF2ACu;
    {
        const bool branch_taken_0x1ef2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2ACu;
            // 0x1ef2b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2ac) {
            ctx->pc = 0x1EF2C8u;
            goto label_1ef2c8;
        }
    }
    ctx->pc = 0x1EF2B4u;
label_1ef2b4:
    // 0x1ef2b4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ef2b8: 0x8e0408c4  lw          $a0, 0x8C4($s0)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
    // 0x1ef2bc: 0xc05ee32  jal         func_17B8C8
    ctx->pc = 0x1EF2BCu;
    SET_GPR_U32(ctx, 31, 0x1EF2C4u);
    ctx->pc = 0x1EF2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2BCu;
            // 0x1ef2c0: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C8u;
    if (runtime->hasFunction(0x17B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2C4u; }
        if (ctx->pc != 0x1EF2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b8c8_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF2C4u; }
        if (ctx->pc != 0x1EF2C4u) { return; }
    }
    ctx->pc = 0x1EF2C4u;
label_1ef2c4:
    // 0x1ef2c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ef2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef2c8:
    // 0x1ef2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF2CCu;
            // 0x1ef2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF22Cu: goto label_1ef22c;
            case 0x1EF25Cu: goto label_1ef25c;
            case 0x1EF27Cu: goto label_1ef27c;
            case 0x1EF29Cu: goto label_1ef29c;
            case 0x1EF2B4u: goto label_1ef2b4;
            case 0x1EF2C4u: goto label_1ef2c4;
            case 0x1EF2C8u: goto label_1ef2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF2D4u;
    // 0x1ef2d4: 0x0  nop
    ctx->pc = 0x1ef2d4u;
    // NOP
}
