#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154740
// Address: 0x154740 - 0x154830
void sub_00154740_0x154740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154740_0x154740");
#endif

    ctx->pc = 0x154740u;

    // 0x154740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x154748: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x154748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15474c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15474cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154750: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x154750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x154754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15475c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x15475cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154760: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x154760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x154764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154764u;
    {
        const bool branch_taken_0x154764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154764u;
            // 0x154768: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154764) {
            ctx->pc = 0x154778u;
            goto label_154778;
        }
    }
    ctx->pc = 0x15476Cu;
    // 0x15476c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154770u;
    {
        const bool branch_taken_0x154770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154770u;
            // 0x154774: 0x8c523988  lw          $s2, 0x3988($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154770) {
            ctx->pc = 0x154780u;
            goto label_154780;
        }
    }
    ctx->pc = 0x154778u;
label_154778:
    // 0x154778: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15477c: 0x8c523984  lw          $s2, 0x3984($v0)
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14724)));
label_154780:
    // 0x154780: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154784: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154788: 0x8c43e868  lw          $v1, -0x1798($v0)
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961256)));
    // 0x15478c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x154790: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x154794: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x154794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x154798: 0x40f809  jalr        $v0
    ctx->pc = 0x154798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1547A0u);
        ctx->pc = 0x15479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154798u;
            // 0x15479c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1547A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154778u: goto label_154778;
            case 0x154780u: goto label_154780;
            case 0x1547B8u: goto label_1547b8;
            case 0x1547BCu: goto label_1547bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1547A0u; }
            if (ctx->pc != 0x1547A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1547A0u;
    // 0x1547a0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1547a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1547a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1547A4u;
    {
        const bool branch_taken_0x1547a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547A4u;
            // 0x1547a8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547a4) {
            ctx->pc = 0x1547B8u;
            goto label_1547b8;
        }
    }
    ctx->pc = 0x1547ACu;
    // 0x1547ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1547ACu;
    {
        const bool branch_taken_0x1547ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547ACu;
            // 0x1547b0: 0x8c840074  lw          $a0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547ac) {
            ctx->pc = 0x1547BCu;
            goto label_1547bc;
        }
    }
    ctx->pc = 0x1547B4u;
    // 0x1547b4: 0x0  nop
    ctx->pc = 0x1547b4u;
    // NOP
label_1547b8:
    // 0x1547b8: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1547bc:
    // 0x1547bc: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1547c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1547c4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1547c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1547c8: 0x112940  sll         $a1, $s1, 5
    ctx->pc = 0x1547c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1547cc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1547CCu;
    SET_GPR_U32(ctx, 31, 0x1547D4u);
    ctx->pc = 0x1547D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547CCu;
            // 0x1547d0: 0x118900  sll         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547D4u; }
        if (ctx->pc != 0x1547D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547D4u; }
        if (ctx->pc != 0x1547D4u) { return; }
    }
    ctx->pc = 0x1547D4u;
    // 0x1547d4: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x1547d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1547d8: 0x26030098  addiu       $v1, $s0, 0x98
    ctx->pc = 0x1547d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x1547dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1547dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1547e0: 0x2610009c  addiu       $s0, $s0, 0x9C
    ctx->pc = 0x1547e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1547e4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1547e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1547e8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1547ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1547ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1547f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1547f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1547f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1547f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1547f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547fc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1547FCu;
    SET_GPR_U32(ctx, 31, 0x154804u);
    ctx->pc = 0x154800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547FCu;
            // 0x154800: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154804u; }
        if (ctx->pc != 0x154804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154804u; }
        if (ctx->pc != 0x154804u) { return; }
    }
    ctx->pc = 0x154804u;
    // 0x154804: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15480c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x15480Cu;
    SET_GPR_U32(ctx, 31, 0x154814u);
    ctx->pc = 0x154810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15480Cu;
            // 0x154810: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154814u; }
        if (ctx->pc != 0x154814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154814u; }
        if (ctx->pc != 0x154814u) { return; }
    }
    ctx->pc = 0x154814u;
    // 0x154814: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x154814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154818: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x154818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15481c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15481cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154820: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x154820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154828: 0x3e00008  jr          $ra
    ctx->pc = 0x154828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154828u;
            // 0x15482c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154778u: goto label_154778;
            case 0x154780u: goto label_154780;
            case 0x1547B8u: goto label_1547b8;
            case 0x1547BCu: goto label_1547bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154830u;
}
