#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BD50
// Address: 0x22bd50 - 0x22be88
void sub_0022BD50_0x22bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD50_0x22bd50");
#endif

    ctx->pc = 0x22bd50u;

    // 0x22bd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bd54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22bd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bd5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bd64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22bd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd68: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x22bd6c: 0x0  nop
    ctx->pc = 0x22bd6cu;
    // NOP
label_22bd70:
    // 0x22bd70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22bd74: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22bd78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x22bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22bd7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22bd80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BD80u;
    {
        const bool branch_taken_0x22bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bd80) {
            ctx->pc = 0x22BD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD80u;
            // 0x22bd84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BDA4u;
            goto label_22bda4;
        }
    }
    ctx->pc = 0x22BD88u;
    // 0x22bd88: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x22bd88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22bd8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd90: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD90u;
    {
        const bool branch_taken_0x22bd90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD90u;
            // 0x22bd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd90) {
            ctx->pc = 0x22BDA0u;
            goto label_22bda0;
        }
    }
    ctx->pc = 0x22BD98u;
    // 0x22bd98: 0xc08aef2  jal         func_22BBC8
    ctx->pc = 0x22BD98u;
    SET_GPR_U32(ctx, 31, 0x22BDA0u);
    ctx->pc = 0x22BBC8u;
    if (runtime->hasFunction(0x22BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x22BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDA0u; }
        if (ctx->pc != 0x22BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BBC8_0x22bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDA0u; }
        if (ctx->pc != 0x22BDA0u) { return; }
    }
    ctx->pc = 0x22BDA0u;
label_22bda0:
    // 0x22bda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22bda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22bda4:
    // 0x22bda4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x22bda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22bda8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x22BDA8u;
    {
        const bool branch_taken_0x22bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bda8) {
            ctx->pc = 0x22BDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDA8u;
            // 0x22bdac: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BD70u;
            runtime->cooperativeGuestYield();
            goto label_22bd70;
        }
    }
    ctx->pc = 0x22BDB0u;
    // 0x22bdb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22bdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDBCu;
            // 0x22bdc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BD70u: goto label_22bd70;
            case 0x22BDA0u: goto label_22bda0;
            case 0x22BDA4u: goto label_22bda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BDC4u;
    // 0x22bdc4: 0x0  nop
    ctx->pc = 0x22bdc4u;
    // NOP
    // 0x22bdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bdcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bdd0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x22BDD0u;
    SET_GPR_U32(ctx, 31, 0x22BDD8u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDD8u; }
        if (ctx->pc != 0x22BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDD8u; }
        if (ctx->pc != 0x22BDD8u) { return; }
    }
    ctx->pc = 0x22BDD8u;
    // 0x22bdd8: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x22bddc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22bde0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x22BDE0u;
    SET_GPR_U32(ctx, 31, 0x22BDE8u);
    ctx->pc = 0x22BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDE0u;
            // 0x22bde4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDE8u; }
        if (ctx->pc != 0x22BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDE8u; }
        if (ctx->pc != 0x22BDE8u) { return; }
    }
    ctx->pc = 0x22BDE8u;
    // 0x22bde8: 0xc0913c6  jal         func_244F18
    ctx->pc = 0x22BDE8u;
    SET_GPR_U32(ctx, 31, 0x22BDF0u);
    ctx->pc = 0x22BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDE8u;
            // 0x22bdec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244F18u;
    if (runtime->hasFunction(0x244F18u)) {
        auto targetFn = runtime->lookupFunction(0x244F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDF0u; }
        if (ctx->pc != 0x22BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244F18_0x244f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDF0u; }
        if (ctx->pc != 0x22BDF0u) { return; }
    }
    ctx->pc = 0x22BDF0u;
    // 0x22bdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDF4u;
            // 0x22bdf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BD70u: goto label_22bd70;
            case 0x22BDA0u: goto label_22bda0;
            case 0x22BDA4u: goto label_22bda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BDFCu;
    // 0x22bdfc: 0x0  nop
    ctx->pc = 0x22bdfcu;
    // NOP
    // 0x22be00: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22be04: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE04u;
            // 0x22be08: 0x24424370  addiu       $v0, $v0, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BD70u: goto label_22bd70;
            case 0x22BDA0u: goto label_22bda0;
            case 0x22BDA4u: goto label_22bda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BE0Cu;
    // 0x22be0c: 0x0  nop
    ctx->pc = 0x22be0cu;
    // NOP
    // 0x22be10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22be14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22be14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22be18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22be1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22be20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22be28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22be2c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22be30: 0xc0755bc  jal         func_1D56F0
    ctx->pc = 0x22BE30u;
    SET_GPR_U32(ctx, 31, 0x22BE38u);
    ctx->pc = 0x22BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE30u;
            // 0x22be34: 0x26120208  addiu       $s2, $s0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D56F0u;
    if (runtime->hasFunction(0x1D56F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D56F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE38u; }
        if (ctx->pc != 0x22BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D56F0_0x1d56f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE38u; }
        if (ctx->pc != 0x22BE38u) { return; }
    }
    ctx->pc = 0x22BE38u;
    // 0x22be38: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x22be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22be3c: 0x260301f4  addiu       $v1, $s0, 0x1F4
    ctx->pc = 0x22be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
    // 0x22be40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22be40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22be44: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x22be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22be48: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x22be4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22be50: 0xaca200f4  sw          $v0, 0xF4($a1)
    ctx->pc = 0x22be50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 2));
    // 0x22be54: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x22be54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x22be58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22be58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22be5c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x22be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x22be60: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x22BE60u;
    SET_GPR_U32(ctx, 31, 0x22BE68u);
    ctx->pc = 0x22BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE60u;
            // 0x22be64: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE68u; }
        if (ctx->pc != 0x22BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BE68u; }
        if (ctx->pc != 0x22BE68u) { return; }
    }
    ctx->pc = 0x22BE68u;
    // 0x22be68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22be68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22be6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22be70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22be70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22be74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22be74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22be78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22be7c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE7Cu;
            // 0x22be80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BD70u: goto label_22bd70;
            case 0x22BDA0u: goto label_22bda0;
            case 0x22BDA4u: goto label_22bda4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BE84u;
    // 0x22be84: 0x0  nop
    ctx->pc = 0x22be84u;
    // NOP
}
