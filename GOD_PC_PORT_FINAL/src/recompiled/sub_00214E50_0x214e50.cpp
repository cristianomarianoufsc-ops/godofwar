#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214E50
// Address: 0x214e50 - 0x214f50
void sub_00214E50_0x214e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214E50_0x214e50");
#endif

    ctx->pc = 0x214e50u;

    // 0x214e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x214e54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x214e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x214e58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x214e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x214e5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x214e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x214e64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x214e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x214e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214e70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x214e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x214e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214e78: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x214e7c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x214e80: 0x40f809  jalr        $v0
    ctx->pc = 0x214E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214E88u);
        ctx->pc = 0x214E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E80u;
            // 0x214e84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214E88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214EC0u: goto label_214ec0;
            case 0x214EDCu: goto label_214edc;
            case 0x214EE8u: goto label_214ee8;
            case 0x214EECu: goto label_214eec;
            case 0x214F30u: goto label_214f30;
            case 0x214F34u: goto label_214f34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214E88u; }
            if (ctx->pc != 0x214E88u) { return; }
        }
        }
    }
    ctx->pc = 0x214E88u;
    // 0x214e88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e8c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x214E8Cu;
    {
        const bool branch_taken_0x214e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E8Cu;
            // 0x214e90: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e8c) {
            ctx->pc = 0x214F30u;
            goto label_214f30;
        }
    }
    ctx->pc = 0x214E94u;
    // 0x214e94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214e98: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x214e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x214e9c: 0x50430025  beql        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x214E9Cu;
    {
        const bool branch_taken_0x214e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x214e9c) {
            ctx->pc = 0x214EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214E9Cu;
            // 0x214ea0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214F34u;
            goto label_214f34;
        }
    }
    ctx->pc = 0x214EA4u;
    // 0x214ea4: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x214ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x214ea8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x214EA8u;
    {
        const bool branch_taken_0x214ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ea8) {
            ctx->pc = 0x214EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214EA8u;
            // 0x214eac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214EECu;
            goto label_214eec;
        }
    }
    ctx->pc = 0x214EB0u;
    // 0x214eb0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x214eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x214eb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x214eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214eb8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x214EB8u;
    {
        const bool branch_taken_0x214eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x214EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EB8u;
            // 0x214ebc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214eb8) {
            ctx->pc = 0x214EE8u;
            goto label_214ee8;
        }
    }
    ctx->pc = 0x214EC0u;
label_214ec0:
    // 0x214ec0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x214ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x214ec4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x214ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214ec8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x214ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x214ecc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x214ECCu;
    {
        const bool branch_taken_0x214ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214ecc) {
            ctx->pc = 0x214ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214ECCu;
            // 0x214ed0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214EDCu;
            goto label_214edc;
        }
    }
    ctx->pc = 0x214ED4u;
    // 0x214ed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x214ED4u;
    {
        const bool branch_taken_0x214ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214ED4u;
            // 0x214ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ed4) {
            ctx->pc = 0x214EECu;
            goto label_214eec;
        }
    }
    ctx->pc = 0x214EDCu;
label_214edc:
    // 0x214edc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ee0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x214EE0u;
    {
        const bool branch_taken_0x214ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EE0u;
            // 0x214ee4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ee0) {
            ctx->pc = 0x214EC0u;
            runtime->cooperativeGuestYield();
            goto label_214ec0;
        }
    }
    ctx->pc = 0x214EE8u;
label_214ee8:
    // 0x214ee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214eec:
    // 0x214eec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x214eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef4: 0xc0823c4  jal         func_208F10
    ctx->pc = 0x214EF4u;
    SET_GPR_U32(ctx, 31, 0x214EFCu);
    ctx->pc = 0x214EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214EF4u;
            // 0x214ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208F10u;
    if (runtime->hasFunction(0x208F10u)) {
        auto targetFn = runtime->lookupFunction(0x208F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EFCu; }
        if (ctx->pc != 0x214EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208f10_0x2090b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EFCu; }
        if (ctx->pc != 0x214EFCu) { return; }
    }
    ctx->pc = 0x214EFCu;
    // 0x214efc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x214EFCu;
    {
        const bool branch_taken_0x214efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214EFCu;
            // 0x214f00: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214efc) {
            ctx->pc = 0x214F30u;
            goto label_214f30;
        }
    }
    ctx->pc = 0x214F04u;
    // 0x214f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f08: 0xc08242c  jal         func_2090B0
    ctx->pc = 0x214F08u;
    SET_GPR_U32(ctx, 31, 0x214F10u);
    ctx->pc = 0x214F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F08u;
            // 0x214f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2090B0u;
    if (runtime->hasFunction(0x2090B0u)) {
        auto targetFn = runtime->lookupFunction(0x2090B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2090b0_0x2090d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F10u; }
        if (ctx->pc != 0x214F10u) { return; }
    }
    ctx->pc = 0x214F10u;
    // 0x214f10: 0xc082448  jal         func_209120
    ctx->pc = 0x214F10u;
    SET_GPR_U32(ctx, 31, 0x214F18u);
    ctx->pc = 0x214F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F10u;
            // 0x214f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209120u;
    if (runtime->hasFunction(0x209120u)) {
        auto targetFn = runtime->lookupFunction(0x209120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F18u; }
        if (ctx->pc != 0x214F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209120_0x209140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F18u; }
        if (ctx->pc != 0x214F18u) { return; }
    }
    ctx->pc = 0x214F18u;
    // 0x214f18: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x214f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214f24: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x214f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x214f28: 0xe64001e0  swc1        $f0, 0x1E0($s2)
    ctx->pc = 0x214f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
    // 0x214f2c: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x214f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
label_214f30:
    // 0x214f30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x214f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_214f34:
    // 0x214f34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x214f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x214f38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x214f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214f3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x214f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x214f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f48: 0x3e00008  jr          $ra
    ctx->pc = 0x214F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214F48u;
            // 0x214f4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214EC0u: goto label_214ec0;
            case 0x214EDCu: goto label_214edc;
            case 0x214EE8u: goto label_214ee8;
            case 0x214EECu: goto label_214eec;
            case 0x214F30u: goto label_214f30;
            case 0x214F34u: goto label_214f34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214F50u;
}
