#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280980
// Address: 0x280980 - 0x280b98
void sub_00280980_0x280980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280980_0x280980");
#endif

    ctx->pc = 0x280980u;

    // 0x280980: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x280984: 0xffb30340  sd          $s3, 0x340($sp)
    ctx->pc = 0x280984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 19));
    // 0x280988: 0xffb10320  sd          $s1, 0x320($sp)
    ctx->pc = 0x280988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 17));
    // 0x28098c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28098cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280990: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x280990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x280994: 0xffbf0350  sd          $ra, 0x350($sp)
    ctx->pc = 0x280994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 31));
    // 0x280998: 0xffb20330  sd          $s2, 0x330($sp)
    ctx->pc = 0x280998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 18));
    // 0x28099c: 0xffb00310  sd          $s0, 0x310($sp)
    ctx->pc = 0x28099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
    // 0x2809a0: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x2809A0u;
    SET_GPR_U32(ctx, 31, 0x2809A8u);
    ctx->pc = 0x2809A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809A0u;
            // 0x2809a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A8u; }
        if (ctx->pc != 0x2809A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A8u; }
        if (ctx->pc != 0x2809A8u) { return; }
    }
    ctx->pc = 0x2809A8u;
    // 0x2809a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2809a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809ac: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2809ACu;
    {
        const bool branch_taken_0x2809ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2809B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2809ACu;
            // 0x2809b0: 0xafa2030c  sw          $v0, 0x30C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809ac) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x2809B4u;
    // 0x2809b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2809b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2809bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809c0: 0x27a70300  addiu       $a3, $sp, 0x300
    ctx->pc = 0x2809c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x2809c4: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x2809C4u;
    SET_GPR_U32(ctx, 31, 0x2809CCu);
    ctx->pc = 0x2809C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809C4u;
            // 0x2809c8: 0x27a80304  addiu       $t0, $sp, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809CCu; }
        if (ctx->pc != 0x2809CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809CCu; }
        if (ctx->pc != 0x2809CCu) { return; }
    }
    ctx->pc = 0x2809CCu;
    // 0x2809cc: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2809ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2809d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2809d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2809d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2809d8: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2809D8u;
    {
        const bool branch_taken_0x2809d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2809DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2809D8u;
            // 0x2809dc: 0xafa2030c  sw          $v0, 0x30C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809d8) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x2809E0u;
    // 0x2809e0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2809e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2809e4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2809e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2809e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2809E8u;
    {
        const bool branch_taken_0x2809e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2809e8) {
            ctx->pc = 0x2809ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2809E8u;
            // 0x2809ec: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2809FCu;
            goto label_2809fc;
        }
    }
    ctx->pc = 0x2809F0u;
    // 0x2809f0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2809f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2809f4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2809F4u;
    {
        const bool branch_taken_0x2809f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2809F4u;
            // 0x2809f8: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809f4) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x2809FCu;
label_2809fc:
    // 0x2809fc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2809FCu;
    {
        const bool branch_taken_0x2809fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2809FCu;
            // 0x280a00: 0x27b00280  addiu       $s0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809fc) {
            ctx->pc = 0x280A64u;
            goto label_280a64;
        }
    }
    ctx->pc = 0x280A04u;
    // 0x280a04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a08: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280A08u;
    SET_GPR_U32(ctx, 31, 0x280A10u);
    ctx->pc = 0x280A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A08u;
            // 0x280a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A10u; }
        if (ctx->pc != 0x280A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A10u; }
        if (ctx->pc != 0x280A10u) { return; }
    }
    ctx->pc = 0x280A10u;
    // 0x280a10: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x280a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x280a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a18: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x280A18u;
    SET_GPR_U32(ctx, 31, 0x280A20u);
    ctx->pc = 0x280A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A18u;
            // 0x280a1c: 0x24a55290  addiu       $a1, $a1, 0x5290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A20u; }
        if (ctx->pc != 0x280A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A20u; }
        if (ctx->pc != 0x280A20u) { return; }
    }
    ctx->pc = 0x280A20u;
    // 0x280a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x280a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a34: 0xc0a032c  jal         func_280CB0
    ctx->pc = 0x280A34u;
    SET_GPR_U32(ctx, 31, 0x280A3Cu);
    ctx->pc = 0x280A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A34u;
            // 0x280a38: 0x27a90308  addiu       $t1, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280CB0u;
    if (runtime->hasFunction(0x280CB0u)) {
        auto targetFn = runtime->lookupFunction(0x280CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A3Cu; }
        if (ctx->pc != 0x280A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280CB0_0x280cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A3Cu; }
        if (ctx->pc != 0x280A3Cu) { return; }
    }
    ctx->pc = 0x280A3Cu;
    // 0x280a3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a40: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x280A40u;
    {
        const bool branch_taken_0x280a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A40u;
            // 0x280a44: 0xafa2030c  sw          $v0, 0x30C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a40) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280A48u;
    // 0x280a48: 0x8fa20308  lw          $v0, 0x308($sp)
    ctx->pc = 0x280a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x280a4c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x280a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280A50u;
    {
        const bool branch_taken_0x280a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A50u;
            // 0x280a54: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a50) {
            ctx->pc = 0x280A64u;
            goto label_280a64;
        }
    }
    ctx->pc = 0x280A58u;
    // 0x280a58: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280a5c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x280A5Cu;
    {
        const bool branch_taken_0x280a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A5Cu;
            // 0x280a60: 0x3442005a  ori         $v0, $v0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)90);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a5c) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280A64u;
label_280a64:
    // 0x280a64: 0x38628000  xori        $v0, $v1, 0x8000
    ctx->pc = 0x280a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32768);
    // 0x280a68: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x280a6c: 0x8fa70304  lw          $a3, 0x304($sp)
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x280a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a74: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x280a74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x280a78: 0xc09fd24  jal         func_27F490
    ctx->pc = 0x280A78u;
    SET_GPR_U32(ctx, 31, 0x280A80u);
    ctx->pc = 0x280A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A78u;
            // 0x280a7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F490u;
    if (runtime->hasFunction(0x27F490u)) {
        auto targetFn = runtime->lookupFunction(0x27F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A80u; }
        if (ctx->pc != 0x280A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F490_0x27f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A80u; }
        if (ctx->pc != 0x280A80u) { return; }
    }
    ctx->pc = 0x280A80u;
    // 0x280a80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a84: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x280A84u;
    {
        const bool branch_taken_0x280a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A84u;
            // 0x280a88: 0xafa2030c  sw          $v0, 0x30C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a84) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280A8Cu;
    // 0x280a8c: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280A8Cu;
    SET_GPR_U32(ctx, 31, 0x280A94u);
    ctx->pc = 0x280A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A8Cu;
            // 0x280a90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A94u; }
        if (ctx->pc != 0x280A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A94u; }
        if (ctx->pc != 0x280A94u) { return; }
    }
    ctx->pc = 0x280A94u;
    // 0x280a94: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x280A94u;
    {
        const bool branch_taken_0x280a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280A94u;
            // 0x280a98: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a94) {
            ctx->pc = 0x280B50u;
            goto label_280b50;
        }
    }
    ctx->pc = 0x280A9Cu;
    // 0x280a9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280aa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x280aa4: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280AA4u;
    {
        const bool branch_taken_0x280aa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x280AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AA4u;
            // 0x280aa8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280aa4) {
            ctx->pc = 0x280AB4u;
            goto label_280ab4;
        }
    }
    ctx->pc = 0x280AACu;
    // 0x280aac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x280AACu;
    {
        const bool branch_taken_0x280aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AACu;
            // 0x280ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280aac) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280AB4u;
label_280ab4:
    // 0x280ab4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x280AB4u;
    {
        const bool branch_taken_0x280ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AB4u;
            // 0x280ab8: 0x27b2030c  addiu       $s2, $sp, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ab4) {
            ctx->pc = 0x280AF4u;
            goto label_280af4;
        }
    }
    ctx->pc = 0x280ABCu;
    // 0x280abc: 0x0  nop
    ctx->pc = 0x280abcu;
    // NOP
label_280ac0:
    // 0x280ac0: 0x2023026  xor         $a2, $s0, $v0
    ctx->pc = 0x280ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x280ac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ac8: 0xc09f664  jal         func_27D990
    ctx->pc = 0x280AC8u;
    SET_GPR_U32(ctx, 31, 0x280AD0u);
    ctx->pc = 0x280ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AC8u;
            // 0x280acc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD0u; }
        if (ctx->pc != 0x280AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD0u; }
        if (ctx->pc != 0x280AD0u) { return; }
    }
    ctx->pc = 0x280AD0u;
    // 0x280ad0: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x280ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x280ad4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x280AD4u;
    {
        const bool branch_taken_0x280ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AD4u;
            // 0x280ad8: 0xdfbf0350  ld          $ra, 0x350($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ad4) {
            ctx->pc = 0x280B80u;
            goto label_280b80;
        }
    }
    ctx->pc = 0x280ADCu;
    // 0x280adc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280ae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x280ae4: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x280AE4u;
    {
        const bool branch_taken_0x280ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x280AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AE4u;
            // 0x280ae8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ae4) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280AECu;
    // 0x280aec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x280aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x280af0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x280af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_280af4:
    // 0x280af4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x280af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b00: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x280B00u;
    SET_GPR_U32(ctx, 31, 0x280B08u);
    ctx->pc = 0x280B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B00u;
            // 0x280b04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B08u; }
        if (ctx->pc != 0x280B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B08u; }
        if (ctx->pc != 0x280B08u) { return; }
    }
    ctx->pc = 0x280B08u;
    // 0x280b08: 0x8fa3030c  lw          $v1, 0x30C($sp)
    ctx->pc = 0x280b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x280b0c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x280B0Cu;
    {
        const bool branch_taken_0x280b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B0Cu;
            // 0x280b10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b0c) {
            ctx->pc = 0x280B5Cu;
            goto label_280b5c;
        }
    }
    ctx->pc = 0x280B14u;
    // 0x280b14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280b18: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x280b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x280b1c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280B1Cu;
    {
        const bool branch_taken_0x280b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x280b1c) {
            ctx->pc = 0x280B30u;
            goto label_280b30;
        }
    }
    ctx->pc = 0x280B24u;
    // 0x280b24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x280b28: 0x600ffe5  bltz        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x280B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B28u;
            // 0x280b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280AC0u;
            runtime->cooperativeGuestYield();
            goto label_280ac0;
        }
    }
    ctx->pc = 0x280B30u;
label_280b30:
    // 0x280b30: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x280B30u;
    SET_GPR_U32(ctx, 31, 0x280B38u);
    ctx->pc = 0x280B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B30u;
            // 0x280b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B38u; }
        if (ctx->pc != 0x280B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B38u; }
        if (ctx->pc != 0x280B38u) { return; }
    }
    ctx->pc = 0x280B38u;
    // 0x280b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280B38u;
    {
        const bool branch_taken_0x280b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280b38) {
            ctx->pc = 0x280B50u;
            goto label_280b50;
        }
    }
    ctx->pc = 0x280B40u;
    // 0x280b40: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280B40u;
    SET_GPR_U32(ctx, 31, 0x280B48u);
    ctx->pc = 0x280B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B40u;
            // 0x280b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B48u; }
        if (ctx->pc != 0x280B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B48u; }
        if (ctx->pc != 0x280B48u) { return; }
    }
    ctx->pc = 0x280B48u;
    // 0x280b48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280B48u;
    {
        const bool branch_taken_0x280b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B48u;
            // 0x280b4c: 0x24040898  addiu       $a0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b48) {
            ctx->pc = 0x280B64u;
            goto label_280b64;
        }
    }
    ctx->pc = 0x280B50u;
label_280b50:
    // 0x280b50: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280b54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x280B54u;
    {
        const bool branch_taken_0x280b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B54u;
            // 0x280b58: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b54) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280B5Cu;
label_280b5c:
    // 0x280b5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x280B5Cu;
    {
        const bool branch_taken_0x280b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B5Cu;
            // 0x280b60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b5c) {
            ctx->pc = 0x280B7Cu;
            goto label_280b7c;
        }
    }
    ctx->pc = 0x280B64u;
label_280b64:
    // 0x280b64: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x280b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x280b68: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x280b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x280b6c: 0x2463c9c8  addiu       $v1, $v1, -0x3638
    ctx->pc = 0x280b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x280b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280b78: 0xac600890  sw          $zero, 0x890($v1)
    ctx->pc = 0x280b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
label_280b7c:
    // 0x280b7c: 0xdfbf0350  ld          $ra, 0x350($sp)
    ctx->pc = 0x280b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_280b80:
    // 0x280b80: 0xdfb30340  ld          $s3, 0x340($sp)
    ctx->pc = 0x280b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x280b84: 0xdfb20330  ld          $s2, 0x330($sp)
    ctx->pc = 0x280b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x280b88: 0xdfb10320  ld          $s1, 0x320($sp)
    ctx->pc = 0x280b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x280b8c: 0xdfb00310  ld          $s0, 0x310($sp)
    ctx->pc = 0x280b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x280b90: 0x3e00008  jr          $ra
    ctx->pc = 0x280B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280B90u;
            // 0x280b94: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2809FCu: goto label_2809fc;
            case 0x280A64u: goto label_280a64;
            case 0x280AB4u: goto label_280ab4;
            case 0x280AC0u: goto label_280ac0;
            case 0x280AF4u: goto label_280af4;
            case 0x280B30u: goto label_280b30;
            case 0x280B50u: goto label_280b50;
            case 0x280B5Cu: goto label_280b5c;
            case 0x280B64u: goto label_280b64;
            case 0x280B7Cu: goto label_280b7c;
            case 0x280B80u: goto label_280b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280B98u;
}
