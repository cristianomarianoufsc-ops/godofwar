#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8E88
// Address: 0x1b8e88 - 0x1b92b8
void sub_001B8E88_0x1b8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E88_0x1b8e88");
#endif

    ctx->pc = 0x1b8e88u;

    // 0x1b8e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8e90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b8e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b8e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b8e98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b8e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b8ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8ea4: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B8EA4u;
    SET_GPR_U32(ctx, 31, 0x1B8EACu);
    ctx->pc = 0x1B8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EA4u;
            // 0x1b8ea8: 0x8e441528  lw          $a0, 0x1528($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EACu; }
        if (ctx->pc != 0x1B8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EACu; }
        if (ctx->pc != 0x1B8EACu) { return; }
    }
    ctx->pc = 0x1B8EACu;
    // 0x1b8eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b8eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8eb0: 0x10a000cc  beqz        $a1, . + 4 + (0xCC << 2)
    ctx->pc = 0x1B8EB0u;
    {
        const bool branch_taken_0x1b8eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EB0u;
            // 0x1b8eb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8eb0) {
            ctx->pc = 0x1B91E4u;
            goto label_1b91e4;
        }
    }
    ctx->pc = 0x1B8EB8u;
    // 0x1b8eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ebc: 0xae421538  sw          $v0, 0x1538($s2)
    ctx->pc = 0x1b8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5432), GPR_U32(ctx, 2));
    // 0x1b8ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ec4: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B8EC4u;
    {
        const bool branch_taken_0x1b8ec4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B8EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EC4u;
            // 0x1b8ec8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ec4) {
            ctx->pc = 0x1B8F48u;
            goto label_1b8f48;
        }
    }
    ctx->pc = 0x1B8ECCu;
    // 0x1b8ecc: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x1b8eccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ed0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8ed4: 0x0  nop
    ctx->pc = 0x1b8ed4u;
    // NOP
label_1b8ed8:
    // 0x1b8ed8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8edc: 0x8c43cba4  lw          $v1, -0x345C($v0)
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953892)));
    // 0x1b8ee0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1b8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1b8ee4: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b8ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8ef4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1b8ef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8ef8: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8EF8u;
    {
        const bool branch_taken_0x1b8ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8ef8) {
            ctx->pc = 0x1B8EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EF8u;
            // 0x1b8efc: 0x8e421534  lw          $v0, 0x1534($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F1Cu;
            goto label_1b8f1c;
        }
    }
    ctx->pc = 0x1B8F00u;
    // 0x1b8f00: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x1b8f00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1b8f04: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8F04u;
    {
        const bool branch_taken_0x1b8f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8f04) {
            ctx->pc = 0x1B8F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F04u;
            // 0x1b8f08: 0x8e421534  lw          $v0, 0x1534($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F1Cu;
            goto label_1b8f1c;
        }
    }
    ctx->pc = 0x1B8F0Cu;
    // 0x1b8f0c: 0x8e421538  lw          $v0, 0x1538($s2)
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5432)));
    // 0x1b8f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8f14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8F14u;
    {
        const bool branch_taken_0x1b8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F14u;
            // 0x1b8f18: 0xae421538  sw          $v0, 0x1538($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f14) {
            ctx->pc = 0x1B8F38u;
            goto label_1b8f38;
        }
    }
    ctx->pc = 0x1B8F1Cu;
label_1b8f1c:
    // 0x1b8f1c: 0x8e431538  lw          $v1, 0x1538($s2)
    ctx->pc = 0x1b8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5432)));
    // 0x1b8f20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8f24: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8F24u;
    {
        const bool branch_taken_0x1b8f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8f24) {
            ctx->pc = 0x1B8F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F24u;
            // 0x1b8f28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F3Cu;
            goto label_1b8f3c;
        }
    }
    ctx->pc = 0x1B8F2Cu;
    // 0x1b8f2c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8F2Cu;
    {
        const bool branch_taken_0x1b8f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f2c) {
            ctx->pc = 0x1B8F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F2Cu;
            // 0x1b8f30: 0xe64021  addu        $t0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F34u;
            goto label_1b8f34;
        }
    }
    ctx->pc = 0x1B8F34u;
label_1b8f34:
    // 0x1b8f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b8f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b8f38:
    // 0x1b8f38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b8f3c:
    // 0x1b8f3c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1b8f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b8f40: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B8F40u;
    {
        const bool branch_taken_0x1b8f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F40u;
            // 0x1b8f44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f40) {
            ctx->pc = 0x1B8ED8u;
            runtime->cooperativeGuestYield();
            goto label_1b8ed8;
        }
    }
    ctx->pc = 0x1B8F48u;
label_1b8f48:
    // 0x1b8f48: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b8f4c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b8f50: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8F50u;
    {
        const bool branch_taken_0x1b8f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f50) {
            ctx->pc = 0x1B8F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F50u;
            // 0x1b8f54: 0x8e421548  lw          $v0, 0x1548($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F80u;
            goto label_1b8f80;
        }
    }
    ctx->pc = 0x1B8F58u;
    // 0x1b8f58: 0xae400204  sw          $zero, 0x204($s2)
    ctx->pc = 0x1b8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
    // 0x1b8f5c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F64u);
    ctx->pc = 0x1B8F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F5Cu;
            // 0x1b8f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F64u; }
        if (ctx->pc != 0x1B8F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F64u; }
        if (ctx->pc != 0x1B8F64u) { return; }
    }
    ctx->pc = 0x1B8F64u;
    // 0x1b8f64: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B8F64u;
    SET_GPR_U32(ctx, 31, 0x1B8F6Cu);
    ctx->pc = 0x1B8F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F64u;
            // 0x1b8f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F6Cu; }
        if (ctx->pc != 0x1B8F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F6Cu; }
        if (ctx->pc != 0x1B8F6Cu) { return; }
    }
    ctx->pc = 0x1B8F6Cu;
    // 0x1b8f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8f70: 0xae401528  sw          $zero, 0x1528($s2)
    ctx->pc = 0x1b8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5416), GPR_U32(ctx, 0));
    // 0x1b8f74: 0xae4201bc  sw          $v0, 0x1BC($s2)
    ctx->pc = 0x1b8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
    // 0x1b8f78: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1B8F78u;
    {
        const bool branch_taken_0x1b8f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F78u;
            // 0x1b8f7c: 0xae401548  sw          $zero, 0x1548($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f78) {
            ctx->pc = 0x1B929Cu;
            goto label_1b929c;
        }
    }
    ctx->pc = 0x1B8F80u;
label_1b8f80:
    // 0x1b8f80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F80u;
    {
        const bool branch_taken_0x1b8f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F80u;
            // 0x1b8f84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f80) {
            ctx->pc = 0x1B8F90u;
            goto label_1b8f90;
        }
    }
    ctx->pc = 0x1B8F88u;
    // 0x1b8f88: 0x8e42154c  lw          $v0, 0x154C($s2)
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5452)));
    // 0x1b8f8c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1b8f8cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b8f90:
    // 0x1b8f90: 0x8e421538  lw          $v0, 0x1538($s2)
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5432)));
    // 0x1b8f94: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b8f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8F98u;
    {
        const bool branch_taken_0x1b8f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F98u;
            // 0x1b8f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f98) {
            ctx->pc = 0x1B8FA8u;
            goto label_1b8fa8;
        }
    }
    ctx->pc = 0x1B8FA0u;
    // 0x1b8fa0: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B8FA0u;
    {
        const bool branch_taken_0x1b8fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FA0u;
            // 0x1b8fa4: 0x3c06002a  lui         $a2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fa0) {
            ctx->pc = 0x1B915Cu;
            goto label_1b915c;
        }
    }
    ctx->pc = 0x1B8FA8u;
label_1b8fa8:
    // 0x1b8fa8: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B8FA8u;
    {
        const bool branch_taken_0x1b8fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FA8u;
            // 0x1b8fac: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fa8) {
            ctx->pc = 0x1B8FF8u;
            goto label_1b8ff8;
        }
    }
    ctx->pc = 0x1B8FB0u;
    // 0x1b8fb0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b8fb4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b8fb8: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b8fbc: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x1b8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x1b8fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8fc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8fc8: 0x8e431550  lw          $v1, 0x1550($s2)
    ctx->pc = 0x1b8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5456)));
    // 0x1b8fcc: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x1b8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x1b8fd0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B8FD0u;
    {
        const bool branch_taken_0x1b8fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FD0u;
            // 0x1b8fd4: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fd0) {
            ctx->pc = 0x1B9048u;
            goto label_1b9048;
        }
    }
    ctx->pc = 0x1B8FD8u;
    // 0x1b8fd8: 0x5620001c  bnel        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B8FD8u;
    {
        const bool branch_taken_0x1b8fd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fd8) {
            ctx->pc = 0x1B8FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FD8u;
            // 0x1b8fdc: 0x8e421534  lw          $v0, 0x1534($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B904Cu;
            goto label_1b904c;
        }
    }
    ctx->pc = 0x1B8FE0u;
    // 0x1b8fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8fe8: 0xc06e4ae  jal         func_1B92B8
    ctx->pc = 0x1B8FE8u;
    SET_GPR_U32(ctx, 31, 0x1B8FF0u);
    ctx->pc = 0x1B8FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FE8u;
            // 0x1b8fec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B8u;
    if (runtime->hasFunction(0x1B92B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B92B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FF0u; }
        if (ctx->pc != 0x1B8FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B92B8_0x1b92b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FF0u; }
        if (ctx->pc != 0x1B8FF0u) { return; }
    }
    ctx->pc = 0x1B8FF0u;
    // 0x1b8ff0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B8FF0u;
    {
        const bool branch_taken_0x1b8ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FF0u;
            // 0x1b8ff4: 0x8e421534  lw          $v0, 0x1534($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ff0) {
            ctx->pc = 0x1B904Cu;
            goto label_1b904c;
        }
    }
    ctx->pc = 0x1B8FF8u;
label_1b8ff8:
    // 0x1b8ff8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b8ffc: 0x8c42cba4  lw          $v0, -0x345C($v0)
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953892)));
    // 0x1b9000: 0x2a040003  slti        $a0, $s0, 0x3
    ctx->pc = 0x1b9000u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b9004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b900c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9010: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x1b9010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    // 0x1b9014: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b9018: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9018u;
    {
        const bool branch_taken_0x1b9018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9018u;
            // 0x1b901c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9018) {
            ctx->pc = 0x1B9024u;
            goto label_1b9024;
        }
    }
    ctx->pc = 0x1B9020u;
    // 0x1b9020: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1b9020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b9024:
    // 0x1b9024: 0x8e421550  lw          $v0, 0x1550($s2)
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5456)));
    // 0x1b9028: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9028u;
    {
        const bool branch_taken_0x1b9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9028u;
            // 0x1b902c: 0xae450090  sw          $a1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9028) {
            ctx->pc = 0x1B9048u;
            goto label_1b9048;
        }
    }
    ctx->pc = 0x1B9030u;
    // 0x1b9030: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9030u;
    {
        const bool branch_taken_0x1b9030 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9030) {
            ctx->pc = 0x1B9034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9030u;
            // 0x1b9034: 0x8e421534  lw          $v0, 0x1534($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B904Cu;
            goto label_1b904c;
        }
    }
    ctx->pc = 0x1B9038u;
    // 0x1b9038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b903c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9040: 0xc06e4ae  jal         func_1B92B8
    ctx->pc = 0x1B9040u;
    SET_GPR_U32(ctx, 31, 0x1B9048u);
    ctx->pc = 0x1B9044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9040u;
            // 0x1b9044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B8u;
    if (runtime->hasFunction(0x1B92B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B92B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9048u; }
        if (ctx->pc != 0x1B9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B92B8_0x1b92b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9048u; }
        if (ctx->pc != 0x1B9048u) { return; }
    }
    ctx->pc = 0x1B9048u;
label_1b9048:
    // 0x1b9048: 0x8e421534  lw          $v0, 0x1534($s2)
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5428)));
label_1b904c:
    // 0x1b904c: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1B904Cu;
    {
        const bool branch_taken_0x1b904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b904c) {
            ctx->pc = 0x1B9050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B904Cu;
            // 0x1b9050: 0xc640153c  lwc1        $f0, 0x153C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B923Cu;
            goto label_1b923c;
        }
    }
    ctx->pc = 0x1B9054u;
    // 0x1b9054: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B9054u;
    {
        const bool branch_taken_0x1b9054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9054u;
            // 0x1b9058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9054) {
            ctx->pc = 0x1B913Cu;
            goto label_1b913c;
        }
    }
    ctx->pc = 0x1B905Cu;
    // 0x1b905c: 0x8e45154c  lw          $a1, 0x154C($s2)
    ctx->pc = 0x1b905cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5452)));
    // 0x1b9060: 0xc06de98  jal         func_1B7A60
    ctx->pc = 0x1B9060u;
    SET_GPR_U32(ctx, 31, 0x1B9068u);
    ctx->pc = 0x1B9064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9060u;
            // 0x1b9064: 0x8e461548  lw          $a2, 0x1548($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A60u;
    if (runtime->hasFunction(0x1B7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9068u; }
        if (ctx->pc != 0x1B9068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7a60_0x1b7aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9068u; }
        if (ctx->pc != 0x1B9068u) { return; }
    }
    ctx->pc = 0x1B9068u;
    // 0x1b9068: 0x8e421550  lw          $v0, 0x1550($s2)
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5456)));
    // 0x1b906c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B906Cu;
    {
        const bool branch_taken_0x1b906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B906Cu;
            // 0x1b9070: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b906c) {
            ctx->pc = 0x1B910Cu;
            goto label_1b910c;
        }
    }
    ctx->pc = 0x1B9074u;
    // 0x1b9074: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1b9078: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b907c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9080: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1b9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9088: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1b9088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b908c: 0x0  nop
    ctx->pc = 0x1b908cu;
    // NOP
    // 0x1b9090: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9090u;
    {
        const bool branch_taken_0x1b9090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B9094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9090u;
            // 0x1b9094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9090) {
            ctx->pc = 0x1B90A8u;
            goto label_1b90a8;
        }
    }
    ctx->pc = 0x1B9098u;
    // 0x1b9098: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x1b9098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x1b909c: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x1b909cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x1b90a0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B90A0u;
    SET_GPR_U32(ctx, 31, 0x1B90A8u);
    ctx->pc = 0x1B90A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90A0u;
            // 0x1b90a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90A8u; }
        if (ctx->pc != 0x1B90A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90A8u; }
        if (ctx->pc != 0x1B90A8u) { return; }
    }
    ctx->pc = 0x1B90A8u;
label_1b90a8:
    // 0x1b90a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b90ac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1b90acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b90b0: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1b90b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1b90b4: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1b90b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b90b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b90b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b90bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1b90bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b90c0: 0x0  nop
    ctx->pc = 0x1b90c0u;
    // NOP
    // 0x1b90c4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B90C4u;
    {
        const bool branch_taken_0x1b90c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90C4u;
            // 0x1b90c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90c4) {
            ctx->pc = 0x1B90DCu;
            goto label_1b90dc;
        }
    }
    ctx->pc = 0x1B90CCu;
    // 0x1b90cc: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x1b90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x1b90d0: 0xae420218  sw          $v0, 0x218($s2)
    ctx->pc = 0x1b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
    // 0x1b90d4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B90D4u;
    SET_GPR_U32(ctx, 31, 0x1B90DCu);
    ctx->pc = 0x1B90D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90D4u;
            // 0x1b90d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90DCu; }
        if (ctx->pc != 0x1B90DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90DCu; }
        if (ctx->pc != 0x1B90DCu) { return; }
    }
    ctx->pc = 0x1B90DCu;
label_1b90dc:
    // 0x1b90dc: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x1b90dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b90e0: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x1b90e4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B90E4u;
    {
        const bool branch_taken_0x1b90e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B90E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90E4u;
            // 0x1b90e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90e4) {
            ctx->pc = 0x1B90FCu;
            goto label_1b90fc;
        }
    }
    ctx->pc = 0x1B90ECu;
    // 0x1b90ec: 0xae4301d0  sw          $v1, 0x1D0($s2)
    ctx->pc = 0x1b90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 3));
    // 0x1b90f0: 0xae42021c  sw          $v0, 0x21C($s2)
    ctx->pc = 0x1b90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
    // 0x1b90f4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B90F4u;
    SET_GPR_U32(ctx, 31, 0x1B90FCu);
    ctx->pc = 0x1B90F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90F4u;
            // 0x1b90f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90FCu; }
        if (ctx->pc != 0x1B90FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90FCu; }
        if (ctx->pc != 0x1B90FCu) { return; }
    }
    ctx->pc = 0x1B90FCu;
label_1b90fc:
    // 0x1b90fc: 0x8e421528  lw          $v0, 0x1528($s2)
    ctx->pc = 0x1b90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5416)));
    // 0x1b9100: 0xae401528  sw          $zero, 0x1528($s2)
    ctx->pc = 0x1b9100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5416), GPR_U32(ctx, 0));
    // 0x1b9104: 0xae421554  sw          $v0, 0x1554($s2)
    ctx->pc = 0x1b9104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5460), GPR_U32(ctx, 2));
    // 0x1b9108: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x1b9108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
label_1b910c:
    // 0x1b910c: 0x8e431550  lw          $v1, 0x1550($s2)
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5456)));
    // 0x1b9110: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9114: 0xae420228  sw          $v0, 0x228($s2)
    ctx->pc = 0x1b9114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 2));
    // 0x1b9118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b911c: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x1b911cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
    // 0x1b9120: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9120u;
    SET_GPR_U32(ctx, 31, 0x1B9128u);
    ctx->pc = 0x1B9124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9120u;
            // 0x1b9124: 0xae421530  sw          $v0, 0x1530($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9128u; }
        if (ctx->pc != 0x1B9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9128u; }
        if (ctx->pc != 0x1B9128u) { return; }
    }
    ctx->pc = 0x1B9128u;
    // 0x1b9128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b912c: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B912Cu;
    SET_GPR_U32(ctx, 31, 0x1B9134u);
    ctx->pc = 0x1B9130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B912Cu;
            // 0x1b9130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9134u; }
        if (ctx->pc != 0x1B9134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9134u; }
        if (ctx->pc != 0x1B9134u) { return; }
    }
    ctx->pc = 0x1B9134u;
    // 0x1b9134: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B9134u;
    {
        const bool branch_taken_0x1b9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9134u;
            // 0x1b9138: 0xae401550  sw          $zero, 0x1550($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9134) {
            ctx->pc = 0x1B9238u;
            goto label_1b9238;
        }
    }
    ctx->pc = 0x1B913Cu;
label_1b913c:
    // 0x1b913c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9140: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9140u;
    SET_GPR_U32(ctx, 31, 0x1B9148u);
    ctx->pc = 0x1B9144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9140u;
            // 0x1b9144: 0xae420204  sw          $v0, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9148u; }
        if (ctx->pc != 0x1B9148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9148u; }
        if (ctx->pc != 0x1B9148u) { return; }
    }
    ctx->pc = 0x1B9148u;
    // 0x1b9148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b914c: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B914Cu;
    SET_GPR_U32(ctx, 31, 0x1B9154u);
    ctx->pc = 0x1B9150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B914Cu;
            // 0x1b9150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9154u; }
        if (ctx->pc != 0x1B9154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9154u; }
        if (ctx->pc != 0x1B9154u) { return; }
    }
    ctx->pc = 0x1B9154u;
    // 0x1b9154: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B9154u;
    {
        const bool branch_taken_0x1b9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9154u;
            // 0x1b9158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9154) {
            ctx->pc = 0x1B91DCu;
            goto label_1b91dc;
        }
    }
    ctx->pc = 0x1B915Cu;
label_1b915c:
    // 0x1b915c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b9160: 0x8cc2cba4  lw          $v0, -0x345C($a2)
    ctx->pc = 0x1b9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953892)));
    // 0x1b9164: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1b9164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9168: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1b9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b916c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9170: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9170u;
    {
        const bool branch_taken_0x1b9170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9170u;
            // 0x1b9174: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9170) {
            ctx->pc = 0x1B9180u;
            goto label_1b9180;
        }
    }
    ctx->pc = 0x1B9178u;
    // 0x1b9178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b917c: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1b917cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1b9180:
    // 0x1b9180: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b9180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b9184: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9184u;
    {
        const bool branch_taken_0x1b9184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9184u;
            // 0x1b9188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9184) {
            ctx->pc = 0x1B919Cu;
            goto label_1b919c;
        }
    }
    ctx->pc = 0x1B918Cu;
    // 0x1b918c: 0x8cc2cba4  lw          $v0, -0x345C($a2)
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953892)));
    // 0x1b9190: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b9194: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1b9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b9198: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1b9198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_1b919c:
    // 0x1b919c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b91a0: 0xc06e4ae  jal         func_1B92B8
    ctx->pc = 0x1B91A0u;
    SET_GPR_U32(ctx, 31, 0x1B91A8u);
    ctx->pc = 0x1B91A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91A0u;
            // 0x1b91a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B8u;
    if (runtime->hasFunction(0x1B92B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B92B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91A8u; }
        if (ctx->pc != 0x1B91A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B92B8_0x1b92b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91A8u; }
        if (ctx->pc != 0x1B91A8u) { return; }
    }
    ctx->pc = 0x1B91A8u;
    // 0x1b91a8: 0xae500204  sw          $s0, 0x204($s2)
    ctx->pc = 0x1b91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 16));
    // 0x1b91ac: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B91ACu;
    SET_GPR_U32(ctx, 31, 0x1B91B4u);
    ctx->pc = 0x1B91B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91ACu;
            // 0x1b91b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91B4u; }
        if (ctx->pc != 0x1B91B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91B4u; }
        if (ctx->pc != 0x1B91B4u) { return; }
    }
    ctx->pc = 0x1B91B4u;
    // 0x1b91b4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B91B4u;
    {
        const bool branch_taken_0x1b91b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B91B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91B4u;
            // 0x1b91b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91b4) {
            ctx->pc = 0x1B91D0u;
            goto label_1b91d0;
        }
    }
    ctx->pc = 0x1B91BCu;
    // 0x1b91bc: 0xc06e4ce  jal         func_1B9338
    ctx->pc = 0x1B91BCu;
    SET_GPR_U32(ctx, 31, 0x1B91C4u);
    ctx->pc = 0x1B91C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91BCu;
            // 0x1b91c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9338u;
    if (runtime->hasFunction(0x1B9338u)) {
        auto targetFn = runtime->lookupFunction(0x1B9338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C4u; }
        if (ctx->pc != 0x1B91C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9338_0x1b9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C4u; }
        if (ctx->pc != 0x1B91C4u) { return; }
    }
    ctx->pc = 0x1B91C4u;
    // 0x1b91c4: 0xae401528  sw          $zero, 0x1528($s2)
    ctx->pc = 0x1b91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5416), GPR_U32(ctx, 0));
    // 0x1b91c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B91C8u;
    {
        const bool branch_taken_0x1b91c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91C8u;
            // 0x1b91cc: 0xae401548  sw          $zero, 0x1548($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91c8) {
            ctx->pc = 0x1B91D8u;
            goto label_1b91d8;
        }
    }
    ctx->pc = 0x1B91D0u;
label_1b91d0:
    // 0x1b91d0: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B91D0u;
    SET_GPR_U32(ctx, 31, 0x1B91D8u);
    ctx->pc = 0x1B91D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91D0u;
            // 0x1b91d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91D8u; }
        if (ctx->pc != 0x1B91D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91D8u; }
        if (ctx->pc != 0x1B91D8u) { return; }
    }
    ctx->pc = 0x1B91D8u;
label_1b91d8:
    // 0x1b91d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b91dc:
    // 0x1b91dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B91DCu;
    {
        const bool branch_taken_0x1b91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91DCu;
            // 0x1b91e0: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91dc) {
            ctx->pc = 0x1B9238u;
            goto label_1b9238;
        }
    }
    ctx->pc = 0x1B91E4u;
label_1b91e4:
    // 0x1b91e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b91e8: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1b91e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1b91ec: 0x26107468  addiu       $s0, $s0, 0x7468
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29800));
    // 0x1b91f0: 0x8e461528  lw          $a2, 0x1528($s2)
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5416)));
    // 0x1b91f4: 0xae511538  sw          $s1, 0x1538($s2)
    ctx->pc = 0x1b91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5432), GPR_U32(ctx, 17));
    // 0x1b91f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b91f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b91fc: 0x24a556b0  addiu       $a1, $a1, 0x56B0
    ctx->pc = 0x1b91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
    // 0x1b9200: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B9200u;
    SET_GPR_U32(ctx, 31, 0x1B9208u);
    ctx->pc = 0x1B9204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9200u;
            // 0x1b9204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9208u; }
        if (ctx->pc != 0x1B9208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9208u; }
        if (ctx->pc != 0x1B9208u) { return; }
    }
    ctx->pc = 0x1B9208u;
    // 0x1b9208: 0xae500088  sw          $s0, 0x88($s2)
    ctx->pc = 0x1b9208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 16));
    // 0x1b920c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9214: 0xc06e4ae  jal         func_1B92B8
    ctx->pc = 0x1B9214u;
    SET_GPR_U32(ctx, 31, 0x1B921Cu);
    ctx->pc = 0x1B9218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9214u;
            // 0x1b9218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B92B8u;
    if (runtime->hasFunction(0x1B92B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B92B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B921Cu; }
        if (ctx->pc != 0x1B921Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B92B8_0x1b92b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B921Cu; }
        if (ctx->pc != 0x1B921Cu) { return; }
    }
    ctx->pc = 0x1B921Cu;
    // 0x1b921c: 0xae510204  sw          $s1, 0x204($s2)
    ctx->pc = 0x1b921cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 17));
    // 0x1b9220: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9220u;
    SET_GPR_U32(ctx, 31, 0x1B9228u);
    ctx->pc = 0x1B9224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9220u;
            // 0x1b9224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9228u; }
        if (ctx->pc != 0x1B9228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9228u; }
        if (ctx->pc != 0x1B9228u) { return; }
    }
    ctx->pc = 0x1B9228u;
    // 0x1b9228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b922c: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x1B922Cu;
    SET_GPR_U32(ctx, 31, 0x1B9234u);
    ctx->pc = 0x1B9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B922Cu;
            // 0x1b9230: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9234u; }
        if (ctx->pc != 0x1B9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9234u; }
        if (ctx->pc != 0x1B9234u) { return; }
    }
    ctx->pc = 0x1B9234u;
    // 0x1b9234: 0xae5101bc  sw          $s1, 0x1BC($s2)
    ctx->pc = 0x1b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 17));
label_1b9238:
    // 0x1b9238: 0xc640153c  lwc1        $f0, 0x153C($s2)
    ctx->pc = 0x1b9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b923c:
    // 0x1b923c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b923cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9240: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x1b9240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
    // 0x1b9244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9248: 0x0  nop
    ctx->pc = 0x1b9248u;
    // NOP
    // 0x1b924c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B924Cu;
    {
        const bool branch_taken_0x1b924c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B924Cu;
            // 0x1b9250: 0xae401578  sw          $zero, 0x1578($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b924c) {
            ctx->pc = 0x1B9260u;
            goto label_1b9260;
        }
    }
    ctx->pc = 0x1B9254u;
    // 0x1b9254: 0xe6411540  swc1        $f1, 0x1540($s2)
    ctx->pc = 0x1b9254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5440), bits); }
    // 0x1b9258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B9258u;
    {
        const bool branch_taken_0x1b9258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9258u;
            // 0x1b925c: 0xae40009c  sw          $zero, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9258) {
            ctx->pc = 0x1B9290u;
            goto label_1b9290;
        }
    }
    ctx->pc = 0x1B9260u;
label_1b9260:
    // 0x1b9260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9264: 0xc06e5c6  jal         func_1B9718
    ctx->pc = 0x1B9264u;
    SET_GPR_U32(ctx, 31, 0x1B926Cu);
    ctx->pc = 0x1B9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9264u;
            // 0x1b9268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9718u;
    if (runtime->hasFunction(0x1B9718u)) {
        auto targetFn = runtime->lookupFunction(0x1B9718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B926Cu; }
        if (ctx->pc != 0x1B926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9718_0x1b9718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B926Cu; }
        if (ctx->pc != 0x1B926Cu) { return; }
    }
    ctx->pc = 0x1B926Cu;
    // 0x1b926c: 0x8e421528  lw          $v0, 0x1528($s2)
    ctx->pc = 0x1b926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5416)));
    // 0x1b9270: 0x2442fe0c  addiu       $v0, $v0, -0x1F4
    ctx->pc = 0x1b9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966796));
    // 0x1b9274: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x1b9274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1b9278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9278u;
    {
        const bool branch_taken_0x1b9278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9278u;
            // 0x1b927c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9278) {
            ctx->pc = 0x1B928Cu;
            goto label_1b928c;
        }
    }
    ctx->pc = 0x1B9280u;
    // 0x1b9280: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x1b9280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x1b9284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9284u;
    {
        const bool branch_taken_0x1b9284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9284u;
            // 0x1b9288: 0xae421578  sw          $v0, 0x1578($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9284) {
            ctx->pc = 0x1B9290u;
            goto label_1b9290;
        }
    }
    ctx->pc = 0x1B928Cu;
label_1b928c:
    // 0x1b928c: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x1b928cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
label_1b9290:
    // 0x1b9290: 0x8e421530  lw          $v0, 0x1530($s2)
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5424)));
    // 0x1b9294: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9294u;
    {
        const bool branch_taken_0x1b9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9294) {
            ctx->pc = 0x1B9298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9294u;
            // 0x1b9298: 0xae4001bc  sw          $zero, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B929Cu;
            goto label_1b929c;
        }
    }
    ctx->pc = 0x1B929Cu;
label_1b929c:
    // 0x1b929c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b92a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b92a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b92a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b92a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b92a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b92a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b92ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B92ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B92B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92ACu;
            // 0x1b92b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8ED8u: goto label_1b8ed8;
            case 0x1B8F1Cu: goto label_1b8f1c;
            case 0x1B8F34u: goto label_1b8f34;
            case 0x1B8F38u: goto label_1b8f38;
            case 0x1B8F3Cu: goto label_1b8f3c;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            case 0x1B91E4u: goto label_1b91e4;
            case 0x1B9238u: goto label_1b9238;
            case 0x1B923Cu: goto label_1b923c;
            case 0x1B9260u: goto label_1b9260;
            case 0x1B928Cu: goto label_1b928c;
            case 0x1B9290u: goto label_1b9290;
            case 0x1B929Cu: goto label_1b929c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B92B4u;
    // 0x1b92b4: 0x0  nop
    ctx->pc = 0x1b92b4u;
    // NOP
}
