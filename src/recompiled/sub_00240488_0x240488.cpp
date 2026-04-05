#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00240488
// Address: 0x240488 - 0x241418
void sub_00240488_0x240488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240488_0x240488");
#endif

    ctx->pc = 0x240488u;

    // 0x240488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24048c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x240490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240494: 0xc0964e8  jal         func_2593A0
    ctx->pc = 0x240494u;
    SET_GPR_U32(ctx, 31, 0x24049Cu);
    ctx->pc = 0x240498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240494u;
            // 0x240498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593A0u;
    if (runtime->hasFunction(0x2593A0u)) {
        auto targetFn = runtime->lookupFunction(0x2593A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24049Cu; }
        if (ctx->pc != 0x24049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2593a0_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24049Cu; }
        if (ctx->pc != 0x24049Cu) { return; }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2404a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2404a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404a4: 0x24632548  addiu       $v1, $v1, 0x2548
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9544));
    // 0x2404a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2404a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2404ac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2404acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2404b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2404b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2404B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2404B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404B4u;
            // 0x2404b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2404BCu;
    // 0x2404bc: 0x0  nop
    ctx->pc = 0x2404bcu;
    // NOP
    // 0x2404c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2404c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2404c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2404c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2404c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2404c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2404cc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2404CCu;
    SET_GPR_U32(ctx, 31, 0x2404D4u);
    ctx->pc = 0x2404D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404CCu;
            // 0x2404d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404D4u; }
        if (ctx->pc != 0x2404D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404D4u; }
        if (ctx->pc != 0x2404D4u) { return; }
    }
    ctx->pc = 0x2404D4u;
    // 0x2404d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2404d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2404d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2404d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404dc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x2404DCu;
    SET_GPR_U32(ctx, 31, 0x2404E4u);
    ctx->pc = 0x2404E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404DCu;
            // 0x2404e0: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404E4u; }
        if (ctx->pc != 0x2404E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404E4u; }
        if (ctx->pc != 0x2404E4u) { return; }
    }
    ctx->pc = 0x2404E4u;
    // 0x2404e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2404e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404e8: 0xc0559e0  jal         func_156780
    ctx->pc = 0x2404E8u;
    SET_GPR_U32(ctx, 31, 0x2404F0u);
    ctx->pc = 0x2404ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404E8u;
            // 0x2404ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156780u;
    if (runtime->hasFunction(0x156780u)) {
        auto targetFn = runtime->lookupFunction(0x156780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404F0u; }
        if (ctx->pc != 0x2404F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156780_0x156780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404F0u; }
        if (ctx->pc != 0x2404F0u) { return; }
    }
    ctx->pc = 0x2404F0u;
    // 0x2404f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2404f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2404f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2404f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2404F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2404FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404F8u;
            // 0x2404fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240500u;
    // 0x240500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x240504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240508u;
    {
        const bool branch_taken_0x240508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240508u;
            // 0x24050c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240508) {
            ctx->pc = 0x240518u;
            goto label_240518;
        }
    }
    ctx->pc = 0x240510u;
    // 0x240510: 0xc055aa0  jal         func_156A80
    ctx->pc = 0x240510u;
    SET_GPR_U32(ctx, 31, 0x240518u);
    ctx->pc = 0x240514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240510u;
            // 0x240514: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156A80u;
    if (runtime->hasFunction(0x156A80u)) {
        auto targetFn = runtime->lookupFunction(0x156A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240518u; }
        if (ctx->pc != 0x240518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A80_0x156a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240518u; }
        if (ctx->pc != 0x240518u) { return; }
    }
    ctx->pc = 0x240518u;
label_240518:
    // 0x240518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24051c: 0x3e00008  jr          $ra
    ctx->pc = 0x24051Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24051Cu;
            // 0x240520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240524u;
    // 0x240524: 0x0  nop
    ctx->pc = 0x240524u;
    // NOP
    // 0x240528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24052c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240530: 0xc055956  jal         func_156558
    ctx->pc = 0x240530u;
    SET_GPR_U32(ctx, 31, 0x240538u);
    ctx->pc = 0x240534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240530u;
            // 0x240534: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156558u;
    if (runtime->hasFunction(0x156558u)) {
        auto targetFn = runtime->lookupFunction(0x156558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240538u; }
        if (ctx->pc != 0x240538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156558_0x156558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240538u; }
        if (ctx->pc != 0x240538u) { return; }
    }
    ctx->pc = 0x240538u;
    // 0x240538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24053c: 0x3e00008  jr          $ra
    ctx->pc = 0x24053Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24053Cu;
            // 0x240540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240544u;
    // 0x240544: 0x0  nop
    ctx->pc = 0x240544u;
    // NOP
    // 0x240548: 0x84a20122  lh          $v0, 0x122($a1)
    ctx->pc = 0x240548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 290)));
    // 0x24054c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24054Cu;
    {
        const bool branch_taken_0x24054c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24054Cu;
            // 0x240550: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24054c) {
            ctx->pc = 0x240560u;
            goto label_240560;
        }
    }
    ctx->pc = 0x240554u;
    // 0x240554: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x240554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x240558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24055c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x24055cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_240560:
    // 0x240560: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x240560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x240564: 0x3e00008  jr          $ra
    ctx->pc = 0x240564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240564u;
            // 0x240568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24056Cu;
    // 0x24056c: 0x0  nop
    ctx->pc = 0x24056cu;
    // NOP
    // 0x240570: 0x84a20122  lh          $v0, 0x122($a1)
    ctx->pc = 0x240570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 290)));
    // 0x240574: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240574u;
    {
        const bool branch_taken_0x240574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240574u;
            // 0x240578: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240574) {
            ctx->pc = 0x240588u;
            goto label_240588;
        }
    }
    ctx->pc = 0x24057Cu;
    // 0x24057c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x24057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x240580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240584: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x240584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_240588:
    // 0x240588: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x240588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x24058c: 0x3e00008  jr          $ra
    ctx->pc = 0x24058Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24058Cu;
            // 0x240590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240594u;
    // 0x240594: 0x0  nop
    ctx->pc = 0x240594u;
    // NOP
    // 0x240598: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x240598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x24059c: 0x0  nop
    ctx->pc = 0x24059cu;
    // NOP
    // 0x2405a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2405a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2405a4: 0x0  nop
    ctx->pc = 0x2405a4u;
    // NOP
    // 0x2405a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2405ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2405acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2405b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2405b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2405b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2405b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2405b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2405b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2405bc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2405BCu;
    SET_GPR_U32(ctx, 31, 0x2405C4u);
    ctx->pc = 0x2405C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405BCu;
            // 0x2405c0: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405C4u; }
        if (ctx->pc != 0x2405C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405C4u; }
        if (ctx->pc != 0x2405C4u) { return; }
    }
    ctx->pc = 0x2405C4u;
    // 0x2405c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2405c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405c8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2405c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2405cc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2405ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2405d0: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x2405d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x2405d4: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2405d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2405D8u;
    SET_GPR_U32(ctx, 31, 0x2405E0u);
    ctx->pc = 0x2405DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405D8u;
            // 0x2405dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405E0u; }
        if (ctx->pc != 0x2405E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405E0u; }
        if (ctx->pc != 0x2405E0u) { return; }
    }
    ctx->pc = 0x2405E0u;
    // 0x2405e0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2405e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2405e4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2405e8: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x2405e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x2405ec: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2405ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2405f0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2405f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2405f4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2405f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2405f8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2405f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2405fc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2405FCu;
    SET_GPR_U32(ctx, 31, 0x240604u);
    ctx->pc = 0x240600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405FCu;
            // 0x240600: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240604u; }
        if (ctx->pc != 0x240604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240604u; }
        if (ctx->pc != 0x240604u) { return; }
    }
    ctx->pc = 0x240604u;
    // 0x240604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240608: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240608u;
    {
        const bool branch_taken_0x240608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x240608) {
            ctx->pc = 0x24060Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240608u;
            // 0x24060c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24063Cu;
            goto label_24063c;
        }
    }
    ctx->pc = 0x240610u;
    // 0x240610: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240614: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240614u;
    {
        const bool branch_taken_0x240614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240614u;
            // 0x240618: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240614) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x24061Cu;
    // 0x24061c: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_240620:
    // 0x240620: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x240620u;
    SET_GPR_U32(ctx, 31, 0x240628u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240628u; }
        if (ctx->pc != 0x240628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240628u; }
        if (ctx->pc != 0x240628u) { return; }
    }
    ctx->pc = 0x240628u;
    // 0x240628: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x240628u;
    {
        const bool branch_taken_0x240628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x240628) {
            ctx->pc = 0x24062Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240628u;
            // 0x24062c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24063Cu;
            goto label_24063c;
        }
    }
    ctx->pc = 0x240630u;
    // 0x240630: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x240630u;
    SET_GPR_U32(ctx, 31, 0x240638u);
    ctx->pc = 0x240634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240630u;
            // 0x240634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240638u; }
        if (ctx->pc != 0x240638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240638u; }
        if (ctx->pc != 0x240638u) { return; }
    }
    ctx->pc = 0x240638u;
    // 0x240638: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x240638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_24063c:
    // 0x24063c: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x24063cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x240640: 0xc04f824  jal         func_13E090
    ctx->pc = 0x240640u;
    SET_GPR_U32(ctx, 31, 0x240648u);
    ctx->pc = 0x240644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240640u;
            // 0x240644: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240648u; }
        if (ctx->pc != 0x240648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240648u; }
        if (ctx->pc != 0x240648u) { return; }
    }
    ctx->pc = 0x240648u;
    // 0x240648: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x240648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x24064c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x240650: 0x2463ea38  addiu       $v1, $v1, -0x15C8
    ctx->pc = 0x240650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961720));
    // 0x240654: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x240654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x240658: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x240658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x24065c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x24065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x240660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x240660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x240664: 0xc04f824  jal         func_13E090
    ctx->pc = 0x240664u;
    SET_GPR_U32(ctx, 31, 0x24066Cu);
    ctx->pc = 0x240668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240664u;
            // 0x240668: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24066Cu; }
        if (ctx->pc != 0x24066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24066Cu; }
        if (ctx->pc != 0x24066Cu) { return; }
    }
    ctx->pc = 0x24066Cu;
    // 0x24066c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24066cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240670: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240670u;
    {
        const bool branch_taken_0x240670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x240670) {
            ctx->pc = 0x240674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240670u;
            // 0x240674: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2406A4u;
            goto label_2406a4;
        }
    }
    ctx->pc = 0x240678u;
    // 0x240678: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x240678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24067c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24067Cu;
    {
        const bool branch_taken_0x24067c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24067Cu;
            // 0x240680: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24067c) {
            ctx->pc = 0x240688u;
            goto label_240688;
        }
    }
    ctx->pc = 0x240684u;
    // 0x240684: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x240684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_240688:
    // 0x240688: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x240688u;
    SET_GPR_U32(ctx, 31, 0x240690u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240690u; }
        if (ctx->pc != 0x240690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240690u; }
        if (ctx->pc != 0x240690u) { return; }
    }
    ctx->pc = 0x240690u;
    // 0x240690: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x240690u;
    {
        const bool branch_taken_0x240690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x240690) {
            ctx->pc = 0x240694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x240690u;
            // 0x240694: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2406A4u;
            goto label_2406a4;
        }
    }
    ctx->pc = 0x240698u;
    // 0x240698: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x240698u;
    SET_GPR_U32(ctx, 31, 0x2406A0u);
    ctx->pc = 0x24069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240698u;
            // 0x24069c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406A0u; }
        if (ctx->pc != 0x2406A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406A0u; }
        if (ctx->pc != 0x2406A0u) { return; }
    }
    ctx->pc = 0x2406A0u;
    // 0x2406a0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2406a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2406a4:
    // 0x2406a4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2406A4u;
    SET_GPR_U32(ctx, 31, 0x2406ACu);
    ctx->pc = 0x2406A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2406A4u;
            // 0x2406a8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406ACu; }
        if (ctx->pc != 0x2406ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406ACu; }
        if (ctx->pc != 0x2406ACu) { return; }
    }
    ctx->pc = 0x2406ACu;
    // 0x2406ac: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x2406acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2406b0: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2406b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2406b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2406b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2406b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2406b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2406bc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2406bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2406c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2406c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2406c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2406c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2406c8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2406c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2406cc: 0xfe450060  sd          $a1, 0x60($s2)
    ctx->pc = 0x2406ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 5));
    // 0x2406d0: 0x2484ea18  addiu       $a0, $a0, -0x15E8
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961688));
    // 0x2406d4: 0xfe400058  sd          $zero, 0x58($s2)
    ctx->pc = 0x2406d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 0));
    // 0x2406d8: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2406d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2406dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2406dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2406e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2406e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2406e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2406e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2406e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2406e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2406ec: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2406ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2406f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2406f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2406f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2406F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2406F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406F4u;
            // 0x2406f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2406FCu;
    // 0x2406fc: 0x0  nop
    ctx->pc = 0x2406fcu;
    // NOP
    // 0x240700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240704: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x240704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240708: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24070c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240710: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240714: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x240714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x240718: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x240718u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24071c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x240720: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x240720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x240724: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x240724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x240728: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x240728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x24072c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x240730: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x240730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x240734: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x240734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x240738: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x240738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x24073c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x24073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x240740: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x240740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x240744: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x240744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x240748: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240748u;
    SET_GPR_U32(ctx, 31, 0x240750u);
    ctx->pc = 0x24074Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240748u;
            // 0x24074c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240750u; }
        if (ctx->pc != 0x240750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240750u; }
        if (ctx->pc != 0x240750u) { return; }
    }
    ctx->pc = 0x240750u;
    // 0x240750: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x240750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240758: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x24075c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x240760: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x240760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x240764: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x240764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x240768: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x240768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x24076c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x24076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240770: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x240770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x240774: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x240774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x240778: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x240778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x24077c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240780: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x240780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x240784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240788: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x240788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x24078c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x24078cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x240790: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x240790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x240794: 0xc08e222  jal         func_238888
    ctx->pc = 0x240794u;
    SET_GPR_U32(ctx, 31, 0x24079Cu);
    ctx->pc = 0x240798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240794u;
            // 0x240798: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24079Cu; }
        if (ctx->pc != 0x24079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24079Cu; }
        if (ctx->pc != 0x24079Cu) { return; }
    }
    ctx->pc = 0x24079Cu;
    // 0x24079c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2407a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2407a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2407a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407a8: 0xc08e222  jal         func_238888
    ctx->pc = 0x2407A8u;
    SET_GPR_U32(ctx, 31, 0x2407B0u);
    ctx->pc = 0x2407ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2407A8u;
            // 0x2407ac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407B0u; }
        if (ctx->pc != 0x2407B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407B0u; }
        if (ctx->pc != 0x2407B0u) { return; }
    }
    ctx->pc = 0x2407B0u;
    // 0x2407b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2407b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2407b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2407b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2407b8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x2407b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2407bc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2407bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2407c0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2407c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2407c4: 0x24842468  addiu       $a0, $a0, 0x2468
    ctx->pc = 0x2407c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9320));
    // 0x2407c8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x2407c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2407cc: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x2407ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x2407d0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2407d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2407d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2407d8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2407d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2407dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2407dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407e0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2407e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2407e4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x2407e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x2407e8: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x2407e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x2407ec: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x2407ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x2407f0: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x2407f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x2407f4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2407f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2407f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2407f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2407fc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2407fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x240800: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x240800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x240804: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x240804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24080c: 0x3e00008  jr          $ra
    ctx->pc = 0x24080Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24080Cu;
            // 0x240810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240814u;
    // 0x240814: 0x0  nop
    ctx->pc = 0x240814u;
    // NOP
    // 0x240818: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x240818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24081c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240820: 0x3e00008  jr          $ra
    ctx->pc = 0x240820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240820u;
            // 0x240824: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240828u;
    // 0x240828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24082c: 0x0  nop
    ctx->pc = 0x24082cu;
    // NOP
    // 0x240830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240834: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x240834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x240838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24083c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x240840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240844: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240844u;
    SET_GPR_U32(ctx, 31, 0x24084Cu);
    ctx->pc = 0x240848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240844u;
            // 0x240848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24084Cu; }
        if (ctx->pc != 0x24084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24084Cu; }
        if (ctx->pc != 0x24084Cu) { return; }
    }
    ctx->pc = 0x24084Cu;
    // 0x24084c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240854: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x240854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x240858: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x240858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x24085c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x24085cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x240860: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x240864: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x240864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x240868: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24086c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x24086cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x240870: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x240870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x240874: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x240874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x240878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24087c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x24087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x240880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x240880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240884: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x240884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x240888: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x240888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x24088c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x24088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x240890: 0xc08e222  jal         func_238888
    ctx->pc = 0x240890u;
    SET_GPR_U32(ctx, 31, 0x240898u);
    ctx->pc = 0x240894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240890u;
            // 0x240894: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240898u; }
        if (ctx->pc != 0x240898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240898u; }
        if (ctx->pc != 0x240898u) { return; }
    }
    ctx->pc = 0x240898u;
    // 0x240898: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24089c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408a4: 0xc08e222  jal         func_238888
    ctx->pc = 0x2408A4u;
    SET_GPR_U32(ctx, 31, 0x2408ACu);
    ctx->pc = 0x2408A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408A4u;
            // 0x2408a8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408ACu; }
        if (ctx->pc != 0x2408ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408ACu; }
        if (ctx->pc != 0x2408ACu) { return; }
    }
    ctx->pc = 0x2408ACu;
    // 0x2408ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2408b0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2408b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2408b4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2408b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2408b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2408b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2408bc: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x2408bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x2408c0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2408c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x2408c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2408c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2408c8: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2408cc: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2408ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2408d0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2408d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2408d4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2408d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2408d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2408d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2408dc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2408dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2408e0: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x2408E0u;
    SET_GPR_U32(ctx, 31, 0x2408E8u);
    ctx->pc = 0x2408E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408E0u;
            // 0x2408e4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408E8u; }
        if (ctx->pc != 0x2408E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408E8u; }
        if (ctx->pc != 0x2408E8u) { return; }
    }
    ctx->pc = 0x2408E8u;
    // 0x2408e8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x2408e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2408ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2408ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2408f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2408f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2408f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2408f8: 0x24422388  addiu       $v0, $v0, 0x2388
    ctx->pc = 0x2408f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9096));
    // 0x2408fc: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x2408fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x240900: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x240900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x240904: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x240904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x240908: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x240908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x24090c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x24090Cu;
    SET_GPR_U32(ctx, 31, 0x240914u);
    ctx->pc = 0x240910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24090Cu;
            // 0x240910: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240914u; }
        if (ctx->pc != 0x240914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240914u; }
        if (ctx->pc != 0x240914u) { return; }
    }
    ctx->pc = 0x240914u;
    // 0x240914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240918: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x24091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240920: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240924: 0xc04f644  jal         func_13D910
    ctx->pc = 0x240924u;
    SET_GPR_U32(ctx, 31, 0x24092Cu);
    ctx->pc = 0x240928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240924u;
            // 0x240928: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24092Cu; }
        if (ctx->pc != 0x24092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24092Cu; }
        if (ctx->pc != 0x24092Cu) { return; }
    }
    ctx->pc = 0x24092Cu;
    // 0x24092c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x24092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x240930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240938: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x240938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24093c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240940: 0x3e00008  jr          $ra
    ctx->pc = 0x240940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240940u;
            // 0x240944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240948u;
    // 0x240948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24094c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24094cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240950: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240950u;
    {
        const bool branch_taken_0x240950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240950u;
            // 0x240954: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240950) {
            ctx->pc = 0x240970u;
            goto label_240970;
        }
    }
    ctx->pc = 0x240958u;
    // 0x240958: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x240958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24095c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24095cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240960: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240964: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240968: 0x40f809  jalr        $v0
    ctx->pc = 0x240968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240970u);
        ctx->pc = 0x24096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240968u;
            // 0x24096c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240970u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240970u; }
            if (ctx->pc != 0x240970u) { return; }
        }
        }
    }
    ctx->pc = 0x240970u;
label_240970:
    // 0x240970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240974: 0x3e00008  jr          $ra
    ctx->pc = 0x240974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240974u;
            // 0x240978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24097Cu;
    // 0x24097c: 0x0  nop
    ctx->pc = 0x24097cu;
    // NOP
    // 0x240980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240984: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x240984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240988: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24098c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240990: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240994: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x240994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x240998: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x240998u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24099c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x24099cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2409a0: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2409a4: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x2409a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2409a8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2409ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2409acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2409b0: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x2409b4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2409b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2409b8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x2409b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x2409bc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2409bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2409c0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x2409c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x2409c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2409c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2409c8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2409C8u;
    SET_GPR_U32(ctx, 31, 0x2409D0u);
    ctx->pc = 0x2409CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2409C8u;
            // 0x2409cc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2409D0u; }
        if (ctx->pc != 0x2409D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2409D0u; }
        if (ctx->pc != 0x2409D0u) { return; }
    }
    ctx->pc = 0x2409D0u;
    // 0x2409d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2409d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2409d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2409d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409d8: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x2409dc: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x2409e0: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2409e4: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x2409e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x2409e8: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x2409e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x2409ec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2409f0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x2409f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2409f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2409f8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x2409f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2409fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2409fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a00: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x240a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x240a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a08: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x240a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x240a0c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x240a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x240a10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x240a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x240a14: 0xc08e222  jal         func_238888
    ctx->pc = 0x240A14u;
    SET_GPR_U32(ctx, 31, 0x240A1Cu);
    ctx->pc = 0x240A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240A14u;
            // 0x240a18: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A1Cu; }
        if (ctx->pc != 0x240A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A1Cu; }
        if (ctx->pc != 0x240A1Cu) { return; }
    }
    ctx->pc = 0x240A1Cu;
    // 0x240a1c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x240a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a28: 0xc08e222  jal         func_238888
    ctx->pc = 0x240A28u;
    SET_GPR_U32(ctx, 31, 0x240A30u);
    ctx->pc = 0x240A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240A28u;
            // 0x240a2c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A30u; }
        if (ctx->pc != 0x240A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A30u; }
        if (ctx->pc != 0x240A30u) { return; }
    }
    ctx->pc = 0x240A30u;
    // 0x240a30: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240a34: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x240a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x240a38: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x240a38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x240a3c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x240a40: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x240a40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240a44: 0x2484bf28  addiu       $a0, $a0, -0x40D8
    ctx->pc = 0x240a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950696));
    // 0x240a48: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240a4c: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x240a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x240a50: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240a54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x240a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x240a58: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x240a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x240a5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a60: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x240a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x240a64: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x240a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x240a68: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x240a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x240a6c: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x240a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x240a70: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x240a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x240a74: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x240a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x240a78: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x240a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x240a7c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x240a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x240a80: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x240a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x240a84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x240a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x240A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A8Cu;
            // 0x240a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240A94u;
    // 0x240a94: 0x0  nop
    ctx->pc = 0x240a94u;
    // NOP
    // 0x240a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x240a9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240aa0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x240aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x240aa4: 0x2442bd88  addiu       $v0, $v0, -0x4278
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950280));
    // 0x240aa8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x240aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x240aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x240ab4: 0x2611003c  addiu       $s1, $s0, 0x3C
    ctx->pc = 0x240ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x240ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240abc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x240abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ac0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x240ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x240ac4: 0xc04f6ca  jal         func_13DB28
    ctx->pc = 0x240AC4u;
    SET_GPR_U32(ctx, 31, 0x240ACCu);
    ctx->pc = 0x240AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240AC4u;
            // 0x240ac8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB28u;
    if (runtime->hasFunction(0x13DB28u)) {
        auto targetFn = runtime->lookupFunction(0x13DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240ACCu; }
        if (ctx->pc != 0x240ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB28_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240ACCu; }
        if (ctx->pc != 0x240ACCu) { return; }
    }
    ctx->pc = 0x240ACCu;
    // 0x240acc: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x240accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x240ad0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240ad4: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x240ad8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x240ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x240adc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x240adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x240ae0: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x240AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240AE0u;
            // 0x240ae4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240B14u;
            goto label_240b14;
        }
    }
    ctx->pc = 0x240AE8u;
    // 0x240ae8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x240aec: 0x0  nop
    ctx->pc = 0x240aecu;
    // NOP
label_240af0:
    // 0x240af0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240af4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x240af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x240af8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x240af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240afc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x240AFCu;
    SET_GPR_U32(ctx, 31, 0x240B04u);
    ctx->pc = 0x240B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240AFCu;
            // 0x240b00: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B04u; }
        if (ctx->pc != 0x240B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B04u; }
        if (ctx->pc != 0x240B04u) { return; }
    }
    ctx->pc = 0x240B04u;
    // 0x240b04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x240b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x240b08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x240b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b0c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x240B0Cu;
    {
        const bool branch_taken_0x240b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B0Cu;
            // 0x240b10: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b0c) {
            ctx->pc = 0x240AF0u;
            runtime->cooperativeGuestYield();
            goto label_240af0;
        }
    }
    ctx->pc = 0x240B14u;
label_240b14:
    // 0x240b14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240b18: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x240b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x240b1c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x240b20: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x240b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x240b24: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x240b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x240b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b2c: 0xc08e218  jal         func_238860
    ctx->pc = 0x240B2Cu;
    SET_GPR_U32(ctx, 31, 0x240B34u);
    ctx->pc = 0x240B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240B2Cu;
            // 0x240b30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B34u; }
        if (ctx->pc != 0x240B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B34u; }
        if (ctx->pc != 0x240B34u) { return; }
    }
    ctx->pc = 0x240B34u;
    // 0x240b34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x240b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240b38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x240b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240b44: 0x3e00008  jr          $ra
    ctx->pc = 0x240B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B44u;
            // 0x240b48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240B4Cu;
    // 0x240b4c: 0x0  nop
    ctx->pc = 0x240b4cu;
    // NOP
    // 0x240b50: 0x244202b8  addiu       $v0, $v0, 0x2B8
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
    // 0x240b54: 0x0  nop
    ctx->pc = 0x240b54u;
    // NOP
    // 0x240b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240b5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x240b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x240b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240b64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x240b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b68: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x240B68u;
    SET_GPR_U32(ctx, 31, 0x240B70u);
    ctx->pc = 0x240B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240B68u;
            // 0x240b6c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B70u; }
        if (ctx->pc != 0x240B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B70u; }
        if (ctx->pc != 0x240B70u) { return; }
    }
    ctx->pc = 0x240B70u;
    // 0x240b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b74: 0xc054508  jal         func_151420
    ctx->pc = 0x240B74u;
    SET_GPR_U32(ctx, 31, 0x240B7Cu);
    ctx->pc = 0x240B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240B74u;
            // 0x240b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B7Cu; }
        if (ctx->pc != 0x240B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240B7Cu; }
        if (ctx->pc != 0x240B7Cu) { return; }
    }
    ctx->pc = 0x240B7Cu;
    // 0x240b7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x240b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b84: 0x3e00008  jr          $ra
    ctx->pc = 0x240B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B84u;
            // 0x240b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240B8Cu;
    // 0x240b8c: 0x0  nop
    ctx->pc = 0x240b8cu;
    // NOP
    // 0x240b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240b98: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x240B98u;
    SET_GPR_U32(ctx, 31, 0x240BA0u);
    ctx->pc = 0x240B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240B98u;
            // 0x240b9c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BA0u; }
        if (ctx->pc != 0x240BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BA0u; }
        if (ctx->pc != 0x240BA0u) { return; }
    }
    ctx->pc = 0x240BA0u;
    // 0x240ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x240BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BA4u;
            // 0x240ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240BACu;
    // 0x240bac: 0x0  nop
    ctx->pc = 0x240bacu;
    // NOP
    // 0x240bb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x240bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x240bb4: 0x0  nop
    ctx->pc = 0x240bb4u;
    // NOP
    // 0x240bb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240bbc: 0x0  nop
    ctx->pc = 0x240bbcu;
    // NOP
    // 0x240bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x240bc4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x240bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x240bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x240bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x240bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240bd4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240BD4u;
    SET_GPR_U32(ctx, 31, 0x240BDCu);
    ctx->pc = 0x240BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240BD4u;
            // 0x240bd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BDCu; }
        if (ctx->pc != 0x240BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BDCu; }
        if (ctx->pc != 0x240BDCu) { return; }
    }
    ctx->pc = 0x240BDCu;
    // 0x240bdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x240bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240be4: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x240be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x240be8: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x240be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x240bec: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x240becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x240bf0: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x240bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x240bf4: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x240bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x240bf8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x240bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240bfc: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x240bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x240c00: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x240c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x240c04: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x240c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x240c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c0c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x240c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x240c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x240c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c14: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x240c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x240c18: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x240c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x240c1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x240c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x240c20: 0xc08e222  jal         func_238888
    ctx->pc = 0x240C20u;
    SET_GPR_U32(ctx, 31, 0x240C28u);
    ctx->pc = 0x240C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C20u;
            // 0x240c24: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C28u; }
        if (ctx->pc != 0x240C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C28u; }
        if (ctx->pc != 0x240C28u) { return; }
    }
    ctx->pc = 0x240C28u;
    // 0x240c28: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x240c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c34: 0xc08e222  jal         func_238888
    ctx->pc = 0x240C34u;
    SET_GPR_U32(ctx, 31, 0x240C3Cu);
    ctx->pc = 0x240C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C34u;
            // 0x240c38: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C3Cu; }
        if (ctx->pc != 0x240C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C3Cu; }
        if (ctx->pc != 0x240C3Cu) { return; }
    }
    ctx->pc = 0x240C3Cu;
    // 0x240c3c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x240c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240c40: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x240c44: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x240c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x240c48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x240c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x240c4c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x240c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x240c50: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x240c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x240c54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x240c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x240c58: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x240c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x240c5c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x240c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x240c60: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x240c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x240c64: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x240c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x240c68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x240c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x240c6c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x240c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x240c70: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x240C70u;
    SET_GPR_U32(ctx, 31, 0x240C78u);
    ctx->pc = 0x240C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C70u;
            // 0x240c74: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C78u; }
        if (ctx->pc != 0x240C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C78u; }
        if (ctx->pc != 0x240C78u) { return; }
    }
    ctx->pc = 0x240C78u;
    // 0x240c78: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x240c78u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240c7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x240c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x240c80: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x240c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x240c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240c88: 0x2442bd88  addiu       $v0, $v0, -0x4278
    ctx->pc = 0x240c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950280));
    // 0x240c8c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x240c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x240c90: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x240c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x240c94: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x240c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x240c98: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x240c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x240c9c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x240C9Cu;
    SET_GPR_U32(ctx, 31, 0x240CA4u);
    ctx->pc = 0x240CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C9Cu;
            // 0x240ca0: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA4u; }
        if (ctx->pc != 0x240CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CA4u; }
        if (ctx->pc != 0x240CA4u) { return; }
    }
    ctx->pc = 0x240CA4u;
    // 0x240ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ca8: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x240ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x240cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cb0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x240cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240cb4: 0xc04f644  jal         func_13D910
    ctx->pc = 0x240CB4u;
    SET_GPR_U32(ctx, 31, 0x240CBCu);
    ctx->pc = 0x240CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240CB4u;
            // 0x240cb8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CBCu; }
        if (ctx->pc != 0x240CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CBCu; }
        if (ctx->pc != 0x240CBCu) { return; }
    }
    ctx->pc = 0x240CBCu;
    // 0x240cbc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x240cc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240cc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x240cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x240CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CD0u;
            // 0x240cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240CD8u;
    // 0x240cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240cdc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x240cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ce0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240CE0u;
    {
        const bool branch_taken_0x240ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CE0u;
            // 0x240ce4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ce0) {
            ctx->pc = 0x240D00u;
            goto label_240d00;
        }
    }
    ctx->pc = 0x240CE8u;
    // 0x240ce8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x240ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x240cec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240cf0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x240cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240cf4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240cf8: 0x40f809  jalr        $v0
    ctx->pc = 0x240CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240D00u);
        ctx->pc = 0x240CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240CF8u;
            // 0x240cfc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240D00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240D00u; }
            if (ctx->pc != 0x240D00u) { return; }
        }
        }
    }
    ctx->pc = 0x240D00u;
label_240d00:
    // 0x240d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240d04: 0x3e00008  jr          $ra
    ctx->pc = 0x240D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D04u;
            // 0x240d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240D0Cu;
    // 0x240d0c: 0x0  nop
    ctx->pc = 0x240d0cu;
    // NOP
    // 0x240d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240d14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x240d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x240d18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x240d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x240d1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x240d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x240d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x240d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240d2c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240D2Cu;
    SET_GPR_U32(ctx, 31, 0x240D34u);
    ctx->pc = 0x240D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240D2Cu;
            // 0x240d30: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D34u; }
        if (ctx->pc != 0x240D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D34u; }
        if (ctx->pc != 0x240D34u) { return; }
    }
    ctx->pc = 0x240D34u;
    // 0x240d34: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x240d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x240d38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240d44: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x240d48: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x240d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x240d4c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x240d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240d50: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x240d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x240d54: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x240d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x240d58: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x240d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x240d5c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x240d60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x240d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x240d64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x240d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240d6c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x240d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x240d70: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x240d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x240d74: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x240d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x240d78: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x240d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x240d7c: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x240d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x240d80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x240d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x240d84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x240d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x240d88: 0xc0a2644  jal         func_289910
    ctx->pc = 0x240D88u;
    SET_GPR_U32(ctx, 31, 0x240D90u);
    ctx->pc = 0x240D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240D88u;
            // 0x240d8c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D90u; }
        if (ctx->pc != 0x240D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D90u; }
        if (ctx->pc != 0x240D90u) { return; }
    }
    ctx->pc = 0x240D90u;
    // 0x240d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x240d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d94: 0xc0a2644  jal         func_289910
    ctx->pc = 0x240D94u;
    SET_GPR_U32(ctx, 31, 0x240D9Cu);
    ctx->pc = 0x240D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240D94u;
            // 0x240d98: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D9Cu; }
        if (ctx->pc != 0x240D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D9Cu; }
        if (ctx->pc != 0x240D9Cu) { return; }
    }
    ctx->pc = 0x240D9Cu;
    // 0x240d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240da0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x240da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240da4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x240da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240da8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x240da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240db0: 0x3e00008  jr          $ra
    ctx->pc = 0x240DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240DB0u;
            // 0x240db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240DB8u;
    // 0x240db8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x240db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x240dbc: 0x0  nop
    ctx->pc = 0x240dbcu;
    // NOP
    // 0x240dc0: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x240dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x240dc4: 0x0  nop
    ctx->pc = 0x240dc4u;
    // NOP
    // 0x240dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240dcc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x240dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240dd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x240dd4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x240dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x240dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240ddc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x240de0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x240de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x240de4: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x240de4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x240de8: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x240dec: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x240decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x240df0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x240df4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x240df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x240df8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x240df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x240dfc: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x240e00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x240e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x240e04: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x240e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x240e08: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x240e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x240e0c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x240e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x240e10: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x240e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x240e14: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240E14u;
    SET_GPR_U32(ctx, 31, 0x240E1Cu);
    ctx->pc = 0x240E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E14u;
            // 0x240e18: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E1Cu; }
        if (ctx->pc != 0x240E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E1Cu; }
        if (ctx->pc != 0x240E1Cu) { return; }
    }
    ctx->pc = 0x240E1Cu;
    // 0x240e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e20: 0xc054742  jal         func_151D08
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x240E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E20u;
            // 0x240e24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151D08u;
    if (runtime->hasFunction(0x151D08u)) {
        auto targetFn = runtime->lookupFunction(0x151D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E28u; }
        if (ctx->pc != 0x240E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151D08_0x151d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E28u; }
        if (ctx->pc != 0x240E28u) { return; }
    }
    ctx->pc = 0x240E28u;
    // 0x240e28: 0xae02c084  sw          $v0, -0x3F7C($s0)
    ctx->pc = 0x240e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951044), GPR_U32(ctx, 2));
    // 0x240e2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x240e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240e34: 0x3e00008  jr          $ra
    ctx->pc = 0x240E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E34u;
            // 0x240e38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240E3Cu;
    // 0x240e3c: 0x0  nop
    ctx->pc = 0x240e3cu;
    // NOP
    // 0x240e40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x240e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x240e44: 0x0  nop
    ctx->pc = 0x240e44u;
    // NOP
    // 0x240e48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240e4c: 0x0  nop
    ctx->pc = 0x240e4cu;
    // NOP
    // 0x240e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240e54: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x240e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x240e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x240e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240e60: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240E60u;
    SET_GPR_U32(ctx, 31, 0x240E68u);
    ctx->pc = 0x240E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E60u;
            // 0x240e64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E68u; }
        if (ctx->pc != 0x240E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E68u; }
        if (ctx->pc != 0x240E68u) { return; }
    }
    ctx->pc = 0x240E68u;
    // 0x240e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e6c: 0xc04fb24  jal         func_13EC90
    ctx->pc = 0x240E6Cu;
    SET_GPR_U32(ctx, 31, 0x240E74u);
    ctx->pc = 0x240E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E6Cu;
            // 0x240e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EC90u;
    if (runtime->hasFunction(0x13EC90u)) {
        auto targetFn = runtime->lookupFunction(0x13EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E74u; }
        if (ctx->pc != 0x240E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC90_0x13ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E74u; }
        if (ctx->pc != 0x240E74u) { return; }
    }
    ctx->pc = 0x240E74u;
    // 0x240e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x240e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x240E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E7Cu;
            // 0x240e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240E84u;
    // 0x240e84: 0x0  nop
    ctx->pc = 0x240e84u;
    // NOP
    // 0x240e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240e8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x240e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240E90u;
    {
        const bool branch_taken_0x240e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E90u;
            // 0x240e94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e90) {
            ctx->pc = 0x240EB0u;
            goto label_240eb0;
        }
    }
    ctx->pc = 0x240E98u;
    // 0x240e98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x240e9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x240e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240ea0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240ea4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240ea8: 0x40f809  jalr        $v0
    ctx->pc = 0x240EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240EB0u);
        ctx->pc = 0x240EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EA8u;
            // 0x240eac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240EB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240EB0u; }
            if (ctx->pc != 0x240EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x240EB0u;
label_240eb0:
    // 0x240eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x240EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EB4u;
            // 0x240eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240EBCu;
    // 0x240ebc: 0x0  nop
    ctx->pc = 0x240ebcu;
    // NOP
    // 0x240ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240ec8: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x240ecc: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x240ed0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x240ed4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x240ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240ed8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x240edc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x240edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x240ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240ee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ee8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x240ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x240eec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x240eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240ef0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x240ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x240ef4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x240ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x240ef8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x240ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x240efc: 0x40f809  jalr        $v0
    ctx->pc = 0x240EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240F04u);
        ctx->pc = 0x240F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EFCu;
            // 0x240f00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x240F04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x240F04u; }
            if (ctx->pc != 0x240F04u) { return; }
        }
        }
    }
    ctx->pc = 0x240F04u;
    // 0x240f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240f08: 0x3e00008  jr          $ra
    ctx->pc = 0x240F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240F08u;
            // 0x240f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240F10u;
    // 0x240f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240f14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x240f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x240f1c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x240f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240f20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x240f24: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x240f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x240f28: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x240f28u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x240f2c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x240f30: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x240f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x240f34: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x240f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x240f38: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x240f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x240f3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x240f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x240f40: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x240f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x240f44: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x240f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x240f48: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x240f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x240f4c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x240f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x240f50: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x240f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x240f54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x240f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x240f58: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x240F58u;
    SET_GPR_U32(ctx, 31, 0x240F60u);
    ctx->pc = 0x240F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F58u;
            // 0x240f5c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F60u; }
        if (ctx->pc != 0x240F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F60u; }
        if (ctx->pc != 0x240F60u) { return; }
    }
    ctx->pc = 0x240F60u;
    // 0x240f60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x240f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f68: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x240f6c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x240f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x240f70: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x240f74: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x240f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x240f78: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x240f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x240f7c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x240f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240f80: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x240f80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x240f84: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x240f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x240f88: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x240f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x240f8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x240f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f90: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x240f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x240f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f98: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x240f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x240f9c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x240f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x240fa0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x240fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x240fa4: 0xc08e222  jal         func_238888
    ctx->pc = 0x240FA4u;
    SET_GPR_U32(ctx, 31, 0x240FACu);
    ctx->pc = 0x240FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240FA4u;
            // 0x240fa8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FACu; }
        if (ctx->pc != 0x240FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FACu; }
        if (ctx->pc != 0x240FACu) { return; }
    }
    ctx->pc = 0x240FACu;
    // 0x240fac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x240fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x240fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fb8: 0xc08e222  jal         func_238888
    ctx->pc = 0x240FB8u;
    SET_GPR_U32(ctx, 31, 0x240FC0u);
    ctx->pc = 0x240FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240FB8u;
            // 0x240fbc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FC0u; }
        if (ctx->pc != 0x240FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FC0u; }
        if (ctx->pc != 0x240FC0u) { return; }
    }
    ctx->pc = 0x240FC0u;
    // 0x240fc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x240fc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x240fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x240fc8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x240fc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x240fcc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x240fd0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x240fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240fd4: 0x2484ba28  addiu       $a0, $a0, -0x45D8
    ctx->pc = 0x240fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949416));
    // 0x240fd8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x240fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240fdc: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x240fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x240fe0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240fe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x240fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x240fe8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x240fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x240fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ff0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x240ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x240ff4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x240ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x240ff8: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x240ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x240ffc: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x240ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x241000: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x241000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x241004: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x241004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x241008: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x241008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x24100c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x24100cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x241010: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x241010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x241014: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x241014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x241018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24101c: 0x3e00008  jr          $ra
    ctx->pc = 0x24101Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24101Cu;
            // 0x241020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241024u;
    // 0x241024: 0x0  nop
    ctx->pc = 0x241024u;
    // NOP
    // 0x241028: 0x3e00008  jr          $ra
    ctx->pc = 0x241028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241028u;
            // 0x24102c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241030u;
    // 0x241030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x241034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x241038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x241038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24103c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x24103cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x241040: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x241040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x241044: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x241044u;
    {
        const bool branch_taken_0x241044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241044u;
            // 0x241048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241044) {
            ctx->pc = 0x2410F8u;
            goto label_2410f8;
        }
    }
    ctx->pc = 0x24104Cu;
    // 0x24104c: 0x8ca500b4  lw          $a1, 0xB4($a1)
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x241050: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x241050u;
    {
        const bool branch_taken_0x241050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x241050) {
            ctx->pc = 0x241054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241050u;
            // 0x241054: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2410FCu;
            goto label_2410fc;
        }
    }
    ctx->pc = 0x241058u;
    // 0x241058: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x241058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24105c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241060: 0x10450025  beq         $v0, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x241060u;
    {
        const bool branch_taken_0x241060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x241064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241060u;
            // 0x241064: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241060) {
            ctx->pc = 0x2410F8u;
            goto label_2410f8;
        }
    }
    ctx->pc = 0x241068u;
    // 0x241068: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24106c: 0x0  nop
    ctx->pc = 0x24106cu;
    // NOP
label_241070:
    // 0x241070: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x241074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241078: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x241078u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24107c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24107cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x241080: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x241080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x241084: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x241088: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24108c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241090: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x241094: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241098: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x241098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x24109c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2410a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2410a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2410a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2410a8: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x2410a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2410ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2410acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2410b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2410b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2410b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2410b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2410b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2410bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2410BCu;
    {
        const bool branch_taken_0x2410bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410BCu;
            // 0x2410c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410bc) {
            ctx->pc = 0x2410E8u;
            goto label_2410e8;
        }
    }
    ctx->pc = 0x2410C4u;
    // 0x2410c4: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x2410c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2410c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2410cc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2410ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2410d0: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x2410d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2410d4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2410d8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2410d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2410dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2410DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2410E4u);
        ctx->pc = 0x2410E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410DCu;
            // 0x2410e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2410E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2410E4u; }
            if (ctx->pc != 0x2410E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2410E4u;
    // 0x2410e4: 0x0  nop
    ctx->pc = 0x2410e4u;
    // NOP
label_2410e8:
    // 0x2410e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2410ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2410f0: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2410F0u;
    {
        const bool branch_taken_0x2410f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2410F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410F0u;
            // 0x2410f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410f0) {
            ctx->pc = 0x241070u;
            runtime->cooperativeGuestYield();
            goto label_241070;
        }
    }
    ctx->pc = 0x2410F8u;
label_2410f8:
    // 0x2410f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2410f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2410fc:
    // 0x2410fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x241100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241104: 0x3e00008  jr          $ra
    ctx->pc = 0x241104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241104u;
            // 0x241108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24110Cu;
    // 0x24110c: 0x0  nop
    ctx->pc = 0x24110cu;
    // NOP
    // 0x241110: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x241114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241118: 0x3e00008  jr          $ra
    ctx->pc = 0x241118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241118u;
            // 0x24111c: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241120u;
    // 0x241120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241128: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x241128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24112c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x241130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241134: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241138: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x241138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x24113c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241140: 0x26130024  addiu       $s3, $s0, 0x24
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x241144: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x241144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x241148: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x241148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x24114c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x24114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x241150: 0x40f809  jalr        $v0
    ctx->pc = 0x241150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241158u);
        ctx->pc = 0x241154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241150u;
            // 0x241154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241158u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241158u; }
            if (ctx->pc != 0x241158u) { return; }
        }
        }
    }
    ctx->pc = 0x241158u;
    // 0x241158: 0xc04f824  jal         func_13E090
    ctx->pc = 0x241158u;
    SET_GPR_U32(ctx, 31, 0x241160u);
    ctx->pc = 0x24115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241158u;
            // 0x24115c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241160u; }
        if (ctx->pc != 0x241160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241160u; }
        if (ctx->pc != 0x241160u) { return; }
    }
    ctx->pc = 0x241160u;
    // 0x241160: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x241164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x241164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241168: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x241168u;
    SET_GPR_U32(ctx, 31, 0x241170u);
    ctx->pc = 0x24116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241168u;
            // 0x24116c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241170u; }
        if (ctx->pc != 0x241170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241170u; }
        if (ctx->pc != 0x241170u) { return; }
    }
    ctx->pc = 0x241170u;
    // 0x241170: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241174: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x241178: 0xc04c0c4  jal         func_130310
    ctx->pc = 0x241178u;
    SET_GPR_U32(ctx, 31, 0x241180u);
    ctx->pc = 0x24117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241178u;
            // 0x24117c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130310u;
    if (runtime->hasFunction(0x130310u)) {
        auto targetFn = runtime->lookupFunction(0x130310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241180u; }
        if (ctx->pc != 0x241180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130310_0x130310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241180u; }
        if (ctx->pc != 0x241180u) { return; }
    }
    ctx->pc = 0x241180u;
    // 0x241180: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x241180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x241184: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x241188: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x241188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x24118c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x24118Cu;
    SET_GPR_U32(ctx, 31, 0x241194u);
    ctx->pc = 0x241190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24118Cu;
            // 0x241190: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241194u; }
        if (ctx->pc != 0x241194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241194u; }
        if (ctx->pc != 0x241194u) { return; }
    }
    ctx->pc = 0x241194u;
    // 0x241194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x241194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241198: 0xc08e23a  jal         func_2388E8
    ctx->pc = 0x241198u;
    SET_GPR_U32(ctx, 31, 0x2411A0u);
    ctx->pc = 0x24119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241198u;
            // 0x24119c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (runtime->hasFunction(0x2388E8u)) {
        auto targetFn = runtime->lookupFunction(0x2388E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411A0u; }
        if (ctx->pc != 0x2411A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2388e8_0x2388f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411A0u; }
        if (ctx->pc != 0x2411A0u) { return; }
    }
    ctx->pc = 0x2411A0u;
    // 0x2411a0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2411a4: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x2411a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2411a8: 0xae3200b4  sw          $s2, 0xB4($s1)
    ctx->pc = 0x2411a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 18));
    // 0x2411ac: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2411b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2411b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2411b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2411b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2411bc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2411bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2411c0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2411c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2411c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2411c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2411c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2411c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2411cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2411ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2411d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2411d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2411d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2411d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2411d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2411D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2411DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411D8u;
            // 0x2411dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2411E0u;
    // 0x2411e0: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2411e4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2411e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2411E8u;
    {
        const bool branch_taken_0x2411e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2411ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411E8u;
            // 0x2411ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411e8) {
            ctx->pc = 0x241200u;
            goto label_241200;
        }
    }
    ctx->pc = 0x2411F0u;
    // 0x2411f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2411f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2411f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2411F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2411F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411F4u;
            // 0x2411f8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2411FCu;
    // 0x2411fc: 0x0  nop
    ctx->pc = 0x2411fcu;
    // NOP
label_241200:
    // 0x241200: 0x3e00008  jr          $ra
    ctx->pc = 0x241200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241200u;
            // 0x241204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241208u;
    // 0x241208: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24120c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x241210: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x241210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x241214: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x241214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241218: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x241218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x24121c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24121cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241220: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x241220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x241224: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x241224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x241228: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x241228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24122c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x24122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x241230: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x241230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x241234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241238: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24123c: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x241240: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x241244: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x241248: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x241248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x24124c: 0x40f809  jalr        $v0
    ctx->pc = 0x24124Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241254u);
        ctx->pc = 0x241250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24124Cu;
            // 0x241250: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241254u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241254u; }
            if (ctx->pc != 0x241254u) { return; }
        }
        }
    }
    ctx->pc = 0x241254u;
    // 0x241254: 0x8e920024  lw          $s2, 0x24($s4)
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x241258: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x241258u;
    {
        const bool branch_taken_0x241258 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241258u;
            // 0x24125c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241258) {
            ctx->pc = 0x2413C8u;
            goto label_2413c8;
        }
    }
    ctx->pc = 0x241260u;
    // 0x241260: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x241264: 0x0  nop
    ctx->pc = 0x241264u;
    // NOP
label_241268:
    // 0x241268: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24126c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24126cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241270: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x241270u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x241274: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x241274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x241278: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x241278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x24127c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x24127Cu;
    {
        const bool branch_taken_0x24127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24127Cu;
            // 0x241280: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24127c) {
            ctx->pc = 0x2413C0u;
            goto label_2413c0;
        }
    }
    ctx->pc = 0x241284u;
    // 0x241284: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x241284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x241288: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241288u;
    {
        const bool branch_taken_0x241288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24128Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241288u;
            // 0x24128c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241288) {
            ctx->pc = 0x2412B0u;
            goto label_2412b0;
        }
    }
    ctx->pc = 0x241290u;
    // 0x241290: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x241294: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x241298: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x241298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24129c: 0x40f809  jalr        $v0
    ctx->pc = 0x24129Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2412A4u);
        ctx->pc = 0x2412A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24129Cu;
            // 0x2412a0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2412A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2412A4u; }
            if (ctx->pc != 0x2412A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2412A4u;
    // 0x2412a4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2412A4u;
    {
        const bool branch_taken_0x2412a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412a4) {
            ctx->pc = 0x2413C0u;
            goto label_2413c0;
        }
    }
    ctx->pc = 0x2412ACu;
    // 0x2412ac: 0x0  nop
    ctx->pc = 0x2412acu;
    // NOP
label_2412b0:
    // 0x2412b0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2412b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2412B4u;
    {
        const bool branch_taken_0x2412b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412b4) {
            ctx->pc = 0x2413C0u;
            goto label_2413c0;
        }
    }
    ctx->pc = 0x2412BCu;
    // 0x2412bc: 0x8e110088  lw          $s1, 0x88($s0)
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2412c0: 0x12710017  beq         $s3, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2412C0u;
    {
        const bool branch_taken_0x2412c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x2412C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2412C0u;
            // 0x2412c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412c0) {
            ctx->pc = 0x241320u;
            goto label_241320;
        }
    }
    ctx->pc = 0x2412C8u;
    // 0x2412c8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2412C8u;
    {
        const bool branch_taken_0x2412c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2412C8u;
            // 0x2412cc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412c8) {
            ctx->pc = 0x2412E8u;
            goto label_2412e8;
        }
    }
    ctx->pc = 0x2412D0u;
    // 0x2412d0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x2412d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2412d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2412d8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2412d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2412dc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2412e0: 0x40f809  jalr        $v0
    ctx->pc = 0x2412E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2412E8u);
        ctx->pc = 0x2412E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2412E0u;
            // 0x2412e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2412E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2412E8u; }
            if (ctx->pc != 0x2412E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2412E8u;
label_2412e8:
    // 0x2412e8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2412e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412ec: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2412ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2412f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2412f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2412f4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2412f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2412f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2412fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2412fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241300: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x241300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241308: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24130c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x241310: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x241314: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x241318: 0x40f809  jalr        $v0
    ctx->pc = 0x241318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241320u);
        ctx->pc = 0x24131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241318u;
            // 0x24131c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241320u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241320u; }
            if (ctx->pc != 0x241320u) { return; }
        }
        }
    }
    ctx->pc = 0x241320u;
label_241320:
    // 0x241320: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x241320u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241324: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x241328: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x24132c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24132cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241330: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x241334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241338: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24133c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x241340: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x241344: 0x40f809  jalr        $v0
    ctx->pc = 0x241344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24134Cu);
        ctx->pc = 0x241348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241344u;
            // 0x241348: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24134Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24134Cu; }
            if (ctx->pc != 0x24134Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24134Cu;
    // 0x24134c: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24134Cu;
    {
        const bool branch_taken_0x24134c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x241350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24134Cu;
            // 0x241350: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24134c) {
            ctx->pc = 0x241380u;
            goto label_241380;
        }
    }
    ctx->pc = 0x241354u;
    // 0x241354: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x241354u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24135c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x241360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241364: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x241364u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241368: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x241368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24136c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x24136cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x241370: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x241374: 0x40f809  jalr        $v0
    ctx->pc = 0x241374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24137Cu);
        ctx->pc = 0x241378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241374u;
            // 0x241378: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24137Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24137Cu; }
            if (ctx->pc != 0x24137Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24137Cu;
    // 0x24137c: 0x0  nop
    ctx->pc = 0x24137cu;
    // NOP
label_241380:
    // 0x241380: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x241384: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x241388: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x241388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24138c: 0x40f809  jalr        $v0
    ctx->pc = 0x24138Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241394u);
        ctx->pc = 0x241390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24138Cu;
            // 0x241390: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241394u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241394u; }
            if (ctx->pc != 0x241394u) { return; }
        }
        }
    }
    ctx->pc = 0x241394u;
    // 0x241394: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x241394u;
    {
        const bool branch_taken_0x241394 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x241394) {
            ctx->pc = 0x2413C0u;
            goto label_2413c0;
        }
    }
    ctx->pc = 0x24139Cu;
    // 0x24139c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x24139cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2413a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2413a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2413a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2413ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2413acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2413b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2413b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2413b4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2413b8: 0x40f809  jalr        $v0
    ctx->pc = 0x2413B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2413C0u);
        ctx->pc = 0x2413BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413B8u;
            // 0x2413bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2413C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2413C0u; }
            if (ctx->pc != 0x2413C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2413C0u;
label_2413c0:
    // 0x2413c0: 0x16c0ffa9  bnez        $s6, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2413C0u;
    {
        const bool branch_taken_0x2413c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2413C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413C0u;
            // 0x2413c4: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413c0) {
            ctx->pc = 0x241268u;
            runtime->cooperativeGuestYield();
            goto label_241268;
        }
    }
    ctx->pc = 0x2413C8u;
label_2413c8:
    // 0x2413c8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2413C8u;
    {
        const bool branch_taken_0x2413c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413C8u;
            // 0x2413cc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413c8) {
            ctx->pc = 0x2413E8u;
            goto label_2413e8;
        }
    }
    ctx->pc = 0x2413D0u;
    // 0x2413d0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x2413d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2413d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2413d8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2413d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2413dc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2413e0: 0x40f809  jalr        $v0
    ctx->pc = 0x2413E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2413E8u);
        ctx->pc = 0x2413E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413E0u;
            // 0x2413e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2413E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2413E8u; }
            if (ctx->pc != 0x2413E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2413E8u;
label_2413e8:
    // 0x2413e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2413e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2413ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2413f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2413f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2413f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2413f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2413f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2413f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2413fc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2413fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241400: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x241400u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241404: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x241404u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24140c: 0x3e00008  jr          $ra
    ctx->pc = 0x24140Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24140Cu;
            // 0x241410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240518u: goto label_240518;
            case 0x240560u: goto label_240560;
            case 0x240588u: goto label_240588;
            case 0x240620u: goto label_240620;
            case 0x24063Cu: goto label_24063c;
            case 0x240688u: goto label_240688;
            case 0x2406A4u: goto label_2406a4;
            case 0x240970u: goto label_240970;
            case 0x240AF0u: goto label_240af0;
            case 0x240B14u: goto label_240b14;
            case 0x240D00u: goto label_240d00;
            case 0x240EB0u: goto label_240eb0;
            case 0x241070u: goto label_241070;
            case 0x2410E8u: goto label_2410e8;
            case 0x2410F8u: goto label_2410f8;
            case 0x2410FCu: goto label_2410fc;
            case 0x241200u: goto label_241200;
            case 0x241268u: goto label_241268;
            case 0x2412B0u: goto label_2412b0;
            case 0x2412E8u: goto label_2412e8;
            case 0x241320u: goto label_241320;
            case 0x241380u: goto label_241380;
            case 0x2413C0u: goto label_2413c0;
            case 0x2413C8u: goto label_2413c8;
            case 0x2413E8u: goto label_2413e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241414u;
    // 0x241414: 0x0  nop
    ctx->pc = 0x241414u;
    // NOP
}
