#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_107598
// Address: 0x107598 - 0x107628
void entry_107598_0x107628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_107598_0x107628");
#endif

    ctx->pc = 0x107598u;

    // 0x107598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10759c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10759cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1075a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1075a4: 0x24e80014  addiu       $t0, $a3, 0x14
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1075a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1075a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1075ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1075acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1075b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1075b4: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x1075b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1075b8: 0x1088000e  beq         $a0, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1075B8u;
    {
        const bool branch_taken_0x1075b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x1075BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1075B8u;
            // 0x1075bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075b8) {
            ctx->pc = 0x1075F4u;
            goto label_1075f4;
        }
    }
    ctx->pc = 0x1075C0u;
    // 0x1075c0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1075c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1075c4: 0x0  nop
    ctx->pc = 0x1075c4u;
    // NOP
label_1075c8:
    // 0x1075c8: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x1075c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x1075cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1075CCu;
    {
        const bool branch_taken_0x1075cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1075CCu;
            // 0x1075d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075cc) {
            ctx->pc = 0x1075E0u;
            goto label_1075e0;
        }
    }
    ctx->pc = 0x1075D4u;
    // 0x1075d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1075d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1075d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1075dc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x1075dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1075e0:
    // 0x1075e0: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1075E0u;
    {
        const bool branch_taken_0x1075e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1075e0) {
            ctx->pc = 0x1075E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1075E0u;
            // 0x1075e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107608u;
            goto label_107608;
        }
    }
    ctx->pc = 0x1075E8u;
    // 0x1075e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1075e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1075ec: 0x5488fff6  bnel        $a0, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1075ECu;
    {
        const bool branch_taken_0x1075ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x1075ec) {
            ctx->pc = 0x1075F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1075ECu;
            // 0x1075f0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1075C8u;
            runtime->cooperativeGuestYield();
            goto label_1075c8;
        }
    }
    ctx->pc = 0x1075F4u;
label_1075f4:
    // 0x1075f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1075f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075f8: 0xc041902  jal         func_106408
    ctx->pc = 0x1075F8u;
    SET_GPR_U32(ctx, 31, 0x107600u);
    ctx->pc = 0x1075FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1075F8u;
            // 0x1075fc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106408u;
    if (runtime->hasFunction(0x106408u)) {
        auto targetFn = runtime->lookupFunction(0x106408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107600u; }
        if (ctx->pc != 0x107600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106408_0x106408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107600u; }
        if (ctx->pc != 0x107600u) { return; }
    }
    ctx->pc = 0x107600u;
    // 0x107600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107608:
    // 0x107608: 0xc045e46  jal         func_117918
    ctx->pc = 0x107608u;
    SET_GPR_U32(ctx, 31, 0x107610u);
    ctx->pc = 0x10760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107608u;
            // 0x10760c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117918u;
    if (runtime->hasFunction(0x117918u)) {
        auto targetFn = runtime->lookupFunction(0x117918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107610u; }
        if (ctx->pc != 0x107610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117918_0x117918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107610u; }
        if (ctx->pc != 0x107610u) { return; }
    }
    ctx->pc = 0x107610u;
    // 0x107610: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10761c: 0x3e00008  jr          $ra
    ctx->pc = 0x10761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10761Cu;
            // 0x107620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1075C8u: goto label_1075c8;
            case 0x1075E0u: goto label_1075e0;
            case 0x1075F4u: goto label_1075f4;
            case 0x107608u: goto label_107608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107624u;
    // 0x107624: 0x0  nop
    ctx->pc = 0x107624u;
    // NOP
}
