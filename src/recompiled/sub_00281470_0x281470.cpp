#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281470
// Address: 0x281470 - 0x281510
void sub_00281470_0x281470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281470_0x281470");
#endif

    ctx->pc = 0x281470u;

    // 0x281470: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x281474: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x281474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x281478: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x281478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x28147c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28147cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281480: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x281480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x281484: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x281484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x281488: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x281488u;
    SET_GPR_U32(ctx, 31, 0x281490u);
    ctx->pc = 0x28148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281488u;
            // 0x28148c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281490u; }
        if (ctx->pc != 0x281490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281490u; }
        if (ctx->pc != 0x281490u) { return; }
    }
    ctx->pc = 0x281490u;
    // 0x281490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x281490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281494: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x281494u;
    {
        const bool branch_taken_0x281494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281494u;
            // 0x281498: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281494) {
            ctx->pc = 0x2814FCu;
            goto label_2814fc;
        }
    }
    ctx->pc = 0x28149Cu;
    // 0x28149c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2814a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2814a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2814a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814ac: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x2814ACu;
    SET_GPR_U32(ctx, 31, 0x2814B4u);
    ctx->pc = 0x2814B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814ACu;
            // 0x2814b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B4u; }
        if (ctx->pc != 0x2814B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B4u; }
        if (ctx->pc != 0x2814B4u) { return; }
    }
    ctx->pc = 0x2814B4u;
    // 0x2814b4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2814b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2814b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2814b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814bc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2814bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2814c0: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2814C0u;
    {
        const bool branch_taken_0x2814c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2814C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814C0u;
            // 0x2814c4: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814c0) {
            ctx->pc = 0x2814FCu;
            goto label_2814fc;
        }
    }
    ctx->pc = 0x2814C8u;
    // 0x2814c8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2814c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2814cc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2814ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2814d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2814D0u;
    {
        const bool branch_taken_0x2814d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2814D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814D0u;
            // 0x2814d4: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814d0) {
            ctx->pc = 0x2814E4u;
            goto label_2814e4;
        }
    }
    ctx->pc = 0x2814D8u;
    // 0x2814d8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2814d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2814dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2814DCu;
    {
        const bool branch_taken_0x2814dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814DCu;
            // 0x2814e0: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814dc) {
            ctx->pc = 0x2814FCu;
            goto label_2814fc;
        }
    }
    ctx->pc = 0x2814E4u;
label_2814e4:
    // 0x2814e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2814e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814e8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2814e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2814ec: 0xc09fd8e  jal         func_27F638
    ctx->pc = 0x2814ECu;
    SET_GPR_U32(ctx, 31, 0x2814F4u);
    ctx->pc = 0x2814F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814ECu;
            // 0x2814f0: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F638u;
    if (runtime->hasFunction(0x27F638u)) {
        auto targetFn = runtime->lookupFunction(0x27F638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814F4u; }
        if (ctx->pc != 0x2814F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F638_0x27f638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814F4u; }
        if (ctx->pc != 0x2814F4u) { return; }
    }
    ctx->pc = 0x2814F4u;
    // 0x2814f4: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2814f8: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x2814f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2814fc:
    // 0x2814fc: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x2814fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x281500: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x281500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x281504: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x281504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x281508: 0x3e00008  jr          $ra
    ctx->pc = 0x281508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281508u;
            // 0x28150c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2814E4u: goto label_2814e4;
            case 0x2814FCu: goto label_2814fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281510u;
}
