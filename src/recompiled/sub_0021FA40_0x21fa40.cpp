#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FA40
// Address: 0x21fa40 - 0x21fb78
void sub_0021FA40_0x21fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FA40_0x21fa40");
#endif

    ctx->pc = 0x21fa40u;

    // 0x21fa40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fa44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fa48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21fa4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21fa50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21fa54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fa58: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21FA58u;
    SET_GPR_U32(ctx, 31, 0x21FA60u);
    ctx->pc = 0x21FA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA58u;
            // 0x21fa5c: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA60u; }
        if (ctx->pc != 0x21FA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA60u; }
        if (ctx->pc != 0x21FA60u) { return; }
    }
    ctx->pc = 0x21FA60u;
    // 0x21fa60: 0x8e42e5a0  lw          $v0, -0x1A60($s2)
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960544)));
    // 0x21fa64: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21FA64u;
    {
        const bool branch_taken_0x21fa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA64u;
            // 0x21fa68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa64) {
            ctx->pc = 0x21FAE8u;
            goto label_21fae8;
        }
    }
    ctx->pc = 0x21FA6Cu;
    // 0x21fa6c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x21FA6Cu;
    {
        const bool branch_taken_0x21fa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA6Cu;
            // 0x21fa70: 0xae42e5a0  sw          $v0, -0x1A60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa6c) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FA74u;
    // 0x21fa74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fa78: 0x8c42e5ac  lw          $v0, -0x1A54($v0)
    ctx->pc = 0x21fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960556)));
    // 0x21fa7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21FA7Cu;
    {
        const bool branch_taken_0x21fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA7Cu;
            // 0x21fa80: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa7c) {
            ctx->pc = 0x21FAB8u;
            goto label_21fab8;
        }
    }
    ctx->pc = 0x21FA84u;
    // 0x21fa84: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21fa84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21fa88: 0x8c43e5b4  lw          $v1, -0x1A4C($v0)
    ctx->pc = 0x21fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960564)));
    // 0x21fa8c: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21fa90: 0xac430268  sw          $v1, 0x268($v0)
    ctx->pc = 0x21fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 3));
    // 0x21fa94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa98: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21FA98u;
    SET_GPR_U32(ctx, 31, 0x21FAA0u);
    ctx->pc = 0x21FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA98u;
            // 0x21fa9c: 0xac400278  sw          $zero, 0x278($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAA0u; }
        if (ctx->pc != 0x21FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAA0u; }
        if (ctx->pc != 0x21FAA0u) { return; }
    }
    ctx->pc = 0x21FAA0u;
    // 0x21faa0: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21faa4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21faa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21faac: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21faacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21fab0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x21FAB0u;
    {
        const bool branch_taken_0x21fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAB0u;
            // 0x21fab4: 0xac80027c  sw          $zero, 0x27C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fab0) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FAB8u;
label_21fab8:
    // 0x21fab8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fabc: 0xc06dee6  jal         func_1B7B98
    ctx->pc = 0x21FABCu;
    SET_GPR_U32(ctx, 31, 0x21FAC4u);
    ctx->pc = 0x21FAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FABCu;
            // 0x21fac0: 0x8c44cb94  lw          $a0, -0x346C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B98u;
    if (runtime->hasFunction(0x1B7B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAC4u; }
        if (ctx->pc != 0x21FAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B98_0x1b7b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAC4u; }
        if (ctx->pc != 0x21FAC4u) { return; }
    }
    ctx->pc = 0x21FAC4u;
    // 0x21fac4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fac8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21facc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fad0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21fad4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fad8: 0xae45e5a0  sw          $a1, -0x1A60($s2)
    ctx->pc = 0x21fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960544), GPR_U32(ctx, 5));
    // 0x21fadc: 0xacc3e5b0  sw          $v1, -0x1A50($a2)
    ctx->pc = 0x21fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960560), GPR_U32(ctx, 3));
    // 0x21fae0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21FAE0u;
    {
        const bool branch_taken_0x21fae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAE0u;
            // 0x21fae4: 0xac44e560  sw          $a0, -0x1AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae0) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FAE8u;
label_21fae8:
    // 0x21fae8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21fae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x21faec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21faecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21faf0: 0x8e22e5b4  lw          $v0, -0x1A4C($s1)
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960564)));
    // 0x21faf4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FAF4u;
    {
        const bool branch_taken_0x21faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FAF4u;
            // 0x21faf8: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf4) {
            ctx->pc = 0x21FB0Cu;
            goto label_21fb0c;
        }
    }
    ctx->pc = 0x21FAFCu;
    // 0x21fafc: 0xc06ef3e  jal         func_1BBCF8
    ctx->pc = 0x21FAFCu;
    SET_GPR_U32(ctx, 31, 0x21FB04u);
    ctx->pc = 0x1BBCF8u;
    if (runtime->hasFunction(0x1BBCF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB04u; }
        if (ctx->pc != 0x21FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bbcf8_0x1bbd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB04u; }
        if (ctx->pc != 0x21FB04u) { return; }
    }
    ctx->pc = 0x21FB04u;
    // 0x21fb04: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21FB04u;
    {
        const bool branch_taken_0x21fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb04) {
            ctx->pc = 0x21FB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB04u;
            // 0x21fb08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FB64u;
            goto label_21fb64;
        }
    }
    ctx->pc = 0x21FB0Cu;
label_21fb0c:
    // 0x21fb0c: 0x8e02e5ac  lw          $v0, -0x1A54($s0)
    ctx->pc = 0x21fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960556)));
    // 0x21fb10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FB10u;
    {
        const bool branch_taken_0x21fb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB10u;
            // 0x21fb14: 0x8e24e5b4  lw          $a0, -0x1A4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb10) {
            ctx->pc = 0x21FB28u;
            goto label_21fb28;
        }
    }
    ctx->pc = 0x21FB18u;
    // 0x21fb18: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x21fb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x21fb1c: 0xc08bf78  jal         func_22FDE0
    ctx->pc = 0x21FB1Cu;
    SET_GPR_U32(ctx, 31, 0x21FB24u);
    ctx->pc = 0x21FB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB1Cu;
            // 0x21fb20: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FDE0u;
    if (runtime->hasFunction(0x22FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x22FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB24u; }
        if (ctx->pc != 0x21FB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FDE0_0x22fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB24u; }
        if (ctx->pc != 0x21FB24u) { return; }
    }
    ctx->pc = 0x21FB24u;
    // 0x21fb24: 0xae00e5ac  sw          $zero, -0x1A54($s0)
    ctx->pc = 0x21fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960556), GPR_U32(ctx, 0));
label_21fb28:
    // 0x21fb28: 0xc08bf8c  jal         func_22FE30
    ctx->pc = 0x21FB28u;
    SET_GPR_U32(ctx, 31, 0x21FB30u);
    ctx->pc = 0x22FE30u;
    if (runtime->hasFunction(0x22FE30u)) {
        auto targetFn = runtime->lookupFunction(0x22FE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB30u; }
        if (ctx->pc != 0x21FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FE30_0x22fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB30u; }
        if (ctx->pc != 0x21FB30u) { return; }
    }
    ctx->pc = 0x21FB30u;
    // 0x21fb30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21FB30u;
    {
        const bool branch_taken_0x21fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB30u;
            // 0x21fb34: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb30) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FB38u;
    // 0x21fb38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21fb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21fb3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FB3Cu;
    {
        const bool branch_taken_0x21fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB3Cu;
            // 0x21fb40: 0xae02e5ac  sw          $v0, -0x1A54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb3c) {
            ctx->pc = 0x21FB58u;
            goto label_21fb58;
        }
    }
    ctx->pc = 0x21FB44u;
    // 0x21fb44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fb48: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21fb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb50: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21FB50u;
    SET_GPR_U32(ctx, 31, 0x21FB58u);
    ctx->pc = 0x21FB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB50u;
            // 0x21fb54: 0xac400274  sw          $zero, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB58u; }
        if (ctx->pc != 0x21FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB58u; }
        if (ctx->pc != 0x21FB58u) { return; }
    }
    ctx->pc = 0x21FB58u;
label_21fb58:
    // 0x21fb58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fb5c: 0xae42e5a0  sw          $v0, -0x1A60($s2)
    ctx->pc = 0x21fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960544), GPR_U32(ctx, 2));
label_21fb60:
    // 0x21fb60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21fb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21fb64:
    // 0x21fb64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21fb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fb68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21fb68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb70: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB70u;
            // 0x21fb74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FAB8u: goto label_21fab8;
            case 0x21FAE8u: goto label_21fae8;
            case 0x21FB0Cu: goto label_21fb0c;
            case 0x21FB28u: goto label_21fb28;
            case 0x21FB58u: goto label_21fb58;
            case 0x21FB60u: goto label_21fb60;
            case 0x21FB64u: goto label_21fb64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FB78u;
}
