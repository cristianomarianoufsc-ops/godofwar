#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023F598
// Address: 0x23f598 - 0x23fe20
void sub_0023F598_0x23f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F598_0x23f598");
#endif

    ctx->pc = 0x23f598u;

    // 0x23f598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f59c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23f59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23f5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f5a4: 0xc0964e8  jal         func_2593A0
    ctx->pc = 0x23F5A4u;
    SET_GPR_U32(ctx, 31, 0x23F5ACu);
    ctx->pc = 0x23F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5A4u;
            // 0x23f5a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593A0u;
    if (runtime->hasFunction(0x2593A0u)) {
        auto targetFn = runtime->lookupFunction(0x2593A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5ACu; }
        if (ctx->pc != 0x23F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2593a0_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F5ACu; }
        if (ctx->pc != 0x23F5ACu) { return; }
    }
    ctx->pc = 0x23F5ACu;
    // 0x23f5ac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23f5b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5b4: 0x24632560  addiu       $v1, $v1, 0x2560
    ctx->pc = 0x23f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9568));
    // 0x23f5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f5bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23f5c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23f5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F5C4u;
            // 0x23f5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F5CCu;
    // 0x23f5cc: 0x0  nop
    ctx->pc = 0x23f5ccu;
    // NOP
    // 0x23f5d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f5d4: 0x0  nop
    ctx->pc = 0x23f5d4u;
    // NOP
    // 0x23f5d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23f5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23f5dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f5e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x23f5e4: 0x2442c368  addiu       $v0, $v0, -0x3C98
    ctx->pc = 0x23f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x23f5e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x23f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x23f5ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23f5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x23f5f4: 0x2632005c  addiu       $s2, $s1, 0x5C
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x23f5f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x23f5fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23f5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f600: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23f604: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23f604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23f608: 0xc04f6ca  jal         func_13DB28
    ctx->pc = 0x23F608u;
    SET_GPR_U32(ctx, 31, 0x23F610u);
    ctx->pc = 0x23F60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F608u;
            // 0x23f60c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB28u;
    if (runtime->hasFunction(0x13DB28u)) {
        auto targetFn = runtime->lookupFunction(0x13DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F610u; }
        if (ctx->pc != 0x23F610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB28_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F610u; }
        if (ctx->pc != 0x23F610u) { return; }
    }
    ctx->pc = 0x23F610u;
    // 0x23f610: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x23f614: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x23f614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F618u;
    {
        const bool branch_taken_0x23f618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F618u;
            // 0x23f61c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f618) {
            ctx->pc = 0x23F628u;
            goto label_23f628;
        }
    }
    ctx->pc = 0x23F620u;
    // 0x23f620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F620u;
    {
        const bool branch_taken_0x23f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F620u;
            // 0x23f624: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f620) {
            ctx->pc = 0x23F62Cu;
            goto label_23f62c;
        }
    }
    ctx->pc = 0x23F628u;
label_23f628:
    // 0x23f628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f62c:
    // 0x23f62c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23f630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f634: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23F634u;
    {
        const bool branch_taken_0x23f634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F634u;
            // 0x23f638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f634) {
            ctx->pc = 0x23F690u;
            goto label_23f690;
        }
    }
    ctx->pc = 0x23F63Cu;
    // 0x23f63c: 0x0  nop
    ctx->pc = 0x23f63cu;
    // NOP
label_23f640:
    // 0x23f640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f644: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f648: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F648u;
    {
        const bool branch_taken_0x23f648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F648u;
            // 0x23f64c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f648) {
            ctx->pc = 0x23F678u;
            goto label_23f678;
        }
    }
    ctx->pc = 0x23F650u;
    // 0x23f650: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23f654: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F654u;
    {
        const bool branch_taken_0x23f654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f654) {
            ctx->pc = 0x23F668u;
            goto label_23f668;
        }
    }
    ctx->pc = 0x23F65Cu;
    // 0x23f65c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23F65Cu;
    SET_GPR_U32(ctx, 31, 0x23F664u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F664u; }
        if (ctx->pc != 0x23F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F664u; }
        if (ctx->pc != 0x23F664u) { return; }
    }
    ctx->pc = 0x23F664u;
    // 0x23f664: 0x0  nop
    ctx->pc = 0x23f664u;
    // NOP
label_23f668:
    // 0x23f668: 0xc096504  jal         func_259410
    ctx->pc = 0x23F668u;
    SET_GPR_U32(ctx, 31, 0x23F670u);
    ctx->pc = 0x23F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F668u;
            // 0x23f66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259410u;
    if (runtime->hasFunction(0x259410u)) {
        auto targetFn = runtime->lookupFunction(0x259410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F670u; }
        if (ctx->pc != 0x23F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259410_0x259410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F670u; }
        if (ctx->pc != 0x23F670u) { return; }
    }
    ctx->pc = 0x23F670u;
    // 0x23f670: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f674: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23f678:
    // 0x23f678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f67c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f680: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f684: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23F684u;
    {
        const bool branch_taken_0x23f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F684u;
            // 0x23f688: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f684) {
            ctx->pc = 0x23F640u;
            runtime->cooperativeGuestYield();
            goto label_23f640;
        }
    }
    ctx->pc = 0x23F68Cu;
    // 0x23f68c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f690:
    // 0x23f690: 0xc08c2c6  jal         func_230B18
    ctx->pc = 0x23F690u;
    SET_GPR_U32(ctx, 31, 0x23F698u);
    ctx->pc = 0x23F694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F690u;
            // 0x23f694: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230B18u;
    if (runtime->hasFunction(0x230B18u)) {
        auto targetFn = runtime->lookupFunction(0x230B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F698u; }
        if (ctx->pc != 0x23F698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230B18_0x230b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F698u; }
        if (ctx->pc != 0x23F698u) { return; }
    }
    ctx->pc = 0x23F698u;
    // 0x23f698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f69c: 0xc09650c  jal         func_259430
    ctx->pc = 0x23F69Cu;
    SET_GPR_U32(ctx, 31, 0x23F6A4u);
    ctx->pc = 0x23F6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F69Cu;
            // 0x23f6a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259430u;
    if (runtime->hasFunction(0x259430u)) {
        auto targetFn = runtime->lookupFunction(0x259430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6A4u; }
        if (ctx->pc != 0x23F6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259430_0x259430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6A4u; }
        if (ctx->pc != 0x23F6A4u) { return; }
    }
    ctx->pc = 0x23F6A4u;
    // 0x23f6a4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x23f6a8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f6ac: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x23f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x23f6b0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x23f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x23f6b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f6b8: 0x5050000d  beql        $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F6B8u;
    {
        const bool branch_taken_0x23f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x23f6b8) {
            ctx->pc = 0x23F6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6B8u;
            // 0x23f6bc: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F6F0u;
            goto label_23f6f0;
        }
    }
    ctx->pc = 0x23F6C0u;
    // 0x23f6c0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x23f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f6c4: 0x0  nop
    ctx->pc = 0x23f6c4u;
    // NOP
label_23f6c8:
    // 0x23f6c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f6cc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23f6d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f6d4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23F6D4u;
    SET_GPR_U32(ctx, 31, 0x23F6DCu);
    ctx->pc = 0x23F6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6D4u;
            // 0x23f6d8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6DCu; }
        if (ctx->pc != 0x23F6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6DCu; }
        if (ctx->pc != 0x23F6DCu) { return; }
    }
    ctx->pc = 0x23F6DCu;
    // 0x23f6dc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f6e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f6e4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F6E4u;
    {
        const bool branch_taken_0x23f6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F6E4u;
            // 0x23f6e8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6e4) {
            ctx->pc = 0x23F6C8u;
            runtime->cooperativeGuestYield();
            goto label_23f6c8;
        }
    }
    ctx->pc = 0x23F6ECu;
    // 0x23f6ec: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_23f6f0:
    // 0x23f6f0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x23f6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23f6f4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x23f6f8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f6fc: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x23f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x23f700: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x23f700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x23f704: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x23f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x23f708: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23f708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23f70c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x23f710: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x23f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x23f714: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23f718: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F718u;
    {
        const bool branch_taken_0x23f718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F718u;
            // 0x23f71c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f718) {
            ctx->pc = 0x23F750u;
            goto label_23f750;
        }
    }
    ctx->pc = 0x23F720u;
    // 0x23f720: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x23f720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23f724: 0x0  nop
    ctx->pc = 0x23f724u;
    // NOP
label_23f728:
    // 0x23f728: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f72c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23f730: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f734: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23F734u;
    SET_GPR_U32(ctx, 31, 0x23F73Cu);
    ctx->pc = 0x23F738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F734u;
            // 0x23f738: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F73Cu; }
        if (ctx->pc != 0x23F73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F73Cu; }
        if (ctx->pc != 0x23F73Cu) { return; }
    }
    ctx->pc = 0x23F73Cu;
    // 0x23f73c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23f740: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f744: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F744u;
    {
        const bool branch_taken_0x23f744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F744u;
            // 0x23f748: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f744) {
            ctx->pc = 0x23F728u;
            runtime->cooperativeGuestYield();
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F74Cu;
    // 0x23f74c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_23f750:
    // 0x23f750: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23f750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x23f754: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23f758: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23f758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x23f75c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23f760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f764: 0xc08e218  jal         func_238860
    ctx->pc = 0x23F764u;
    SET_GPR_U32(ctx, 31, 0x23F76Cu);
    ctx->pc = 0x23F768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F764u;
            // 0x23f768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F76Cu; }
        if (ctx->pc != 0x23F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F76Cu; }
        if (ctx->pc != 0x23F76Cu) { return; }
    }
    ctx->pc = 0x23F76Cu;
    // 0x23f76c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23f76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f770: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23f770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f774: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x23f774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f778: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23f778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f77c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f780: 0x3e00008  jr          $ra
    ctx->pc = 0x23F780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F780u;
            // 0x23f784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F788u;
    // 0x23f788: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x23f78c: 0x0  nop
    ctx->pc = 0x23f78cu;
    // NOP
    // 0x23f790: 0x3e00008  jr          $ra
    ctx->pc = 0x23F790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F798u;
    // 0x23f798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f79c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f7a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7b0: 0x86040034  lh          $a0, 0x34($s0)
    ctx->pc = 0x23f7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23f7b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23f7b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x23F7B8u;
    SET_GPR_U32(ctx, 31, 0x23F7C0u);
    ctx->pc = 0x23F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7B8u;
            // 0x23f7bc: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7C0u; }
        if (ctx->pc != 0x23F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7C0u; }
        if (ctx->pc != 0x23F7C0u) { return; }
    }
    ctx->pc = 0x23F7C0u;
    // 0x23f7c0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x23f7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23f7c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7cc: 0x2627004c  addiu       $a3, $s1, 0x4C
    ctx->pc = 0x23f7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x23f7d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7d4: 0xc054dca  jal         func_153728
    ctx->pc = 0x23F7D4u;
    SET_GPR_U32(ctx, 31, 0x23F7DCu);
    ctx->pc = 0x23F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7D4u;
            // 0x23f7d8: 0x24c6bc80  addiu       $a2, $a2, -0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153728u;
    if (runtime->hasFunction(0x153728u)) {
        auto targetFn = runtime->lookupFunction(0x153728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7DCu; }
        if (ctx->pc != 0x23F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153728_0x153728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7DCu; }
        if (ctx->pc != 0x23F7DCu) { return; }
    }
    ctx->pc = 0x23F7DCu;
    // 0x23f7dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F7E8u;
            // 0x23f7ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F7F0u;
    // 0x23f7f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f7f4: 0x0  nop
    ctx->pc = 0x23f7f4u;
    // NOP
    // 0x23f7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f7fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f800: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F800u;
    {
        const bool branch_taken_0x23f800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F800u;
            // 0x23f804: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f800) {
            ctx->pc = 0x23F810u;
            goto label_23f810;
        }
    }
    ctx->pc = 0x23F808u;
    // 0x23f808: 0xc054f0a  jal         func_153C28
    ctx->pc = 0x23F808u;
    SET_GPR_U32(ctx, 31, 0x23F810u);
    ctx->pc = 0x23F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F808u;
            // 0x23f80c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153C28u;
    if (runtime->hasFunction(0x153C28u)) {
        auto targetFn = runtime->lookupFunction(0x153C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F810u; }
        if (ctx->pc != 0x23F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153C28_0x153c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F810u; }
        if (ctx->pc != 0x23F810u) { return; }
    }
    ctx->pc = 0x23F810u;
label_23f810:
    // 0x23f810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f814: 0x3e00008  jr          $ra
    ctx->pc = 0x23F814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F814u;
            // 0x23f818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F81Cu;
    // 0x23f81c: 0x0  nop
    ctx->pc = 0x23f81cu;
    // NOP
    // 0x23f820: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f824: 0x0  nop
    ctx->pc = 0x23f824u;
    // NOP
    // 0x23f828: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f82c: 0x0  nop
    ctx->pc = 0x23f82cu;
    // NOP
    // 0x23f830: 0x3e00008  jr          $ra
    ctx->pc = 0x23F830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F830u;
            // 0x23f834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F838u;
    // 0x23f838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f83c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23f840: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23f840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23f844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23f844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f848: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23f84c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f854: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x23f858: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F858u;
    {
        const bool branch_taken_0x23f858 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F858u;
            // 0x23f85c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f858) {
            ctx->pc = 0x23F88Cu;
            goto label_23f88c;
        }
    }
    ctx->pc = 0x23F860u;
    // 0x23f860: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23f864: 0x0  nop
    ctx->pc = 0x23f864u;
    // NOP
label_23f868:
    // 0x23f868: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x23f868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x23f86c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23f870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f874: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23F874u;
    SET_GPR_U32(ctx, 31, 0x23F87Cu);
    ctx->pc = 0x23F878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F874u;
            // 0x23f878: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F87Cu; }
        if (ctx->pc != 0x23F87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F87Cu; }
        if (ctx->pc != 0x23F87Cu) { return; }
    }
    ctx->pc = 0x23F87Cu;
    // 0x23f87c: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x23f87cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x23f880: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23f880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f884: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F884u;
    {
        const bool branch_taken_0x23f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F884u;
            // 0x23f888: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f884) {
            ctx->pc = 0x23F868u;
            runtime->cooperativeGuestYield();
            goto label_23f868;
        }
    }
    ctx->pc = 0x23F88Cu;
label_23f88c:
    // 0x23f88c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23f88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23f894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f898: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23f898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8A0u;
            // 0x23f8a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F8A8u;
    // 0x23f8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f8ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f8b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f8b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8bc: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x23f8c0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x23F8C0u;
    {
        const bool branch_taken_0x23f8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8C0u;
            // 0x23f8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8c0) {
            ctx->pc = 0x23F900u;
            goto label_23f900;
        }
    }
    ctx->pc = 0x23F8C8u;
    // 0x23f8c8: 0x92220043  lbu         $v0, 0x43($s1)
    ctx->pc = 0x23f8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
    // 0x23f8cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f8d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8D0u;
            // 0x23f8d4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x23F900u;
            goto label_23f900;
        }
    }
    ctx->pc = 0x23F8D8u;
    // 0x23f8d8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x23f8d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f8dc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x23f8e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f8e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f8e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f8ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23f8f0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23f8f4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x23f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23f8f8: 0x40f809  jalr        $v0
    ctx->pc = 0x23F8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F900u);
        ctx->pc = 0x23F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8F8u;
            // 0x23f8fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F900u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F900u; }
            if (ctx->pc != 0x23F900u) { return; }
        }
        }
    }
    ctx->pc = 0x23F900u;
label_23f900:
    // 0x23f900: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x23f904: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23f904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f908: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F908u;
    {
        const bool branch_taken_0x23f908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F908u;
            // 0x23f90c: 0x96250040  lhu         $a1, 0x40($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f908) {
            ctx->pc = 0x23F954u;
            goto label_23f954;
        }
    }
    ctx->pc = 0x23F910u;
    // 0x23f910: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f914: 0x0  nop
    ctx->pc = 0x23f914u;
    // NOP
label_23f918:
    // 0x23f918: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23f91c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x23f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x23f920: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x23f924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F924u;
            // 0x23f928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23F934u;
            goto label_23f934;
        }
    }
    ctx->pc = 0x23F92Cu;
    // 0x23f92c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x23f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23f930: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x23f930u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23f934:
    // 0x23f934: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F934u;
    {
        const bool branch_taken_0x23f934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F934u;
            // 0x23f938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f934) {
            ctx->pc = 0x23F958u;
            goto label_23f958;
        }
    }
    ctx->pc = 0x23F93Cu;
    // 0x23f93c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x23f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23f940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f944: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x23f944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23f948: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f94c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23F94Cu;
    {
        const bool branch_taken_0x23f94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F94Cu;
            // 0x23f950: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f94c) {
            ctx->pc = 0x23F918u;
            runtime->cooperativeGuestYield();
            goto label_23f918;
        }
    }
    ctx->pc = 0x23F954u;
label_23f954:
    // 0x23f954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f958:
    // 0x23f958: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F958u;
    {
        const bool branch_taken_0x23f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F958u;
            // 0x23f95c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f958) {
            ctx->pc = 0x23F990u;
            goto label_23f990;
        }
    }
    ctx->pc = 0x23F960u;
    // 0x23f960: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x23f964: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23F964u;
    SET_GPR_U32(ctx, 31, 0x23F96Cu);
    ctx->pc = 0x23F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F964u;
            // 0x23f968: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F96Cu; }
        if (ctx->pc != 0x23F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F96Cu; }
        if (ctx->pc != 0x23F96Cu) { return; }
    }
    ctx->pc = 0x23F96Cu;
    // 0x23f96c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23f970: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23f970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23f974: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x23f974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x23f978: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f97c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23f980: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f984: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x23f984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x23f988: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23f98c: 0x0  nop
    ctx->pc = 0x23f98cu;
    // NOP
label_23f990:
    // 0x23f990: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9A0u;
            // 0x23f9a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F9A8u;
    // 0x23f9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f9ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x23f9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f9b4: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x23f9b8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F9B8u;
    {
        const bool branch_taken_0x23f9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9b8) {
            ctx->pc = 0x23F9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9B8u;
            // 0x23f9bc: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F9FCu;
            goto label_23f9fc;
        }
    }
    ctx->pc = 0x23F9C0u;
    // 0x23f9c0: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x23f9c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23f9c4: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x23f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x23f9c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F9C8u;
    {
        const bool branch_taken_0x23f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9c8) {
            ctx->pc = 0x23F9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9C8u;
            // 0x23f9cc: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F9E4u;
            goto label_23f9e4;
        }
    }
    ctx->pc = 0x23F9D0u;
    // 0x23f9d0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x23f9d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23f9d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23F9D4u;
    {
        const bool branch_taken_0x23f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9D4u;
            // 0x23f9d8: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9d4) {
            ctx->pc = 0x23F9F4u;
            goto label_23f9f4;
        }
    }
    ctx->pc = 0x23F9DCu;
label_23f9dc:
    // 0x23f9dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23F9DCu;
    {
        const bool branch_taken_0x23f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9DCu;
            // 0x23f9e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9dc) {
            ctx->pc = 0x23FA4Cu;
            goto label_23fa4c;
        }
    }
    ctx->pc = 0x23F9E4u;
label_23f9e4:
    // 0x23f9e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F9E4u;
    {
        const bool branch_taken_0x23f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9e4) {
            ctx->pc = 0x23F9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9E4u;
            // 0x23f9e8: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23F9FCu;
            goto label_23f9fc;
        }
    }
    ctx->pc = 0x23F9ECu;
    // 0x23f9ec: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x23f9ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23f9f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23f9f4:
    // 0x23f9f4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x23f9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f9f8: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x23f9f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_23f9fc:
    // 0x23f9fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23f9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa00: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23FA00u;
    {
        const bool branch_taken_0x23fa00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA00u;
            // 0x23fa04: 0x94e60040  lhu         $a2, 0x40($a3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa00) {
            ctx->pc = 0x23FA48u;
            goto label_23fa48;
        }
    }
    ctx->pc = 0x23FA08u;
    // 0x23fa08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fa0c: 0x0  nop
    ctx->pc = 0x23fa0cu;
    // NOP
label_23fa10:
    // 0x23fa10: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23fa14: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x23fa18: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x23fa1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FA1Cu;
    {
        const bool branch_taken_0x23fa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA1Cu;
            // 0x23fa20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa1c) {
            ctx->pc = 0x23FA2Cu;
            goto label_23fa2c;
        }
    }
    ctx->pc = 0x23FA24u;
    // 0x23fa24: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23fa28: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x23fa28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23fa2c:
    // 0x23fa2c: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x23FA2Cu;
    {
        const bool branch_taken_0x23fa2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA2Cu;
            // 0x23fa30: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa2c) {
            ctx->pc = 0x23F9DCu;
            runtime->cooperativeGuestYield();
            goto label_23f9dc;
        }
    }
    ctx->pc = 0x23FA34u;
    // 0x23fa34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23fa38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23fa3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23fa3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23fa40: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23FA40u;
    {
        const bool branch_taken_0x23fa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA40u;
            // 0x23fa44: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa40) {
            ctx->pc = 0x23FA10u;
            runtime->cooperativeGuestYield();
            goto label_23fa10;
        }
    }
    ctx->pc = 0x23FA48u;
label_23fa48:
    // 0x23fa48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fa4c:
    // 0x23fa4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23FA4Cu;
    {
        const bool branch_taken_0x23fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA4Cu;
            // 0x23fa50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa4c) {
            ctx->pc = 0x23FAB8u;
            goto label_23fab8;
        }
    }
    ctx->pc = 0x23FA54u;
    // 0x23fa54: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x23fa58: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x23fa5c: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FA5Cu;
    {
        const bool branch_taken_0x23fa5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23fa5c) {
            ctx->pc = 0x23FA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA5Cu;
            // 0x23fa60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FA80u;
            goto label_23fa80;
        }
    }
    ctx->pc = 0x23FA64u;
    // 0x23fa64: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23fa68:
    // 0x23fa68: 0x50470005  beql        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FA68u;
    {
        const bool branch_taken_0x23fa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x23fa68) {
            ctx->pc = 0x23FA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA68u;
            // 0x23fa6c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FA80u;
            goto label_23fa80;
        }
    }
    ctx->pc = 0x23FA70u;
    // 0x23fa70: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23fa74: 0x54a4fffc  bnel        $a1, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23FA74u;
    {
        const bool branch_taken_0x23fa74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x23fa74) {
            ctx->pc = 0x23FA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA74u;
            // 0x23fa78: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23FA68u;
            runtime->cooperativeGuestYield();
            goto label_23fa68;
        }
    }
    ctx->pc = 0x23FA7Cu;
    // 0x23fa7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23fa7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fa80:
    // 0x23fa80: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fa84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23fa88: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23fa8c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23fa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa90: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23fa94: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x23fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x23fa98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fa9c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23faa0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23faa4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x23faa8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23FAA8u;
    SET_GPR_U32(ctx, 31, 0x23FAB0u);
    ctx->pc = 0x23FAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAA8u;
            // 0x23faac: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAB0u; }
        if (ctx->pc != 0x23FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAB0u; }
        if (ctx->pc != 0x23FAB0u) { return; }
    }
    ctx->pc = 0x23FAB0u;
    // 0x23fab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fab4: 0x0  nop
    ctx->pc = 0x23fab4u;
    // NOP
label_23fab8:
    // 0x23fab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x23FABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FABCu;
            // 0x23fac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FAC4u;
    // 0x23fac4: 0x0  nop
    ctx->pc = 0x23fac4u;
    // NOP
    // 0x23fac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23facc: 0x0  nop
    ctx->pc = 0x23faccu;
    // NOP
    // 0x23fad0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23fad4: 0x0  nop
    ctx->pc = 0x23fad4u;
    // NOP
    // 0x23fad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23fadc: 0x0  nop
    ctx->pc = 0x23fadcu;
    // NOP
    // 0x23fae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fae4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x23fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23fae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23faec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23faf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23faf4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23FAF4u;
    SET_GPR_U32(ctx, 31, 0x23FAFCu);
    ctx->pc = 0x23FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAF4u;
            // 0x23faf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAFCu; }
        if (ctx->pc != 0x23FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FAFCu; }
        if (ctx->pc != 0x23FAFCu) { return; }
    }
    ctx->pc = 0x23FAFCu;
    // 0x23fafc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23fb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb04: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23fb08: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23fb0c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x23fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x23fb10: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23fb14: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23fb14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23fb18: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23fb1c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x23fb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x23fb20: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23fb24: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23fb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb2c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23fb30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb34: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23fb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fb38: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23fb38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fb3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23fb40: 0xc08e222  jal         func_238888
    ctx->pc = 0x23FB40u;
    SET_GPR_U32(ctx, 31, 0x23FB48u);
    ctx->pc = 0x23FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB40u;
            // 0x23fb44: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB48u; }
        if (ctx->pc != 0x23FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB48u; }
        if (ctx->pc != 0x23FB48u) { return; }
    }
    ctx->pc = 0x23FB48u;
    // 0x23fb48: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23fb4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb54: 0xc08e222  jal         func_238888
    ctx->pc = 0x23FB54u;
    SET_GPR_U32(ctx, 31, 0x23FB5Cu);
    ctx->pc = 0x23FB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB54u;
            // 0x23fb58: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB5Cu; }
        if (ctx->pc != 0x23FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB5Cu; }
        if (ctx->pc != 0x23FB5Cu) { return; }
    }
    ctx->pc = 0x23FB5Cu;
    // 0x23fb5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fb60: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23fb64: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23fb68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23fb6c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x23fb70: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x23fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x23fb74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23fb78: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x23fb7c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x23fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x23fb80: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x23fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x23fb84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x23fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x23fb88: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23fb8c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23fb90: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x23FB90u;
    SET_GPR_U32(ctx, 31, 0x23FB98u);
    ctx->pc = 0x23FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB90u;
            // 0x23fb94: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB98u; }
        if (ctx->pc != 0x23FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB98u; }
        if (ctx->pc != 0x23FB98u) { return; }
    }
    ctx->pc = 0x23FB98u;
    // 0x23fb98: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x23fb98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23fb9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23fba0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23fba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fba8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x23fba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fbac: 0x2442c368  addiu       $v0, $v0, -0x3C98
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x23fbb0: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x23fbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fbb4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x23fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x23fbb8: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x23fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x23fbbc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x23fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x23fbc0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x23fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x23fbc4: 0xc096520  jal         func_259480
    ctx->pc = 0x23FBC4u;
    SET_GPR_U32(ctx, 31, 0x23FBCCu);
    ctx->pc = 0x23FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBC4u;
            // 0x23fbc8: 0xa600004c  sh          $zero, 0x4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259480u;
    if (runtime->hasFunction(0x259480u)) {
        auto targetFn = runtime->lookupFunction(0x259480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBCCu; }
        if (ctx->pc != 0x23FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259480_0x259490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBCCu; }
        if (ctx->pc != 0x23FBCCu) { return; }
    }
    ctx->pc = 0x23FBCCu;
    // 0x23fbcc: 0x2602005c  addiu       $v0, $s0, 0x5C
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x23fbd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23fbd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbd8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x23fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x23fbdc: 0xc08c78c  jal         func_231E30
    ctx->pc = 0x23FBDCu;
    SET_GPR_U32(ctx, 31, 0x23FBE4u);
    ctx->pc = 0x23FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBDCu;
            // 0x23fbe0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E30u;
    if (runtime->hasFunction(0x231E30u)) {
        auto targetFn = runtime->lookupFunction(0x231E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBE4u; }
        if (ctx->pc != 0x23FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E30_0x231e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBE4u; }
        if (ctx->pc != 0x23FBE4u) { return; }
    }
    ctx->pc = 0x23FBE4u;
    // 0x23fbe4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x23FBE4u;
    SET_GPR_U32(ctx, 31, 0x23FBECu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBECu; }
        if (ctx->pc != 0x23FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FBECu; }
        if (ctx->pc != 0x23FBECu) { return; }
    }
    ctx->pc = 0x23FBECu;
    // 0x23fbec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbf0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x23fbf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23fbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbf8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23fbfc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x23FBFCu;
    SET_GPR_U32(ctx, 31, 0x23FC04u);
    ctx->pc = 0x23FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FBFCu;
            // 0x23fc00: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FC04u; }
        if (ctx->pc != 0x23FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FC04u; }
        if (ctx->pc != 0x23FC04u) { return; }
    }
    ctx->pc = 0x23FC04u;
    // 0x23fc04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23fc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23fc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fc0c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x23fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x23fc10: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x23fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x23fc14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23fc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23fc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC24u;
            // 0x23fc28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FC2Cu;
    // 0x23fc2c: 0x0  nop
    ctx->pc = 0x23fc2cu;
    // NOP
    // 0x23fc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fc34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23fc34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FC38u;
    {
        const bool branch_taken_0x23fc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC38u;
            // 0x23fc3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc38) {
            ctx->pc = 0x23FC58u;
            goto label_23fc58;
        }
    }
    ctx->pc = 0x23FC40u;
    // 0x23fc40: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23fc44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fc48: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fc4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23fc50: 0x40f809  jalr        $v0
    ctx->pc = 0x23FC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FC58u);
        ctx->pc = 0x23FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC50u;
            // 0x23fc54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23FC58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23FC58u; }
            if (ctx->pc != 0x23FC58u) { return; }
        }
        }
    }
    ctx->pc = 0x23FC58u;
label_23fc58:
    // 0x23fc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FC5Cu;
            // 0x23fc60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FC64u;
    // 0x23fc64: 0x0  nop
    ctx->pc = 0x23fc64u;
    // NOP
    // 0x23fc68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fc6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23fc6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23fc74: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x23fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23fc78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fc7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23fc80: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x23fc80u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23fc84: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x23fc88: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x23fc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23fc8c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x23fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23fc90: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23fc94: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23fc98: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x23fc9c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x23fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x23fca0: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x23fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x23fca4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23fca8: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23fcac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23fcb0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23FCB0u;
    SET_GPR_U32(ctx, 31, 0x23FCB8u);
    ctx->pc = 0x23FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCB0u;
            // 0x23fcb4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FCB8u; }
        if (ctx->pc != 0x23FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FCB8u; }
        if (ctx->pc != 0x23FCB8u) { return; }
    }
    ctx->pc = 0x23FCB8u;
    // 0x23fcb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fcbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23fcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcc0: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23fcc4: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23fcc8: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23fccc: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23fcd0: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23fcd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23fcd4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23fcd8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23fcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fcdc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23fcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23fce0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23fce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fce4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23fce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fce8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23fcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcf0: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23fcf4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23fcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23fcf8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23fcfc: 0xc08e222  jal         func_238888
    ctx->pc = 0x23FCFCu;
    SET_GPR_U32(ctx, 31, 0x23FD04u);
    ctx->pc = 0x23FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCFCu;
            // 0x23fd00: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD04u; }
        if (ctx->pc != 0x23FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD04u; }
        if (ctx->pc != 0x23FD04u) { return; }
    }
    ctx->pc = 0x23FD04u;
    // 0x23fd04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23fd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23fd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd10: 0xc08e222  jal         func_238888
    ctx->pc = 0x23FD10u;
    SET_GPR_U32(ctx, 31, 0x23FD18u);
    ctx->pc = 0x23FD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD10u;
            // 0x23fd14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD18u; }
        if (ctx->pc != 0x23FD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD18u; }
        if (ctx->pc != 0x23FD18u) { return; }
    }
    ctx->pc = 0x23FD18u;
    // 0x23fd18: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23fd1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23fd20: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x23fd20u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23fd24: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x23fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23fd28: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fd2c: 0x2484c288  addiu       $a0, $a0, -0x3D78
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951560));
    // 0x23fd30: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fd34: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x23fd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23fd38: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23fd3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23fd40: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x23fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x23fd44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23fd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd48: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x23fd4c: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x23fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x23fd50: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x23fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x23fd54: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x23fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23fd58: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23fd58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x23fd5c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x23fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x23fd60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23fd64: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23fd68: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23fd6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23fd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fd70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23fd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fd74: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD74u;
            // 0x23fd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FD7Cu;
    // 0x23fd7c: 0x0  nop
    ctx->pc = 0x23fd7cu;
    // NOP
    // 0x23fd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fd88: 0xc0556e8  jal         func_155BA0
    ctx->pc = 0x23FD88u;
    SET_GPR_U32(ctx, 31, 0x23FD90u);
    ctx->pc = 0x155BA0u;
    if (runtime->hasFunction(0x155BA0u)) {
        auto targetFn = runtime->lookupFunction(0x155BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD90u; }
        if (ctx->pc != 0x23FD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155BA0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD90u; }
        if (ctx->pc != 0x23FD90u) { return; }
    }
    ctx->pc = 0x23FD90u;
    // 0x23fd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fd94: 0x3e00008  jr          $ra
    ctx->pc = 0x23FD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD94u;
            // 0x23fd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FD9Cu;
    // 0x23fd9c: 0x0  nop
    ctx->pc = 0x23fd9cu;
    // NOP
    // 0x23fda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fda4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fda8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x23fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x23fdac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23fdb0: 0x8e22c090  lw          $v0, -0x3F70($s1)
    ctx->pc = 0x23fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951056)));
    // 0x23fdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fdb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FDB8u;
    {
        const bool branch_taken_0x23fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FDB8u;
            // 0x23fdbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdb8) {
            ctx->pc = 0x23FDCCu;
            goto label_23fdcc;
        }
    }
    ctx->pc = 0x23FDC0u;
    // 0x23fdc0: 0xc0556e8  jal         func_155BA0
    ctx->pc = 0x23FDC0u;
    SET_GPR_U32(ctx, 31, 0x23FDC8u);
    ctx->pc = 0x155BA0u;
    if (runtime->hasFunction(0x155BA0u)) {
        auto targetFn = runtime->lookupFunction(0x155BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDC8u; }
        if (ctx->pc != 0x23FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155BA0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FDC8u; }
        if (ctx->pc != 0x23FDC8u) { return; }
    }
    ctx->pc = 0x23FDC8u;
    // 0x23fdc8: 0xae20c090  sw          $zero, -0x3F70($s1)
    ctx->pc = 0x23fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951056), GPR_U32(ctx, 0));
label_23fdcc:
    // 0x23fdcc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x23fdd0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x23fdd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23fdd8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x23fdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23fddc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23fde0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23fde4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fde8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fdec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23fdf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23fdf4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23fdf8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23fdfc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23fe00: 0x40f809  jalr        $v0
    ctx->pc = 0x23FE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FE08u);
        ctx->pc = 0x23FE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE00u;
            // 0x23fe04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23FE08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23FE08u; }
            if (ctx->pc != 0x23FE08u) { return; }
        }
        }
    }
    ctx->pc = 0x23FE08u;
    // 0x23fe08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23fe08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fe0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fe0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fe10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fe14: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FE14u;
            // 0x23fe18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F628u: goto label_23f628;
            case 0x23F62Cu: goto label_23f62c;
            case 0x23F640u: goto label_23f640;
            case 0x23F668u: goto label_23f668;
            case 0x23F678u: goto label_23f678;
            case 0x23F690u: goto label_23f690;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6F0u: goto label_23f6f0;
            case 0x23F728u: goto label_23f728;
            case 0x23F750u: goto label_23f750;
            case 0x23F810u: goto label_23f810;
            case 0x23F868u: goto label_23f868;
            case 0x23F88Cu: goto label_23f88c;
            case 0x23F900u: goto label_23f900;
            case 0x23F918u: goto label_23f918;
            case 0x23F934u: goto label_23f934;
            case 0x23F954u: goto label_23f954;
            case 0x23F958u: goto label_23f958;
            case 0x23F990u: goto label_23f990;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23F9E4u: goto label_23f9e4;
            case 0x23F9F4u: goto label_23f9f4;
            case 0x23F9FCu: goto label_23f9fc;
            case 0x23FA10u: goto label_23fa10;
            case 0x23FA2Cu: goto label_23fa2c;
            case 0x23FA48u: goto label_23fa48;
            case 0x23FA4Cu: goto label_23fa4c;
            case 0x23FA68u: goto label_23fa68;
            case 0x23FA80u: goto label_23fa80;
            case 0x23FAB8u: goto label_23fab8;
            case 0x23FC58u: goto label_23fc58;
            case 0x23FDCCu: goto label_23fdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FE1Cu;
    // 0x23fe1c: 0x0  nop
    ctx->pc = 0x23fe1cu;
    // NOP
}
