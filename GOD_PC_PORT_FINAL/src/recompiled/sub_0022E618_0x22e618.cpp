#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E618
// Address: 0x22e618 - 0x22e6f8
void sub_0022E618_0x22e618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E618_0x22e618");
#endif

    ctx->pc = 0x22e618u;

    // 0x22e618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e61c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22e61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e620: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22e624: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22e624u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22e628: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e62c: 0x8e421280  lw          $v0, 0x1280($s2)
    ctx->pc = 0x22e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4736)));
    // 0x22e630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e634: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22e638: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22E638u;
    {
        const bool branch_taken_0x22e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E638u;
            // 0x22e63c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e638) {
            ctx->pc = 0x22E690u;
            goto label_22e690;
        }
    }
    ctx->pc = 0x22E640u;
    // 0x22e640: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e644: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x22e644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x22e648: 0x8c461298  lw          $a2, 0x1298($v0)
    ctx->pc = 0x22e648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e64c: 0x2610c150  addiu       $s0, $s0, -0x3EB0
    ctx->pc = 0x22e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951248));
    // 0x22e650: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22e650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22e654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e658: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22e658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22e65c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22E65Cu;
    SET_GPR_U32(ctx, 31, 0x22E664u);
    ctx->pc = 0x22E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E65Cu;
            // 0x22e660: 0x24a583d0  addiu       $a1, $a1, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E664u; }
        if (ctx->pc != 0x22E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E664u; }
        if (ctx->pc != 0x22E664u) { return; }
    }
    ctx->pc = 0x22E664u;
    // 0x22e664: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e668: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e66c: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x22e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e678: 0xc09f22e  jal         func_27C8B8
    ctx->pc = 0x22E678u;
    SET_GPR_U32(ctx, 31, 0x22E680u);
    ctx->pc = 0x22E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E678u;
            // 0x22e67c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C8B8u;
    if (runtime->hasFunction(0x27C8B8u)) {
        auto targetFn = runtime->lookupFunction(0x27C8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E680u; }
        if (ctx->pc != 0x22E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C8B8_0x27c8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E680u; }
        if (ctx->pc != 0x22E680u) { return; }
    }
    ctx->pc = 0x22E680u;
    // 0x22e680: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e684: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22E684u;
    {
        const bool branch_taken_0x22e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E684u;
            // 0x22e688: 0xae421280  sw          $v0, 0x1280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e684) {
            ctx->pc = 0x22E6D8u;
            goto label_22e6d8;
        }
    }
    ctx->pc = 0x22E68Cu;
    // 0x22e68c: 0x0  nop
    ctx->pc = 0x22e68cu;
    // NOP
label_22e690:
    // 0x22e690: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E690u;
    SET_GPR_U32(ctx, 31, 0x22E698u);
    ctx->pc = 0x22E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E690u;
            // 0x22e694: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E698u; }
        if (ctx->pc != 0x22E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E698u; }
        if (ctx->pc != 0x22E698u) { return; }
    }
    ctx->pc = 0x22E698u;
    // 0x22e698: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E698u;
    {
        const bool branch_taken_0x22e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E698u;
            // 0x22e69c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e698) {
            ctx->pc = 0x22E6D8u;
            goto label_22e6d8;
        }
    }
    ctx->pc = 0x22E6A0u;
    // 0x22e6a0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x22e6a4: 0x8c451284  lw          $a1, 0x1284($v0)
    ctx->pc = 0x22e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e6a8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E6A8u;
    {
        const bool branch_taken_0x22e6a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6A8u;
            // 0x22e6ac: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6a8) {
            ctx->pc = 0x22E6C0u;
            goto label_22e6c0;
        }
    }
    ctx->pc = 0x22E6B0u;
    // 0x22e6b0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22e6b4: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E6B4u;
    {
        const bool branch_taken_0x22e6b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e6b4) {
            ctx->pc = 0x22E6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6B4u;
            // 0x22e6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E6DCu;
            goto label_22e6dc;
        }
    }
    ctx->pc = 0x22E6BCu;
    // 0x22e6bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22e6c0:
    // 0x22e6c0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e6c4: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e6c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e6cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e6d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E6D0u;
    {
        const bool branch_taken_0x22e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6D0u;
            // 0x22e6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6d0) {
            ctx->pc = 0x22E6DCu;
            goto label_22e6dc;
        }
    }
    ctx->pc = 0x22E6D8u;
label_22e6d8:
    // 0x22e6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e6dc:
    // 0x22e6dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e6e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e6e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22E6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6ECu;
            // 0x22e6f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E690u: goto label_22e690;
            case 0x22E6C0u: goto label_22e6c0;
            case 0x22E6D8u: goto label_22e6d8;
            case 0x22E6DCu: goto label_22e6dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E6F4u;
    // 0x22e6f4: 0x0  nop
    ctx->pc = 0x22e6f4u;
    // NOP
}
