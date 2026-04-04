#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144E40
// Address: 0x144e40 - 0x144f18
void sub_00144E40_0x144e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144E40_0x144e40");
#endif

    ctx->pc = 0x144e40u;

    // 0x144e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x144e44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x144e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x144e48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x144e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x144e50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x144e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x144e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x144e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e5c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x144e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x144e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144e64: 0x24a51828  addiu       $a1, $a1, 0x1828
    ctx->pc = 0x144e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6184));
    // 0x144e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e70: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x144E70u;
    SET_GPR_U32(ctx, 31, 0x144E78u);
    ctx->pc = 0x144E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E70u;
            // 0x144e74: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E78u; }
        if (ctx->pc != 0x144E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E78u; }
        if (ctx->pc != 0x144E78u) { return; }
    }
    ctx->pc = 0x144E78u;
    // 0x144e78: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x144E78u;
    {
        const bool branch_taken_0x144e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144e78) {
            ctx->pc = 0x144E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144E78u;
            // 0x144e7c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144EFCu;
            goto label_144efc;
        }
    }
    ctx->pc = 0x144E80u;
    // 0x144e80: 0x2612000a  addiu       $s2, $s0, 0xA
    ctx->pc = 0x144e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x144e84: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x144e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x144e88: 0xc0511cc  jal         func_144730
    ctx->pc = 0x144E88u;
    SET_GPR_U32(ctx, 31, 0x144E90u);
    ctx->pc = 0x144E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E88u;
            // 0x144e8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144730u;
    if (runtime->hasFunction(0x144730u)) {
        auto targetFn = runtime->lookupFunction(0x144730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E90u; }
        if (ctx->pc != 0x144E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144730_0x144730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E90u; }
        if (ctx->pc != 0x144E90u) { return; }
    }
    ctx->pc = 0x144E90u;
    // 0x144e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e94: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x144E94u;
    {
        const bool branch_taken_0x144e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E94u;
            // 0x144e98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e94) {
            ctx->pc = 0x144EF8u;
            goto label_144ef8;
        }
    }
    ctx->pc = 0x144E9Cu;
    // 0x144e9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144ea0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x144ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x144ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144ea8: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x144eac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144eb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x144eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144eb4: 0xac710d30  sw          $s1, 0xD30($v1)
    ctx->pc = 0x144eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 17));
    // 0x144eb8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x144eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x144ebc: 0x85040018  lh          $a0, 0x18($t0)
    ctx->pc = 0x144ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x144ec0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x144ec4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x144ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x144ec8: 0x40f809  jalr        $v0
    ctx->pc = 0x144EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144ED0u);
        ctx->pc = 0x144ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144EC8u;
            // 0x144ecc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x144ED0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144EF8u: goto label_144ef8;
            case 0x144EFCu: goto label_144efc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144ED0u; }
            if (ctx->pc != 0x144ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x144ED0u;
    // 0x144ed0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x144ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x144ed4: 0xac400d30  sw          $zero, 0xD30($v0)
    ctx->pc = 0x144ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3376), GPR_U32(ctx, 0));
    // 0x144ed8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x144ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x144edc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x144edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x144ee0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x144ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144ee4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144ee8: 0x24844948  addiu       $a0, $a0, 0x4948
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18760));
    // 0x144eec: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x144EECu;
    SET_GPR_U32(ctx, 31, 0x144EF4u);
    ctx->pc = 0x144EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144EECu;
            // 0x144ef0: 0x24a51838  addiu       $a1, $a1, 0x1838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EF4u; }
        if (ctx->pc != 0x144EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EF4u; }
        if (ctx->pc != 0x144EF4u) { return; }
    }
    ctx->pc = 0x144EF4u;
    // 0x144ef4: 0x0  nop
    ctx->pc = 0x144ef4u;
    // NOP
label_144ef8:
    // 0x144ef8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x144ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_144efc:
    // 0x144efc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x144efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144f04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x144f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x144F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F0Cu;
            // 0x144f10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144EF8u: goto label_144ef8;
            case 0x144EFCu: goto label_144efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144F14u;
    // 0x144f14: 0x0  nop
    ctx->pc = 0x144f14u;
    // NOP
}
