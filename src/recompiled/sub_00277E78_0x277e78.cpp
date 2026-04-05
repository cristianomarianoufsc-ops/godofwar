#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00277E78
// Address: 0x277e78 - 0x278018
void sub_00277E78_0x277e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277E78_0x277e78");
#endif

    ctx->pc = 0x277e78u;

    // 0x277e78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x277e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x277e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277e80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x277e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x277e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x277e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x277e8c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x277e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277e94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x277e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x277e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x277e9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x277e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x277ea0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x277ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x277ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x277ea8: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x277EA8u;
    SET_GPR_U32(ctx, 31, 0x277EB0u);
    ctx->pc = 0x277EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EA8u;
            // 0x277eac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F88u;
    if (runtime->hasFunction(0x278F88u)) {
        auto targetFn = runtime->lookupFunction(0x278F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EB0u; }
        if (ctx->pc != 0x277EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f88_0x278fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EB0u; }
        if (ctx->pc != 0x277EB0u) { return; }
    }
    ctx->pc = 0x277EB0u;
    // 0x277eb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x277EB0u;
    {
        const bool branch_taken_0x277eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277EB0u;
            // 0x277eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277eb0) {
            ctx->pc = 0x277EC4u;
            goto label_277ec4;
        }
    }
    ctx->pc = 0x277EB8u;
label_277eb8:
    // 0x277eb8: 0xc09e388  jal         func_278E20
    ctx->pc = 0x277EB8u;
    SET_GPR_U32(ctx, 31, 0x277EC0u);
    ctx->pc = 0x277EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EB8u;
            // 0x277ebc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EC0u; }
        if (ctx->pc != 0x277EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EC0u; }
        if (ctx->pc != 0x277EC0u) { return; }
    }
    ctx->pc = 0x277EC0u;
    // 0x277ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277ec4:
    // 0x277ec4: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x277EC4u;
    SET_GPR_U32(ctx, 31, 0x277ECCu);
    ctx->pc = 0x277EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EC4u;
            // 0x277ec8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277ECCu; }
        if (ctx->pc != 0x277ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277ECCu; }
        if (ctx->pc != 0x277ECCu) { return; }
    }
    ctx->pc = 0x277ECCu;
    // 0x277ecc: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x277ECCu;
    {
        const bool branch_taken_0x277ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x277ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277ECCu;
            // 0x277ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ecc) {
            ctx->pc = 0x277EE0u;
            goto label_277ee0;
        }
    }
    ctx->pc = 0x277ED4u;
    // 0x277ed4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x277ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x277ed8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x277ED8u;
    {
        const bool branch_taken_0x277ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ed8) {
            ctx->pc = 0x277EB8u;
            runtime->cooperativeGuestYield();
            goto label_277eb8;
        }
    }
    ctx->pc = 0x277EE0u;
label_277ee0:
    // 0x277ee0: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x277EE0u;
    SET_GPR_U32(ctx, 31, 0x277EE8u);
    ctx->pc = 0x277EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EE0u;
            // 0x277ee4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EE8u; }
        if (ctx->pc != 0x277EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EE8u; }
        if (ctx->pc != 0x277EE8u) { return; }
    }
    ctx->pc = 0x277EE8u;
    // 0x277ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eec: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x277eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x277ef0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x277ef4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x277EF4u;
    {
        const bool branch_taken_0x277ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277EF4u;
            // 0x277ef8: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ef4) {
            ctx->pc = 0x277F14u;
            goto label_277f14;
        }
    }
    ctx->pc = 0x277EFCu;
    // 0x277efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f00: 0x24a54698  addiu       $a1, $a1, 0x4698
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18072));
    // 0x277f04: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x277F04u;
    SET_GPR_U32(ctx, 31, 0x277F0Cu);
    ctx->pc = 0x277F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F04u;
            // 0x277f08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F0Cu; }
        if (ctx->pc != 0x277F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F0Cu; }
        if (ctx->pc != 0x277F0Cu) { return; }
    }
    ctx->pc = 0x277F0Cu;
    // 0x277f0c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x277F0Cu;
    {
        const bool branch_taken_0x277f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F0Cu;
            // 0x277f10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f0c) {
            ctx->pc = 0x277FF8u;
            goto label_277ff8;
        }
    }
    ctx->pc = 0x277F14u;
label_277f14:
    // 0x277f14: 0xc09e3e0  jal         func_278F80
    ctx->pc = 0x277F14u;
    SET_GPR_U32(ctx, 31, 0x277F1Cu);
    ctx->pc = 0x277F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F14u;
            // 0x277f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F80u;
    if (runtime->hasFunction(0x278F80u)) {
        auto targetFn = runtime->lookupFunction(0x278F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F1Cu; }
        if (ctx->pc != 0x277F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f80_0x278f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F1Cu; }
        if (ctx->pc != 0x277F1Cu) { return; }
    }
    ctx->pc = 0x277F1Cu;
    // 0x277f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f20: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x277F20u;
    SET_GPR_U32(ctx, 31, 0x277F28u);
    ctx->pc = 0x277F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F20u;
            // 0x277f24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F28u; }
        if (ctx->pc != 0x277F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F28u; }
        if (ctx->pc != 0x277F28u) { return; }
    }
    ctx->pc = 0x277F28u;
    // 0x277f28: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x277f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x277f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f30: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x277F30u;
    SET_GPR_U32(ctx, 31, 0x277F38u);
    ctx->pc = 0x277F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F30u;
            // 0x277f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F38u; }
        if (ctx->pc != 0x277F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F38u; }
        if (ctx->pc != 0x277F38u) { return; }
    }
    ctx->pc = 0x277F38u;
    // 0x277f38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x277F38u;
    {
        const bool branch_taken_0x277f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F38u;
            // 0x277f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f38) {
            ctx->pc = 0x277F7Cu;
            goto label_277f7c;
        }
    }
    ctx->pc = 0x277F40u;
    // 0x277f40: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x277F40u;
    SET_GPR_U32(ctx, 31, 0x277F48u);
    ctx->pc = 0x277F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F40u;
            // 0x277f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F48u; }
        if (ctx->pc != 0x277F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F48u; }
        if (ctx->pc != 0x277F48u) { return; }
    }
    ctx->pc = 0x277F48u;
    // 0x277f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f4c: 0xc09e388  jal         func_278E20
    ctx->pc = 0x277F4Cu;
    SET_GPR_U32(ctx, 31, 0x277F54u);
    ctx->pc = 0x277F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F4Cu;
            // 0x277f50: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F54u; }
        if (ctx->pc != 0x277F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F54u; }
        if (ctx->pc != 0x277F54u) { return; }
    }
    ctx->pc = 0x277F54u;
    // 0x277f54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x277F54u;
    {
        const bool branch_taken_0x277f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F54u;
            // 0x277f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f54) {
            ctx->pc = 0x277F6Cu;
            goto label_277f6c;
        }
    }
    ctx->pc = 0x277F5Cu;
    // 0x277f5c: 0x0  nop
    ctx->pc = 0x277f5cu;
    // NOP
label_277f60:
    // 0x277f60: 0xc09e388  jal         func_278E20
    ctx->pc = 0x277F60u;
    SET_GPR_U32(ctx, 31, 0x277F68u);
    ctx->pc = 0x277F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F60u;
            // 0x277f64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F68u; }
        if (ctx->pc != 0x277F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F68u; }
        if (ctx->pc != 0x277F68u) { return; }
    }
    ctx->pc = 0x277F68u;
    // 0x277f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277f6c:
    // 0x277f6c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x277F6Cu;
    SET_GPR_U32(ctx, 31, 0x277F74u);
    ctx->pc = 0x277F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F6Cu;
            // 0x277f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F74u; }
        if (ctx->pc != 0x277F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F74u; }
        if (ctx->pc != 0x277F74u) { return; }
    }
    ctx->pc = 0x277F74u;
    // 0x277f74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x277F74u;
    {
        const bool branch_taken_0x277f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F74u;
            // 0x277f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f74) {
            ctx->pc = 0x277F60u;
            runtime->cooperativeGuestYield();
            goto label_277f60;
        }
    }
    ctx->pc = 0x277F7Cu;
label_277f7c:
    // 0x277f7c: 0xc09d992  jal         func_276648
    ctx->pc = 0x277F7Cu;
    SET_GPR_U32(ctx, 31, 0x277F84u);
    ctx->pc = 0x277F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F7Cu;
            // 0x277f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276648u;
    if (runtime->hasFunction(0x276648u)) {
        auto targetFn = runtime->lookupFunction(0x276648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F84u; }
        if (ctx->pc != 0x277F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276648_0x276648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F84u; }
        if (ctx->pc != 0x277F84u) { return; }
    }
    ctx->pc = 0x277F84u;
    // 0x277f84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f88: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x277f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x277f8c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x277f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x277f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x277F90u;
    {
        const bool branch_taken_0x277f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F90u;
            // 0x277f94: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f90) {
            ctx->pc = 0x277FACu;
            goto label_277fac;
        }
    }
    ctx->pc = 0x277F98u;
    // 0x277f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f9c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x277F9Cu;
    SET_GPR_U32(ctx, 31, 0x277FA4u);
    ctx->pc = 0x277FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F9Cu;
            // 0x277fa0: 0x24a546c0  addiu       $a1, $a1, 0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FA4u; }
        if (ctx->pc != 0x277FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FA4u; }
        if (ctx->pc != 0x277FA4u) { return; }
    }
    ctx->pc = 0x277FA4u;
    // 0x277fa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x277FA4u;
    {
        const bool branch_taken_0x277fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277FA4u;
            // 0x277fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fa4) {
            ctx->pc = 0x277FF8u;
            goto label_277ff8;
        }
    }
    ctx->pc = 0x277FACu;
label_277fac:
    // 0x277fac: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x277facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x277fb0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x277fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x277fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x277fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x277fb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277fbc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x277fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x277fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fc4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x277fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x277fc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x277fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x277fcc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x277fccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x277fd0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x277fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x277fd4: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x277fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x277fd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x277fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x277fdc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x277fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x277fe0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x277fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x277fe4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x277fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x277fe8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x277fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x277fec: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x277fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x277ff0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x277ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x277ff4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x277ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_277ff8:
    // 0x277ff8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x277ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277ffc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x277ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278000: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x278000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x278004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278008: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x278008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27800c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27800cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278010: 0x3e00008  jr          $ra
    ctx->pc = 0x278010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278010u;
            // 0x278014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277EB8u: goto label_277eb8;
            case 0x277EC4u: goto label_277ec4;
            case 0x277EE0u: goto label_277ee0;
            case 0x277F14u: goto label_277f14;
            case 0x277F60u: goto label_277f60;
            case 0x277F6Cu: goto label_277f6c;
            case 0x277F7Cu: goto label_277f7c;
            case 0x277FACu: goto label_277fac;
            case 0x277FF8u: goto label_277ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278018u;
}
