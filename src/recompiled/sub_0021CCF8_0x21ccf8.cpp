#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CCF8
// Address: 0x21ccf8 - 0x21cd78
void sub_0021CCF8_0x21ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CCF8_0x21ccf8");
#endif

    ctx->pc = 0x21ccf8u;

    // 0x21ccf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ccfc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21cd00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21cd04: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21cd04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21cd08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21cd0c: 0x8e43e560  lw          $v1, -0x1AA0($s2)
    ctx->pc = 0x21cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960480)));
    // 0x21cd10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21cd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21cd18: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21CD18u;
    {
        const bool branch_taken_0x21cd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD18u;
            // 0x21cd1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd18) {
            ctx->pc = 0x21CD5Cu;
            goto label_21cd5c;
        }
    }
    ctx->pc = 0x21CD20u;
    // 0x21cd20: 0xc087f0c  jal         func_21FC30
    ctx->pc = 0x21CD20u;
    SET_GPR_U32(ctx, 31, 0x21CD28u);
    ctx->pc = 0x21CD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD20u;
            // 0x21cd24: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FC30u;
    if (runtime->hasFunction(0x21FC30u)) {
        auto targetFn = runtime->lookupFunction(0x21FC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD28u; }
        if (ctx->pc != 0x21CD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FC30_0x21fc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD28u; }
        if (ctx->pc != 0x21CD28u) { return; }
    }
    ctx->pc = 0x21CD28u;
    // 0x21cd28: 0x8e03cb94  lw          $v1, -0x346C($s0)
    ctx->pc = 0x21cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21cd2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cd30: 0xac51e5b4  sw          $s1, -0x1A4C($v0)
    ctx->pc = 0x21cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960564), GPR_U32(ctx, 17));
    // 0x21cd34: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd38: 0xac710268  sw          $s1, 0x268($v1)
    ctx->pc = 0x21cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 17));
    // 0x21cd3c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21CD3Cu;
    SET_GPR_U32(ctx, 31, 0x21CD44u);
    ctx->pc = 0x21CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD3Cu;
            // 0x21cd40: 0xac600278  sw          $zero, 0x278($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD44u; }
        if (ctx->pc != 0x21CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD44u; }
        if (ctx->pc != 0x21CD44u) { return; }
    }
    ctx->pc = 0x21CD44u;
    // 0x21cd44: 0x8e03cb94  lw          $v1, -0x346C($s0)
    ctx->pc = 0x21cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21cd48: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21cd4c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21cd50: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x21cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
    // 0x21cd54: 0xae42e560  sw          $v0, -0x1AA0($s2)
    ctx->pc = 0x21cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960480), GPR_U32(ctx, 2));
    // 0x21cd58: 0xac80f1f0  sw          $zero, -0xE10($a0)
    ctx->pc = 0x21cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963696), GPR_U32(ctx, 0));
label_21cd5c:
    // 0x21cd5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21cd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cd60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21cd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21cd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD6Cu;
            // 0x21cd70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CD5Cu: goto label_21cd5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CD74u;
    // 0x21cd74: 0x0  nop
    ctx->pc = 0x21cd74u;
    // NOP
}
