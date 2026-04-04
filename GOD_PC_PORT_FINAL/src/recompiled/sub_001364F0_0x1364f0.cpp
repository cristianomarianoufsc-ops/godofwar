#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001364F0
// Address: 0x1364f0 - 0x1365a8
void sub_001364F0_0x1364f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001364F0_0x1364f0");
#endif

    ctx->pc = 0x1364f0u;

    // 0x1364f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1364f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1364f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1364f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1364f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1364fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x136500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136504: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x136508: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x136508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x13650c: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x136510: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x136514: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x136518: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x136518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x13651c: 0x40f809  jalr        $v0
    ctx->pc = 0x13651Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136524u);
        ctx->pc = 0x136520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13651Cu;
            // 0x136520: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136524u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136578u: goto label_136578;
            case 0x136594u: goto label_136594;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136524u; }
            if (ctx->pc != 0x136524u) { return; }
        }
        }
    }
    ctx->pc = 0x136524u;
    // 0x136524: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x136524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x136528: 0xc04f856  jal         func_13E158
    ctx->pc = 0x136528u;
    SET_GPR_U32(ctx, 31, 0x136530u);
    ctx->pc = 0x13652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136528u;
            // 0x13652c: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136530u; }
        if (ctx->pc != 0x136530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136530u; }
        if (ctx->pc != 0x136530u) { return; }
    }
    ctx->pc = 0x136530u;
    // 0x136530: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x136530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x136534: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x136534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x136538: 0xc04f824  jal         func_13E090
    ctx->pc = 0x136538u;
    SET_GPR_U32(ctx, 31, 0x136540u);
    ctx->pc = 0x13653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136538u;
            // 0x13653c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136540u; }
        if (ctx->pc != 0x136540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136540u; }
        if (ctx->pc != 0x136540u) { return; }
    }
    ctx->pc = 0x136540u;
    // 0x136540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136544: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x136544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x136548: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x136548u;
    SET_GPR_U32(ctx, 31, 0x136550u);
    ctx->pc = 0x13654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136548u;
            // 0x13654c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136550u; }
        if (ctx->pc != 0x136550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136550u; }
        if (ctx->pc != 0x136550u) { return; }
    }
    ctx->pc = 0x136550u;
    // 0x136550: 0xc04f860  jal         func_13E180
    ctx->pc = 0x136550u;
    SET_GPR_U32(ctx, 31, 0x136558u);
    ctx->pc = 0x136554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136550u;
            // 0x136554: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136558u; }
        if (ctx->pc != 0x136558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136558u; }
        if (ctx->pc != 0x136558u) { return; }
    }
    ctx->pc = 0x136558u;
    // 0x136558: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x136558u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x13655c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13655Cu;
    {
        const bool branch_taken_0x13655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13655Cu;
            // 0x136560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13655c) {
            ctx->pc = 0x136594u;
            goto label_136594;
        }
    }
    ctx->pc = 0x136564u;
    // 0x136564: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x136564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x136568: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x136568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13656c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13656cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136574: 0x0  nop
    ctx->pc = 0x136574u;
    // NOP
label_136578:
    // 0x136578: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x136578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13657c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x136580: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x136584: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x136584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x136588: 0x0  nop
    ctx->pc = 0x136588u;
    // NOP
    // 0x13658c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13658Cu;
    {
        const bool branch_taken_0x13658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13658Cu;
            // 0x136590: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13658c) {
            ctx->pc = 0x136578u;
            runtime->cooperativeGuestYield();
            goto label_136578;
        }
    }
    ctx->pc = 0x136594u;
label_136594:
    // 0x136594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x136594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13659c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1365a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1365A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365A0u;
            // 0x1365a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136578u: goto label_136578;
            case 0x136594u: goto label_136594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1365A8u;
}
