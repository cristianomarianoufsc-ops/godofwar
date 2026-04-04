#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233540
// Address: 0x233540 - 0x2340a8
void sub_00233540_0x233540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233540_0x233540");
#endif

    ctx->pc = 0x233540u;

    // 0x233540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233544: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x233548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x233548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23354c: 0x2442a210  addiu       $v0, $v0, -0x5DF0
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
    // 0x233550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233558: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x233558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23355c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x23355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x233560: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x233560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x233564: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x233564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x233568: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x233568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x23356c: 0xc068564  jal         func_1A1590
    ctx->pc = 0x23356Cu;
    SET_GPR_U32(ctx, 31, 0x233574u);
    ctx->pc = 0x233570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23356Cu;
            // 0x233570: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1590u;
    if (runtime->hasFunction(0x1A1590u)) {
        auto targetFn = runtime->lookupFunction(0x1A1590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233574u; }
        if (ctx->pc != 0x233574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1590_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233574u; }
        if (ctx->pc != 0x233574u) { return; }
    }
    ctx->pc = 0x233574u;
    // 0x233574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23357c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233580: 0x3e00008  jr          $ra
    ctx->pc = 0x233580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233580u;
            // 0x233584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233588u;
    // 0x233588: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x233588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23358c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x233590: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x233594: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23359c: 0x3e00008  jr          $ra
    ctx->pc = 0x23359Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2335A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23359Cu;
            // 0x2335a0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2335A4u;
    // 0x2335a4: 0x0  nop
    ctx->pc = 0x2335a4u;
    // NOP
    // 0x2335a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2335a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2335ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2335acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2335b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2335b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2335b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2335b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2335b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2335bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2335c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2335c4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2335c8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x2335c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2335cc: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2335d0: 0x40f809  jalr        $v0
    ctx->pc = 0x2335D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2335D8u);
        ctx->pc = 0x2335D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335D0u;
            // 0x2335d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2335D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2335D8u; }
            if (ctx->pc != 0x2335D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2335D8u;
    // 0x2335d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335dc: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2335DCu;
    {
        const bool branch_taken_0x2335dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335DCu;
            // 0x2335e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335dc) {
            ctx->pc = 0x233620u;
            goto label_233620;
        }
    }
    ctx->pc = 0x2335E4u;
    // 0x2335e4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2335e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2335e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2335e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335ec: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x2335ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2335f0: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x2335f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2335f4: 0x40f809  jalr        $v0
    ctx->pc = 0x2335F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2335FCu);
        ctx->pc = 0x2335F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335F4u;
            // 0x2335f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2335FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2335FCu; }
            if (ctx->pc != 0x2335FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2335FCu;
    // 0x2335fc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233604: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x233604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23360c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x23360cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x233610: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x233614: 0x40f809  jalr        $v0
    ctx->pc = 0x233614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23361Cu);
        ctx->pc = 0x233618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233614u;
            // 0x233618: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23361Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23361Cu; }
            if (ctx->pc != 0x23361Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23361Cu;
    // 0x23361c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23361cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233620:
    // 0x233620: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x233624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233628: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x233628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23362c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233630: 0x3e00008  jr          $ra
    ctx->pc = 0x233630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233630u;
            // 0x233634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233638u;
    // 0x233638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23363c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x233640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23364c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x233650: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x233654: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x233654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x233658: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x233658u;
    {
        const bool branch_taken_0x233658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233658u;
            // 0x23365c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233658) {
            ctx->pc = 0x233698u;
            goto label_233698;
        }
    }
    ctx->pc = 0x233660u;
    // 0x233660: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x233660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x233664: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x233664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x233668: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x233668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x23366c: 0x40f809  jalr        $v0
    ctx->pc = 0x23366Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233674u);
        ctx->pc = 0x233670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23366Cu;
            // 0x233670: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233674u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233674u; }
            if (ctx->pc != 0x233674u) { return; }
        }
        }
    }
    ctx->pc = 0x233674u;
    // 0x233674: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233674u;
    {
        const bool branch_taken_0x233674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233674u;
            // 0x233678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233674) {
            ctx->pc = 0x233698u;
            goto label_233698;
        }
    }
    ctx->pc = 0x23367Cu;
    // 0x23367c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x233680: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x233680u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x233684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233688: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x233688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x23368c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x23368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x233690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233690u;
    {
        const bool branch_taken_0x233690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233690u;
            // 0x233694: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233690) {
            ctx->pc = 0x2336A0u;
            goto label_2336a0;
        }
    }
    ctx->pc = 0x233698u;
label_233698:
    // 0x233698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23369c: 0x0  nop
    ctx->pc = 0x23369cu;
    // NOP
label_2336a0:
    // 0x2336a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2336a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2336a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2336a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2336a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2336a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2336ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2336ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2336B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2336ACu;
            // 0x2336b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2336B4u;
    // 0x2336b4: 0x0  nop
    ctx->pc = 0x2336b4u;
    // NOP
    // 0x2336b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2336bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2336bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2336c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2336c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2336c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2336c8: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2336cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2336ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2336d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2336d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2336d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2336d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336d8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2336d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2336dc: 0x0  nop
    ctx->pc = 0x2336dcu;
    // NOP
label_2336e0:
    // 0x2336e0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2336e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2336e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2336e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2336e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2336ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2336f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2336f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2336f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2336F4u;
    {
        const bool branch_taken_0x2336f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2336f4) {
            ctx->pc = 0x2336F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2336F4u;
            // 0x2336f8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233710u;
            goto label_233710;
        }
    }
    ctx->pc = 0x2336FCu;
    // 0x2336fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233700: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233700u;
    {
        const bool branch_taken_0x233700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233700) {
            ctx->pc = 0x233704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233700u;
            // 0x233704: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233710u;
            goto label_233710;
        }
    }
    ctx->pc = 0x233708u;
    // 0x233708: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x233708u;
    {
        const bool branch_taken_0x233708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233708u;
            // 0x23370c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233708) {
            ctx->pc = 0x2337F8u;
            goto label_2337f8;
        }
    }
    ctx->pc = 0x233710u;
label_233710:
    // 0x233710: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x233710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x233714: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x233714u;
    {
        const bool branch_taken_0x233714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233714u;
            // 0x233718: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233714) {
            ctx->pc = 0x2336E0u;
            runtime->cooperativeGuestYield();
            goto label_2336e0;
        }
    }
    ctx->pc = 0x23371Cu;
    // 0x23371c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x23371Cu;
    {
        const bool branch_taken_0x23371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23371Cu;
            // 0x233720: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23371c) {
            ctx->pc = 0x2337FCu;
            goto label_2337fc;
        }
    }
    ctx->pc = 0x233724u;
    // 0x233724: 0x0  nop
    ctx->pc = 0x233724u;
    // NOP
label_233728:
    // 0x233728: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x233728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23372c: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x233730: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x233730u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x233734: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x233734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233738: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x233738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23373c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x233740: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x233740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x233744: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x233744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x233748: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x233748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x23374c: 0x40f809  jalr        $v0
    ctx->pc = 0x23374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233754u);
        ctx->pc = 0x233750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23374Cu;
            // 0x233750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233754u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233754u; }
            if (ctx->pc != 0x233754u) { return; }
        }
        }
    }
    ctx->pc = 0x233754u;
    // 0x233754: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x233754u;
    {
        const bool branch_taken_0x233754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233754u;
            // 0x233758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233754) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x23375Cu;
    // 0x23375c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x233760: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x233760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x233764: 0x0  nop
    ctx->pc = 0x233764u;
    // NOP
label_233768:
    // 0x233768: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23376c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233770: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23377c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23377Cu;
    {
        const bool branch_taken_0x23377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23377c) {
            ctx->pc = 0x233780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23377Cu;
            // 0x233780: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233794u;
            goto label_233794;
        }
    }
    ctx->pc = 0x233784u;
    // 0x233784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233788: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x233788u;
    {
        const bool branch_taken_0x233788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233788) {
            ctx->pc = 0x23378Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233788u;
            // 0x23378c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2337F8u;
            goto label_2337f8;
        }
    }
    ctx->pc = 0x233790u;
    // 0x233790: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_233794:
    // 0x233794: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x233794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x233798: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x233798u;
    {
        const bool branch_taken_0x233798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233798u;
            // 0x23379c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233798) {
            ctx->pc = 0x233768u;
            runtime->cooperativeGuestYield();
            goto label_233768;
        }
    }
    ctx->pc = 0x2337A0u;
    // 0x2337a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2337A0u;
    {
        const bool branch_taken_0x2337a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337A0u;
            // 0x2337a4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337a0) {
            ctx->pc = 0x2337FCu;
            goto label_2337fc;
        }
    }
    ctx->pc = 0x2337A8u;
label_2337a8:
    // 0x2337a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2337a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2337ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2337acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2337b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2337b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2337B4u;
    {
        const bool branch_taken_0x2337b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337B4u;
            // 0x2337b8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337b4) {
            ctx->pc = 0x2337F8u;
            goto label_2337f8;
        }
    }
    ctx->pc = 0x2337BCu;
    // 0x2337bc: 0x0  nop
    ctx->pc = 0x2337bcu;
    // NOP
label_2337c0:
    // 0x2337c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2337c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2337c4:
    // 0x2337c4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2337c8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2337cc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2337CCu;
    {
        const bool branch_taken_0x2337cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2337D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337CCu;
            // 0x2337d0: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337cc) {
            ctx->pc = 0x2337F8u;
            goto label_2337f8;
        }
    }
    ctx->pc = 0x2337D4u;
    // 0x2337d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2337d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2337d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2337dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2337e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2337e4: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2337E4u;
    {
        const bool branch_taken_0x2337e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337e4) {
            ctx->pc = 0x2337E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2337E4u;
            // 0x2337e8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2337C4u;
            runtime->cooperativeGuestYield();
            goto label_2337c4;
        }
    }
    ctx->pc = 0x2337ECu;
    // 0x2337ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2337ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2337f0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2337F0u;
    {
        const bool branch_taken_0x2337f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337F0u;
            // 0x2337f4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337f0) {
            ctx->pc = 0x2337C0u;
            runtime->cooperativeGuestYield();
            goto label_2337c0;
        }
    }
    ctx->pc = 0x2337F8u;
label_2337f8:
    // 0x2337f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2337f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2337fc:
    // 0x2337fc: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x2337fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x233800: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x233800u;
    {
        const bool branch_taken_0x233800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233800u;
            // 0x233804: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233800) {
            ctx->pc = 0x233728u;
            runtime->cooperativeGuestYield();
            goto label_233728;
        }
    }
    ctx->pc = 0x233808u;
    // 0x233808: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23380c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x233810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233814: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x233814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x233818: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x233818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23381c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233820: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x233820u;
    {
        const bool branch_taken_0x233820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x233820) {
            ctx->pc = 0x233824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233820u;
            // 0x233824: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233828u;
            goto label_233828;
        }
    }
    ctx->pc = 0x233828u;
label_233828:
    // 0x233828: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23382c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23382cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233834: 0x3e00008  jr          $ra
    ctx->pc = 0x233834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233834u;
            // 0x233838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23383Cu;
    // 0x23383c: 0x0  nop
    ctx->pc = 0x23383cu;
    // NOP
    // 0x233840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x233844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x233848: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x233848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23384c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23384cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233850: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x233850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x233854: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x233854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23385c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x23385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233860: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x233864: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x233864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x233868: 0x40f809  jalr        $v0
    ctx->pc = 0x233868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233870u);
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233868u;
            // 0x23386c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233870u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233870u; }
            if (ctx->pc != 0x233870u) { return; }
        }
        }
    }
    ctx->pc = 0x233870u;
    // 0x233870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233874: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233874u;
    {
        const bool branch_taken_0x233874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233874u;
            // 0x233878: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233874) {
            ctx->pc = 0x2338B8u;
            goto label_2338b8;
        }
    }
    ctx->pc = 0x23387Cu;
    // 0x23387c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233884: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x233888: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x233888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x23388c: 0x40f809  jalr        $v0
    ctx->pc = 0x23388Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233894u);
        ctx->pc = 0x233890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23388Cu;
            // 0x233890: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233894u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233894u; }
            if (ctx->pc != 0x233894u) { return; }
        }
        }
    }
    ctx->pc = 0x233894u;
    // 0x233894: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x233894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23389c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2338a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338a4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x2338a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2338a8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2338a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x2338ac: 0x40f809  jalr        $v0
    ctx->pc = 0x2338ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2338B4u);
        ctx->pc = 0x2338B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338ACu;
            // 0x2338b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2338B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2338B4u; }
            if (ctx->pc != 0x2338B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2338B4u;
    // 0x2338b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2338b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2338b8:
    // 0x2338b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2338b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2338bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2338bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2338c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2338c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2338c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2338c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2338c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2338C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2338CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338C8u;
            // 0x2338cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2338D0u;
    // 0x2338d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2338d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2338d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2338d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2338d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2338dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2338dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2338e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2338e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2338e8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2338e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2338ec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2338ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2338f0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2338F0u;
    {
        const bool branch_taken_0x2338f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338F0u;
            // 0x2338f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338f0) {
            ctx->pc = 0x233988u;
            goto label_233988;
        }
    }
    ctx->pc = 0x2338F8u;
    // 0x2338f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2338fc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x233900: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x233904: 0x40f809  jalr        $v0
    ctx->pc = 0x233904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23390Cu);
        ctx->pc = 0x233908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233904u;
            // 0x233908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23390Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23390Cu; }
            if (ctx->pc != 0x23390Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23390Cu;
    // 0x23390c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23390Cu;
    {
        const bool branch_taken_0x23390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23390Cu;
            // 0x233910: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23390c) {
            ctx->pc = 0x233988u;
            goto label_233988;
        }
    }
    ctx->pc = 0x233914u;
    // 0x233914: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x233914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x233918: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x233918u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x23391c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x233920: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x233920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x233924: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x233924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233928: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23392c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233930u;
    {
        const bool branch_taken_0x233930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233930u;
            // 0x233934: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233930) {
            ctx->pc = 0x233948u;
            goto label_233948;
        }
    }
    ctx->pc = 0x233938u;
    // 0x233938: 0xc04ae02  jal         func_12B808
    ctx->pc = 0x233938u;
    SET_GPR_U32(ctx, 31, 0x233940u);
    ctx->pc = 0x12B808u;
    if (runtime->hasFunction(0x12B808u)) {
        auto targetFn = runtime->lookupFunction(0x12B808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233940u; }
        if (ctx->pc != 0x233940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B808_0x12b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233940u; }
        if (ctx->pc != 0x233940u) { return; }
    }
    ctx->pc = 0x233940u;
    // 0x233940: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x233940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x233944: 0x0  nop
    ctx->pc = 0x233944u;
    // NOP
label_233948:
    // 0x233948: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23394c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233950: 0x51280b  movn        $a1, $v0, $s1
    ctx->pc = 0x233950u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x233954: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x233954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x233958: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233958) {
            ctx->pc = 0x23395Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233958u;
            // 0x23395c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233968u;
            goto label_233968;
        }
    }
    ctx->pc = 0x233960u;
    // 0x233960: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x233960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x233964: 0x0  nop
    ctx->pc = 0x233964u;
    // NOP
label_233968:
    // 0x233968: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x233968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23396c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233970: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x233970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233974: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x233974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x233978: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x233978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x23397c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x23397cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x233980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233980u;
    {
        const bool branch_taken_0x233980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233980u;
            // 0x233984: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233980) {
            ctx->pc = 0x233990u;
            goto label_233990;
        }
    }
    ctx->pc = 0x233988u;
label_233988:
    // 0x233988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23398c: 0x0  nop
    ctx->pc = 0x23398cu;
    // NOP
label_233990:
    // 0x233990: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23399c: 0x3e00008  jr          $ra
    ctx->pc = 0x23399Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2339A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23399Cu;
            // 0x2339a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2339A4u;
    // 0x2339a4: 0x0  nop
    ctx->pc = 0x2339a4u;
    // NOP
    // 0x2339a8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2339a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2339ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2339acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2339b0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2339b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2339b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2339b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2339b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2339b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2339bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2339BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2339C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2339BCu;
            // 0x2339c0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2339C4u;
    // 0x2339c4: 0x0  nop
    ctx->pc = 0x2339c4u;
    // NOP
    // 0x2339c8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2339c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2339cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2339d0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2339d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2339d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2339d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2339d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2339dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2339DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2339E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2339DCu;
            // 0x2339e0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2339E4u;
    // 0x2339e4: 0x0  nop
    ctx->pc = 0x2339e4u;
    // NOP
    // 0x2339e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2339ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2339ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2339f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2339f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2339f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2339f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2339f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2339fc: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x233a00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x233a04: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x233a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x233a08: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x233A08u;
    {
        const bool branch_taken_0x233a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x233A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A08u;
            // 0x233a0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a08) {
            ctx->pc = 0x233A70u;
            goto label_233a70;
        }
    }
    ctx->pc = 0x233A10u;
    // 0x233a10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x233a14: 0x0  nop
    ctx->pc = 0x233a14u;
    // NOP
label_233a18:
    // 0x233a18: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x233a1c: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x233a20: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x233a20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x233a24: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x233a24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233a28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x233a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a2c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x233a30: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x233a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x233a34: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x233a34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x233a38: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x233a3c: 0x40f809  jalr        $v0
    ctx->pc = 0x233A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233A44u);
        ctx->pc = 0x233A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A3Cu;
            // 0x233a40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233A44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233A44u; }
            if (ctx->pc != 0x233A44u) { return; }
        }
        }
    }
    ctx->pc = 0x233A44u;
    // 0x233a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233A44u;
    {
        const bool branch_taken_0x233a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A44u;
            // 0x233a48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a44) {
            ctx->pc = 0x233A58u;
            goto label_233a58;
        }
    }
    ctx->pc = 0x233A4Cu;
    // 0x233a4c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x233a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x233a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x233A50u;
    {
        const bool branch_taken_0x233a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A50u;
            // 0x233a54: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a50) {
            ctx->pc = 0x233A5Cu;
            goto label_233a5c;
        }
    }
    ctx->pc = 0x233A58u;
label_233a58:
    // 0x233a58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233a5c:
    // 0x233a5c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x233a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x233a60: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x233a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x233a64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233a68: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A68u;
            // 0x233a6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233A18u;
            runtime->cooperativeGuestYield();
            goto label_233a18;
        }
    }
    ctx->pc = 0x233A70u;
label_233a70:
    // 0x233a70: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x233a70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x233a74: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x233a78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233a7c: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x233a80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233a84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233a88: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x233A88u;
    {
        const bool branch_taken_0x233a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x233a88) {
            ctx->pc = 0x233A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233A88u;
            // 0x233a8c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233A90u;
            goto label_233a90;
        }
    }
    ctx->pc = 0x233A90u;
label_233a90:
    // 0x233a90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x233a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x233A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A9Cu;
            // 0x233aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233AA4u;
    // 0x233aa4: 0x0  nop
    ctx->pc = 0x233aa4u;
    // NOP
    // 0x233aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233aac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x233aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x233ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ab8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x233ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x233abc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x233ac0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x233ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x233ac4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x233AC4u;
    {
        const bool branch_taken_0x233ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AC4u;
            // 0x233ac8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac4) {
            ctx->pc = 0x233B38u;
            goto label_233b38;
        }
    }
    ctx->pc = 0x233ACCu;
    // 0x233acc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x233accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_233ad0:
    // 0x233ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ad4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x233ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233ad8: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x233ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x233adc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x233adcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x233ae0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x233ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x233ae4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x233ae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x233ae8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x233aec: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x233AECu;
    {
        const bool branch_taken_0x233aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233aec) {
            ctx->pc = 0x233AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233AECu;
            // 0x233af0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233B2Cu;
            goto label_233b2c;
        }
    }
    ctx->pc = 0x233AF4u;
    // 0x233af4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x233af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233AF8u;
    {
        const bool branch_taken_0x233af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AF8u;
            // 0x233afc: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233af8) {
            ctx->pc = 0x233B18u;
            goto label_233b18;
        }
    }
    ctx->pc = 0x233B00u;
    // 0x233b00: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x233b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x233b04: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x233b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x233b08: 0x40f809  jalr        $v0
    ctx->pc = 0x233B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233B10u);
        ctx->pc = 0x233B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B08u;
            // 0x233b0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233B10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233B10u; }
            if (ctx->pc != 0x233B10u) { return; }
        }
        }
    }
    ctx->pc = 0x233B10u;
    // 0x233b10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233B10u;
    {
        const bool branch_taken_0x233b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B10u;
            // 0x233b14: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b10) {
            ctx->pc = 0x233B2Cu;
            goto label_233b2c;
        }
    }
    ctx->pc = 0x233B18u;
label_233b18:
    // 0x233b18: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x233b1c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x233b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x233b20: 0x40f809  jalr        $v0
    ctx->pc = 0x233B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233B28u);
        ctx->pc = 0x233B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B20u;
            // 0x233b24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233B28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233B28u; }
            if (ctx->pc != 0x233B28u) { return; }
        }
        }
    }
    ctx->pc = 0x233B28u;
    // 0x233b28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x233b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_233b2c:
    // 0x233b2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b30: 0x1462ffe7  bne         $v1, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x233B30u;
    {
        const bool branch_taken_0x233b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B30u;
            // 0x233b34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b30) {
            ctx->pc = 0x233AD0u;
            runtime->cooperativeGuestYield();
            goto label_233ad0;
        }
    }
    ctx->pc = 0x233B38u;
label_233b38:
    // 0x233b38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233b40: 0x3e00008  jr          $ra
    ctx->pc = 0x233B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B40u;
            // 0x233b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233B48u;
    // 0x233b48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x233b4c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x233b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x233b50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x233b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b58: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x233b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x233b5c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x233b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x233b60: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x233b64: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x233b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x233b68: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x233b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x233b6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x233b70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x233b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233b74: 0x0  nop
    ctx->pc = 0x233b74u;
    // NOP
label_233b78:
    // 0x233b78: 0x0  nop
    ctx->pc = 0x233b78u;
    // NOP
    // 0x233b7c: 0x0  nop
    ctx->pc = 0x233b7cu;
    // NOP
    // 0x233b80: 0x0  nop
    ctx->pc = 0x233b80u;
    // NOP
    // 0x233b84: 0x0  nop
    ctx->pc = 0x233b84u;
    // NOP
    // 0x233b88: 0x0  nop
    ctx->pc = 0x233b88u;
    // NOP
    // 0x233b8c: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x233B8Cu;
    {
        const bool branch_taken_0x233b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x233b8c) {
            ctx->pc = 0x233B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233B8Cu;
            // 0x233b90: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233B78u;
            runtime->cooperativeGuestYield();
            goto label_233b78;
        }
    }
    ctx->pc = 0x233B94u;
    // 0x233b94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x233b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233b98: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x233b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x233b9c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x233ba0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x233BA0u;
    {
        const bool branch_taken_0x233ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BA0u;
            // 0x233ba4: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ba0) {
            ctx->pc = 0x233BE0u;
            goto label_233be0;
        }
    }
    ctx->pc = 0x233BA8u;
    // 0x233ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233bac: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x233BACu;
    {
        const bool branch_taken_0x233bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BACu;
            // 0x233bb0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bac) {
            ctx->pc = 0x233BE4u;
            goto label_233be4;
        }
    }
    ctx->pc = 0x233BB4u;
    // 0x233bb4: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x233bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x233bb8: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x233bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x233bbc: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x233bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x233bc0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x233bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233bc4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x233bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233bc8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x233bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x233bcc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x233bd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x233bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x233bd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x233bd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233bdc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x233bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_233be0:
    // 0x233be0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_233be4:
    // 0x233be4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x233be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x233be8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x233be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x233bec: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x233BECu;
    {
        const bool branch_taken_0x233bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BECu;
            // 0x233bf0: 0x26510024  addiu       $s1, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bec) {
            ctx->pc = 0x233D5Cu;
            goto label_233d5c;
        }
    }
    ctx->pc = 0x233BF4u;
    // 0x233bf4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x233bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_233bf8:
    // 0x233bf8: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x233bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x233bfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x233c00: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x233c04: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x233c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x233c08: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x233c0c: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x233c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x233c10: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x233c10u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x233c14: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x233c14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233c18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x233c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c1c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x233c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x233c20: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x233c20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x233c24: 0x84c40040  lh          $a0, 0x40($a2)
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x233c28: 0x40f809  jalr        $v0
    ctx->pc = 0x233C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233C30u);
        ctx->pc = 0x233C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C28u;
            // 0x233c2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233C30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233C30u; }
            if (ctx->pc != 0x233C30u) { return; }
        }
        }
    }
    ctx->pc = 0x233C30u;
    // 0x233c30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233C30u;
    {
        const bool branch_taken_0x233c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C30u;
            // 0x233c34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c30) {
            ctx->pc = 0x233C88u;
            goto label_233c88;
        }
    }
    ctx->pc = 0x233C38u;
    // 0x233c38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233c3c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x233c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x233c40: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x233c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x233c44: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x233C44u;
    {
        const bool branch_taken_0x233c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C44u;
            // 0x233c48: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c44) {
            ctx->pc = 0x233D4Cu;
            goto label_233d4c;
        }
    }
    ctx->pc = 0x233C4Cu;
    // 0x233c4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x233c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233c50: 0x1044003f  beq         $v0, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x233C50u;
    {
        const bool branch_taken_0x233c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x233C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C50u;
            // 0x233c54: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c50) {
            ctx->pc = 0x233D50u;
            goto label_233d50;
        }
    }
    ctx->pc = 0x233C58u;
    // 0x233c58: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x233c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x233c5c: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x233c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x233c60: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x233c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x233c64: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x233c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233c68: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x233c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233c6c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x233c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x233c70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x233c74: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x233c78: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x233c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x233c7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x233c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233c80: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x233C80u;
    {
        const bool branch_taken_0x233c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C80u;
            // 0x233c84: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c80) {
            ctx->pc = 0x233D4Cu;
            goto label_233d4c;
        }
    }
    ctx->pc = 0x233C88u;
label_233c88:
    // 0x233c88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x233c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c8c: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x233c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x233c90: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x233c94: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x233c98: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x233c9c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233ca0: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x233ca4: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x233ca4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233ca8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x233CA8u;
    {
        const bool branch_taken_0x233ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233CA8u;
            // 0x233cac: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ca8) {
            ctx->pc = 0x233D00u;
            goto label_233d00;
        }
    }
    ctx->pc = 0x233CB0u;
    // 0x233cb0: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x233CB0u;
    {
        const bool branch_taken_0x233cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x233cb0) {
            ctx->pc = 0x233CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233CB0u;
            // 0x233cb4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233D04u;
            goto label_233d04;
        }
    }
    ctx->pc = 0x233CB8u;
    // 0x233cb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x233cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x233cbc: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x233CBCu;
    {
        const bool branch_taken_0x233cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x233CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233CBCu;
            // 0x233cc0: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cbc) {
            ctx->pc = 0x233D00u;
            goto label_233d00;
        }
    }
    ctx->pc = 0x233CC4u;
    // 0x233cc4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x233cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x233cc8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x233cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x233ccc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x233cd0: 0x6ba800b7  ldl         $t0, 0xB7($sp)
    ctx->pc = 0x233cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x233cd4: 0x6fa800b0  ldr         $t0, 0xB0($sp)
    ctx->pc = 0x233cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x233cd8: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x233cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233cdc: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x233cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x233ce0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x233ce4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x233ce8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x233cec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x233cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x233cf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x233cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x233cf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x233CF4u;
    {
        const bool branch_taken_0x233cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233CF4u;
            // 0x233cf8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cf4) {
            ctx->pc = 0x233D48u;
            goto label_233d48;
        }
    }
    ctx->pc = 0x233CFCu;
    // 0x233cfc: 0x0  nop
    ctx->pc = 0x233cfcu;
    // NOP
label_233d00:
    // 0x233d00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233d04:
    // 0x233d04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x233d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233d08: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x233D08u;
    {
        const bool branch_taken_0x233d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D08u;
            // 0x233d0c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d08) {
            ctx->pc = 0x233D48u;
            goto label_233d48;
        }
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x233d14: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x233d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233d18: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x233d1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x233d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x233d20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233D20u;
    {
        const bool branch_taken_0x233d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D20u;
            // 0x233d24: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d20) {
            ctx->pc = 0x233D48u;
            goto label_233d48;
        }
    }
    ctx->pc = 0x233D28u;
    // 0x233d28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x233d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x233d2c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x233d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x233d30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x233d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233d34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x233d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233d38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233d3c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x233D3Cu;
    {
        const bool branch_taken_0x233d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D3Cu;
            // 0x233d40: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d3c) {
            ctx->pc = 0x233D10u;
            runtime->cooperativeGuestYield();
            goto label_233d10;
        }
    }
    ctx->pc = 0x233D44u;
    // 0x233d44: 0x0  nop
    ctx->pc = 0x233d44u;
    // NOP
label_233d48:
    // 0x233d48: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x233d48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
label_233d4c:
    // 0x233d4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_233d50:
    // 0x233d50: 0x441ffa9  bgez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x233D50u;
    {
        const bool branch_taken_0x233d50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x233D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D50u;
            // 0x233d54: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d50) {
            ctx->pc = 0x233BF8u;
            runtime->cooperativeGuestYield();
            goto label_233bf8;
        }
    }
    ctx->pc = 0x233D58u;
    // 0x233d58: 0x26510024  addiu       $s1, $s2, 0x24
    ctx->pc = 0x233d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_233d5c:
    // 0x233d5c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233d60: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x233D60u;
    {
        const bool branch_taken_0x233d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d60) {
            ctx->pc = 0x233D9Cu;
            goto label_233d9c;
        }
    }
    ctx->pc = 0x233D68u;
    // 0x233d68: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x233d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x233d6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233D6Cu;
    {
        const bool branch_taken_0x233d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d6c) {
            ctx->pc = 0x233D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233D6Cu;
            // 0x233d70: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233D80u;
            goto label_233d80;
        }
    }
    ctx->pc = 0x233D74u;
    // 0x233d74: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x233D74u;
    SET_GPR_U32(ctx, 31, 0x233D7Cu);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D7Cu; }
        if (ctx->pc != 0x233D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D7Cu; }
        if (ctx->pc != 0x233D7Cu) { return; }
    }
    ctx->pc = 0x233D7Cu;
    // 0x233d7c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_233d80:
    // 0x233d80: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233D80u;
    {
        const bool branch_taken_0x233d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d80) {
            ctx->pc = 0x233D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233D80u;
            // 0x233d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233D94u;
            goto label_233d94;
        }
    }
    ctx->pc = 0x233D88u;
    // 0x233d88: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x233D88u;
    SET_GPR_U32(ctx, 31, 0x233D90u);
    ctx->pc = 0x233D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D88u;
            // 0x233d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D90u; }
        if (ctx->pc != 0x233D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D90u; }
        if (ctx->pc != 0x233D90u) { return; }
    }
    ctx->pc = 0x233D90u;
    // 0x233d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233d94:
    // 0x233d94: 0xc08e218  jal         func_238860
    ctx->pc = 0x233D94u;
    SET_GPR_U32(ctx, 31, 0x233D9Cu);
    ctx->pc = 0x233D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D94u;
            // 0x233d98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D9Cu; }
        if (ctx->pc != 0x233D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D9Cu; }
        if (ctx->pc != 0x233D9Cu) { return; }
    }
    ctx->pc = 0x233D9Cu;
label_233d9c:
    // 0x233d9c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x233D9Cu;
    SET_GPR_U32(ctx, 31, 0x233DA4u);
    ctx->pc = 0x233DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D9Cu;
            // 0x233da0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DA4u; }
        if (ctx->pc != 0x233DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DA4u; }
        if (ctx->pc != 0x233DA4u) { return; }
    }
    ctx->pc = 0x233DA4u;
    // 0x233da4: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x233da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x233da8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x233da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x233dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233db0: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x233db4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233dbc: 0x50520002  beql        $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x233DBCu;
    {
        const bool branch_taken_0x233dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x233dbc) {
            ctx->pc = 0x233DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233DBCu;
            // 0x233dc0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233DC8u;
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233DC4u;
    // 0x233dc4: 0x0  nop
    ctx->pc = 0x233dc4u;
    // NOP
label_233dc8:
    // 0x233dc8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x233dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x233dcc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x233dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x233dd0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x233dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x233dd4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x233dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x233dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x233DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DD8u;
            // 0x233ddc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233DE0u;
    // 0x233de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x233de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x233de8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x233de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x233dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233df0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x233df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x233df4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x233df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233dfc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233e00: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x233e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x233e04: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x233e08: 0x40f809  jalr        $v0
    ctx->pc = 0x233E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233E10u);
        ctx->pc = 0x233E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E08u;
            // 0x233e0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233E10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233E10u; }
            if (ctx->pc != 0x233E10u) { return; }
        }
        }
    }
    ctx->pc = 0x233E10u;
    // 0x233e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e14: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233E14u;
    {
        const bool branch_taken_0x233e14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E14u;
            // 0x233e18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e14) {
            ctx->pc = 0x233E58u;
            goto label_233e58;
        }
    }
    ctx->pc = 0x233E1Cu;
    // 0x233e1c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x233e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e24: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x233e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x233e28: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x233e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x233e2c: 0x40f809  jalr        $v0
    ctx->pc = 0x233E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233E34u);
        ctx->pc = 0x233E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E2Cu;
            // 0x233e30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233E34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233E34u; }
            if (ctx->pc != 0x233E34u) { return; }
        }
        }
    }
    ctx->pc = 0x233E34u;
    // 0x233e34: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x233e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x233e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e44: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x233e48: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x233e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x233e4c: 0x40f809  jalr        $v0
    ctx->pc = 0x233E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233E54u);
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E4Cu;
            // 0x233e50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233E54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233E54u; }
            if (ctx->pc != 0x233E54u) { return; }
        }
        }
    }
    ctx->pc = 0x233E54u;
    // 0x233e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233e58:
    // 0x233e58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x233e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x233e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233e60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x233e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233e68: 0x3e00008  jr          $ra
    ctx->pc = 0x233E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E68u;
            // 0x233e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233E70u;
    // 0x233e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233e74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x233e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x233e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233e84: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x233e88: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x233e8c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x233e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x233e90: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x233E90u;
    {
        const bool branch_taken_0x233e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E90u;
            // 0x233e94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e90) {
            ctx->pc = 0x233FF0u;
            goto label_233ff0;
        }
    }
    ctx->pc = 0x233E98u;
    // 0x233e98: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x233e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x233e9c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x233ea0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x233ea4: 0x40f809  jalr        $v0
    ctx->pc = 0x233EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233EACu);
        ctx->pc = 0x233EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EA4u;
            // 0x233ea8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233EACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233EACu; }
            if (ctx->pc != 0x233EACu) { return; }
        }
        }
    }
    ctx->pc = 0x233EACu;
    // 0x233eac: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x233EACu;
    {
        const bool branch_taken_0x233eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EACu;
            // 0x233eb0: 0x2603002c  addiu       $v1, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eac) {
            ctx->pc = 0x233FF0u;
            goto label_233ff0;
        }
    }
    ctx->pc = 0x233EB4u;
    // 0x233eb4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x233eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x233eb8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x233eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x233ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x233ec0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x233ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x233ec4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x233ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233ed4: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x233ed8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x233edc: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x233EDCu;
    {
        const bool branch_taken_0x233edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x233EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EDCu;
            // 0x233ee0: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233edc) {
            ctx->pc = 0x233F00u;
            goto label_233f00;
        }
    }
    ctx->pc = 0x233EE4u;
    // 0x233ee4: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x233ee8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x233ee8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233eec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x233eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x233ef0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x233ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233ef4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x233EF4u;
    {
        const bool branch_taken_0x233ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233ef4) {
            ctx->pc = 0x233EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233EF4u;
            // 0x233ef8: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233F18u;
            goto label_233f18;
        }
    }
    ctx->pc = 0x233EFCu;
    // 0x233efc: 0x0  nop
    ctx->pc = 0x233efcu;
    // NOP
label_233f00:
    // 0x233f00: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x233f04: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x233f04u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x233f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x233f0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x233f10: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x233F10u;
    {
        const bool branch_taken_0x233f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F10u;
            // 0x233f14: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f10) {
            ctx->pc = 0x233FB0u;
            goto label_233fb0;
        }
    }
    ctx->pc = 0x233F18u;
label_233f18:
    // 0x233f18: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x233f1c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x233f1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f20: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x233f24: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x233f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233f28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233F28u;
    {
        const bool branch_taken_0x233f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F28u;
            // 0x233f2c: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f28) {
            ctx->pc = 0x233F48u;
            goto label_233f48;
        }
    }
    ctx->pc = 0x233F30u;
    // 0x233f30: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x233f30u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f34: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x233f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x233f38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x233f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x233f3c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x233f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x233f40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x233F40u;
    {
        const bool branch_taken_0x233f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F40u;
            // 0x233f44: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f40) {
            ctx->pc = 0x233FB4u;
            goto label_233fb4;
        }
    }
    ctx->pc = 0x233F48u;
label_233f48:
    // 0x233f48: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x233f4c: 0x0  nop
    ctx->pc = 0x233f4cu;
    // NOP
label_233f50:
    // 0x233f50: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x233f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x233f54: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x233f54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f58: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x233f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x233f5c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x233f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233f60: 0x0  nop
    ctx->pc = 0x233f60u;
    // NOP
    // 0x233f64: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x233F64u;
    {
        const bool branch_taken_0x233f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233f64) {
            ctx->pc = 0x233F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233F64u;
            // 0x233f68: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233F50u;
            runtime->cooperativeGuestYield();
            goto label_233f50;
        }
    }
    ctx->pc = 0x233F6Cu;
    // 0x233f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233F6Cu;
    {
        const bool branch_taken_0x233f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F6Cu;
            // 0x233f70: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f6c) {
            ctx->pc = 0x233F7Cu;
            goto label_233f7c;
        }
    }
    ctx->pc = 0x233F74u;
    // 0x233f74: 0x0  nop
    ctx->pc = 0x233f74u;
    // NOP
label_233f78:
    // 0x233f78: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_233f7c:
    // 0x233f7c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x233f7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x233f84: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x233f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233f88: 0x0  nop
    ctx->pc = 0x233f88u;
    // NOP
    // 0x233f8c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x233F8Cu;
    {
        const bool branch_taken_0x233f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f8c) {
            ctx->pc = 0x233F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233F8Cu;
            // 0x233f90: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233F78u;
            runtime->cooperativeGuestYield();
            goto label_233f78;
        }
    }
    ctx->pc = 0x233F94u;
    // 0x233f94: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x233f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x233f98: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x233f98u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233f9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233fa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x233fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x233fa4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x233fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x233fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x233fac: 0x0  nop
    ctx->pc = 0x233facu;
    // NOP
label_233fb0:
    // 0x233fb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x233fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_233fb4:
    // 0x233fb4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x233fb8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x233fbc: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x233fbcu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x233fc0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x233fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x233fc4: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x233fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233fcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233fd0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x233fd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233fd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x233fd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x233fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233fdc: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x233fe0: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x233fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x233fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233FE4u;
    {
        const bool branch_taken_0x233fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FE4u;
            // 0x233fe8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe4) {
            ctx->pc = 0x233FF8u;
            goto label_233ff8;
        }
    }
    ctx->pc = 0x233FECu;
    // 0x233fec: 0x0  nop
    ctx->pc = 0x233fecu;
    // NOP
label_233ff0:
    // 0x233ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ff4: 0x0  nop
    ctx->pc = 0x233ff4u;
    // NOP
label_233ff8:
    // 0x233ff8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234004: 0x3e00008  jr          $ra
    ctx->pc = 0x234004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234004u;
            // 0x234008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23400Cu;
    // 0x23400c: 0x0  nop
    ctx->pc = 0x23400cu;
    // NOP
    // 0x234010: 0x3e00008  jr          $ra
    ctx->pc = 0x234010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234018u;
    // 0x234018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23401c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x234020: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x234020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x234024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x234028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23402c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234034: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x234038: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x23403c: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x23403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x234040: 0x40f809  jalr        $v0
    ctx->pc = 0x234040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234048u);
        ctx->pc = 0x234044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234040u;
            // 0x234044: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x234048u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234048u; }
            if (ctx->pc != 0x234048u) { return; }
        }
        }
    }
    ctx->pc = 0x234048u;
    // 0x234048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23404c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23404Cu;
    {
        const bool branch_taken_0x23404c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23404Cu;
            // 0x234050: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23404c) {
            ctx->pc = 0x234090u;
            goto label_234090;
        }
    }
    ctx->pc = 0x234054u;
    // 0x234054: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x234058: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23405c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x234060: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x234064: 0x40f809  jalr        $v0
    ctx->pc = 0x234064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23406Cu);
        ctx->pc = 0x234068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234064u;
            // 0x234068: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23406Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23406Cu; }
            if (ctx->pc != 0x23406Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23406Cu;
    // 0x23406c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x23406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x234070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234074: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x234074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x234078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23407c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x234080: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x234084: 0x40f809  jalr        $v0
    ctx->pc = 0x234084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23408Cu);
        ctx->pc = 0x234088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234084u;
            // 0x234088: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23408Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23408Cu; }
            if (ctx->pc != 0x23408Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23408Cu;
    // 0x23408c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23408cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234090:
    // 0x234090: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234098: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x234098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23409c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23409cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2340a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2340A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2340A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340A0u;
            // 0x2340a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233620u: goto label_233620;
            case 0x233698u: goto label_233698;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336E0u: goto label_2336e0;
            case 0x233710u: goto label_233710;
            case 0x233728u: goto label_233728;
            case 0x233768u: goto label_233768;
            case 0x233794u: goto label_233794;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233828u: goto label_233828;
            case 0x2338B8u: goto label_2338b8;
            case 0x233948u: goto label_233948;
            case 0x233968u: goto label_233968;
            case 0x233988u: goto label_233988;
            case 0x233990u: goto label_233990;
            case 0x233A18u: goto label_233a18;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A70u: goto label_233a70;
            case 0x233A90u: goto label_233a90;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B18u: goto label_233b18;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B38u: goto label_233b38;
            case 0x233B78u: goto label_233b78;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233C88u: goto label_233c88;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D10u: goto label_233d10;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D80u: goto label_233d80;
            case 0x233D94u: goto label_233d94;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DC8u: goto label_233dc8;
            case 0x233E58u: goto label_233e58;
            case 0x233F00u: goto label_233f00;
            case 0x233F18u: goto label_233f18;
            case 0x233F48u: goto label_233f48;
            case 0x233F50u: goto label_233f50;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF8u: goto label_233ff8;
            case 0x234090u: goto label_234090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2340A8u;
}
