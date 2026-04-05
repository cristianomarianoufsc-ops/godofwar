#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CBB8
// Address: 0x21cbb8 - 0x21cc50
void sub_0021CBB8_0x21cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CBB8_0x21cbb8");
#endif

    ctx->pc = 0x21cbb8u;

    // 0x21cbb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cbbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21cbc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21cbc4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21cbc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21cbcc: 0x8e42e560  lw          $v0, -0x1AA0($s2)
    ctx->pc = 0x21cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960480)));
    // 0x21cbd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21cbd4: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21CBD4u;
    {
        const bool branch_taken_0x21cbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBD4u;
            // 0x21cbd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbd4) {
            ctx->pc = 0x21CC38u;
            goto label_21cc38;
        }
    }
    ctx->pc = 0x21CBDCu;
    // 0x21cbdc: 0xc087f0c  jal         func_21FC30
    ctx->pc = 0x21CBDCu;
    SET_GPR_U32(ctx, 31, 0x21CBE4u);
    ctx->pc = 0x21CBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBDCu;
            // 0x21cbe0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FC30u;
    if (runtime->hasFunction(0x21FC30u)) {
        auto targetFn = runtime->lookupFunction(0x21FC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBE4u; }
        if (ctx->pc != 0x21CBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FC30_0x21fc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBE4u; }
        if (ctx->pc != 0x21CBE4u) { return; }
    }
    ctx->pc = 0x21CBE4u;
    // 0x21cbe4: 0x8e0411d0  lw          $a0, 0x11D0($s0)
    ctx->pc = 0x21cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4560)));
    // 0x21cbe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21cbec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21cbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21cbf0: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21CBF0u;
    SET_GPR_U32(ctx, 31, 0x21CBF8u);
    ctx->pc = 0x21CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CBF0u;
            // 0x21cbf4: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBF8u; }
        if (ctx->pc != 0x21CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CBF8u; }
        if (ctx->pc != 0x21CBF8u) { return; }
    }
    ctx->pc = 0x21CBF8u;
    // 0x21cbf8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x21cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x21cbfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21cbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21cc00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc04: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x21CC04u;
    SET_GPR_U32(ctx, 31, 0x21CC0Cu);
    ctx->pc = 0x21CC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC04u;
            // 0x21cc08: 0x8e0411d0  lw          $a0, 0x11D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC0Cu; }
        if (ctx->pc != 0x21CC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC0Cu; }
        if (ctx->pc != 0x21CC0Cu) { return; }
    }
    ctx->pc = 0x21CC0Cu;
    // 0x21cc0c: 0x8e22cb94  lw          $v0, -0x346C($s1)
    ctx->pc = 0x21cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x21cc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc18: 0xac43025c  sw          $v1, 0x25C($v0)
    ctx->pc = 0x21cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 3));
    // 0x21cc1c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21CC1Cu;
    SET_GPR_U32(ctx, 31, 0x21CC24u);
    ctx->pc = 0x21CC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC1Cu;
            // 0x21cc20: 0xac400278  sw          $zero, 0x278($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC24u; }
        if (ctx->pc != 0x21CC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC24u; }
        if (ctx->pc != 0x21CC24u) { return; }
    }
    ctx->pc = 0x21CC24u;
    // 0x21cc24: 0x8e22cb94  lw          $v0, -0x346C($s1)
    ctx->pc = 0x21cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x21cc28: 0xc087f1a  jal         func_21FC68
    ctx->pc = 0x21CC28u;
    SET_GPR_U32(ctx, 31, 0x21CC30u);
    ctx->pc = 0x21CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC28u;
            // 0x21cc2c: 0xac40027c  sw          $zero, 0x27C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FC68u;
    if (runtime->hasFunction(0x21FC68u)) {
        auto targetFn = runtime->lookupFunction(0x21FC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC30u; }
        if (ctx->pc != 0x21CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21fc68_0x21fca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CC30u; }
        if (ctx->pc != 0x21CC30u) { return; }
    }
    ctx->pc = 0x21CC30u;
    // 0x21cc30: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21cc34: 0xae42e560  sw          $v0, -0x1AA0($s2)
    ctx->pc = 0x21cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960480), GPR_U32(ctx, 2));
label_21cc38:
    // 0x21cc38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21cc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cc3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21cc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21cc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cc48: 0x3e00008  jr          $ra
    ctx->pc = 0x21CC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CC48u;
            // 0x21cc4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CC38u: goto label_21cc38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CC50u;
}
