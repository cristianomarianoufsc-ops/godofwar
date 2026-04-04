#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E570
// Address: 0x14e570 - 0x14e8f0
void sub_0014E570_0x14e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E570_0x14e570");
#endif

    ctx->pc = 0x14e570u;

    // 0x14e570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14e574: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14e578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e57c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14e580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e584: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14e584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14e588: 0x52403  sra         $a0, $a1, 16
    ctx->pc = 0x14e588u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14e58c: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x14e58cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x14e590: 0x62c03  sra         $a1, $a2, 16
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14e594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e59c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14e59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14e5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5a4: 0xc0534de  jal         func_14D378
    ctx->pc = 0x14E5A4u;
    SET_GPR_U32(ctx, 31, 0x14E5ACu);
    ctx->pc = 0x14E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5A4u;
            // 0x14e5a8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D378u;
    if (runtime->hasFunction(0x14D378u)) {
        auto targetFn = runtime->lookupFunction(0x14D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E5ACu; }
        if (ctx->pc != 0x14E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D378_0x14d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E5ACu; }
        if (ctx->pc != 0x14E5ACu) { return; }
    }
    ctx->pc = 0x14E5ACu;
    // 0x14e5ac: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x14e5acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5b0: 0x2e02003b  sltiu       $v0, $s0, 0x3B
    ctx->pc = 0x14e5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x14e5b4: 0x504000c9  beql        $v0, $zero, . + 4 + (0xC9 << 2)
    ctx->pc = 0x14E5B4u;
    {
        const bool branch_taken_0x14e5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5b4) {
            ctx->pc = 0x14E5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5B4u;
            // 0x14e5b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E8DCu;
            goto label_14e8dc;
        }
    }
    ctx->pc = 0x14E5BCu;
    // 0x14e5bc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x14e5c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e5c4: 0x244220c0  addiu       $v0, $v0, 0x20C0
    ctx->pc = 0x14e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8384));
    // 0x14e5c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e5cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e5d0: 0x400008  jr          $v0
    ctx->pc = 0x14E5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E5D8u: goto label_14e5d8;
            case 0x14E660u: goto label_14e660;
            case 0x14E700u: goto label_14e700;
            case 0x14E790u: goto label_14e790;
            case 0x14E820u: goto label_14e820;
            case 0x14E8D8u: goto label_14e8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E5D8u;
label_14e5d8:
    // 0x14e5d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e5dc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14e5e0: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14E5E0u;
    {
        const bool branch_taken_0x14e5e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5E0u;
            // 0x14e5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e0) {
            ctx->pc = 0x14E654u;
            goto label_14e654;
        }
    }
    ctx->pc = 0x14E5E8u;
    // 0x14e5e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14e5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5ec: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x14e5ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
label_14e5f0:
    // 0x14e5f0: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x14e5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e5f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e5f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e5fc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x14e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14e600: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x14e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x14e604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e60c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14E60Cu;
    {
        const bool branch_taken_0x14e60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E60Cu;
            // 0x14e610: 0x2271021  addu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e60c) {
            ctx->pc = 0x14E640u;
            goto label_14e640;
        }
    }
    ctx->pc = 0x14E614u;
    // 0x14e614: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14e614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14e618: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x14e618u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    // 0x14e61c: 0x24631910  addiu       $v1, $v1, 0x1910
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x14e620: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14e624: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14e624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14e628: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14e62c: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x14e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x14e630: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e634: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x14e634u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x14e638: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14e638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e63c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_14e640:
    // 0x14e640: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e644: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x14e644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14e648: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x14e648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e64c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14E64Cu;
    {
        const bool branch_taken_0x14e64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E64Cu;
            // 0x14e650: 0x71143  sra         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e64c) {
            ctx->pc = 0x14E5F0u;
            runtime->cooperativeGuestYield();
            goto label_14e5f0;
        }
    }
    ctx->pc = 0x14E654u;
label_14e654:
    // 0x14e654: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e658: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x14E658u;
    {
        const bool branch_taken_0x14e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E658u;
            // 0x14e65c: 0xac403118  sw          $zero, 0x3118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e658) {
            ctx->pc = 0x14E8D8u;
            goto label_14e8d8;
        }
    }
    ctx->pc = 0x14E660u;
label_14e660:
    // 0x14e660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e664: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14e668: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14E668u;
    {
        const bool branch_taken_0x14e668 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E668u;
            // 0x14e66c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e668) {
            ctx->pc = 0x14E6F4u;
            goto label_14e6f4;
        }
    }
    ctx->pc = 0x14E670u;
    // 0x14e670: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x14e670u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e674: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14e674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e678:
    // 0x14e678: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x14e678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
    // 0x14e67c: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x14e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e684: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e688: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14e68c: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x14e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x14e690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e698: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E698u;
    {
        const bool branch_taken_0x14e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E698u;
            // 0x14e69c: 0x81943  sra         $v1, $t0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e698) {
            ctx->pc = 0x14E6E0u;
            goto label_14e6e0;
        }
    }
    ctx->pc = 0x14E6A0u;
    // 0x14e6a0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x14e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14e6a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e6a8: 0x24c61910  addiu       $a2, $a2, 0x1910
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6416));
    // 0x14e6ac: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14e6b0: 0x3105001f  andi        $a1, $t0, 0x1F
    ctx->pc = 0x14e6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x14e6b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e6b8: 0xa92804  sllv        $a1, $t1, $a1
    ctx->pc = 0x14e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x14e6bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e6c0: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x14e6c0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x14e6c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14e6c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14e6cc: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x14e6d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e6d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e6d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14e6dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_14e6e0:
    // 0x14e6e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e6e4: 0xb1140  sll         $v0, $t3, 5
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x14e6e8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x14e6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e6ec: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x14E6ECu;
    {
        const bool branch_taken_0x14e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6ECu;
            // 0x14e6f0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6ec) {
            ctx->pc = 0x14E678u;
            runtime->cooperativeGuestYield();
            goto label_14e678;
        }
    }
    ctx->pc = 0x14E6F4u;
label_14e6f4:
    // 0x14e6f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e6f8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x14E6F8u;
    {
        const bool branch_taken_0x14e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6F8u;
            // 0x14e6fc: 0xac40311c  sw          $zero, 0x311C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6f8) {
            ctx->pc = 0x14E8D8u;
            goto label_14e8d8;
        }
    }
    ctx->pc = 0x14E700u;
label_14e700:
    // 0x14e700: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e704: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14e708: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14E708u;
    {
        const bool branch_taken_0x14e708 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E708u;
            // 0x14e70c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e708) {
            ctx->pc = 0x14E784u;
            goto label_14e784;
        }
    }
    ctx->pc = 0x14E710u;
    // 0x14e710: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14e710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e714: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
label_14e718:
    // 0x14e718: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e724: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14e728: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x14e72c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e730: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e734: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E734u;
    {
        const bool branch_taken_0x14e734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E734u;
            // 0x14e738: 0x2272021  addu        $a0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e734) {
            ctx->pc = 0x14E770u;
            goto label_14e770;
        }
    }
    ctx->pc = 0x14E73Cu;
    // 0x14e73c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e740: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x14e744: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14e748: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e74c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x14e74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14e750: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x14e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14e754: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x14e758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e75c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x14e75cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x14e760: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e764: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14e768: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14e76c: 0x0  nop
    ctx->pc = 0x14e76cu;
    // NOP
label_14e770:
    // 0x14e770: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e774: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x14e774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14e778: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x14e778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e77c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14E77Cu;
    {
        const bool branch_taken_0x14e77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E77Cu;
            // 0x14e780: 0x71143  sra         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e77c) {
            ctx->pc = 0x14E718u;
            runtime->cooperativeGuestYield();
            goto label_14e718;
        }
    }
    ctx->pc = 0x14E784u;
label_14e784:
    // 0x14e784: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e788: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x14E788u;
    {
        const bool branch_taken_0x14e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E788u;
            // 0x14e78c: 0xac403120  sw          $zero, 0x3120($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e788) {
            ctx->pc = 0x14E8D8u;
            goto label_14e8d8;
        }
    }
    ctx->pc = 0x14E790u;
label_14e790:
    // 0x14e790: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e794: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14e794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14e798: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14E798u;
    {
        const bool branch_taken_0x14e798 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E798u;
            // 0x14e79c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e798) {
            ctx->pc = 0x14E814u;
            goto label_14e814;
        }
    }
    ctx->pc = 0x14E7A0u;
    // 0x14e7a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14e7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7a4: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
label_14e7a8:
    // 0x14e7a8: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x14e7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e7b4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14e7b8: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x14e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x14e7bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e7c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e7c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E7C4u;
    {
        const bool branch_taken_0x14e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7C4u;
            // 0x14e7c8: 0x2272021  addu        $a0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7c4) {
            ctx->pc = 0x14E800u;
            goto label_14e800;
        }
    }
    ctx->pc = 0x14E7CCu;
    // 0x14e7cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e7d0: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x14e7d4: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14e7d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e7dc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x14e7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14e7e0: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x14e7e4: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x14e7e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e7ec: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x14e7ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x14e7f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e7f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14e7f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14e7fc: 0x0  nop
    ctx->pc = 0x14e7fcu;
    // NOP
label_14e800:
    // 0x14e800: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e804: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x14e804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x14e808: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x14e808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e80c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14E80Cu;
    {
        const bool branch_taken_0x14e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E80Cu;
            // 0x14e810: 0x71143  sra         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e80c) {
            ctx->pc = 0x14E7A8u;
            runtime->cooperativeGuestYield();
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E814u;
label_14e814:
    // 0x14e814: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e818: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14E818u;
    {
        const bool branch_taken_0x14e818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E818u;
            // 0x14e81c: 0xac403124  sw          $zero, 0x3124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e818) {
            ctx->pc = 0x14E8D8u;
            goto label_14e8d8;
        }
    }
    ctx->pc = 0x14E820u;
label_14e820:
    // 0x14e820: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e824: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14e824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14e828: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14E828u;
    {
        const bool branch_taken_0x14e828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E828u;
            // 0x14e82c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e828) {
            ctx->pc = 0x14E8C4u;
            goto label_14e8c4;
        }
    }
    ctx->pc = 0x14E830u;
    // 0x14e830: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e834: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14e834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e838:
    // 0x14e838: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x14e838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
    // 0x14e83c: 0x30e3001f  andi        $v1, $a3, 0x1F
    ctx->pc = 0x14e83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x14e840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e844: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14e844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e848: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x14e84c: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x14e850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e854: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e858: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14E858u;
    {
        const bool branch_taken_0x14e858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E858u;
            // 0x14e85c: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e858) {
            ctx->pc = 0x14E8B0u;
            goto label_14e8b0;
        }
    }
    ctx->pc = 0x14E860u;
    // 0x14e860: 0x82143  sra         $a0, $t0, 5
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 5));
    // 0x14e864: 0x24c61910  addiu       $a2, $a2, 0x1910
    ctx->pc = 0x14e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6416));
    // 0x14e868: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14e868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14e86c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x14e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e870: 0x3105001f  andi        $a1, $t0, 0x1F
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x14e874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e878: 0xa92804  sllv        $a1, $t1, $a1
    ctx->pc = 0x14e878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x14e87c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x14e87cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x14e880: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14e884: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14e888: 0x24830800  addiu       $v1, $a0, 0x800
    ctx->pc = 0x14e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x14e88c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e894: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14e894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14e898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14e89c: 0x24841000  addiu       $a0, $a0, 0x1000
    ctx->pc = 0x14e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    // 0x14e8a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e8a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e8a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14e8ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_14e8b0:
    // 0x14e8b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e8b4: 0xb1140  sll         $v0, $t3, 5
    ctx->pc = 0x14e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x14e8b8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x14e8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e8bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14E8BCu;
    {
        const bool branch_taken_0x14e8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8BCu;
            // 0x14e8c0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8bc) {
            ctx->pc = 0x14E838u;
            runtime->cooperativeGuestYield();
            goto label_14e838;
        }
    }
    ctx->pc = 0x14E8C4u;
label_14e8c4:
    // 0x14e8c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14e8c8: 0x24433110  addiu       $v1, $v0, 0x3110
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x14e8cc: 0xac403110  sw          $zero, 0x3110($v0)
    ctx->pc = 0x14e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12560), GPR_U32(ctx, 0));
    // 0x14e8d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14e8d4: 0x0  nop
    ctx->pc = 0x14e8d4u;
    // NOP
label_14e8d8:
    // 0x14e8d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14e8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14e8dc:
    // 0x14e8dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8E4u;
            // 0x14e8e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E5D8u: goto label_14e5d8;
            case 0x14E5F0u: goto label_14e5f0;
            case 0x14E640u: goto label_14e640;
            case 0x14E654u: goto label_14e654;
            case 0x14E660u: goto label_14e660;
            case 0x14E678u: goto label_14e678;
            case 0x14E6E0u: goto label_14e6e0;
            case 0x14E6F4u: goto label_14e6f4;
            case 0x14E700u: goto label_14e700;
            case 0x14E718u: goto label_14e718;
            case 0x14E770u: goto label_14e770;
            case 0x14E784u: goto label_14e784;
            case 0x14E790u: goto label_14e790;
            case 0x14E7A8u: goto label_14e7a8;
            case 0x14E800u: goto label_14e800;
            case 0x14E814u: goto label_14e814;
            case 0x14E820u: goto label_14e820;
            case 0x14E838u: goto label_14e838;
            case 0x14E8B0u: goto label_14e8b0;
            case 0x14E8C4u: goto label_14e8c4;
            case 0x14E8D8u: goto label_14e8d8;
            case 0x14E8DCu: goto label_14e8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E8ECu;
    // 0x14e8ec: 0x0  nop
    ctx->pc = 0x14e8ecu;
    // NOP
}
