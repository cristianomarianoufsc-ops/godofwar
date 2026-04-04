#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A520
// Address: 0x27a520 - 0x27a5a8
void sub_0027A520_0x27a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A520_0x27a520");
#endif

    ctx->pc = 0x27a520u;

    // 0x27a520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a524: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a528: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a52c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27a52cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a530: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x27a530u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x27a534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27a53c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27A53Cu;
    SET_GPR_U32(ctx, 31, 0x27A544u);
    ctx->pc = 0x27A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A53Cu;
            // 0x27a540: 0xae321724  sw          $s2, 0x1724($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5924), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A544u; }
        if (ctx->pc != 0x27A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A544u; }
        if (ctx->pc != 0x27A544u) { return; }
    }
    ctx->pc = 0x27A544u;
    // 0x27a544: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27a544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27a548: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x27a54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a550: 0x24a5a4c8  addiu       $a1, $a1, -0x5B38
    ctx->pc = 0x27a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943944));
    // 0x27a554: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x27a554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x27a558: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x27A558u;
    SET_GPR_U32(ctx, 31, 0x27A560u);
    ctx->pc = 0x27A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A558u;
            // 0x27a55c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A560u; }
        if (ctx->pc != 0x27A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A560u; }
        if (ctx->pc != 0x27A560u) { return; }
    }
    ctx->pc = 0x27A560u;
    // 0x27a560: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A560u;
    {
        const bool branch_taken_0x27a560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A560u;
            // 0x27a564: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a560) {
            ctx->pc = 0x27A574u;
            goto label_27a574;
        }
    }
    ctx->pc = 0x27A568u;
    // 0x27a568: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x27A568u;
    SET_GPR_U32(ctx, 31, 0x27A570u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A570u; }
        if (ctx->pc != 0x27A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A570u; }
        if (ctx->pc != 0x27A570u) { return; }
    }
    ctx->pc = 0x27A570u;
    // 0x27a570: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_27a574:
    // 0x27a574: 0xae201724  sw          $zero, 0x1724($s1)
    ctx->pc = 0x27a574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5924), GPR_U32(ctx, 0));
    // 0x27a578: 0xac521748  sw          $s2, 0x1748($v0)
    ctx->pc = 0x27a578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5960), GPR_U32(ctx, 18));
    // 0x27a57c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27a57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27a584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a590: 0x3e00008  jr          $ra
    ctx->pc = 0x27A590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A590u;
            // 0x27a594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A574u: goto label_27a574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A598u;
    // 0x27a598: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x27a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27a59c: 0x0  nop
    ctx->pc = 0x27a59cu;
    // NOP
    // 0x27a5a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a5a4: 0x0  nop
    ctx->pc = 0x27a5a4u;
    // NOP
}
