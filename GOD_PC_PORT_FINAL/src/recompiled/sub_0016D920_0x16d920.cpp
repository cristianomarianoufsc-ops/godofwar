#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D920
// Address: 0x16d920 - 0x16d9f0
void sub_0016D920_0x16d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D920_0x16d920");
#endif

    ctx->pc = 0x16d920u;

    // 0x16d920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d924: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d928: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d92c: 0x2491004c  addiu       $s1, $a0, 0x4C
    ctx->pc = 0x16d92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x16d930: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d934: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x16d934u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16d938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d93c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x16d940: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d944: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16D944u;
    {
        const bool branch_taken_0x16d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D944u;
            // 0x16d948: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d944) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D94Cu;
    // 0x16d94c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x16d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16d950: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x16d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16d954: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x16d954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16d958: 0xc05d656  jal         func_175958
    ctx->pc = 0x16D958u;
    SET_GPR_U32(ctx, 31, 0x16D960u);
    ctx->pc = 0x16D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D958u;
            // 0x16d95c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D960u; }
        if (ctx->pc != 0x16D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D960u; }
        if (ctx->pc != 0x16D960u) { return; }
    }
    ctx->pc = 0x16D960u;
    // 0x16d960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d964: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x16D964u;
    SET_GPR_U32(ctx, 31, 0x16D96Cu);
    ctx->pc = 0x16D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D964u;
            // 0x16d968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D96Cu; }
        if (ctx->pc != 0x16D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D96Cu; }
        if (ctx->pc != 0x16D96Cu) { return; }
    }
    ctx->pc = 0x16D96Cu;
    // 0x16d96c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D96Cu;
    {
        const bool branch_taken_0x16d96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d96c) {
            ctx->pc = 0x16D970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D96Cu;
            // 0x16d970: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D978u;
            goto label_16d978;
        }
    }
    ctx->pc = 0x16D974u;
    // 0x16d974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d978:
    // 0x16d978: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x16d97c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16D97Cu;
    {
        const bool branch_taken_0x16d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D97Cu;
            // 0x16d980: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d97c) {
            ctx->pc = 0x16D9D8u;
            goto label_16d9d8;
        }
    }
    ctx->pc = 0x16D984u;
    // 0x16d984: 0xc05d656  jal         func_175958
    ctx->pc = 0x16D984u;
    SET_GPR_U32(ctx, 31, 0x16D98Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D98Cu; }
        if (ctx->pc != 0x16D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D98Cu; }
        if (ctx->pc != 0x16D98Cu) { return; }
    }
    ctx->pc = 0x16D98Cu;
    // 0x16d98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d990: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x16D990u;
    SET_GPR_U32(ctx, 31, 0x16D998u);
    ctx->pc = 0x16D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D990u;
            // 0x16d994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D998u; }
        if (ctx->pc != 0x16D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D998u; }
        if (ctx->pc != 0x16D998u) { return; }
    }
    ctx->pc = 0x16D998u;
    // 0x16d998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d99c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x16D99Cu;
    {
        const bool branch_taken_0x16d99c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D99Cu;
            // 0x16d9a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d99c) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9A4u;
    // 0x16d9a4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16d9a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d9a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16d9ac: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x16d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x16d9b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d9b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d9b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d9bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d9c0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x16d9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16d9c4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x16d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16d9c8: 0x40f809  jalr        $v0
    ctx->pc = 0x16D9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D9D0u);
        ctx->pc = 0x16D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9C8u;
            // 0x16d9cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D9D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D978u: goto label_16d978;
            case 0x16D9D8u: goto label_16d9d8;
            case 0x16D9DCu: goto label_16d9dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D9D0u; }
            if (ctx->pc != 0x16D9D0u) { return; }
        }
        }
    }
    ctx->pc = 0x16D9D0u;
    // 0x16d9d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16d9d4: 0x0  nop
    ctx->pc = 0x16d9d4u;
    // NOP
label_16d9d8:
    // 0x16d9d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d9dc:
    // 0x16d9dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d9e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9E8u;
            // 0x16d9ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D978u: goto label_16d978;
            case 0x16D9D8u: goto label_16d9d8;
            case 0x16D9DCu: goto label_16d9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D9F0u;
}
