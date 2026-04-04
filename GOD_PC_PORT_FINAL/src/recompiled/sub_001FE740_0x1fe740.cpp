#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE740
// Address: 0x1fe740 - 0x1fed48
void sub_001FE740_0x1fe740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE740_0x1fe740");
#endif

    ctx->pc = 0x1fe740u;

    // 0x1fe740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fe744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe74c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe758: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1fe758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe75c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fe75cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe760: 0x0  nop
    ctx->pc = 0x1fe760u;
    // NOP
    // 0x1fe764: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE764u;
    {
        const bool branch_taken_0x1fe764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe764) {
            ctx->pc = 0x1FE768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE764u;
            // 0x1fe768: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE778u;
            goto label_1fe778;
        }
    }
    ctx->pc = 0x1FE76Cu;
    // 0x1fe76c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fe770: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE770u;
    {
        const bool branch_taken_0x1fe770 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE770u;
            // 0x1fe774: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe770) {
            ctx->pc = 0x1FE7C8u;
            goto label_1fe7c8;
        }
    }
    ctx->pc = 0x1FE778u;
label_1fe778:
    // 0x1fe778: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1fe778u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fe77c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fe780: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FE780u;
    {
        const bool branch_taken_0x1fe780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe780) {
            ctx->pc = 0x1FE784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE780u;
            // 0x1fe784: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE788u;
    // 0x1fe788: 0xc07fb52  jal         func_1FED48
    ctx->pc = 0x1FE788u;
    SET_GPR_U32(ctx, 31, 0x1FE790u);
    ctx->pc = 0x1FE78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE788u;
            // 0x1fe78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FED48u;
    if (runtime->hasFunction(0x1FED48u)) {
        auto targetFn = runtime->lookupFunction(0x1FED48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE790u; }
        if (ctx->pc != 0x1FE790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FED48_0x1fed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE790u; }
        if (ctx->pc != 0x1FE790u) { return; }
    }
    ctx->pc = 0x1FE790u;
    // 0x1fe790: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe794: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fe794u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe798: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fe798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fe79c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fe7a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe7a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe7a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe7ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe7b0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe7b4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fe7b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE7C0u);
        ctx->pc = 0x1FE7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7B8u;
            // 0x1fe7bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE7C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE778u: goto label_1fe778;
            case 0x1FE7C8u: goto label_1fe7c8;
            case 0x1FE818u: goto label_1fe818;
            case 0x1FE878u: goto label_1fe878;
            case 0x1FE8A0u: goto label_1fe8a0;
            case 0x1FE8F0u: goto label_1fe8f0;
            case 0x1FE928u: goto label_1fe928;
            case 0x1FE958u: goto label_1fe958;
            case 0x1FE988u: goto label_1fe988;
            case 0x1FE9B8u: goto label_1fe9b8;
            case 0x1FE9E8u: goto label_1fe9e8;
            case 0x1FE9F8u: goto label_1fe9f8;
            case 0x1FEA14u: goto label_1fea14;
            case 0x1FEA18u: goto label_1fea18;
            case 0x1FEAF0u: goto label_1feaf0;
            case 0x1FEAF8u: goto label_1feaf8;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FED1Cu: goto label_1fed1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7C0u; }
            if (ctx->pc != 0x1FE7C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE7C0u;
    // 0x1fe7c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE7C0u;
    {
        const bool branch_taken_0x1fe7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7C0u;
            // 0x1fe7c4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7c0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE7C8u;
label_1fe7c8:
    // 0x1fe7c8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1fe7c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fe7cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fe7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fe7d0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE7D0u;
    {
        const bool branch_taken_0x1fe7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7d0) {
            ctx->pc = 0x1FE7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7D0u;
            // 0x1fe7d4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE7D8u;
    // 0x1fe7d8: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x1FE7D8u;
    SET_GPR_U32(ctx, 31, 0x1FE7E0u);
    ctx->pc = 0x1FE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7D8u;
            // 0x1fe7dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7E0u; }
        if (ctx->pc != 0x1FE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7E0u; }
        if (ctx->pc != 0x1FE7E0u) { return; }
    }
    ctx->pc = 0x1FE7E0u;
    // 0x1fe7e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fe7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe7e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fe7e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe7e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fe7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fe7ec: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fe7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fe7f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe7f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe7f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe7fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe800: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fe804: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fe808: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE810u);
        ctx->pc = 0x1FE80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE808u;
            // 0x1fe80c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE810u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE778u: goto label_1fe778;
            case 0x1FE7C8u: goto label_1fe7c8;
            case 0x1FE818u: goto label_1fe818;
            case 0x1FE878u: goto label_1fe878;
            case 0x1FE8A0u: goto label_1fe8a0;
            case 0x1FE8F0u: goto label_1fe8f0;
            case 0x1FE928u: goto label_1fe928;
            case 0x1FE958u: goto label_1fe958;
            case 0x1FE988u: goto label_1fe988;
            case 0x1FE9B8u: goto label_1fe9b8;
            case 0x1FE9E8u: goto label_1fe9e8;
            case 0x1FE9F8u: goto label_1fe9f8;
            case 0x1FEA14u: goto label_1fea14;
            case 0x1FEA18u: goto label_1fea18;
            case 0x1FEAF0u: goto label_1feaf0;
            case 0x1FEAF8u: goto label_1feaf8;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FED1Cu: goto label_1fed1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE810u; }
            if (ctx->pc != 0x1FE810u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE810u;
    // 0x1fe810: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1fe810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1fe814: 0x0  nop
    ctx->pc = 0x1fe814u;
    // NOP
label_1fe818:
    // 0x1fe818: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe820: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE820u;
            // 0x1fe824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE778u: goto label_1fe778;
            case 0x1FE7C8u: goto label_1fe7c8;
            case 0x1FE818u: goto label_1fe818;
            case 0x1FE878u: goto label_1fe878;
            case 0x1FE8A0u: goto label_1fe8a0;
            case 0x1FE8F0u: goto label_1fe8f0;
            case 0x1FE928u: goto label_1fe928;
            case 0x1FE958u: goto label_1fe958;
            case 0x1FE988u: goto label_1fe988;
            case 0x1FE9B8u: goto label_1fe9b8;
            case 0x1FE9E8u: goto label_1fe9e8;
            case 0x1FE9F8u: goto label_1fe9f8;
            case 0x1FEA14u: goto label_1fea14;
            case 0x1FEA18u: goto label_1fea18;
            case 0x1FEAF0u: goto label_1feaf0;
            case 0x1FEAF8u: goto label_1feaf8;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FED1Cu: goto label_1fed1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE828u;
    // 0x1fe828: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1fe82c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fe830: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1fe830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1fe834: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1fe834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1fe838: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe83c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1fe83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1fe840: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fe840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe844: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1fe844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1fe848: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1fe848u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1fe84c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1fe84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1fe850: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1fe850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1fe854: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1fe854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1fe858: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1fe858u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1fe85c: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1fe85cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1fe860: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fe864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fe864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe868: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1fe868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fe86c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe874: 0x0  nop
    ctx->pc = 0x1fe874u;
    // NOP
label_1fe878:
    // 0x1fe878: 0x0  nop
    ctx->pc = 0x1fe878u;
    // NOP
    // 0x1fe87c: 0x0  nop
    ctx->pc = 0x1fe87cu;
    // NOP
    // 0x1fe880: 0x0  nop
    ctx->pc = 0x1fe880u;
    // NOP
    // 0x1fe884: 0x0  nop
    ctx->pc = 0x1fe884u;
    // NOP
    // 0x1fe888: 0x0  nop
    ctx->pc = 0x1fe888u;
    // NOP
    // 0x1fe88c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE88Cu;
    {
        const bool branch_taken_0x1fe88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE88Cu;
            // 0x1fe890: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe88c) {
            ctx->pc = 0x1FE878u;
            runtime->cooperativeGuestYield();
            goto label_1fe878;
        }
    }
    ctx->pc = 0x1FE894u;
    // 0x1fe894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe898: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe89c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe8a0:
    // 0x1fe8a0: 0x0  nop
    ctx->pc = 0x1fe8a0u;
    // NOP
    // 0x1fe8a4: 0x0  nop
    ctx->pc = 0x1fe8a4u;
    // NOP
    // 0x1fe8a8: 0x0  nop
    ctx->pc = 0x1fe8a8u;
    // NOP
    // 0x1fe8ac: 0x0  nop
    ctx->pc = 0x1fe8acu;
    // NOP
    // 0x1fe8b0: 0x0  nop
    ctx->pc = 0x1fe8b0u;
    // NOP
    // 0x1fe8b4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE8B4u;
    {
        const bool branch_taken_0x1fe8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe8b4) {
            ctx->pc = 0x1FE8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8B4u;
            // 0x1fe8b8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8A0u;
            runtime->cooperativeGuestYield();
            goto label_1fe8a0;
        }
    }
    ctx->pc = 0x1FE8BCu;
    // 0x1fe8bc: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1fe8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fe8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe8c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fe8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe8c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fe8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe8cc: 0x0  nop
    ctx->pc = 0x1fe8ccu;
    // NOP
    // 0x1fe8d0: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x1FE8D0u;
    {
        const bool branch_taken_0x1fe8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8D0u;
            // 0x1fe8d4: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8d0) {
            ctx->pc = 0x1FE9F8u;
            goto label_1fe9f8;
        }
    }
    ctx->pc = 0x1FE8D8u;
    // 0x1fe8d8: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe8d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe8dc: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe8dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe8e0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE8E0u;
    {
        const bool branch_taken_0x1fe8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FE8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8E0u;
            // 0x1fe8e4: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8e0) {
            ctx->pc = 0x1FE8F0u;
            goto label_1fe8f0;
        }
    }
    ctx->pc = 0x1FE8E8u;
    // 0x1fe8e8: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE8E8u;
    SET_GPR_U32(ctx, 31, 0x1FE8F0u);
    ctx->pc = 0x1FE8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8E8u;
            // 0x1fe8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8F0u; }
        if (ctx->pc != 0x1FE8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8F0u; }
        if (ctx->pc != 0x1FE8F0u) { return; }
    }
    ctx->pc = 0x1FE8F0u;
label_1fe8f0:
    // 0x1fe8f0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1fe8f4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe8f8: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fe8fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe900: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe904: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fe904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fe908: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe908u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe90c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe90cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe910: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE910u;
    {
        const bool branch_taken_0x1fe910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fe910) {
            ctx->pc = 0x1FE914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE910u;
            // 0x1fe914: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE928u;
            goto label_1fe928;
        }
    }
    ctx->pc = 0x1FE918u;
    // 0x1fe918: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE918u;
    SET_GPR_U32(ctx, 31, 0x1FE920u);
    ctx->pc = 0x1FE91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE918u;
            // 0x1fe91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE920u; }
        if (ctx->pc != 0x1FE920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE920u; }
        if (ctx->pc != 0x1FE920u) { return; }
    }
    ctx->pc = 0x1FE920u;
    // 0x1fe920: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1fe924: 0x0  nop
    ctx->pc = 0x1fe924u;
    // NOP
label_1fe928:
    // 0x1fe928: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe92c: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1fe92cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fe930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe934: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe938: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1fe938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1fe93c: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe93cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe940: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe944: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE944u;
    {
        const bool branch_taken_0x1fe944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fe944) {
            ctx->pc = 0x1FE948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE944u;
            // 0x1fe948: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE958u;
            goto label_1fe958;
        }
    }
    ctx->pc = 0x1FE94Cu;
    // 0x1fe94c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE94Cu;
    SET_GPR_U32(ctx, 31, 0x1FE954u);
    ctx->pc = 0x1FE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE94Cu;
            // 0x1fe950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE954u; }
        if (ctx->pc != 0x1FE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE954u; }
        if (ctx->pc != 0x1FE954u) { return; }
    }
    ctx->pc = 0x1FE954u;
    // 0x1fe954: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1fe958:
    // 0x1fe958: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe95c: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1fe95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fe960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe964: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe968: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1fe968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1fe96c: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe96cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe970: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe970u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe974: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE974u;
    {
        const bool branch_taken_0x1fe974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fe974) {
            ctx->pc = 0x1FE978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE974u;
            // 0x1fe978: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE988u;
            goto label_1fe988;
        }
    }
    ctx->pc = 0x1FE97Cu;
    // 0x1fe97c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE97Cu;
    SET_GPR_U32(ctx, 31, 0x1FE984u);
    ctx->pc = 0x1FE980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE97Cu;
            // 0x1fe980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE984u; }
        if (ctx->pc != 0x1FE984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE984u; }
        if (ctx->pc != 0x1FE984u) { return; }
    }
    ctx->pc = 0x1FE984u;
    // 0x1fe984: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1fe988:
    // 0x1fe988: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe98c: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1fe990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe994: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe998: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1fe998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1fe99c: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe99cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe9a0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe9a4: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE9A4u;
    {
        const bool branch_taken_0x1fe9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fe9a4) {
            ctx->pc = 0x1FE9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9A4u;
            // 0x1fe9a8: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE9B8u;
            goto label_1fe9b8;
        }
    }
    ctx->pc = 0x1FE9ACu;
    // 0x1fe9ac: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE9ACu;
    SET_GPR_U32(ctx, 31, 0x1FE9B4u);
    ctx->pc = 0x1FE9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9ACu;
            // 0x1fe9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9B4u; }
        if (ctx->pc != 0x1FE9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9B4u; }
        if (ctx->pc != 0x1FE9B4u) { return; }
    }
    ctx->pc = 0x1FE9B4u;
    // 0x1fe9b4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1fe9b8:
    // 0x1fe9b8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe9bc: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x1fe9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1fe9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe9c4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe9c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1fe9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1fe9cc: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1fe9ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1fe9d0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fe9d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fe9d4: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE9D4u;
    {
        const bool branch_taken_0x1fe9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fe9d4) {
            ctx->pc = 0x1FE9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9D4u;
            // 0x1fe9d8: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE9E8u;
            goto label_1fe9e8;
        }
    }
    ctx->pc = 0x1FE9DCu;
    // 0x1fe9dc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FE9DCu;
    SET_GPR_U32(ctx, 31, 0x1FE9E4u);
    ctx->pc = 0x1FE9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE9DCu;
            // 0x1fe9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9E4u; }
        if (ctx->pc != 0x1FE9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9E4u; }
        if (ctx->pc != 0x1FE9E4u) { return; }
    }
    ctx->pc = 0x1FE9E4u;
    // 0x1fe9e4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fe9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1fe9e8:
    // 0x1fe9e8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fe9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fe9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe9f0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1fe9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe9f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1fe9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1fe9f8:
    // 0x1fe9f8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1fe9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fe9fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fea00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fea04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fea08: 0xc4560230  lwc1        $f22, 0x230($v0)
    ctx->pc = 0x1fea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fea0c: 0xc056db4  jal         func_15B6D0
    ctx->pc = 0x1FEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA14u);
    ctx->pc = 0x1FEA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA0Cu;
            // 0x1fea10: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B6D0u;
    if (runtime->hasFunction(0x15B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x15B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA14u; }
        if (ctx->pc != 0x1FEA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6D0_0x15b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEA14u; }
        if (ctx->pc != 0x1FEA14u) { return; }
    }
    ctx->pc = 0x1FEA14u;
label_1fea14:
    // 0x1fea14: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1fea18:
    // 0x1fea18: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1FEA18u;
    {
        const bool branch_taken_0x1fea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA18u;
            // 0x1fea1c: 0x93a30094  lbu         $v1, 0x94($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea18) {
            ctx->pc = 0x1FECF8u;
            goto label_1fecf8;
        }
    }
    ctx->pc = 0x1FEA20u;
    // 0x1fea20: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x1fea20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fea24: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1fea24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fea28: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1fea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fea2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1fea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1fea30: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1fea30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1fea34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fea38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1fea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fea3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fea40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fea44: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fea44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fea48: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1fea48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fea4c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1fea4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fea50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fea54: 0x4602a836  c.le.s      $f21, $f2
    ctx->pc = 0x1fea54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fea58: 0x0  nop
    ctx->pc = 0x1fea58u;
    // NOP
    // 0x1fea5c: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1FEA5Cu;
    {
        const bool branch_taken_0x1fea5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA5Cu;
            // 0x1fea60: 0x93a20095  lbu         $v0, 0x95($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 149)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea5c) {
            ctx->pc = 0x1FEB30u;
            goto label_1feb30;
        }
    }
    ctx->pc = 0x1FEA64u;
    // 0x1fea64: 0x304500f0  andi        $a1, $v0, 0xF0
    ctx->pc = 0x1fea64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1fea68: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1fea68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fea6c: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1fea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fea70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fea74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fea78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fea7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fea80: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1fea80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fea84: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x1fea84u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x1fea88: 0x93a30096  lbu         $v1, 0x96($sp)
    ctx->pc = 0x1fea88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 150)));
    // 0x1fea8c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1fea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1fea90: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1fea90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1fea94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea98: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1fea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fea9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fea9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1feaa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1feaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1feaa4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1feaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1feaa8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1feaa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1feaac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feab0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1feab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1feab4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1feab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1feab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1feabc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1feabcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feac4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1FEAC4u;
    {
        const bool branch_taken_0x1feac4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAC4u;
            // 0x1feac8: 0xd8630000  lqc2        $vf3, 0x0($v1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feac4) {
            ctx->pc = 0x1FEAF8u;
            goto label_1feaf8;
        }
    }
    ctx->pc = 0x1FEACCu;
    // 0x1feacc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1feaccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fead0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1fead0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1fead4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fead4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fead8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1fead8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feadc: 0x0  nop
    ctx->pc = 0x1feadcu;
    // NOP
    // 0x1feae0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEAE0u;
    {
        const bool branch_taken_0x1feae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAE0u;
            // 0x1feae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feae0) {
            ctx->pc = 0x1FEAF0u;
            goto label_1feaf0;
        }
    }
    ctx->pc = 0x1FEAE8u;
    // 0x1feae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1feae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feaec: 0x0  nop
    ctx->pc = 0x1feaecu;
    // NOP
label_1feaf0:
    // 0x1feaf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAF0u;
    {
        const bool branch_taken_0x1feaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feaf0) {
            ctx->pc = 0x1FEB08u;
            goto label_1feb08;
        }
    }
    ctx->pc = 0x1FEAF8u;
label_1feaf8:
    // 0x1feaf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1feaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1feafc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1feafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1feb00: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1FEB00u;
    {
        const bool branch_taken_0x1feb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB00u;
            // 0x1feb04: 0x93a40094  lbu         $a0, 0x94($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb00) {
            ctx->pc = 0x1FEC70u;
            goto label_1fec70;
        }
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x4be320a8  vadd.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1feb08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1feb0c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1feb0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1feb10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1feb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1feb14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1feb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1feb18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1feb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feb1c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1feb20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1feb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1feb24: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1FEB24u;
    {
        const bool branch_taken_0x1feb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB24u;
            // 0x1feb28: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb24) {
            ctx->pc = 0x1FEC60u;
            goto label_1fec60;
        }
    }
    ctx->pc = 0x1FEB2Cu;
    // 0x1feb2c: 0x0  nop
    ctx->pc = 0x1feb2cu;
    // NOP
label_1feb30:
    // 0x1feb30: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1feb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1feb34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1feb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1feb38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1feb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1feb3c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1feb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1feb40: 0x0  nop
    ctx->pc = 0x1feb40u;
    // NOP
    // 0x1feb44: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x1FEB44u;
    {
        const bool branch_taken_0x1feb44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB44u;
            // 0x1feb48: 0x3c11002d  lui         $s1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb44) {
            ctx->pc = 0x1FEC6Cu;
            goto label_1fec6c;
        }
    }
    ctx->pc = 0x1FEB4Cu;
    // 0x1feb4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1feb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1feb50: 0x2631b950  addiu       $s1, $s1, -0x46B0
    ctx->pc = 0x1feb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949200));
    // 0x1feb54: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1FEB54u;
    SET_GPR_U32(ctx, 31, 0x1FEB5Cu);
    ctx->pc = 0x1FEB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB54u;
            // 0x1feb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB5Cu; }
        if (ctx->pc != 0x1FEB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB5Cu; }
        if (ctx->pc != 0x1FEB5Cu) { return; }
    }
    ctx->pc = 0x1FEB5Cu;
    // 0x1feb5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1feb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb60: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1FEB60u;
    SET_GPR_U32(ctx, 31, 0x1FEB68u);
    ctx->pc = 0x1FEB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB60u;
            // 0x1feb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB68u; }
        if (ctx->pc != 0x1FEB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB68u; }
        if (ctx->pc != 0x1FEB68u) { return; }
    }
    ctx->pc = 0x1FEB68u;
    // 0x1feb68: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x1feb68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1feb6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feb70: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1feb74: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1feb78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1feb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1feb7c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1feb7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1feb80: 0xd8410040  lqc2        $vf1, 0x40($v0)
    ctx->pc = 0x1feb80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1feb84: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1feb84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1feb88: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1feb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1feb8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1feb8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1feb90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1feb90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1feb94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1feb94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1feb98: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1feb98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1feb9c: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1feb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1feba0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1feba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1feba4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1feba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1feba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1feba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febac: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1FEBACu;
    SET_GPR_U32(ctx, 31, 0x1FEBB4u);
    ctx->pc = 0x1FEBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBACu;
            // 0x1febb0: 0xfba300d0  sqc2        $vf3, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBB4u; }
        if (ctx->pc != 0x1FEBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBB4u; }
        if (ctx->pc != 0x1FEBB4u) { return; }
    }
    ctx->pc = 0x1FEBB4u;
    // 0x1febb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1febb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1febb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1febb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1febbc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1febc0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1febc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1febc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1febc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1febc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1febc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1febcc: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1febccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1febd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1febd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1febd4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1febd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1febd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1febd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1febdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1febdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1febe0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1febe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1febe4: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1febe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1febe8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1febe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1febec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1febecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1febf0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1febf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1febf4: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x1febf4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
    // 0x1febf8: 0x93a30095  lbu         $v1, 0x95($sp)
    ctx->pc = 0x1febf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 149)));
    // 0x1febfc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1febfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fec00: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1fec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fec04: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1fec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fec08: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fec0c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1fec0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1fec10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fec14: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1fec14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1fec18: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1fec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fec1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fec20: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1fec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1fec24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fec28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fec28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fec2c: 0xdba300d0  lqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1fec2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fec30: 0x4bc11b3c  vmove.xyz   $vf1, $vf3
    ctx->pc = 0x1fec30u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1fec34: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fec34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fec38: 0x93a20096  lbu         $v0, 0x96($sp)
    ctx->pc = 0x1fec38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 150)));
    // 0x1fec3c: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1fec3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fec40: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1fec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fec44: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1fec44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fec48: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1fec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1fec4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fec50: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1fec54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fec58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec5c: 0x0  nop
    ctx->pc = 0x1fec5cu;
    // NOP
label_1fec60:
    // 0x1fec60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fec64: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1fec64u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1fec68: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fec68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1fec6c:
    // 0x1fec6c: 0x93a40094  lbu         $a0, 0x94($sp)
    ctx->pc = 0x1fec6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
label_1fec70:
    // 0x1fec70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fec74: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x1fec74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1fec78: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1fec7c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fec80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fec80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec84: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fec88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fec8c: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x1fec8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1fec90: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fec94: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1fec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1fec98: 0x8c490070  lw          $t1, 0x70($v0)
    ctx->pc = 0x1fec98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1fec9c: 0x308400fc  andi        $a0, $a0, 0xFC
    ctx->pc = 0x1fec9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)252);
    // 0x1feca0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1feca4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1feca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1feca8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1fecac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fecb0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1fecb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fecb4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1fecb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1fecb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fecbc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1fecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1fecc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fecc4: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x1fecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x1fecc8: 0xafa7007c  sw          $a3, 0x7C($sp)
    ctx->pc = 0x1fecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 7));
    // 0x1feccc: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1fecccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1fecd0: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x1FECD0u;
    {
        const bool branch_taken_0x1fecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECD0u;
            // 0x1fecd4: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecd0) {
            ctx->pc = 0x1FEA14u;
            runtime->cooperativeGuestYield();
            goto label_1fea14;
        }
    }
    ctx->pc = 0x1FECD8u;
    // 0x1fecd8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1fecdc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1fecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fece0: 0x1040ff4c  beqz        $v0, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x1FECE0u;
    {
        const bool branch_taken_0x1fece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECE0u;
            // 0x1fece4: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fece0) {
            ctx->pc = 0x1FEA14u;
            runtime->cooperativeGuestYield();
            goto label_1fea14;
        }
    }
    ctx->pc = 0x1FECE8u;
    // 0x1fece8: 0xc056d86  jal         func_15B618
    ctx->pc = 0x1FECE8u;
    SET_GPR_U32(ctx, 31, 0x1FECF0u);
    ctx->pc = 0x1FECECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECE8u;
            // 0x1fecec: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B618u;
    if (runtime->hasFunction(0x15B618u)) {
        auto targetFn = runtime->lookupFunction(0x15B618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECF0u; }
        if (ctx->pc != 0x1FECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15b618_0x15b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECF0u; }
        if (ctx->pc != 0x1FECF0u) { return; }
    }
    ctx->pc = 0x1FECF0u;
    // 0x1fecf0: 0x1000ff49  b           . + 4 + (-0xB7 << 2)
    ctx->pc = 0x1FECF0u;
    {
        const bool branch_taken_0x1fecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECF0u;
            // 0x1fecf4: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecf0) {
            ctx->pc = 0x1FEA18u;
            runtime->cooperativeGuestYield();
            goto label_1fea18;
        }
    }
    ctx->pc = 0x1FECF8u;
label_1fecf8:
    // 0x1fecf8: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1fecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fecfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fecfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fed00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fed00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fed04: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1fed08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fed08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fed0c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fed10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FED10u;
    {
        const bool branch_taken_0x1fed10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED10u;
            // 0x1fed14: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed10) {
            ctx->pc = 0x1FED1Cu;
            goto label_1fed1c;
        }
    }
    ctx->pc = 0x1FED18u;
    // 0x1fed18: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1fed18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_1fed1c:
    // 0x1fed1c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1fed1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1fed20: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1fed20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fed24: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1fed24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fed28: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1fed28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fed2c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1fed2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fed30: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1fed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fed34: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x1fed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fed38: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1fed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fed3c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1fed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fed40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED40u;
            // 0x1fed44: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE778u: goto label_1fe778;
            case 0x1FE7C8u: goto label_1fe7c8;
            case 0x1FE818u: goto label_1fe818;
            case 0x1FE878u: goto label_1fe878;
            case 0x1FE8A0u: goto label_1fe8a0;
            case 0x1FE8F0u: goto label_1fe8f0;
            case 0x1FE928u: goto label_1fe928;
            case 0x1FE958u: goto label_1fe958;
            case 0x1FE988u: goto label_1fe988;
            case 0x1FE9B8u: goto label_1fe9b8;
            case 0x1FE9E8u: goto label_1fe9e8;
            case 0x1FE9F8u: goto label_1fe9f8;
            case 0x1FEA14u: goto label_1fea14;
            case 0x1FEA18u: goto label_1fea18;
            case 0x1FEAF0u: goto label_1feaf0;
            case 0x1FEAF8u: goto label_1feaf8;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FED1Cu: goto label_1fed1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FED48u;
}
