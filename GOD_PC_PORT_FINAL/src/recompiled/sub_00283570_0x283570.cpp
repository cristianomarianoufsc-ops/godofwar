#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283570
// Address: 0x283570 - 0x283668
void sub_00283570_0x283570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283570_0x283570");
#endif

    ctx->pc = 0x283570u;

    // 0x283570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x283570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x283574: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x283574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x283578: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x283578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28357c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x283580: 0x24743650  addiu       $s4, $v1, 0x3650
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
    // 0x283584: 0x244239a9  addiu       $v0, $v0, 0x39A9
    ctx->pc = 0x283584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14761));
    // 0x283588: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x283588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28358c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x28358cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x283590: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x283594: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x283594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x283598: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x283598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28359c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28359cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2835a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2835a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2835a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2835a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2835a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2835ac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2835acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2835b0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x2835b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2835b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2835b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2835b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2835b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835bc: 0xc0a61fe  jal         func_2987F8
    ctx->pc = 0x2835BCu;
    SET_GPR_U32(ctx, 31, 0x2835C4u);
    ctx->pc = 0x2835C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2835BCu;
            // 0x2835c0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2987F8u;
    if (runtime->hasFunction(0x2987F8u)) {
        auto targetFn = runtime->lookupFunction(0x2987F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835C4u; }
        if (ctx->pc != 0x2835C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002987F8_0x2987f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835C4u; }
        if (ctx->pc != 0x2835C4u) { return; }
    }
    ctx->pc = 0x2835C4u;
    // 0x2835c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2835c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835c8: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2835C8u;
    {
        const bool branch_taken_0x2835c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835C8u;
            // 0x2835cc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835c8) {
            ctx->pc = 0x283644u;
            goto label_283644;
        }
    }
    ctx->pc = 0x2835D0u;
    // 0x2835d0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2835d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x2835d4: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2835d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x2835d8: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2835d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2835dc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2835dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2835e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2835e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835e4: 0x0  nop
    ctx->pc = 0x2835e4u;
    // NOP
label_2835e8:
    // 0x2835e8: 0xc0a4ff8  jal         func_293FE0
    ctx->pc = 0x2835E8u;
    SET_GPR_U32(ctx, 31, 0x2835F0u);
    ctx->pc = 0x2835ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2835E8u;
            // 0x2835ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FE0u;
    if (runtime->hasFunction(0x293FE0u)) {
        auto targetFn = runtime->lookupFunction(0x293FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835F0u; }
        if (ctx->pc != 0x2835F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fe0_0x293ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835F0u; }
        if (ctx->pc != 0x2835F0u) { return; }
    }
    ctx->pc = 0x2835F0u;
    // 0x2835f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2835f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835f4: 0x1200fffc  beqz        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2835F4u;
    {
        const bool branch_taken_0x2835f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835F4u;
            // 0x2835f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835f4) {
            ctx->pc = 0x2835E8u;
            runtime->cooperativeGuestYield();
            goto label_2835e8;
        }
    }
    ctx->pc = 0x2835FCu;
    // 0x2835fc: 0x0  nop
    ctx->pc = 0x2835fcu;
    // NOP
label_283600:
    // 0x283600: 0xc0a4ff0  jal         func_293FC0
    ctx->pc = 0x283600u;
    SET_GPR_U32(ctx, 31, 0x283608u);
    ctx->pc = 0x283604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283600u;
            // 0x283604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FC0u;
    if (runtime->hasFunction(0x293FC0u)) {
        auto targetFn = runtime->lookupFunction(0x293FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283608u; }
        if (ctx->pc != 0x283608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fc0_0x293fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283608u; }
        if (ctx->pc != 0x283608u) { return; }
    }
    ctx->pc = 0x283608u;
    // 0x283608: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x283608u;
    {
        const bool branch_taken_0x283608 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283608u;
            // 0x28360c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283608) {
            ctx->pc = 0x283600u;
            runtime->cooperativeGuestYield();
            goto label_283600;
        }
    }
    ctx->pc = 0x283610u;
    // 0x283610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283618: 0xc0a633a  jal         func_298CE8
    ctx->pc = 0x283618u;
    SET_GPR_U32(ctx, 31, 0x283620u);
    ctx->pc = 0x28361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283618u;
            // 0x28361c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CE8u;
    if (runtime->hasFunction(0x298CE8u)) {
        auto targetFn = runtime->lookupFunction(0x298CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283620u; }
        if (ctx->pc != 0x283620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_298ce8_0x298d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283620u; }
        if (ctx->pc != 0x283620u) { return; }
    }
    ctx->pc = 0x283620u;
    // 0x283620: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x283620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x283624: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x283624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x283628: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x283628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x28362c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28362cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283630: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x283630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x283634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283638: 0xc0a6238  jal         func_2988E0
    ctx->pc = 0x283638u;
    SET_GPR_U32(ctx, 31, 0x283640u);
    ctx->pc = 0x28363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283638u;
            // 0x28363c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2988E0u;
    if (runtime->hasFunction(0x2988E0u)) {
        auto targetFn = runtime->lookupFunction(0x2988E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283640u; }
        if (ctx->pc != 0x283640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002988E0_0x2988e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283640u; }
        if (ctx->pc != 0x283640u) { return; }
    }
    ctx->pc = 0x283640u;
    // 0x283640: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x283640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283644:
    // 0x283644: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x283644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283648: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x283648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28364c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28364cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283650: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x283650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283654: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x283654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x283658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28365c: 0x3e00008  jr          $ra
    ctx->pc = 0x28365Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28365Cu;
            // 0x283660: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2835E8u: goto label_2835e8;
            case 0x283600u: goto label_283600;
            case 0x283644u: goto label_283644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283664u;
    // 0x283664: 0x0  nop
    ctx->pc = 0x283664u;
    // NOP
}
