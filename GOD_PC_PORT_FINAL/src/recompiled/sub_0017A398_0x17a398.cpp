#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A398
// Address: 0x17a398 - 0x17a588
void sub_0017A398_0x17a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A398_0x17a398");
#endif

    ctx->pc = 0x17a398u;

    // 0x17a398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a39c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17a3a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17a3a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17a3ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a3b0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x17a3b4: 0x0  nop
    ctx->pc = 0x17a3b4u;
    // NOP
label_17a3b8:
    // 0x17a3b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17a3bc: 0x2643e848  addiu       $v1, $s2, -0x17B8
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x17a3c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17a3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a3c8: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x17a3c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x17a3cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A3CCu;
    {
        const bool branch_taken_0x17a3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3CCu;
            // 0x17a3d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3cc) {
            ctx->pc = 0x17A3B8u;
            runtime->cooperativeGuestYield();
            goto label_17a3b8;
        }
    }
    ctx->pc = 0x17A3D4u;
    // 0x17a3d4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x17A3D4u;
    SET_GPR_U32(ctx, 31, 0x17A3DCu);
    ctx->pc = 0x17A3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A3D4u;
            // 0x17a3d8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3DCu; }
        if (ctx->pc != 0x17A3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3DCu; }
        if (ctx->pc != 0x17A3DCu) { return; }
    }
    ctx->pc = 0x17A3DCu;
    // 0x17a3dc: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x17a3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3e4: 0x8e25d8e8  lw          $a1, -0x2718($s1)
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957288)));
    // 0x17a3e8: 0x3c07dead  lui         $a3, 0xDEAD
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57005 << 16));
    // 0x17a3ec: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x17a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x17a3f0: 0x2631d8e8  addiu       $s1, $s1, -0x2718
    ctx->pc = 0x17a3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957288));
    // 0x17a3f4: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x17a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x17a3f8: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x17a3fc: 0x34e7beef  ori         $a3, $a3, 0xBEEF
    ctx->pc = 0x17a3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)48879);
    // 0x17a400: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17a400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17a404: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x17a404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x17a408: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x17a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x17a40c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x17a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17a410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a414: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x17a414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x17a418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a41c: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x17a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x17a420: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17a420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a424: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17a424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17a428: 0xc08e222  jal         func_238888
    ctx->pc = 0x17A428u;
    SET_GPR_U32(ctx, 31, 0x17A430u);
    ctx->pc = 0x17A42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A428u;
            // 0x17a42c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A430u; }
        if (ctx->pc != 0x17A430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A430u; }
        if (ctx->pc != 0x17A430u) { return; }
    }
    ctx->pc = 0x17A430u;
    // 0x17a430: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17a434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a43c: 0xc08e222  jal         func_238888
    ctx->pc = 0x17A43Cu;
    SET_GPR_U32(ctx, 31, 0x17A444u);
    ctx->pc = 0x17A440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A43Cu;
            // 0x17a440: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A444u; }
        if (ctx->pc != 0x17A444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A444u; }
        if (ctx->pc != 0x17A444u) { return; }
    }
    ctx->pc = 0x17A444u;
    // 0x17a444: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x17a444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17a448: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x17a44c: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x17a44cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17a450: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x17a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a454: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17a458: 0xaca43834  sw          $a0, 0x3834($a1)
    ctx->pc = 0x17a458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14388), GPR_U32(ctx, 4));
    // 0x17a45c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17a460: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x17a460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
    // 0x17a464: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x17a464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x17a468: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x17a468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x17a46c: 0xae090010  sw          $t1, 0x10($s0)
    ctx->pc = 0x17a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 9));
    // 0x17a470: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x17a470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x17a474: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x17a478: 0xacc03830  sw          $zero, 0x3830($a2)
    ctx->pc = 0x17a478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14384), GPR_U32(ctx, 0));
    // 0x17a47c: 0xace0ec50  sw          $zero, -0x13B0($a3)
    ctx->pc = 0x17a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294962256), GPR_U32(ctx, 0));
    // 0x17a480: 0x24630898  addiu       $v1, $v1, 0x898
    ctx->pc = 0x17a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2200));
    // 0x17a484: 0xae50e848  sw          $s0, -0x17B8($s2)
    ctx->pc = 0x17a484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961224), GPR_U32(ctx, 16));
    // 0x17a488: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17a488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x17a48c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x17a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x17a490: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x17a490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17a494: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17a494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17a498: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17a49c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17a4a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17a4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a4a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17a4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a4a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17a4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4B0u;
            // 0x17a4b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A3B8u: goto label_17a3b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A4B8u;
    // 0x17a4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a4c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a4c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17a4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a4cc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x17A4CCu;
    SET_GPR_U32(ctx, 31, 0x17A4D4u);
    ctx->pc = 0x17A4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4CCu;
            // 0x17a4d0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4D4u; }
        if (ctx->pc != 0x17A4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4D4u; }
        if (ctx->pc != 0x17A4D4u) { return; }
    }
    ctx->pc = 0x17A4D4u;
    // 0x17a4d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a4dc: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x17a4e0: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x17a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x17a4e4: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x17a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x17a4e8: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x17a4ec: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x17a4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x17a4f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17a4f4: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x17a4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x17a4f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x17a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x17a4fc: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x17a4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17a500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a504: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x17a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x17a508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a50c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x17a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x17a510: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17a510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a514: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17a514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17a518: 0xc08e222  jal         func_238888
    ctx->pc = 0x17A518u;
    SET_GPR_U32(ctx, 31, 0x17A520u);
    ctx->pc = 0x17A51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A518u;
            // 0x17a51c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A520u; }
        if (ctx->pc != 0x17A520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A520u; }
        if (ctx->pc != 0x17A520u) { return; }
    }
    ctx->pc = 0x17A520u;
    // 0x17a520: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17a524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a52c: 0xc08e222  jal         func_238888
    ctx->pc = 0x17A52Cu;
    SET_GPR_U32(ctx, 31, 0x17A534u);
    ctx->pc = 0x17A530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A52Cu;
            // 0x17a530: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A534u; }
        if (ctx->pc != 0x17A534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A534u; }
        if (ctx->pc != 0x17A534u) { return; }
    }
    ctx->pc = 0x17A534u;
    // 0x17a534: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x17a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17a538: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17a53c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17a540: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x17a540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x17a544: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x17a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x17a548: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17a548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17a54c: 0x24a5d6e8  addiu       $a1, $a1, -0x2918
    ctx->pc = 0x17a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
    // 0x17a550: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17a550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17a554: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x17a554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x17a558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a55c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x17a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x17a560: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x17a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x17a564: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x17a564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x17a568: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17a56c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17a56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a578: 0xac840008  sw          $a0, 0x8($a0)
    ctx->pc = 0x17a578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
    // 0x17a57c: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x17a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x17a580: 0x3e00008  jr          $ra
    ctx->pc = 0x17A580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A580u;
            // 0x17a584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A3B8u: goto label_17a3b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A588u;
}
