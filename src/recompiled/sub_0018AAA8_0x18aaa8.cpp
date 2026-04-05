#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AAA8
// Address: 0x18aaa8 - 0x18ac20
void sub_0018AAA8_0x18aaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AAA8_0x18aaa8");
#endif

    ctx->pc = 0x18aaa8u;

    // 0x18aaa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18aaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18aaac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18aab0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18aab4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x18aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x18aab8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18aabc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18aac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18aac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aac8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18aacc: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x18AACCu;
    {
        const bool branch_taken_0x18aacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AACCu;
            // 0x18aad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aacc) {
            ctx->pc = 0x18ABC8u;
            goto label_18abc8;
        }
    }
    ctx->pc = 0x18AAD4u;
    // 0x18aad4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18aad8: 0x8e044f20  lw          $a0, 0x4F20($s0)
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18aadc: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x18aae0: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x18aae4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18AAE4u;
    {
        const bool branch_taken_0x18aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAE4u;
            // 0x18aae8: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aae4) {
            ctx->pc = 0x18AB28u;
            goto label_18ab28;
        }
    }
    ctx->pc = 0x18AAECu;
    // 0x18aaec: 0x0  nop
    ctx->pc = 0x18aaecu;
    // NOP
label_18aaf0:
    // 0x18aaf0: 0xc062b08  jal         func_18AC20
    ctx->pc = 0x18AAF0u;
    SET_GPR_U32(ctx, 31, 0x18AAF8u);
    ctx->pc = 0x18AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAF0u;
            // 0x18aaf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC20u;
    if (runtime->hasFunction(0x18AC20u)) {
        auto targetFn = runtime->lookupFunction(0x18AC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAF8u; }
        if (ctx->pc != 0x18AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AC20_0x18ac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAF8u; }
        if (ctx->pc != 0x18AAF8u) { return; }
    }
    ctx->pc = 0x18AAF8u;
    // 0x18aaf8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AAF8u;
    {
        const bool branch_taken_0x18aaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aaf8) {
            ctx->pc = 0x18AAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAF8u;
            // 0x18aafc: 0x8e044f20  lw          $a0, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AB20u;
            goto label_18ab20;
        }
    }
    ctx->pc = 0x18AB00u;
    // 0x18ab00: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18ab04: 0x8c424f20  lw          $v0, 0x4F20($v0)
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x18ab08: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18ab0c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18AB0Cu;
    {
        const bool branch_taken_0x18ab0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB0Cu;
            // 0x18ab10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab0c) {
            ctx->pc = 0x18ABC8u;
            goto label_18abc8;
        }
    }
    ctx->pc = 0x18AB14u;
    // 0x18ab14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18AB14u;
    {
        const bool branch_taken_0x18ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB14u;
            // 0x18ab18: 0x2652000f  addiu       $s2, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab14) {
            ctx->pc = 0x18AB48u;
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18AB1Cu;
    // 0x18ab1c: 0x0  nop
    ctx->pc = 0x18ab1cu;
    // NOP
label_18ab20:
    // 0x18ab20: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x18ab24: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_18ab28:
    // 0x18ab28: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ab2c: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AB2Cu;
    {
        const bool branch_taken_0x18ab2c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x18AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB2Cu;
            // 0x18ab30: 0x2a422000  slti        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab2c) {
            ctx->pc = 0x18AB40u;
            goto label_18ab40;
        }
    }
    ctx->pc = 0x18AB34u;
    // 0x18ab34: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x18ab38: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18ab3c: 0x2a422000  slti        $v0, $s2, 0x2000
    ctx->pc = 0x18ab3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8192) ? 1 : 0);
label_18ab40:
    // 0x18ab40: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18AB40u;
    {
        const bool branch_taken_0x18ab40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ab40) {
            ctx->pc = 0x18AAF0u;
            runtime->cooperativeGuestYield();
            goto label_18aaf0;
        }
    }
    ctx->pc = 0x18AB48u;
label_18ab48:
    // 0x18ab48: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x18ab4c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x18ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x18ab50: 0x8e224f20  lw          $v0, 0x4F20($s1)
    ctx->pc = 0x18ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
    // 0x18ab54: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x18ab54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x18ab58: 0x2508024  and         $s0, $s2, $s0
    ctx->pc = 0x18ab58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x18ab5c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x18ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18ab60: 0x8c4600f4  lw          $a2, 0xF4($v0)
    ctx->pc = 0x18ab60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x18ab64: 0x2e032001  sltiu       $v1, $s0, 0x2001
    ctx->pc = 0x18ab64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x18ab68: 0x8c4700ec  lw          $a3, 0xEC($v0)
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x18ab6c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x18ab6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x18ab70: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18ab74: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18ab78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ab80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18ab84: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x18ab84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18ab88: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18ab8c: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x18ab8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x18ab90: 0xc09bb5a  jal         func_26ED68
    ctx->pc = 0x18AB90u;
    SET_GPR_U32(ctx, 31, 0x18AB98u);
    ctx->pc = 0x18AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB90u;
            // 0x18ab94: 0x103102  srl         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ED68u;
    if (runtime->hasFunction(0x26ED68u)) {
        auto targetFn = runtime->lookupFunction(0x26ED68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB98u; }
        if (ctx->pc != 0x18AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ed68_0x26ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB98u; }
        if (ctx->pc != 0x18AB98u) { return; }
    }
    ctx->pc = 0x18AB98u;
    // 0x18ab98: 0x8e244f20  lw          $a0, 0x4F20($s1)
    ctx->pc = 0x18ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
    // 0x18ab9c: 0x8c8500ec  lw          $a1, 0xEC($a0)
    ctx->pc = 0x18ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x18aba0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x18aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x18aba4: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x18aba8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18abac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18abb0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18abb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18abb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABB4u;
    {
        const bool branch_taken_0x18abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ABB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABB4u;
            // 0x18abb8: 0xac8300f8  sw          $v1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abb4) {
            ctx->pc = 0x18ABC4u;
            goto label_18abc4;
        }
    }
    ctx->pc = 0x18ABBCu;
    // 0x18abbc: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18abc0: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x18abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
label_18abc4:
    // 0x18abc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18abc8:
    // 0x18abc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18abcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18abccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18abd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18abd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18abd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ABD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABD8u;
            // 0x18abdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AAF0u: goto label_18aaf0;
            case 0x18AB20u: goto label_18ab20;
            case 0x18AB28u: goto label_18ab28;
            case 0x18AB40u: goto label_18ab40;
            case 0x18AB48u: goto label_18ab48;
            case 0x18ABC4u: goto label_18abc4;
            case 0x18ABC8u: goto label_18abc8;
            case 0x18ABF0u: goto label_18abf0;
            case 0x18ABF8u: goto label_18abf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18ABE0u;
    // 0x18abe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18abe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18ABE4u;
    {
        const bool branch_taken_0x18abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABE4u;
            // 0x18abe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe4) {
            ctx->pc = 0x18ABF8u;
            goto label_18abf8;
        }
    }
    ctx->pc = 0x18ABECu;
    // 0x18abec: 0x0  nop
    ctx->pc = 0x18abecu;
    // NOP
label_18abf0:
    // 0x18abf0: 0xc09b4cc  jal         func_26D330
    ctx->pc = 0x18ABF0u;
    SET_GPR_U32(ctx, 31, 0x18ABF8u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABF8u; }
        if (ctx->pc != 0x18ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABF8u; }
        if (ctx->pc != 0x18ABF8u) { return; }
    }
    ctx->pc = 0x18ABF8u;
label_18abf8:
    // 0x18abf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18abfc: 0xc09e548  jal         func_279520
    ctx->pc = 0x18ABFCu;
    SET_GPR_U32(ctx, 31, 0x18AC04u);
    ctx->pc = 0x18AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABFCu;
            // 0x18ac00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC04u; }
        if (ctx->pc != 0x18AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC04u; }
        if (ctx->pc != 0x18AC04u) { return; }
    }
    ctx->pc = 0x18AC04u;
    // 0x18ac04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AC04u;
    {
        const bool branch_taken_0x18ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC04u;
            // 0x18ac08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac04) {
            ctx->pc = 0x18ABF0u;
            runtime->cooperativeGuestYield();
            goto label_18abf0;
        }
    }
    ctx->pc = 0x18AC0Cu;
    // 0x18ac0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC10u;
            // 0x18ac14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AAF0u: goto label_18aaf0;
            case 0x18AB20u: goto label_18ab20;
            case 0x18AB28u: goto label_18ab28;
            case 0x18AB40u: goto label_18ab40;
            case 0x18AB48u: goto label_18ab48;
            case 0x18ABC4u: goto label_18abc4;
            case 0x18ABC8u: goto label_18abc8;
            case 0x18ABF0u: goto label_18abf0;
            case 0x18ABF8u: goto label_18abf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AC18u;
    // 0x18ac18: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC18u;
            // 0x18ac1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AAF0u: goto label_18aaf0;
            case 0x18AB20u: goto label_18ab20;
            case 0x18AB28u: goto label_18ab28;
            case 0x18AB40u: goto label_18ab40;
            case 0x18AB48u: goto label_18ab48;
            case 0x18ABC4u: goto label_18abc4;
            case 0x18ABC8u: goto label_18abc8;
            case 0x18ABF0u: goto label_18abf0;
            case 0x18ABF8u: goto label_18abf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AC20u;
}
