#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232658
// Address: 0x232658 - 0x232f68
void sub_00232658_0x232658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232658_0x232658");
#endif

    ctx->pc = 0x232658u;

    // 0x232658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23265c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x232660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x232660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x232664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232668: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x232668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23266c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23266cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x232674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232678: 0xc08c7c4  jal         func_231F10
    ctx->pc = 0x232678u;
    SET_GPR_U32(ctx, 31, 0x232680u);
    ctx->pc = 0x23267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232678u;
            // 0x23267c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    if (runtime->hasFunction(0x231F10u)) {
        auto targetFn = runtime->lookupFunction(0x231F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232680u; }
        if (ctx->pc != 0x232680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_231f10_0x232060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232680u; }
        if (ctx->pc != 0x232680u) { return; }
    }
    ctx->pc = 0x232680u;
    // 0x232680: 0xc08c978  jal         func_2325E0
    ctx->pc = 0x232680u;
    SET_GPR_U32(ctx, 31, 0x232688u);
    ctx->pc = 0x232684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232680u;
            // 0x232684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2325E0u;
    if (runtime->hasFunction(0x2325E0u)) {
        auto targetFn = runtime->lookupFunction(0x2325E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232688u; }
        if (ctx->pc != 0x232688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002325E0_0x2325e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232688u; }
        if (ctx->pc != 0x232688u) { return; }
    }
    ctx->pc = 0x232688u;
    // 0x232688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23268c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x232690: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x232690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x232694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232694u;
    {
        const bool branch_taken_0x232694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232694u;
            // 0x232698: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232694) {
            ctx->pc = 0x2326B0u;
            goto label_2326b0;
        }
    }
    ctx->pc = 0x23269Cu;
    // 0x23269c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2326a0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2326a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2326a4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2326a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2326a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2326a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2326ac: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2326acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_2326b0:
    // 0x2326b0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2326b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2326b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2326b8: 0x8c437928  lw          $v1, 0x7928($v0)
    ctx->pc = 0x2326b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31016)));
    // 0x2326bc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2326bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2326c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2326c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2326c4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2326C4u;
    SET_GPR_U32(ctx, 31, 0x2326CCu);
    ctx->pc = 0x2326C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2326C4u;
            // 0x2326c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326CCu; }
        if (ctx->pc != 0x2326CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326CCu; }
        if (ctx->pc != 0x2326CCu) { return; }
    }
    ctx->pc = 0x2326CCu;
    // 0x2326cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2326ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2326d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326d4: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x2326d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x2326d8: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x2326d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x2326dc: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x2326dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x2326e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2326e4: 0x0  nop
    ctx->pc = 0x2326e4u;
    // NOP
label_2326e8:
    // 0x2326e8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2326e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2326ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2326f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2326f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2326f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2326f8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2326f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2326fc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2326fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x232700: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x232700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x232704: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x232704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x232708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23270c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232714: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x232718: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x232718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x23271c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x23271cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x232720: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x232720u;
    {
        const bool branch_taken_0x232720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232720) {
            ctx->pc = 0x232724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232720u;
            // 0x232724: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2326E8u;
            runtime->cooperativeGuestYield();
            goto label_2326e8;
        }
    }
    ctx->pc = 0x232728u;
    // 0x232728: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x232728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23272c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232734: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x232734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23273c: 0x3e00008  jr          $ra
    ctx->pc = 0x23273Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23273Cu;
            // 0x232740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232744u;
    // 0x232744: 0x0  nop
    ctx->pc = 0x232744u;
    // NOP
    // 0x232748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23274c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x232750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23275c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23275cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232760: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x232760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x232764: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x232764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x232768: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x23276c: 0x40f809  jalr        $v0
    ctx->pc = 0x23276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232774u);
        ctx->pc = 0x232770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23276Cu;
            // 0x232770: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232774u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232774u; }
            if (ctx->pc != 0x232774u) { return; }
        }
        }
    }
    ctx->pc = 0x232774u;
    // 0x232774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232774u;
    {
        const bool branch_taken_0x232774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232774u;
            // 0x232778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232774) {
            ctx->pc = 0x232790u;
            goto label_232790;
        }
    }
    ctx->pc = 0x23277Cu;
    // 0x23277c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x232780: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x232780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x232784: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x232788: 0x40f809  jalr        $v0
    ctx->pc = 0x232788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232790u);
        ctx->pc = 0x23278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232788u;
            // 0x23278c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232790u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232790u; }
            if (ctx->pc != 0x232790u) { return; }
        }
        }
    }
    ctx->pc = 0x232790u;
label_232790:
    // 0x232790: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23279c: 0x3e00008  jr          $ra
    ctx->pc = 0x23279Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2327A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23279Cu;
            // 0x2327a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2327A4u;
    // 0x2327a4: 0x0  nop
    ctx->pc = 0x2327a4u;
    // NOP
    // 0x2327a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2327ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2327acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2327b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2327b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2327b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2327b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2327b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2327bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2327bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2327c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2327c4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x2327c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2327c8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2327c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2327cc: 0x40f809  jalr        $v0
    ctx->pc = 0x2327CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2327D4u);
        ctx->pc = 0x2327D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327CCu;
            // 0x2327d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2327D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2327D4u; }
            if (ctx->pc != 0x2327D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2327D4u;
    // 0x2327d4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2327D4u;
    {
        const bool branch_taken_0x2327d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327D4u;
            // 0x2327d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327d4) {
            ctx->pc = 0x232894u;
            goto label_232894;
        }
    }
    ctx->pc = 0x2327DCu;
    // 0x2327dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2327e0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2327e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2327e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2327E4u;
    {
        const bool branch_taken_0x2327e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327E4u;
            // 0x2327e8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327e4) {
            ctx->pc = 0x232800u;
            goto label_232800;
        }
    }
    ctx->pc = 0x2327ECu;
    // 0x2327ec: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2327f0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2327F0u;
    {
        const bool branch_taken_0x2327f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2327F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327F0u;
            // 0x2327f4: 0x10100a  movz        $v0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327f0) {
            ctx->pc = 0x23280Cu;
            goto label_23280c;
        }
    }
    ctx->pc = 0x2327F8u;
    // 0x2327f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2327F8u;
    {
        const bool branch_taken_0x2327f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327F8u;
            // 0x2327fc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327f8) {
            ctx->pc = 0x232828u;
            goto label_232828;
        }
    }
    ctx->pc = 0x232800u;
label_232800:
    // 0x232800: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232800u;
    {
        const bool branch_taken_0x232800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232800u;
            // 0x232804: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232800) {
            ctx->pc = 0x232820u;
            goto label_232820;
        }
    }
    ctx->pc = 0x232808u;
    // 0x232808: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23280c:
    // 0x23280c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232810: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x232810u;
    {
        const bool branch_taken_0x232810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x232810) {
            ctx->pc = 0x232814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232810u;
            // 0x232814: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x232818u;
label_232818:
    // 0x232818: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x232818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x23281c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_232820:
    // 0x232820: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x232820u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x232824: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x232824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_232828:
    // 0x232828: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23282c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x23282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x232830: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x232830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x232834: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x232834u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x232838: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x232838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23283c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23283cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232840: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x232840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232844: 0x30e60002  andi        $a2, $a3, 0x2
    ctx->pc = 0x232844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x232848: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x232848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x23284c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x23284cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x232850: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x232850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x232854: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x232854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x232858: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x232858u;
    {
        const bool branch_taken_0x232858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232858u;
            // 0x23285c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232858) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x232860u;
    // 0x232860: 0x30e2fffa  andi        $v0, $a3, 0xFFFA
    ctx->pc = 0x232860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65530);
    // 0x232864: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x232864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232868: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x232868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x23286c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23286cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232870: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x232874: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x232878: 0x40f809  jalr        $v0
    ctx->pc = 0x232878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232880u);
        ctx->pc = 0x23287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232878u;
            // 0x23287c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232880u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232880u; }
            if (ctx->pc != 0x232880u) { return; }
        }
        }
    }
    ctx->pc = 0x232880u;
    // 0x232880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x232880u;
    {
        const bool branch_taken_0x232880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232880u;
            // 0x232884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232880) {
            ctx->pc = 0x232894u;
            goto label_232894;
        }
    }
    ctx->pc = 0x232888u;
label_232888:
    // 0x232888: 0x30e2fffa  andi        $v0, $a3, 0xFFFA
    ctx->pc = 0x232888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65530);
    // 0x23288c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x23288cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x232890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232894:
    // 0x232894: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23289c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2328a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2328A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328A0u;
            // 0x2328a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2328A8u;
    // 0x2328a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2328a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2328ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2328acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2328b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2328b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2328b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2328b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2328bc: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2328c0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2328c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2328c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2328c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2328c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2328cc: 0x0  nop
    ctx->pc = 0x2328ccu;
    // NOP
label_2328d0:
    // 0x2328d0: 0x0  nop
    ctx->pc = 0x2328d0u;
    // NOP
    // 0x2328d4: 0x0  nop
    ctx->pc = 0x2328d4u;
    // NOP
    // 0x2328d8: 0x0  nop
    ctx->pc = 0x2328d8u;
    // NOP
    // 0x2328dc: 0x0  nop
    ctx->pc = 0x2328dcu;
    // NOP
    // 0x2328e0: 0x0  nop
    ctx->pc = 0x2328e0u;
    // NOP
    // 0x2328e4: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2328E4u;
    {
        const bool branch_taken_0x2328e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2328e4) {
            ctx->pc = 0x2328E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2328E4u;
            // 0x2328e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2328D0u;
            runtime->cooperativeGuestYield();
            goto label_2328d0;
        }
    }
    ctx->pc = 0x2328ECu;
    // 0x2328ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2328f0: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x2328f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x2328f4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2328f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2328F8u;
    {
        const bool branch_taken_0x2328f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328F8u;
            // 0x2328fc: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328f8) {
            ctx->pc = 0x232938u;
            goto label_232938;
        }
    }
    ctx->pc = 0x232900u;
    // 0x232900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232904: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x232904u;
    {
        const bool branch_taken_0x232904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232904u;
            // 0x232908: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232904) {
            ctx->pc = 0x23293Cu;
            goto label_23293c;
        }
    }
    ctx->pc = 0x23290Cu;
    // 0x23290c: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x23290cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x232910: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x232910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232914: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x232914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232918: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x232918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23291c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x23291cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232920: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x232924: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232928: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23292c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23292cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232930: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232934: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_232938:
    // 0x232938: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23293c:
    // 0x23293c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x23293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x232940: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232944: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x232944u;
    {
        const bool branch_taken_0x232944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232944) {
            ctx->pc = 0x232948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232944u;
            // 0x232948: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232A68u;
            goto label_232a68;
        }
    }
    ctx->pc = 0x23294Cu;
    // 0x23294c: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232950:
    // 0x232950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232954: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x232954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232958: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x23295c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x23295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232960: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232964: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x232968: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x232968u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x23296c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x232970: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x232970u;
    {
        const bool branch_taken_0x232970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232970u;
            // 0x232974: 0x8ca60024  lw          $a2, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232970) {
            ctx->pc = 0x2329C8u;
            goto label_2329c8;
        }
    }
    ctx->pc = 0x232978u;
    // 0x232978: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x232978u;
    {
        const bool branch_taken_0x232978 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232978) {
            ctx->pc = 0x23297Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232978u;
            // 0x23297c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2329CCu;
            goto label_2329cc;
        }
    }
    ctx->pc = 0x232980u;
    // 0x232980: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232984: 0x50460011  beql        $v0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x232984u;
    {
        const bool branch_taken_0x232984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x232984) {
            ctx->pc = 0x232988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232984u;
            // 0x232988: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2329CCu;
            goto label_2329cc;
        }
    }
    ctx->pc = 0x23298Cu;
    // 0x23298c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x23298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x232990: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x232990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232994: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x232994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x232998: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x232998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23299c: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x23299cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2329a0: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x2329a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2329a4: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x2329a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2329a8: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x2329a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2329ac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2329acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2329b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2329b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2329b4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2329b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2329b8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2329b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2329bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2329c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2329C0u;
    {
        const bool branch_taken_0x2329c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329C0u;
            // 0x2329c4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329c0) {
            ctx->pc = 0x232A10u;
            goto label_232a10;
        }
    }
    ctx->pc = 0x2329C8u;
label_2329c8:
    // 0x2329c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2329c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2329cc:
    // 0x2329cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2329ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2329d0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2329D0u;
    {
        const bool branch_taken_0x2329d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2329D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329D0u;
            // 0x2329d4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329d0) {
            ctx->pc = 0x232A10u;
            goto label_232a10;
        }
    }
    ctx->pc = 0x2329D8u;
label_2329d8:
    // 0x2329d8: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x2329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x2329dc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2329e0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2329e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2329e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2329e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2329E8u;
    {
        const bool branch_taken_0x2329e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329E8u;
            // 0x2329ec: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329e8) {
            ctx->pc = 0x232A10u;
            goto label_232a10;
        }
    }
    ctx->pc = 0x2329F0u;
    // 0x2329f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2329f4: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2329f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2329f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2329f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2329fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2329fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232a00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232a04: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x232A04u;
    {
        const bool branch_taken_0x232a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A04u;
            // 0x232a08: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a04) {
            ctx->pc = 0x2329D8u;
            runtime->cooperativeGuestYield();
            goto label_2329d8;
        }
    }
    ctx->pc = 0x232A0Cu;
    // 0x232a0c: 0x0  nop
    ctx->pc = 0x232a0cu;
    // NOP
label_232a10:
    // 0x232a10: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x232a10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x232a14: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x232a14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x232a18: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x232a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x232a1c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x232A1Cu;
    {
        const bool branch_taken_0x232a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A1Cu;
            // 0x232a20: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a1c) {
            ctx->pc = 0x232A5Cu;
            goto label_232a5c;
        }
    }
    ctx->pc = 0x232A24u;
    // 0x232a24: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x232a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x232a28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232A28u;
    {
        const bool branch_taken_0x232a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A28u;
            // 0x232a2c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a28) {
            ctx->pc = 0x232A48u;
            goto label_232a48;
        }
    }
    ctx->pc = 0x232A30u;
    // 0x232a30: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x232a34: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x232a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x232a38: 0x40f809  jalr        $v0
    ctx->pc = 0x232A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232A40u);
        ctx->pc = 0x232A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A38u;
            // 0x232a3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232A40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232A40u; }
            if (ctx->pc != 0x232A40u) { return; }
        }
        }
    }
    ctx->pc = 0x232A40u;
    // 0x232a40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232A40u;
    {
        const bool branch_taken_0x232a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A40u;
            // 0x232a44: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a40) {
            ctx->pc = 0x232A5Cu;
            goto label_232a5c;
        }
    }
    ctx->pc = 0x232A48u;
label_232a48:
    // 0x232a48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x232a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x232a4c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x232a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x232a50: 0x40f809  jalr        $v0
    ctx->pc = 0x232A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232A58u);
        ctx->pc = 0x232A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A50u;
            // 0x232a54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232A58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232A58u; }
            if (ctx->pc != 0x232A58u) { return; }
        }
        }
    }
    ctx->pc = 0x232A58u;
    // 0x232a58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232a5c:
    // 0x232a5c: 0x441ffbc  bgez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x232A5Cu;
    {
        const bool branch_taken_0x232a5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x232A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A5Cu;
            // 0x232a60: 0x8fa80080  lw          $t0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a5c) {
            ctx->pc = 0x232950u;
            runtime->cooperativeGuestYield();
            goto label_232950;
        }
    }
    ctx->pc = 0x232A64u;
    // 0x232a64: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x232a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_232a68:
    // 0x232a68: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x232a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x232a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x232A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A6Cu;
            // 0x232a70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232A74u;
    // 0x232a74: 0x0  nop
    ctx->pc = 0x232a74u;
    // NOP
    // 0x232a78: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x232a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x232a7c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x232a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x232a80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x232a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a88: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x232a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x232a8c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x232a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x232a90: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x232a94: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x232a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x232a98: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232a9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x232a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x232aa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232aa4: 0x0  nop
    ctx->pc = 0x232aa4u;
    // NOP
label_232aa8:
    // 0x232aa8: 0x0  nop
    ctx->pc = 0x232aa8u;
    // NOP
    // 0x232aac: 0x0  nop
    ctx->pc = 0x232aacu;
    // NOP
    // 0x232ab0: 0x0  nop
    ctx->pc = 0x232ab0u;
    // NOP
    // 0x232ab4: 0x0  nop
    ctx->pc = 0x232ab4u;
    // NOP
    // 0x232ab8: 0x0  nop
    ctx->pc = 0x232ab8u;
    // NOP
    // 0x232abc: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x232ABCu;
    {
        const bool branch_taken_0x232abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232abc) {
            ctx->pc = 0x232AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232ABCu;
            // 0x232ac0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232AA8u;
            runtime->cooperativeGuestYield();
            goto label_232aa8;
        }
    }
    ctx->pc = 0x232AC4u;
    // 0x232ac4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x232ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x232ac8: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x232ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x232acc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x232accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x232ad0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x232AD0u;
    {
        const bool branch_taken_0x232ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AD0u;
            // 0x232ad4: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ad0) {
            ctx->pc = 0x232B10u;
            goto label_232b10;
        }
    }
    ctx->pc = 0x232AD8u;
    // 0x232ad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232adc: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x232ADCu;
    {
        const bool branch_taken_0x232adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232ADCu;
            // 0x232ae0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232adc) {
            ctx->pc = 0x232B14u;
            goto label_232b14;
        }
    }
    ctx->pc = 0x232AE4u;
    // 0x232ae4: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x232ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x232ae8: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x232ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232aec: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x232aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232af0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x232af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232af4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x232af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232af8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x232af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x232afc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232b00: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x232b04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232b08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232b0c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_232b10:
    // 0x232b10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232b14:
    // 0x232b14: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x232b18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232b1c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x232B1Cu;
    {
        const bool branch_taken_0x232b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B1Cu;
            // 0x232b20: 0x26510024  addiu       $s1, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b1c) {
            ctx->pc = 0x232C84u;
            goto label_232c84;
        }
    }
    ctx->pc = 0x232B24u;
    // 0x232b24: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232b28:
    // 0x232b28: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x232b2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232b30: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232b34: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x232b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x232b38: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x232b3c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x232b40: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x232b40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232b44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x232b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b48: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x232b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x232b4c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x232b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x232b50: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x232b54: 0x40f809  jalr        $v0
    ctx->pc = 0x232B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232B5Cu);
        ctx->pc = 0x232B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B54u;
            // 0x232b58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232B5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232B5Cu; }
            if (ctx->pc != 0x232B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x232B5Cu;
    // 0x232b5c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x232B5Cu;
    {
        const bool branch_taken_0x232b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B5Cu;
            // 0x232b60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b5c) {
            ctx->pc = 0x232BB8u;
            goto label_232bb8;
        }
    }
    ctx->pc = 0x232B64u;
    // 0x232b64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x232b68: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x232b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x232b6c: 0x8c6400b4  lw          $a0, 0xB4($v1)
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x232b70: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x232B70u;
    {
        const bool branch_taken_0x232b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B70u;
            // 0x232b74: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b70) {
            ctx->pc = 0x232C74u;
            goto label_232c74;
        }
    }
    ctx->pc = 0x232B78u;
    // 0x232b78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x232b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232b7c: 0x1044003e  beq         $v0, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x232B7Cu;
    {
        const bool branch_taken_0x232b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x232B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232B7Cu;
            // 0x232b80: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b7c) {
            ctx->pc = 0x232C78u;
            goto label_232c78;
        }
    }
    ctx->pc = 0x232B84u;
    // 0x232b84: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x232b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x232b88: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x232b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232b8c: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x232b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232b90: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x232b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232b94: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x232b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232b98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232b9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232ba0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232ba4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x232ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x232ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232bac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x232BACu;
    {
        const bool branch_taken_0x232bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BACu;
            // 0x232bb0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bac) {
            ctx->pc = 0x232C74u;
            goto label_232c74;
        }
    }
    ctx->pc = 0x232BB4u;
    // 0x232bb4: 0x0  nop
    ctx->pc = 0x232bb4u;
    // NOP
label_232bb8:
    // 0x232bb8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x232bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bbc: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x232bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232bc0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x232bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x232bc4: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x232bc8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232bcc: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232bd0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x232bd4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x232BD4u;
    {
        const bool branch_taken_0x232bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BD4u;
            // 0x232bd8: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bd4) {
            ctx->pc = 0x232C28u;
            goto label_232c28;
        }
    }
    ctx->pc = 0x232BDCu;
    // 0x232bdc: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x232BDCu;
    {
        const bool branch_taken_0x232bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x232bdc) {
            ctx->pc = 0x232BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232BDCu;
            // 0x232be0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232C2Cu;
            goto label_232c2c;
        }
    }
    ctx->pc = 0x232BE4u;
    // 0x232be4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232be8: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x232BE8u;
    {
        const bool branch_taken_0x232be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x232BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BE8u;
            // 0x232bec: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232be8) {
            ctx->pc = 0x232C28u;
            goto label_232c28;
        }
    }
    ctx->pc = 0x232BF0u;
    // 0x232bf0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232bf4: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x232bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x232bf8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x232bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x232bfc: 0x6ba700b7  ldl         $a3, 0xB7($sp)
    ctx->pc = 0x232bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x232c00: 0x6fa700b0  ldr         $a3, 0xB0($sp)
    ctx->pc = 0x232c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x232c04: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x232c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232c08: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x232c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232c0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232c10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232c14: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x232c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232c18: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x232c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x232c1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232c20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x232C20u;
    {
        const bool branch_taken_0x232c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C20u;
            // 0x232c24: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c20) {
            ctx->pc = 0x232C70u;
            goto label_232c70;
        }
    }
    ctx->pc = 0x232C28u;
label_232c28:
    // 0x232c28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_232c2c:
    // 0x232c2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232c30: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x232C30u;
    {
        const bool branch_taken_0x232c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C30u;
            // 0x232c34: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c30) {
            ctx->pc = 0x232C70u;
            goto label_232c70;
        }
    }
    ctx->pc = 0x232C38u;
label_232c38:
    // 0x232c38: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x232c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x232c3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x232c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232c40: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x232c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x232c44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232c48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232C48u;
    {
        const bool branch_taken_0x232c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C48u;
            // 0x232c4c: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c48) {
            ctx->pc = 0x232C70u;
            goto label_232c70;
        }
    }
    ctx->pc = 0x232C50u;
    // 0x232c50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x232c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232c54: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x232c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x232c58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232c5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232c64: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x232C64u;
    {
        const bool branch_taken_0x232c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C64u;
            // 0x232c68: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c64) {
            ctx->pc = 0x232C38u;
            runtime->cooperativeGuestYield();
            goto label_232c38;
        }
    }
    ctx->pc = 0x232C6Cu;
    // 0x232c6c: 0x0  nop
    ctx->pc = 0x232c6cu;
    // NOP
label_232c70:
    // 0x232c70: 0xad000084  sw          $zero, 0x84($t0)
    ctx->pc = 0x232c70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
label_232c74:
    // 0x232c74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232c78:
    // 0x232c78: 0x441ffab  bgez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x232C78u;
    {
        const bool branch_taken_0x232c78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x232C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C78u;
            // 0x232c7c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c78) {
            ctx->pc = 0x232B28u;
            runtime->cooperativeGuestYield();
            goto label_232b28;
        }
    }
    ctx->pc = 0x232C80u;
    // 0x232c80: 0x26510024  addiu       $s1, $s2, 0x24
    ctx->pc = 0x232c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_232c84:
    // 0x232c84: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x232c88: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x232C88u;
    {
        const bool branch_taken_0x232c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c88) {
            ctx->pc = 0x232CB8u;
            goto label_232cb8;
        }
    }
    ctx->pc = 0x232C90u;
    // 0x232c90: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x232c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x232c94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x232C94u;
    {
        const bool branch_taken_0x232c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c94) {
            ctx->pc = 0x232C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232C94u;
            // 0x232c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232CA8u;
            goto label_232ca8;
        }
    }
    ctx->pc = 0x232C9Cu;
    // 0x232c9c: 0xc08e23e  jal         func_2388F8
    ctx->pc = 0x232C9Cu;
    SET_GPR_U32(ctx, 31, 0x232CA4u);
    ctx->pc = 0x232CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232C9Cu;
            // 0x232ca0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2388F8u;
    if (runtime->hasFunction(0x2388F8u)) {
        auto targetFn = runtime->lookupFunction(0x2388F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CA4u; }
        if (ctx->pc != 0x232CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002388F8_0x2388f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CA4u; }
        if (ctx->pc != 0x232CA4u) { return; }
    }
    ctx->pc = 0x232CA4u;
    // 0x232ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ca8:
    // 0x232ca8: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x232CA8u;
    SET_GPR_U32(ctx, 31, 0x232CB0u);
    ctx->pc = 0x232CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CA8u;
            // 0x232cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CB0u; }
        if (ctx->pc != 0x232CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CB0u; }
        if (ctx->pc != 0x232CB0u) { return; }
    }
    ctx->pc = 0x232CB0u;
    // 0x232cb0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x232CB0u;
    SET_GPR_U32(ctx, 31, 0x232CB8u);
    ctx->pc = 0x232CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CB0u;
            // 0x232cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CB8u; }
        if (ctx->pc != 0x232CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CB8u; }
        if (ctx->pc != 0x232CB8u) { return; }
    }
    ctx->pc = 0x232CB8u;
label_232cb8:
    // 0x232cb8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x232CB8u;
    SET_GPR_U32(ctx, 31, 0x232CC0u);
    ctx->pc = 0x232CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232CB8u;
            // 0x232cbc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CC0u; }
        if (ctx->pc != 0x232CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232CC0u; }
        if (ctx->pc != 0x232CC0u) { return; }
    }
    ctx->pc = 0x232CC0u;
    // 0x232cc0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x232cc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x232cc4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x232cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x232cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232ccc: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x232cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x232cd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x232cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232cd8: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x232CD8u;
    {
        const bool branch_taken_0x232cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x232cd8) {
            ctx->pc = 0x232CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232CD8u;
            // 0x232cdc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232CE0u;
            goto label_232ce0;
        }
    }
    ctx->pc = 0x232CE0u;
label_232ce0:
    // 0x232ce0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x232ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x232ce4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x232ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x232ce8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x232ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x232cec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x232cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x232cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x232CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232CF0u;
            // 0x232cf4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232CF8u;
    // 0x232cf8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x232cfc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x232cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x232d00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x232d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d08: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x232d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x232d0c: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x232d10: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x232d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232d14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x232d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232d1c: 0x0  nop
    ctx->pc = 0x232d1cu;
    // NOP
label_232d20:
    // 0x232d20: 0x0  nop
    ctx->pc = 0x232d20u;
    // NOP
    // 0x232d24: 0x0  nop
    ctx->pc = 0x232d24u;
    // NOP
    // 0x232d28: 0x0  nop
    ctx->pc = 0x232d28u;
    // NOP
    // 0x232d2c: 0x0  nop
    ctx->pc = 0x232d2cu;
    // NOP
    // 0x232d30: 0x0  nop
    ctx->pc = 0x232d30u;
    // NOP
    // 0x232d34: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x232D34u;
    {
        const bool branch_taken_0x232d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x232d34) {
            ctx->pc = 0x232D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232D34u;
            // 0x232d38: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232D20u;
            runtime->cooperativeGuestYield();
            goto label_232d20;
        }
    }
    ctx->pc = 0x232D3Cu;
    // 0x232d3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x232d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x232d40: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x232d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x232d44: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x232d48: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x232D48u;
    {
        const bool branch_taken_0x232d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D48u;
            // 0x232d4c: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d48) {
            ctx->pc = 0x232D88u;
            goto label_232d88;
        }
    }
    ctx->pc = 0x232D50u;
    // 0x232d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232d54: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x232D54u;
    {
        const bool branch_taken_0x232d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232D54u;
            // 0x232d58: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d54) {
            ctx->pc = 0x232D8Cu;
            goto label_232d8c;
        }
    }
    ctx->pc = 0x232D5Cu;
    // 0x232d5c: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x232d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x232d60: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x232d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x232d64: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x232d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x232d68: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x232d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232d6c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x232d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232d70: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x232d74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232d78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x232d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x232d7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232d80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232d84: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x232d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_232d88:
    // 0x232d88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232d8c:
    // 0x232d8c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x232d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x232d90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232d94: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x232D94u;
    {
        const bool branch_taken_0x232d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d94) {
            ctx->pc = 0x232D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232D94u;
            // 0x232d98: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232EB8u;
            goto label_232eb8;
        }
    }
    ctx->pc = 0x232D9Cu;
    // 0x232d9c: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x232d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232da0:
    // 0x232da0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x232da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232da4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x232da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x232da8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232dac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x232dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232db0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x232db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x232db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x232db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232db8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x232db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x232dbc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x232DBCu;
    {
        const bool branch_taken_0x232dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232DBCu;
            // 0x232dc0: 0x8ca600b4  lw          $a2, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dbc) {
            ctx->pc = 0x232E18u;
            goto label_232e18;
        }
    }
    ctx->pc = 0x232DC4u;
    // 0x232dc4: 0x50c00015  beql        $a2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x232DC4u;
    {
        const bool branch_taken_0x232dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232dc4) {
            ctx->pc = 0x232DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232DC4u;
            // 0x232dc8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232E1Cu;
            goto label_232e1c;
        }
    }
    ctx->pc = 0x232DCCu;
    // 0x232dcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232dd0: 0x50460012  beql        $v0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x232DD0u;
    {
        const bool branch_taken_0x232dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x232dd0) {
            ctx->pc = 0x232DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232DD0u;
            // 0x232dd4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232E1Cu;
            goto label_232e1c;
        }
    }
    ctx->pc = 0x232DD8u;
    // 0x232dd8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x232ddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x232ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232de0: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x232de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x232de4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x232de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x232de8: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x232de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x232dec: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x232decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x232df0: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x232df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232df4: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x232df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x232df8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232dfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x232e00: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x232e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x232e04: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x232e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x232e08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232e0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x232E0Cu;
    {
        const bool branch_taken_0x232e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E0Cu;
            // 0x232e10: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e0c) {
            ctx->pc = 0x232E60u;
            goto label_232e60;
        }
    }
    ctx->pc = 0x232E14u;
    // 0x232e14: 0x0  nop
    ctx->pc = 0x232e14u;
    // NOP
label_232e18:
    // 0x232e18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232e1c:
    // 0x232e1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232e20: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x232E20u;
    {
        const bool branch_taken_0x232e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E20u;
            // 0x232e24: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e20) {
            ctx->pc = 0x232E60u;
            goto label_232e60;
        }
    }
    ctx->pc = 0x232E28u;
label_232e28:
    // 0x232e28: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x232e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x232e2c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232e30: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x232e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x232e34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232e38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232E38u;
    {
        const bool branch_taken_0x232e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E38u;
            // 0x232e3c: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e38) {
            ctx->pc = 0x232E60u;
            goto label_232e60;
        }
    }
    ctx->pc = 0x232E40u;
    // 0x232e40: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x232e44: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x232e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x232e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x232e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232e4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232e54: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x232E54u;
    {
        const bool branch_taken_0x232e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x232E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E54u;
            // 0x232e58: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e54) {
            ctx->pc = 0x232E28u;
            runtime->cooperativeGuestYield();
            goto label_232e28;
        }
    }
    ctx->pc = 0x232E5Cu;
    // 0x232e5c: 0x0  nop
    ctx->pc = 0x232e5cu;
    // NOP
label_232e60:
    // 0x232e60: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x232e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x232e64: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x232e64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x232e68: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x232e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x232e6c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x232E6Cu;
    {
        const bool branch_taken_0x232e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E6Cu;
            // 0x232e70: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e6c) {
            ctx->pc = 0x232EACu;
            goto label_232eac;
        }
    }
    ctx->pc = 0x232E74u;
    // 0x232e74: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x232e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x232e78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232E78u;
    {
        const bool branch_taken_0x232e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E78u;
            // 0x232e7c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e78) {
            ctx->pc = 0x232E98u;
            goto label_232e98;
        }
    }
    ctx->pc = 0x232E80u;
    // 0x232e80: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x232e84: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x232e88: 0x40f809  jalr        $v0
    ctx->pc = 0x232E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232E90u);
        ctx->pc = 0x232E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E88u;
            // 0x232e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232E90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232E90u; }
            if (ctx->pc != 0x232E90u) { return; }
        }
        }
    }
    ctx->pc = 0x232E90u;
    // 0x232e90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232E90u;
    {
        const bool branch_taken_0x232e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E90u;
            // 0x232e94: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e90) {
            ctx->pc = 0x232EACu;
            goto label_232eac;
        }
    }
    ctx->pc = 0x232E98u;
label_232e98:
    // 0x232e98: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x232e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x232e9c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x232e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x232ea0: 0x40f809  jalr        $v0
    ctx->pc = 0x232EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232EA8u);
        ctx->pc = 0x232EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EA0u;
            // 0x232ea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232EA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232EA8u; }
            if (ctx->pc != 0x232EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x232EA8u;
    // 0x232ea8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232eac:
    // 0x232eac: 0x441ffbc  bgez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x232EACu;
    {
        const bool branch_taken_0x232eac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x232EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EACu;
            // 0x232eb0: 0x8fa80080  lw          $t0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eac) {
            ctx->pc = 0x232DA0u;
            runtime->cooperativeGuestYield();
            goto label_232da0;
        }
    }
    ctx->pc = 0x232EB4u;
    // 0x232eb4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x232eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_232eb8:
    // 0x232eb8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x232eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x232ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x232EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EBCu;
            // 0x232ec0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232EC4u;
    // 0x232ec4: 0x0  nop
    ctx->pc = 0x232ec4u;
    // NOP
    // 0x232ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ed8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x232ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x232edc: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x232edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x232ee0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x232EE0u;
    {
        const bool branch_taken_0x232ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ee0) {
            ctx->pc = 0x232EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232EE0u;
            // 0x232ee4: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232F30u;
            goto label_232f30;
        }
    }
    ctx->pc = 0x232EE8u;
    // 0x232ee8: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x232eec: 0x0  nop
    ctx->pc = 0x232eecu;
    // NOP
label_232ef0:
    // 0x232ef0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232ef4: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x232ef4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x232ef8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x232ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232efc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x232efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f00: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x232f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x232f04: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x232f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x232f08: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x232f08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x232f0c: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x232f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x232f10: 0x40f809  jalr        $v0
    ctx->pc = 0x232F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232F18u);
        ctx->pc = 0x232F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F10u;
            // 0x232f14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232F18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232F18u; }
            if (ctx->pc != 0x232F18u) { return; }
        }
        }
    }
    ctx->pc = 0x232F18u;
    // 0x232f18: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x232F18u;
    {
        const bool branch_taken_0x232f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f18) {
            ctx->pc = 0x232F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232F18u;
            // 0x232f1c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232F24u;
            goto label_232f24;
        }
    }
    ctx->pc = 0x232F20u;
    // 0x232f20: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_232f24:
    // 0x232f24: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x232F24u;
    {
        const bool branch_taken_0x232f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x232F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F24u;
            // 0x232f28: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f24) {
            ctx->pc = 0x232EF0u;
            runtime->cooperativeGuestYield();
            goto label_232ef0;
        }
    }
    ctx->pc = 0x232F2Cu;
    // 0x232f2c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x232f2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_232f30:
    // 0x232f30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x232f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232f38: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x232f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x232f3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232f40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232f44: 0x50510002  beql        $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x232F44u;
    {
        const bool branch_taken_0x232f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x232f44) {
            ctx->pc = 0x232F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232F44u;
            // 0x232f48: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232F50u;
            goto label_232f50;
        }
    }
    ctx->pc = 0x232F4Cu;
    // 0x232f4c: 0x0  nop
    ctx->pc = 0x232f4cu;
    // NOP
label_232f50:
    // 0x232f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x232F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F5Cu;
            // 0x232f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2326B0u: goto label_2326b0;
            case 0x2326E8u: goto label_2326e8;
            case 0x232790u: goto label_232790;
            case 0x232800u: goto label_232800;
            case 0x23280Cu: goto label_23280c;
            case 0x232818u: goto label_232818;
            case 0x232820u: goto label_232820;
            case 0x232828u: goto label_232828;
            case 0x232888u: goto label_232888;
            case 0x232894u: goto label_232894;
            case 0x2328D0u: goto label_2328d0;
            case 0x232938u: goto label_232938;
            case 0x23293Cu: goto label_23293c;
            case 0x232950u: goto label_232950;
            case 0x2329C8u: goto label_2329c8;
            case 0x2329CCu: goto label_2329cc;
            case 0x2329D8u: goto label_2329d8;
            case 0x232A10u: goto label_232a10;
            case 0x232A48u: goto label_232a48;
            case 0x232A5Cu: goto label_232a5c;
            case 0x232A68u: goto label_232a68;
            case 0x232AA8u: goto label_232aa8;
            case 0x232B10u: goto label_232b10;
            case 0x232B14u: goto label_232b14;
            case 0x232B28u: goto label_232b28;
            case 0x232BB8u: goto label_232bb8;
            case 0x232C28u: goto label_232c28;
            case 0x232C2Cu: goto label_232c2c;
            case 0x232C38u: goto label_232c38;
            case 0x232C70u: goto label_232c70;
            case 0x232C74u: goto label_232c74;
            case 0x232C78u: goto label_232c78;
            case 0x232C84u: goto label_232c84;
            case 0x232CA8u: goto label_232ca8;
            case 0x232CB8u: goto label_232cb8;
            case 0x232CE0u: goto label_232ce0;
            case 0x232D20u: goto label_232d20;
            case 0x232D88u: goto label_232d88;
            case 0x232D8Cu: goto label_232d8c;
            case 0x232DA0u: goto label_232da0;
            case 0x232E18u: goto label_232e18;
            case 0x232E1Cu: goto label_232e1c;
            case 0x232E28u: goto label_232e28;
            case 0x232E60u: goto label_232e60;
            case 0x232E98u: goto label_232e98;
            case 0x232EACu: goto label_232eac;
            case 0x232EB8u: goto label_232eb8;
            case 0x232EF0u: goto label_232ef0;
            case 0x232F24u: goto label_232f24;
            case 0x232F30u: goto label_232f30;
            case 0x232F50u: goto label_232f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232F64u;
    // 0x232f64: 0x0  nop
    ctx->pc = 0x232f64u;
    // NOP
}
