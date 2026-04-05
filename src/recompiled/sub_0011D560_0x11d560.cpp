#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D560
// Address: 0x11d560 - 0x11d648
void sub_0011D560_0x11d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D560_0x11d560");
#endif

    ctx->pc = 0x11d560u;

    // 0x11d560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11d564: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11d568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11d56c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11d56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d570: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11d570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x11d574: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11d574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d578: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11d578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11d57c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d580: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11d580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11d584: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x11d584u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x11d588: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x11D588u;
    {
        const bool branch_taken_0x11d588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D588u;
            // 0x11d58c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d588) {
            ctx->pc = 0x11D628u;
            goto label_11d628;
        }
    }
    ctx->pc = 0x11D590u;
    // 0x11d590: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x11d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11d594: 0x0  nop
    ctx->pc = 0x11d594u;
    // NOP
label_11d598:
    // 0x11d598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11d598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d59c: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x11d59cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11d5a0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x11d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11d5a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11d5a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5ac: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11d5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11d5b0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11d5b4: 0x40f809  jalr        $v0
    ctx->pc = 0x11D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D5BCu);
        ctx->pc = 0x11D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5B4u;
            // 0x11d5b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D5BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D598u: goto label_11d598;
            case 0x11D620u: goto label_11d620;
            case 0x11D628u: goto label_11d628;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D5BCu; }
            if (ctx->pc != 0x11D5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x11D5BCu;
    // 0x11d5bc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D5BCu;
    {
        const bool branch_taken_0x11d5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d5bc) {
            ctx->pc = 0x11D5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5BCu;
            // 0x11d5c0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D620u;
            goto label_11d620;
        }
    }
    ctx->pc = 0x11D5C4u;
    // 0x11d5c4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x11d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11d5c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11d5cc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11d5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d5d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11d5d4: 0x40f809  jalr        $v0
    ctx->pc = 0x11D5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D5DCu);
        ctx->pc = 0x11D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5D4u;
            // 0x11d5d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11D5DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D598u: goto label_11d598;
            case 0x11D620u: goto label_11d620;
            case 0x11D628u: goto label_11d628;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D5DCu; }
            if (ctx->pc != 0x11D5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x11D5DCu;
    // 0x11d5dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11d5e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11d5e4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x11d5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11d5e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x11d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x11d5ec: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11d5f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11d5f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11d5f8: 0x1134021  addu        $t0, $t0, $s3
    ctx->pc = 0x11d5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x11d5fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x11d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x11d600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11d604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d608: 0x8ce700f4  lw          $a3, 0xF4($a3)
    ctx->pc = 0x11d608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x11d60c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x11d60cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d610: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x11d610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
    // 0x11d614: 0xc05d508  jal         func_175420
    ctx->pc = 0x11D614u;
    SET_GPR_U32(ctx, 31, 0x11D61Cu);
    ctx->pc = 0x11D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D614u;
            // 0x11d618: 0x47380a  movz        $a3, $v0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175420u;
    if (runtime->hasFunction(0x175420u)) {
        auto targetFn = runtime->lookupFunction(0x175420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D61Cu; }
        if (ctx->pc != 0x11D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175420_0x175450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D61Cu; }
        if (ctx->pc != 0x11D61Cu) { return; }
    }
    ctx->pc = 0x11D61Cu;
    // 0x11d61c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x11d61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11d620:
    // 0x11d620: 0x1620ffdd  bnez        $s1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x11D620u;
    {
        const bool branch_taken_0x11d620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D620u;
            // 0x11d624: 0x2622fff8  addiu       $v0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d620) {
            ctx->pc = 0x11D598u;
            runtime->cooperativeGuestYield();
            goto label_11d598;
        }
    }
    ctx->pc = 0x11D628u;
label_11d628:
    // 0x11d628: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11d628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d62c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11d62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d630: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11d630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11d634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d638: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x11d638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d63c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d640: 0x3e00008  jr          $ra
    ctx->pc = 0x11D640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D640u;
            // 0x11d644: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D598u: goto label_11d598;
            case 0x11D620u: goto label_11d620;
            case 0x11D628u: goto label_11d628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D648u;
}
