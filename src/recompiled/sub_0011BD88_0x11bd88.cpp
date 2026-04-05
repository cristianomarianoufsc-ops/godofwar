#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BD88
// Address: 0x11bd88 - 0x11be60
void sub_0011BD88_0x11bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BD88_0x11bd88");
#endif

    ctx->pc = 0x11bd88u;

    // 0x11bd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bd8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11bd90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11bd94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11bd9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11bd9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bda0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bda4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11bda8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11bdac: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x11BDACu;
    SET_GPR_U32(ctx, 31, 0x11BDB4u);
    ctx->pc = 0x11BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDACu;
            // 0x11bdb0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDB4u; }
        if (ctx->pc != 0x11BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDB4u; }
        if (ctx->pc != 0x11BDB4u) { return; }
    }
    ctx->pc = 0x11BDB4u;
    // 0x11bdb4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11bdb8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bdbc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x11bdbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x11bdc0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BDC0u;
    {
        const bool branch_taken_0x11bdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11BDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDC0u;
            // 0x11bdc4: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc0) {
            ctx->pc = 0x11BDD0u;
            goto label_11bdd0;
        }
    }
    ctx->pc = 0x11BDC8u;
    // 0x11bdc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11BDC8u;
    {
        const bool branch_taken_0x11bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDC8u;
            // 0x11bdcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc8) {
            ctx->pc = 0x11BDE8u;
            goto label_11bde8;
        }
    }
    ctx->pc = 0x11BDD0u;
label_11bdd0:
    // 0x11bdd0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x11bdd4: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x11BDD4u;
    SET_GPR_U32(ctx, 31, 0x11BDDCu);
    ctx->pc = 0x11BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDD4u;
            // 0x11bdd8: 0x24841378  addiu       $a0, $a0, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDDCu; }
        if (ctx->pc != 0x11BDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDDCu; }
        if (ctx->pc != 0x11BDDCu) { return; }
    }
    ctx->pc = 0x11BDDCu;
    // 0x11bddc: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x11bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11bde0: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x11bde0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x11bde4: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x11bde4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_11bde8:
    // 0x11bde8: 0xc04e21c  jal         func_138870
    ctx->pc = 0x11BDE8u;
    SET_GPR_U32(ctx, 31, 0x11BDF0u);
    ctx->pc = 0x138870u;
    if (runtime->hasFunction(0x138870u)) {
        auto targetFn = runtime->lookupFunction(0x138870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDF0u; }
        if (ctx->pc != 0x11BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138870_0x138870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDF0u; }
        if (ctx->pc != 0x11BDF0u) { return; }
    }
    ctx->pc = 0x11BDF0u;
    // 0x11bdf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bdf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdf8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x11BDF8u;
    {
        const bool branch_taken_0x11bdf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDF8u;
            // 0x11bdfc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf8) {
            ctx->pc = 0x11BE34u;
            goto label_11be34;
        }
    }
    ctx->pc = 0x11BE00u;
    // 0x11be00: 0xc04f824  jal         func_13E090
    ctx->pc = 0x11BE00u;
    SET_GPR_U32(ctx, 31, 0x11BE08u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE08u; }
        if (ctx->pc != 0x11BE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE08u; }
        if (ctx->pc != 0x11BE08u) { return; }
    }
    ctx->pc = 0x11BE08u;
    // 0x11be08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be10: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x11BE10u;
    SET_GPR_U32(ctx, 31, 0x11BE18u);
    ctx->pc = 0x11BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE10u;
            // 0x11be14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE18u; }
        if (ctx->pc != 0x11BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE18u; }
        if (ctx->pc != 0x11BE18u) { return; }
    }
    ctx->pc = 0x11BE18u;
    // 0x11be18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11be18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11be20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11be24: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x11BE24u;
    SET_GPR_U32(ctx, 31, 0x11BE2Cu);
    ctx->pc = 0x11BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE24u;
            // 0x11be28: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE2Cu; }
        if (ctx->pc != 0x11BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE2Cu; }
        if (ctx->pc != 0x11BE2Cu) { return; }
    }
    ctx->pc = 0x11BE2Cu;
    // 0x11be2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE2Cu;
    {
        const bool branch_taken_0x11be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE2Cu;
            // 0x11be30: 0x9642001c  lhu         $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be2c) {
            ctx->pc = 0x11BE3Cu;
            goto label_11be3c;
        }
    }
    ctx->pc = 0x11BE34u;
label_11be34:
    // 0x11be34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x11be34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x11be38: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x11be38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_11be3c:
    // 0x11be3c: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x11be3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x11be40: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x11be40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x11be44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11be44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11be48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11be4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11be4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11be50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11be50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11be54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11be54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11be58: 0x3e00008  jr          $ra
    ctx->pc = 0x11BE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE58u;
            // 0x11be5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BDD0u: goto label_11bdd0;
            case 0x11BDE8u: goto label_11bde8;
            case 0x11BE34u: goto label_11be34;
            case 0x11BE3Cu: goto label_11be3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BE60u;
}
