#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001313B0
// Address: 0x1313b0 - 0x131460
void sub_001313B0_0x1313b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001313B0_0x1313b0");
#endif

    ctx->pc = 0x1313b0u;

    // 0x1313b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1313b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1313b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1313b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1313b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1313b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1313bc: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1313c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1313c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1313c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1313c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1313c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1313c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1313cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1313ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1313d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1313d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1313d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1313d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1313dc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1313dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1313e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1313E0u;
    {
        const bool branch_taken_0x1313e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1313E0u;
            // 0x1313e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313e0) {
            ctx->pc = 0x131448u;
            goto label_131448;
        }
    }
    ctx->pc = 0x1313E8u;
    // 0x1313e8: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1313E8u;
    {
        const bool branch_taken_0x1313e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313e8) {
            ctx->pc = 0x1313ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1313E8u;
            // 0x1313ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13144Cu;
            goto label_13144c;
        }
    }
    ctx->pc = 0x1313F0u;
    // 0x1313f0: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1313f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1313f4: 0x0  nop
    ctx->pc = 0x1313f4u;
    // NOP
label_1313f8:
    // 0x1313f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1313f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313fc: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x1313fcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x131400: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131404: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x131404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131408: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x131408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13140c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13140Cu;
    {
        const bool branch_taken_0x13140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13140Cu;
            // 0x131410: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13140c) {
            ctx->pc = 0x131440u;
            goto label_131440;
        }
    }
    ctx->pc = 0x131414u;
    // 0x131414: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x131414u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131418: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13141c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x13141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131428: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13142c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131430: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x131434: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x131434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x131438: 0x40f809  jalr        $v0
    ctx->pc = 0x131438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131440u);
        ctx->pc = 0x13143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131438u;
            // 0x13143c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1313F8u: goto label_1313f8;
            case 0x131440u: goto label_131440;
            case 0x131448u: goto label_131448;
            case 0x13144Cu: goto label_13144c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131440u; }
            if (ctx->pc != 0x131440u) { return; }
        }
        }
    }
    ctx->pc = 0x131440u;
label_131440:
    // 0x131440: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x131440u;
    {
        const bool branch_taken_0x131440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x131444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131440u;
            // 0x131444: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131440) {
            ctx->pc = 0x1313F8u;
            runtime->cooperativeGuestYield();
            goto label_1313f8;
        }
    }
    ctx->pc = 0x131448u;
label_131448:
    // 0x131448: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x131448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13144c:
    // 0x13144c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13144cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131454: 0x3e00008  jr          $ra
    ctx->pc = 0x131454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131454u;
            // 0x131458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1313F8u: goto label_1313f8;
            case 0x131440u: goto label_131440;
            case 0x131448u: goto label_131448;
            case 0x13144Cu: goto label_13144c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13145Cu;
    // 0x13145c: 0x0  nop
    ctx->pc = 0x13145cu;
    // NOP
}
