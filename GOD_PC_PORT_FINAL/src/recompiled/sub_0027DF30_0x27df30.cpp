#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DF30
// Address: 0x27df30 - 0x27e2c8
void sub_0027DF30_0x27df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DF30_0x27df30");
#endif

    ctx->pc = 0x27df30u;

    // 0x27df30: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x27df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x27df34: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x27df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27df38: 0xffb30250  sd          $s3, 0x250($sp)
    ctx->pc = 0x27df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 19));
    // 0x27df3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27df40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27df40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df44: 0xffb60280  sd          $s6, 0x280($sp)
    ctx->pc = 0x27df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 22));
    // 0x27df48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x27df48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27df4c: 0xffb10230  sd          $s1, 0x230($sp)
    ctx->pc = 0x27df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 17));
    // 0x27df50: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27df54: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x27df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x27df58: 0xffbe02a0  sd          $fp, 0x2A0($sp)
    ctx->pc = 0x27df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 30));
    // 0x27df5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27df5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df60: 0xffb70290  sd          $s7, 0x290($sp)
    ctx->pc = 0x27df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 23));
    // 0x27df64: 0xffb50270  sd          $s5, 0x270($sp)
    ctx->pc = 0x27df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 21));
    // 0x27df68: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x27df68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27df6c: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x27df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x27df70: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x27df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x27df74: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x27DF74u;
    SET_GPR_U32(ctx, 31, 0x27DF7Cu);
    ctx->pc = 0x27DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF74u;
            // 0x27df78: 0xffb00220  sd          $s0, 0x220($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF7Cu; }
        if (ctx->pc != 0x27DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF7Cu; }
        if (ctx->pc != 0x27DF7Cu) { return; }
    }
    ctx->pc = 0x27DF7Cu;
    // 0x27df7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DF7Cu;
    {
        const bool branch_taken_0x27df7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df7c) {
            ctx->pc = 0x27DFA8u;
            goto label_27dfa8;
        }
    }
    ctx->pc = 0x27DF84u;
    // 0x27df84: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DF84u;
    {
        const bool branch_taken_0x27df84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df84) {
            ctx->pc = 0x27DF98u;
            goto label_27df98;
        }
    }
    ctx->pc = 0x27DF8Cu;
    // 0x27df8c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x27df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x27df90: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x27df90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x27df94: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x27df94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_27df98:
    // 0x27df98: 0xc0a055a  jal         func_281568
    ctx->pc = 0x27DF98u;
    SET_GPR_U32(ctx, 31, 0x27DFA0u);
    ctx->pc = 0x27DF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF98u;
            // 0x27df9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281568u;
    if (runtime->hasFunction(0x281568u)) {
        auto targetFn = runtime->lookupFunction(0x281568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFA0u; }
        if (ctx->pc != 0x27DFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281568_0x281568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFA0u; }
        if (ctx->pc != 0x27DFA0u) { return; }
    }
    ctx->pc = 0x27DFA0u;
    // 0x27dfa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DFA0u;
    {
        const bool branch_taken_0x27dfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFA0u;
            // 0x27dfa4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfa0) {
            ctx->pc = 0x27DFB4u;
            goto label_27dfb4;
        }
    }
    ctx->pc = 0x27DFA8u;
label_27dfa8:
    // 0x27dfa8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27dfac: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFACu;
            // 0x27dfb0: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27DFB4u;
label_27dfb4:
    // 0x27dfb4: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DFB4u;
    {
        const bool branch_taken_0x27dfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x27DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFB4u;
            // 0x27dfb8: 0x3c1e0032  lui         $fp, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfb4) {
            ctx->pc = 0x27DFDCu;
            goto label_27dfdc;
        }
    }
    ctx->pc = 0x27DFBCu;
    // 0x27dfbc: 0xc0a0952  jal         func_282548
    ctx->pc = 0x27DFBCu;
    SET_GPR_U32(ctx, 31, 0x27DFC4u);
    ctx->pc = 0x27DFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFBCu;
            // 0x27dfc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282548u;
    if (runtime->hasFunction(0x282548u)) {
        auto targetFn = runtime->lookupFunction(0x282548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFC4u; }
        if (ctx->pc != 0x27DFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282548_0x282620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFC4u; }
        if (ctx->pc != 0x27DFC4u) { return; }
    }
    ctx->pc = 0x27DFC4u;
    // 0x27dfc4: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27dfc8: 0x27c2c9c8  addiu       $v0, $fp, -0x3638
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953416));
    // 0x27dfcc: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x27dfccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27dfd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dfd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dfd8: 0xac440888  sw          $a0, 0x888($v0)
    ctx->pc = 0x27dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2184), GPR_U32(ctx, 4));
label_27dfdc:
    // 0x27dfdc: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27dfe0: 0x27d2c9c8  addiu       $s2, $fp, -0x3638
    ctx->pc = 0x27dfe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953416));
    // 0x27dfe4: 0x2638018  mult        $s0, $s3, $v1
    ctx->pc = 0x27dfe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x27dfe8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x27dfec: 0x8c430888  lw          $v1, 0x888($v0)
    ctx->pc = 0x27dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
    // 0x27dff0: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x27DFF0u;
    {
        const bool branch_taken_0x27dff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFF0u;
            // 0x27dff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dff0) {
            ctx->pc = 0x27E208u;
            goto label_27e208;
        }
    }
    ctx->pc = 0x27DFF8u;
    // 0x27dff8: 0xc0a0552  jal         func_281548
    ctx->pc = 0x27DFF8u;
    SET_GPR_U32(ctx, 31, 0x27E000u);
    ctx->pc = 0x27DFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFF8u;
            // 0x27dffc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281548u;
    if (runtime->hasFunction(0x281548u)) {
        auto targetFn = runtime->lookupFunction(0x281548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E000u; }
        if (ctx->pc != 0x27E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281548_0x281548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E000u; }
        if (ctx->pc != 0x27E000u) { return; }
    }
    ctx->pc = 0x27E000u;
    // 0x27e000: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E000u;
    {
        const bool branch_taken_0x27e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e000) {
            ctx->pc = 0x27E05Cu;
            goto label_27e05c;
        }
    }
    ctx->pc = 0x27E008u;
    // 0x27e008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e00c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E00Cu;
    {
        const bool branch_taken_0x27e00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E00Cu;
            // 0x27e010: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e00c) {
            ctx->pc = 0x27E05Cu;
            goto label_27e05c;
        }
    }
    ctx->pc = 0x27E014u;
    // 0x27e014: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e018: 0xac600894  sw          $zero, 0x894($v1)
    ctx->pc = 0x27e018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2196), GPR_U32(ctx, 0));
    // 0x27e01c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27e01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e020: 0xac440800  sw          $a0, 0x800($v0)
    ctx->pc = 0x27e020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 4));
    // 0x27e024: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x27e024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x27e028: 0xac640804  sw          $a0, 0x804($v1)
    ctx->pc = 0x27e028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 4));
    // 0x27e02c: 0x26420808  addiu       $v0, $s2, 0x808
    ctx->pc = 0x27e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x27e030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27e034: 0xac600890  sw          $zero, 0x890($v1)
    ctx->pc = 0x27e034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
    // 0x27e038: 0x24a85238  addiu       $t0, $a1, 0x5238
    ctx->pc = 0x27e038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 21048));
    // 0x27e03c: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x27e03cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27e040: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x27e040u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x27e044: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x27e044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e048: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x27e048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x27e04c: 0xc0a056a  jal         func_2815A8
    ctx->pc = 0x27E04Cu;
    SET_GPR_U32(ctx, 31, 0x27E054u);
    ctx->pc = 0x27E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E04Cu;
            // 0x27e050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2815A8u;
    if (runtime->hasFunction(0x2815A8u)) {
        auto targetFn = runtime->lookupFunction(0x2815A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E054u; }
        if (ctx->pc != 0x27E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002815A8_0x2815a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E054u; }
        if (ctx->pc != 0x27E054u) { return; }
    }
    ctx->pc = 0x27E054u;
    // 0x27e054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E054u;
    {
        const bool branch_taken_0x27e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e054) {
            ctx->pc = 0x27E068u;
            goto label_27e068;
        }
    }
    ctx->pc = 0x27E05Cu;
label_27e05c:
    // 0x27e05c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e060: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x27E060u;
    {
        const bool branch_taken_0x27e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E060u;
            // 0x27e064: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e060) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E068u;
label_27e068:
    // 0x27e068: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E068u;
    {
        const bool branch_taken_0x27e068 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e068) {
            ctx->pc = 0x27E06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E068u;
            // 0x27e06c: 0xaed40000  sw          $s4, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E070u;
            goto label_27e070;
        }
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x27e070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x27e074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e078: 0x24a55240  addiu       $a1, $a1, 0x5240
    ctx->pc = 0x27e078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
    // 0x27e07c: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x27E07Cu;
    SET_GPR_U32(ctx, 31, 0x27E084u);
    ctx->pc = 0x27E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E07Cu;
            // 0x27e080: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E084u; }
        if (ctx->pc != 0x27E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E084u; }
        if (ctx->pc != 0x27E084u) { return; }
    }
    ctx->pc = 0x27E084u;
    // 0x27e084: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E084u;
    {
        const bool branch_taken_0x27e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e084) {
            ctx->pc = 0x27E088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E084u;
            // 0x27e088: 0x8222001c  lb          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E09Cu;
            goto label_27e09c;
        }
    }
    ctx->pc = 0x27E08Cu;
    // 0x27e08c: 0x56c00066  bnel        $s6, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x27E08Cu;
    {
        const bool branch_taken_0x27e08c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e08c) {
            ctx->pc = 0x27E090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E08Cu;
            // 0x27e090: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E094u;
    // 0x27e094: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27E094u;
    {
        const bool branch_taken_0x27e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e094) {
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E09Cu;
label_27e09c:
    // 0x27e09c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27e0a0: 0x8225001e  lb          $a1, 0x1E($s1)
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x27e0a4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x27e0a8: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x27e0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x27e0ac: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x27e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x27e0b0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27e0b4: 0x28c2000b  slti        $v0, $a2, 0xB
    ctx->pc = 0x27e0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x27e0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E0B8u;
    {
        const bool branch_taken_0x27e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0B8u;
            // 0x27e0bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0b8) {
            ctx->pc = 0x27E0CCu;
            goto label_27e0cc;
        }
    }
    ctx->pc = 0x27E0C0u;
    // 0x27e0c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e0c4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x27E0C4u;
    {
        const bool branch_taken_0x27e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0C4u;
            // 0x27e0c8: 0x34420086  ori         $v0, $v0, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)134);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0c4) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E0CCu;
label_27e0cc:
    // 0x27e0cc: 0xc09f7b6  jal         func_27DED8
    ctx->pc = 0x27E0CCu;
    SET_GPR_U32(ctx, 31, 0x27E0D4u);
    ctx->pc = 0x27E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0CCu;
            // 0x27e0d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DED8u;
    if (runtime->hasFunction(0x27DED8u)) {
        auto targetFn = runtime->lookupFunction(0x27DED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0D4u; }
        if (ctx->pc != 0x27E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DED8_0x27ded8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0D4u; }
        if (ctx->pc != 0x27E0D4u) { return; }
    }
    ctx->pc = 0x27E0D4u;
    // 0x27e0d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0d8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x27e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x27e0dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0e0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x27e0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x27e0e4: 0xc0a0882  jal         func_282208
    ctx->pc = 0x27E0E4u;
    SET_GPR_U32(ctx, 31, 0x27E0ECu);
    ctx->pc = 0x27E0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0E4u;
            // 0x27e0e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282208u;
    if (runtime->hasFunction(0x282208u)) {
        auto targetFn = runtime->lookupFunction(0x282208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0ECu; }
        if (ctx->pc != 0x27E0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282208_0x282230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0ECu; }
        if (ctx->pc != 0x27E0ECu) { return; }
    }
    ctx->pc = 0x27E0ECu;
    // 0x27e0ec: 0xc0a09c4  jal         func_282710
    ctx->pc = 0x27E0ECu;
    SET_GPR_U32(ctx, 31, 0x27E0F4u);
    ctx->pc = 0x27E0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0ECu;
            // 0x27e0f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282710u;
    if (runtime->hasFunction(0x282710u)) {
        auto targetFn = runtime->lookupFunction(0x282710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0F4u; }
        if (ctx->pc != 0x27E0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282710_0x282710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0F4u; }
        if (ctx->pc != 0x27E0F4u) { return; }
    }
    ctx->pc = 0x27E0F4u;
    // 0x27e0f4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x27e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x27e0f8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x27e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x27e0fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E0FCu;
    {
        const bool branch_taken_0x27e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e0fc) {
            ctx->pc = 0x27E100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0FCu;
            // 0x27e100: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E104u;
            goto label_27e104;
        }
    }
    ctx->pc = 0x27E104u;
label_27e104:
    // 0x27e104: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x27e104u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27e108: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x27e108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x27e10c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x27e10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x27e110: 0x1812  mflo        $v1
    ctx->pc = 0x27e110u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x27e114: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x27e114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e118: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E118u;
    {
        const bool branch_taken_0x27e118 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E118u;
            // 0x27e11c: 0x24770001  addiu       $s7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e118) {
            ctx->pc = 0x27E168u;
            goto label_27e168;
        }
    }
    ctx->pc = 0x27E120u;
    // 0x27e120: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e124: 0x0  nop
    ctx->pc = 0x27e124u;
    // NOP
label_27e128:
    // 0x27e128: 0x16970004  bne         $s4, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E128u;
    {
        const bool branch_taken_0x27e128 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        ctx->pc = 0x27E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E128u;
            // 0x27e12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e128) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E130u;
    // 0x27e130: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x27e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x27e134: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x27e134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27e138: 0xae220170  sw          $v0, 0x170($s1)
    ctx->pc = 0x27e138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
label_27e13c:
    // 0x27e13c: 0xc0a078c  jal         func_281E30
    ctx->pc = 0x27E13Cu;
    SET_GPR_U32(ctx, 31, 0x27E144u);
    ctx->pc = 0x27E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E13Cu;
            // 0x27e140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281E30u;
    if (runtime->hasFunction(0x281E30u)) {
        auto targetFn = runtime->lookupFunction(0x281E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E144u; }
        if (ctx->pc != 0x27E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281e30_0x281e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E144u; }
        if (ctx->pc != 0x27E144u) { return; }
    }
    ctx->pc = 0x27E144u;
    // 0x27e144: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27e148: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x27e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x27e14c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x27e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27e150: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x27e150u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x27e154: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x27e154u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27e158: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27E158u;
    {
        const bool branch_taken_0x27e158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E158u;
            // 0x27e15c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e158) {
            ctx->pc = 0x27E128u;
            runtime->cooperativeGuestYield();
            goto label_27e128;
        }
    }
    ctx->pc = 0x27E160u;
    // 0x27e160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27E160u;
    {
        const bool branch_taken_0x27e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E160u;
            // 0x27e164: 0x8e26003c  lw          $a2, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e160) {
            ctx->pc = 0x27E170u;
            goto label_27e170;
        }
    }
    ctx->pc = 0x27E168u;
label_27e168:
    // 0x27e168: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e16c: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x27e16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_27e170:
    // 0x27e170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e174: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27e174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e178: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x27E178u;
    SET_GPR_U32(ctx, 31, 0x27E180u);
    ctx->pc = 0x27E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E178u;
            // 0x27e17c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E180u; }
        if (ctx->pc != 0x27E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E180u; }
        if (ctx->pc != 0x27E180u) { return; }
    }
    ctx->pc = 0x27E180u;
    // 0x27e180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27e180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e184: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x27E184u;
    {
        const bool branch_taken_0x27e184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E184u;
            // 0x27e188: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e184) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E18Cu;
    // 0x27e18c: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x27e18cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e190: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27e194: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x27E194u;
    {
        const bool branch_taken_0x27e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E194u;
            // 0x27e198: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e194) {
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E19Cu;
    // 0x27e19c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x27e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x27e1a0: 0x24a55220  addiu       $a1, $a1, 0x5220
    ctx->pc = 0x27e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
    // 0x27e1a4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27E1A4u;
    SET_GPR_U32(ctx, 31, 0x27E1ACu);
    ctx->pc = 0x27E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1A4u;
            // 0x27e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ACu; }
        if (ctx->pc != 0x27E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ACu; }
        if (ctx->pc != 0x27E1ACu) { return; }
    }
    ctx->pc = 0x27E1ACu;
    // 0x27e1ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27E1ACu;
    {
        const bool branch_taken_0x27e1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1ACu;
            // 0x27e1b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1ac) {
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E1B4u;
    // 0x27e1b4: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x27e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x27e1b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1bc: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x27E1BCu;
    SET_GPR_U32(ctx, 31, 0x27E1C4u);
    ctx->pc = 0x27E1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1BCu;
            // 0x27e1c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1C4u; }
        if (ctx->pc != 0x27E1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1C4u; }
        if (ctx->pc != 0x27E1C4u) { return; }
    }
    ctx->pc = 0x27E1C4u;
    // 0x27e1c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27e1c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1c8: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x27E1C8u;
    {
        const bool branch_taken_0x27e1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1C8u;
            // 0x27e1cc: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1c8) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E1D0u;
    // 0x27e1d0: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x27e1d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e1d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27e1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27e1d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E1D8u;
    {
        const bool branch_taken_0x27e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1D8u;
            // 0x27e1dc: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1d8) {
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E1E0u;
    // 0x27e1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1e4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27E1E4u;
    SET_GPR_U32(ctx, 31, 0x27E1ECu);
    ctx->pc = 0x27E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1E4u;
            // 0x27e1e8: 0x24a55228  addiu       $a1, $a1, 0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ECu; }
        if (ctx->pc != 0x27E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ECu; }
        if (ctx->pc != 0x27E1ECu) { return; }
    }
    ctx->pc = 0x27E1ECu;
    // 0x27e1ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27E1ECu;
    {
        const bool branch_taken_0x27e1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1ECu;
            // 0x27e1f0: 0x27c3c9c8  addiu       $v1, $fp, -0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1ec) {
            ctx->pc = 0x27E228u;
            goto label_27e228;
        }
    }
    ctx->pc = 0x27E1F4u;
    // 0x27e1f4: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27e1f8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x27e1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27e1fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e200: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e204: 0xac64088c  sw          $a0, 0x88C($v1)
    ctx->pc = 0x27e204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2188), GPR_U32(ctx, 4));
label_27e208:
    // 0x27e208: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27e20c: 0x27c2c9c8  addiu       $v0, $fp, -0x3638
    ctx->pc = 0x27e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953416));
    // 0x27e210: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x27e210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e214: 0x2442088c  addiu       $v0, $v0, 0x88C
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2188));
    // 0x27e218: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x27e218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e21c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e220: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E220u;
    {
        const bool branch_taken_0x27e220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e220) {
            ctx->pc = 0x27E234u;
            goto label_27e234;
        }
    }
    ctx->pc = 0x27E228u;
label_27e228:
    // 0x27e228: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e22c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E22Cu;
    {
        const bool branch_taken_0x27e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E22Cu;
            // 0x27e230: 0x3442002f  ori         $v0, $v0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e22c) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E234u;
label_27e234:
    // 0x27e234: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x27E234u;
    {
        const bool branch_taken_0x27e234 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E234u;
            // 0x27e238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e234) {
            ctx->pc = 0x27E26Cu;
            goto label_27e26c;
        }
    }
    ctx->pc = 0x27E23Cu;
    // 0x27e23c: 0xc09f6fc  jal         func_27DBF0
    ctx->pc = 0x27E23Cu;
    SET_GPR_U32(ctx, 31, 0x27E244u);
    ctx->pc = 0x27E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E23Cu;
            // 0x27e240: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF0u;
    if (runtime->hasFunction(0x27DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E244u; }
        if (ctx->pc != 0x27E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DBF0_0x27dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E244u; }
        if (ctx->pc != 0x27E244u) { return; }
    }
    ctx->pc = 0x27E244u;
    // 0x27e244: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x27e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27e248: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E248u;
    {
        const bool branch_taken_0x27e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E248u;
            // 0x27e24c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e248) {
            ctx->pc = 0x27E258u;
            goto label_27e258;
        }
    }
    ctx->pc = 0x27E250u;
    // 0x27e250: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27E250u;
    {
        const bool branch_taken_0x27e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E250u;
            // 0x27e254: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e250) {
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E258u;
label_27e258:
    // 0x27e258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e260: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x27e260u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x27e264: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x27e264u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x27e268: 0xaec60008  sw          $a2, 0x8($s6)
    ctx->pc = 0x27e268u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 6));
label_27e26c:
    // 0x27e26c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27e270: 0x27c2c9c8  addiu       $v0, $fp, -0x3638
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953416));
    // 0x27e274: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x27e274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27e278: 0x24420888  addiu       $v0, $v0, 0x888
    ctx->pc = 0x27e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2184));
    // 0x27e27c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e280: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e284: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E284u;
    {
        const bool branch_taken_0x27e284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e284) {
            ctx->pc = 0x27E288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27E284u;
            // 0x27e288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27E298u;
            goto label_27e298;
        }
    }
    ctx->pc = 0x27E28Cu;
    // 0x27e28c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27e290: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27e290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x27e294: 0x34429003  ori         $v0, $v0, 0x9003
    ctx->pc = 0x27e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36867);
label_27e298:
    // 0x27e298: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x27e298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x27e29c: 0xdfbe02a0  ld          $fp, 0x2A0($sp)
    ctx->pc = 0x27e29cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x27e2a0: 0xdfb70290  ld          $s7, 0x290($sp)
    ctx->pc = 0x27e2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x27e2a4: 0xdfb60280  ld          $s6, 0x280($sp)
    ctx->pc = 0x27e2a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x27e2a8: 0xdfb50270  ld          $s5, 0x270($sp)
    ctx->pc = 0x27e2a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x27e2ac: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x27e2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x27e2b0: 0xdfb30250  ld          $s3, 0x250($sp)
    ctx->pc = 0x27e2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x27e2b4: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x27e2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x27e2b8: 0xdfb10230  ld          $s1, 0x230($sp)
    ctx->pc = 0x27e2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x27e2bc: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x27e2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x27e2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2C0u;
            // 0x27e2c4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DF98u: goto label_27df98;
            case 0x27DFA8u: goto label_27dfa8;
            case 0x27DFB4u: goto label_27dfb4;
            case 0x27DFDCu: goto label_27dfdc;
            case 0x27E05Cu: goto label_27e05c;
            case 0x27E068u: goto label_27e068;
            case 0x27E070u: goto label_27e070;
            case 0x27E09Cu: goto label_27e09c;
            case 0x27E0CCu: goto label_27e0cc;
            case 0x27E104u: goto label_27e104;
            case 0x27E128u: goto label_27e128;
            case 0x27E13Cu: goto label_27e13c;
            case 0x27E168u: goto label_27e168;
            case 0x27E170u: goto label_27e170;
            case 0x27E208u: goto label_27e208;
            case 0x27E228u: goto label_27e228;
            case 0x27E234u: goto label_27e234;
            case 0x27E258u: goto label_27e258;
            case 0x27E26Cu: goto label_27e26c;
            case 0x27E298u: goto label_27e298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E2C8u;
}
