#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AB28
// Address: 0x17ab28 - 0x17ac88
void sub_0017AB28_0x17ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB28_0x17ab28");
#endif

    ctx->pc = 0x17ab28u;

    // 0x17ab28: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x17ab2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ab30: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x17ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
    // 0x17ab34: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x17ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
    // 0x17ab38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17ab38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab3c: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x17ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
    // 0x17ab40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ab40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab44: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x17ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x17ab48: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB48u;
    {
        const bool branch_taken_0x17ab48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB48u;
            // 0x17ab4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab48) {
            ctx->pc = 0x17AB58u;
            goto label_17ab58;
        }
    }
    ctx->pc = 0x17AB50u;
    // 0x17ab50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ab54: 0x8c50c4e4  lw          $s0, -0x3B1C($v0)
    ctx->pc = 0x17ab54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_17ab58:
    // 0x17ab58: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB58u;
    {
        const bool branch_taken_0x17ab58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB58u;
            // 0x17ab5c: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab58) {
            ctx->pc = 0x17AB68u;
            goto label_17ab68;
        }
    }
    ctx->pc = 0x17AB60u;
    // 0x17ab60: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17ab64: 0x24514a68  addiu       $s1, $v0, 0x4A68
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19048));
label_17ab68:
    // 0x17ab68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab6c: 0x24a52950  addiu       $a1, $a1, 0x2950
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10576));
    // 0x17ab70: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x17AB70u;
    SET_GPR_U32(ctx, 31, 0x17AB78u);
    ctx->pc = 0x17AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB70u;
            // 0x17ab74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB78u; }
        if (ctx->pc != 0x17AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB78u; }
        if (ctx->pc != 0x17AB78u) { return; }
    }
    ctx->pc = 0x17AB78u;
    // 0x17ab78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17AB78u;
    {
        const bool branch_taken_0x17ab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB78u;
            // 0x17ab7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab78) {
            ctx->pc = 0x17ABBCu;
            goto label_17abbc;
        }
    }
    ctx->pc = 0x17AB80u;
    // 0x17ab80: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17AB80u;
    {
        const bool branch_taken_0x17ab80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB80u;
            // 0x17ab84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab80) {
            ctx->pc = 0x17ABCCu;
            goto label_17abcc;
        }
    }
    ctx->pc = 0x17AB88u;
    // 0x17ab88: 0x1e000006  bgtz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AB88u;
    {
        const bool branch_taken_0x17ab88 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x17AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB88u;
            // 0x17ab8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab88) {
            ctx->pc = 0x17ABA4u;
            goto label_17aba4;
        }
    }
    ctx->pc = 0x17AB90u;
    // 0x17ab90: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x17ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17ab94: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AB94u;
    {
        const bool branch_taken_0x17ab94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB94u;
            // 0x17ab98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab94) {
            ctx->pc = 0x17ABBCu;
            goto label_17abbc;
        }
    }
    ctx->pc = 0x17AB9Cu;
    // 0x17ab9c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x17AB9Cu;
    {
        const bool branch_taken_0x17ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB9Cu;
            // 0x17aba0: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab9c) {
            ctx->pc = 0x17AC74u;
            goto label_17ac74;
        }
    }
    ctx->pc = 0x17ABA4u;
label_17aba4:
    // 0x17aba4: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17ABA4u;
    {
        const bool branch_taken_0x17aba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABA4u;
            // 0x17aba8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aba4) {
            ctx->pc = 0x17AC30u;
            goto label_17ac30;
        }
    }
    ctx->pc = 0x17ABACu;
    // 0x17abac: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17ABACu;
    {
        const bool branch_taken_0x17abac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABACu;
            // 0x17abb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abac) {
            ctx->pc = 0x17AC4Cu;
            goto label_17ac4c;
        }
    }
    ctx->pc = 0x17ABB4u;
    // 0x17abb4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17ABB4u;
    {
        const bool branch_taken_0x17abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABB4u;
            // 0x17abb8: 0x7bb00230  lq          $s0, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abb4) {
            ctx->pc = 0x17AC74u;
            goto label_17ac74;
        }
    }
    ctx->pc = 0x17ABBCu;
label_17abbc:
    // 0x17abbc: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17ABBCu;
    SET_GPR_U32(ctx, 31, 0x17ABC4u);
    ctx->pc = 0x17ABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABBCu;
            // 0x17abc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC4u; }
        if (ctx->pc != 0x17ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC4u; }
        if (ctx->pc != 0x17ABC4u) { return; }
    }
    ctx->pc = 0x17ABC4u;
    // 0x17abc4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17ABC4u;
    {
        const bool branch_taken_0x17abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABC4u;
            // 0x17abc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abc4) {
            ctx->pc = 0x17AC70u;
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17ABCCu;
label_17abcc:
    // 0x17abcc: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17ABCCu;
    SET_GPR_U32(ctx, 31, 0x17ABD4u);
    ctx->pc = 0x17ABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABCCu;
            // 0x17abd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD4u; }
        if (ctx->pc != 0x17ABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD4u; }
        if (ctx->pc != 0x17ABD4u) { return; }
    }
    ctx->pc = 0x17ABD4u;
    // 0x17abd4: 0xc0a3534  jal         func_28D4D0
    ctx->pc = 0x17ABD4u;
    SET_GPR_U32(ctx, 31, 0x17ABDCu);
    ctx->pc = 0x17ABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABD4u;
            // 0x17abd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D4D0u;
    if (runtime->hasFunction(0x28D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x28D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABDCu; }
        if (ctx->pc != 0x17ABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d4d0_0x28d550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABDCu; }
        if (ctx->pc != 0x17ABDCu) { return; }
    }
    ctx->pc = 0x17ABDCu;
    // 0x17abdc: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x17abdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abe0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17ABE0u;
    {
        const bool branch_taken_0x17abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABE0u;
            // 0x17abe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abe0) {
            ctx->pc = 0x17AC14u;
            goto label_17ac14;
        }
    }
    ctx->pc = 0x17ABE8u;
    // 0x17abe8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x17abe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17abec: 0x0  nop
    ctx->pc = 0x17abecu;
    // NOP
label_17abf0:
    // 0x17abf0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17abf4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABF4u;
    {
        const bool branch_taken_0x17abf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17abf4) {
            ctx->pc = 0x17ABF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABF4u;
            // 0x17abf8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AC08u;
            goto label_17ac08;
        }
    }
    ctx->pc = 0x17ABFCu;
    // 0x17abfc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x17abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17ac00: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x17ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ac04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17ac08:
    // 0x17ac08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17ac08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ac0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17AC0Cu;
    {
        const bool branch_taken_0x17ac0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac0c) {
            ctx->pc = 0x17AC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC0Cu;
            // 0x17ac10: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17ABF0u;
            runtime->cooperativeGuestYield();
            goto label_17abf0;
        }
    }
    ctx->pc = 0x17AC14u;
label_17ac14:
    // 0x17ac14: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17ac18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac1c: 0x24a52958  addiu       $a1, $a1, 0x2958
    ctx->pc = 0x17ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
    // 0x17ac20: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x17AC20u;
    SET_GPR_U32(ctx, 31, 0x17AC28u);
    ctx->pc = 0x17AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC20u;
            // 0x17ac24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC28u; }
        if (ctx->pc != 0x17AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC28u; }
        if (ctx->pc != 0x17AC28u) { return; }
    }
    ctx->pc = 0x17AC28u;
    // 0x17ac28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17AC28u;
    {
        const bool branch_taken_0x17ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC28u;
            // 0x17ac2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac28) {
            ctx->pc = 0x17AC70u;
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC30u;
label_17ac30:
    // 0x17ac30: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17ac34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17ac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac38: 0x24a52968  addiu       $a1, $a1, 0x2968
    ctx->pc = 0x17ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10600));
    // 0x17ac3c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x17AC3Cu;
    SET_GPR_U32(ctx, 31, 0x17AC44u);
    ctx->pc = 0x17AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC3Cu;
            // 0x17ac40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC44u; }
        if (ctx->pc != 0x17AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC44u; }
        if (ctx->pc != 0x17AC44u) { return; }
    }
    ctx->pc = 0x17AC44u;
    // 0x17ac44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17AC44u;
    {
        const bool branch_taken_0x17ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC44u;
            // 0x17ac48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac44) {
            ctx->pc = 0x17AC70u;
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC4Cu;
label_17ac4c:
    // 0x17ac4c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17ac50: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17ac54: 0x24a52978  addiu       $a1, $a1, 0x2978
    ctx->pc = 0x17ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10616));
    // 0x17ac58: 0x24c64c68  addiu       $a2, $a2, 0x4C68
    ctx->pc = 0x17ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19560));
    // 0x17ac5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17ac5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac60: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x17AC60u;
    SET_GPR_U32(ctx, 31, 0x17AC68u);
    ctx->pc = 0x17AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC60u;
            // 0x17ac64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC68u; }
        if (ctx->pc != 0x17AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC68u; }
        if (ctx->pc != 0x17AC68u) { return; }
    }
    ctx->pc = 0x17AC68u;
    // 0x17ac68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17ac68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac6c: 0x0  nop
    ctx->pc = 0x17ac6cu;
    // NOP
label_17ac70:
    // 0x17ac70: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x17ac70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_17ac74:
    // 0x17ac74: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x17ac74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x17ac78: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x17ac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x17ac7c: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x17ac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x17ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC80u;
            // 0x17ac84: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AB58u: goto label_17ab58;
            case 0x17AB68u: goto label_17ab68;
            case 0x17ABA4u: goto label_17aba4;
            case 0x17ABBCu: goto label_17abbc;
            case 0x17ABCCu: goto label_17abcc;
            case 0x17ABF0u: goto label_17abf0;
            case 0x17AC08u: goto label_17ac08;
            case 0x17AC14u: goto label_17ac14;
            case 0x17AC30u: goto label_17ac30;
            case 0x17AC4Cu: goto label_17ac4c;
            case 0x17AC70u: goto label_17ac70;
            case 0x17AC74u: goto label_17ac74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AC88u;
}
