#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BBC8
// Address: 0x17bbc8 - 0x17bc80
void sub_0017BBC8_0x17bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BBC8_0x17bbc8");
#endif

    ctx->pc = 0x17bbc8u;

    // 0x17bbc8: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x17bbcc: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x17bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x17bbd0: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x17bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x17bbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbd8: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x17bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x17bbdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbe0: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x17bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x17bbe4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BBE4u;
    {
        const bool branch_taken_0x17bbe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBE4u;
            // 0x17bbe8: 0xffbf0200  sd          $ra, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbe4) {
            ctx->pc = 0x17BBFCu;
            goto label_17bbfc;
        }
    }
    ctx->pc = 0x17BBECu;
    // 0x17bbec: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x17BBECu;
    SET_GPR_U32(ctx, 31, 0x17BBF4u);
    ctx->pc = 0x17BBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBECu;
            // 0x17bbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBF4u; }
        if (ctx->pc != 0x17BBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBF4u; }
        if (ctx->pc != 0x17BBF4u) { return; }
    }
    ctx->pc = 0x17BBF4u;
    // 0x17bbf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17BBF4u;
    {
        const bool branch_taken_0x17bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBF4u;
            // 0x17bbf8: 0x24520001  addiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbf4) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBFCu;
label_17bbfc:
    // 0x17bbfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17bbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bc00:
    // 0x17bc00: 0xc05ea9e  jal         func_17AA78
    ctx->pc = 0x17BC00u;
    SET_GPR_U32(ctx, 31, 0x17BC08u);
    ctx->pc = 0x17AA78u;
    if (runtime->hasFunction(0x17AA78u)) {
        auto targetFn = runtime->lookupFunction(0x17AA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC08u; }
        if (ctx->pc != 0x17BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17aa78_0x17aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC08u; }
        if (ctx->pc != 0x17BC08u) { return; }
    }
    ctx->pc = 0x17BC08u;
    // 0x17bc08: 0xc05ea9e  jal         func_17AA78
    ctx->pc = 0x17BC08u;
    SET_GPR_U32(ctx, 31, 0x17BC10u);
    ctx->pc = 0x17BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC08u;
            // 0x17bc0c: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AA78u;
    if (runtime->hasFunction(0x17AA78u)) {
        auto targetFn = runtime->lookupFunction(0x17AA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC10u; }
        if (ctx->pc != 0x17BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17aa78_0x17aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC10u; }
        if (ctx->pc != 0x17BC10u) { return; }
    }
    ctx->pc = 0x17BC10u;
    // 0x17bc10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BC10u;
    {
        const bool branch_taken_0x17bc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC10u;
            // 0x17bc14: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc10) {
            ctx->pc = 0x17BC20u;
            goto label_17bc20;
        }
    }
    ctx->pc = 0x17BC18u;
    // 0x17bc18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17BC18u;
    {
        const bool branch_taken_0x17bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC18u;
            // 0x17bc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc18) {
            ctx->pc = 0x17BC34u;
            goto label_17bc34;
        }
    }
    ctx->pc = 0x17BC20u;
label_17bc20:
    // 0x17bc20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17bc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc28: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x17BC28u;
    SET_GPR_U32(ctx, 31, 0x17BC30u);
    ctx->pc = 0x17BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC28u;
            // 0x17bc2c: 0x24a529c8  addiu       $a1, $a1, 0x29C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC30u; }
        if (ctx->pc != 0x17BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC30u; }
        if (ctx->pc != 0x17BC30u) { return; }
    }
    ctx->pc = 0x17BC30u;
    // 0x17bc30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17bc34:
    // 0x17bc34: 0xc05eb22  jal         func_17AC88
    ctx->pc = 0x17BC34u;
    SET_GPR_U32(ctx, 31, 0x17BC3Cu);
    ctx->pc = 0x17AC88u;
    if (runtime->hasFunction(0x17AC88u)) {
        auto targetFn = runtime->lookupFunction(0x17AC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC3Cu; }
        if (ctx->pc != 0x17BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AC88_0x17ac88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC3Cu; }
        if (ctx->pc != 0x17BC3Cu) { return; }
    }
    ctx->pc = 0x17BC3Cu;
    // 0x17bc3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17bc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc44: 0x0  nop
    ctx->pc = 0x17bc44u;
    // NOP
label_17bc48:
    // 0x17bc48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc4c: 0xc0a63cc  jal         func_298F30
    ctx->pc = 0x17BC4Cu;
    SET_GPR_U32(ctx, 31, 0x17BC54u);
    ctx->pc = 0x17BC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC4Cu;
            // 0x17bc50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F30u;
    if (runtime->hasFunction(0x298F30u)) {
        auto targetFn = runtime->lookupFunction(0x298F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC54u; }
        if (ctx->pc != 0x17BC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298F30_0x298f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC54u; }
        if (ctx->pc != 0x17BC54u) { return; }
    }
    ctx->pc = 0x17BC54u;
    // 0x17bc54: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BC54u;
    {
        const bool branch_taken_0x17bc54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17bc54) {
            ctx->pc = 0x17BC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC54u;
            // 0x17bc58: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BC68u;
            goto label_17bc68;
        }
    }
    ctx->pc = 0x17BC5Cu;
    // 0x17bc5c: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17BC5Cu;
    {
        const bool branch_taken_0x17bc5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC5Cu;
            // 0x17bc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc5c) {
            ctx->pc = 0x17BC48u;
            runtime->cooperativeGuestYield();
            goto label_17bc48;
        }
    }
    ctx->pc = 0x17BC64u;
    // 0x17bc64: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x17bc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_17bc68:
    // 0x17bc68: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x17bc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x17bc6c: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x17bc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x17bc70: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x17bc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x17bc74: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x17bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x17bc78: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC78u;
            // 0x17bc7c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BBFCu: goto label_17bbfc;
            case 0x17BC00u: goto label_17bc00;
            case 0x17BC20u: goto label_17bc20;
            case 0x17BC34u: goto label_17bc34;
            case 0x17BC48u: goto label_17bc48;
            case 0x17BC68u: goto label_17bc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BC80u;
}
