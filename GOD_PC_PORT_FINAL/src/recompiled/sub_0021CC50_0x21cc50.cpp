#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CC50
// Address: 0x21cc50 - 0x21ccf8
void sub_0021CC50_0x21cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CC50_0x21cc50");
#endif

    ctx->pc = 0x21cc50u;

    // 0x21cc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cc54: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21cc58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21cc5c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21cc60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21cc64: 0x8e42e560  lw          $v0, -0x1AA0($s2)
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960480)));
    // 0x21cc68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21cc6c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x21CC6Cu;
    {
        const bool branch_taken_0x21cc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC6Cu;
            // 0x21cc70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc6c) {
            ctx->pc = 0x21CCE0u;
            goto label_21cce0;
        }
    }
    ctx->pc = 0x21CC74u;
    // 0x21cc74: 0xc087f0c  jal         func_21FC30
    ctx->pc = 0x21CC74u;
    SET_GPR_U32(ctx, 31, 0x21CC7Cu);
    ctx->pc = 0x21CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC74u;
            // 0x21cc78: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FC30u;
    if (runtime->hasFunction(0x21FC30u)) {
        auto targetFn = runtime->lookupFunction(0x21FC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC7Cu; }
        if (ctx->pc != 0x21CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FC30_0x21fc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC7Cu; }
        if (ctx->pc != 0x21CC7Cu) { return; }
    }
    ctx->pc = 0x21CC7Cu;
    // 0x21cc7c: 0x8e0411d0  lw          $a0, 0x11D0($s0)
    ctx->pc = 0x21cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4560)));
    // 0x21cc80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21cc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21cc84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21cc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21cc88: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21CC88u;
    SET_GPR_U32(ctx, 31, 0x21CC90u);
    ctx->pc = 0x21CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC88u;
            // 0x21cc8c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC90u; }
        if (ctx->pc != 0x21CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC90u; }
        if (ctx->pc != 0x21CC90u) { return; }
    }
    ctx->pc = 0x21CC90u;
    // 0x21cc90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21cc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x21cc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21cc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21cc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc9c: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x21CC9Cu;
    SET_GPR_U32(ctx, 31, 0x21CCA4u);
    ctx->pc = 0x21CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC9Cu;
            // 0x21cca0: 0x8e0411d0  lw          $a0, 0x11D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCA4u; }
        if (ctx->pc != 0x21CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCA4u; }
        if (ctx->pc != 0x21CCA4u) { return; }
    }
    ctx->pc = 0x21CCA4u;
    // 0x21cca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cca8: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x21CCA8u;
    SET_GPR_U32(ctx, 31, 0x21CCB0u);
    ctx->pc = 0x21CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCA8u;
            // 0x21ccac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCB0u; }
        if (ctx->pc != 0x21CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCB0u; }
        if (ctx->pc != 0x21CCB0u) { return; }
    }
    ctx->pc = 0x21CCB0u;
    // 0x21ccb0: 0x8e22cb94  lw          $v0, -0x346C($s1)
    ctx->pc = 0x21ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x21ccb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ccb8: 0xac430260  sw          $v1, 0x260($v0)
    ctx->pc = 0x21ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 608), GPR_U32(ctx, 3));
    // 0x21ccbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccc0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21CCC0u;
    SET_GPR_U32(ctx, 31, 0x21CCC8u);
    ctx->pc = 0x21CCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCC0u;
            // 0x21ccc4: 0xac400278  sw          $zero, 0x278($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCC8u; }
        if (ctx->pc != 0x21CCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCC8u; }
        if (ctx->pc != 0x21CCC8u) { return; }
    }
    ctx->pc = 0x21CCC8u;
    // 0x21ccc8: 0x8e23cb94  lw          $v1, -0x346C($s1)
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x21cccc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21ccd0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21ccd4: 0xac60027c  sw          $zero, 0x27C($v1)
    ctx->pc = 0x21ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 0));
    // 0x21ccd8: 0xae42e560  sw          $v0, -0x1AA0($s2)
    ctx->pc = 0x21ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960480), GPR_U32(ctx, 2));
    // 0x21ccdc: 0xac80f1f0  sw          $zero, -0xE10($a0)
    ctx->pc = 0x21ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963696), GPR_U32(ctx, 0));
label_21cce0:
    // 0x21cce0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21cce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cce8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21cce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ccec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CCF0u;
            // 0x21ccf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CCE0u: goto label_21cce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CCF8u;
}
