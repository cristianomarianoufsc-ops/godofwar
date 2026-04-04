#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151718
// Address: 0x151718 - 0x151888
void sub_00151718_0x151718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151718_0x151718");
#endif

    ctx->pc = 0x151718u;

    // 0x151718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15171c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151720: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15172c: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x151730: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x151730u;
    {
        const bool branch_taken_0x151730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151730u;
            // 0x151734: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151730) {
            ctx->pc = 0x151878u;
            goto label_151878;
        }
    }
    ctx->pc = 0x151738u;
    // 0x151738: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x151738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x15173c: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x15173Cu;
    {
        const bool branch_taken_0x15173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15173c) {
            ctx->pc = 0x151740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15173Cu;
            // 0x151740: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15187Cu;
            goto label_15187c;
        }
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x151744u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151748: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x15174c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x151750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151754: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x151758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15175c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151760: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x151764: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x151764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x151768: 0x40f809  jalr        $v0
    ctx->pc = 0x151768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151770u);
        ctx->pc = 0x15176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151768u;
            // 0x15176c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151770u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1517B8u: goto label_1517b8;
            case 0x1517E0u: goto label_1517e0;
            case 0x151828u: goto label_151828;
            case 0x151838u: goto label_151838;
            case 0x151840u: goto label_151840;
            case 0x151878u: goto label_151878;
            case 0x15187Cu: goto label_15187c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151770u; }
            if (ctx->pc != 0x151770u) { return; }
        }
        }
    }
    ctx->pc = 0x151770u;
    // 0x151770: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x151770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151774: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x151774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x151778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15177c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x151780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x151780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151784: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151788: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15178c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x151790: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x151794: 0x40f809  jalr        $v0
    ctx->pc = 0x151794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15179Cu);
        ctx->pc = 0x151798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151794u;
            // 0x151798: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15179Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1517B8u: goto label_1517b8;
            case 0x1517E0u: goto label_1517e0;
            case 0x151828u: goto label_151828;
            case 0x151838u: goto label_151838;
            case 0x151840u: goto label_151840;
            case 0x151878u: goto label_151878;
            case 0x15187Cu: goto label_15187c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15179Cu; }
            if (ctx->pc != 0x15179Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15179Cu;
    // 0x15179c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x15179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1517a0: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1517a4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1517a8: 0x52020033  beql        $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1517A8u;
    {
        const bool branch_taken_0x1517a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1517a8) {
            ctx->pc = 0x1517ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1517A8u;
            // 0x1517ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151878u;
            goto label_151878;
        }
    }
    ctx->pc = 0x1517B0u;
    // 0x1517b0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1517b4: 0x0  nop
    ctx->pc = 0x1517b4u;
    // NOP
label_1517b8:
    // 0x1517b8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1517bc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1517bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1517c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1517c4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1517c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1517c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517cc: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x1517ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x1517d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1517d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517d4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1517d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1517d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1517D8u;
    {
        const bool branch_taken_0x1517d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1517D8u;
            // 0x1517dc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517d8) {
            ctx->pc = 0x151838u;
            goto label_151838;
        }
    }
    ctx->pc = 0x1517E0u;
label_1517e0:
    // 0x1517e0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1517e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1517e8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1517e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1517ec: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1517f0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1517f4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x1517f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1517f8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1517F8u;
    {
        const bool branch_taken_0x1517f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1517f8) {
            ctx->pc = 0x1517FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1517F8u;
            // 0x1517fc: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151828u;
            goto label_151828;
        }
    }
    ctx->pc = 0x151800u;
    // 0x151800: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151804: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x151808: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x151808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15180c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151810u;
    {
        const bool branch_taken_0x151810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151810u;
            // 0x151814: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151810) {
            ctx->pc = 0x151838u;
            goto label_151838;
        }
    }
    ctx->pc = 0x151818u;
    // 0x151818: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15181c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x15181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x151820: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151820u;
    {
        const bool branch_taken_0x151820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151820u;
            // 0x151824: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151820) {
            ctx->pc = 0x151840u;
            goto label_151840;
        }
    }
    ctx->pc = 0x151828u;
label_151828:
    // 0x151828: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x151828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15182c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x15182cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151830: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151830u;
    {
        const bool branch_taken_0x151830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151830u;
            // 0x151834: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151830) {
            ctx->pc = 0x1517E0u;
            runtime->cooperativeGuestYield();
            goto label_1517e0;
        }
    }
    ctx->pc = 0x151838u;
label_151838:
    // 0x151838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15183c: 0x0  nop
    ctx->pc = 0x15183cu;
    // NOP
label_151840:
    // 0x151840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151844: 0xc041d66  jal         func_107598
    ctx->pc = 0x151844u;
    SET_GPR_U32(ctx, 31, 0x15184Cu);
    ctx->pc = 0x151848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151844u;
            // 0x151848: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15184Cu; }
        if (ctx->pc != 0x15184Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15184Cu; }
        if (ctx->pc != 0x15184Cu) { return; }
    }
    ctx->pc = 0x15184Cu;
    // 0x15184c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x151850: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x151850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x151854: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x151858: 0x60f809  jalr        $v1
    ctx->pc = 0x151858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x151860u);
        ctx->pc = 0x15185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151858u;
            // 0x15185c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151860u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1517B8u: goto label_1517b8;
            case 0x1517E0u: goto label_1517e0;
            case 0x151828u: goto label_151828;
            case 0x151838u: goto label_151838;
            case 0x151840u: goto label_151840;
            case 0x151878u: goto label_151878;
            case 0x15187Cu: goto label_15187c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151860u; }
            if (ctx->pc != 0x151860u) { return; }
        }
        }
    }
    ctx->pc = 0x151860u;
    // 0x151860: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x151860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x151864: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x151864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151868: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15186c: 0x5602ffd2  bnel        $s0, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x15186Cu;
    {
        const bool branch_taken_0x15186c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x15186c) {
            ctx->pc = 0x151870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15186Cu;
            // 0x151870: 0x8e080008  lw          $t0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1517B8u;
            runtime->cooperativeGuestYield();
            goto label_1517b8;
        }
    }
    ctx->pc = 0x151874u;
    // 0x151874: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151878:
    // 0x151878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15187c:
    // 0x15187c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151880: 0x3e00008  jr          $ra
    ctx->pc = 0x151880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151880u;
            // 0x151884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1517B8u: goto label_1517b8;
            case 0x1517E0u: goto label_1517e0;
            case 0x151828u: goto label_151828;
            case 0x151838u: goto label_151838;
            case 0x151840u: goto label_151840;
            case 0x151878u: goto label_151878;
            case 0x15187Cu: goto label_15187c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151888u;
}
