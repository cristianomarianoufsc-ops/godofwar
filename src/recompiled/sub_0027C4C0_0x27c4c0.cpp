#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C4C0
// Address: 0x27c4c0 - 0x27c580
void sub_0027C4C0_0x27c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C4C0_0x27c4c0");
#endif

    ctx->pc = 0x27c4c0u;

    // 0x27c4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c4c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c4c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c4d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27c4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4d4: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27c4e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C4E0u;
    {
        const bool branch_taken_0x27c4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C4E0u;
            // 0x27c4e4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4e0) {
            ctx->pc = 0x27C4F4u;
            goto label_27c4f4;
        }
    }
    ctx->pc = 0x27C4E8u;
    // 0x27c4e8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c4ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27C4ECu;
    {
        const bool branch_taken_0x27c4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C4ECu;
            // 0x27c4f0: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4ec) {
            ctx->pc = 0x27C568u;
            goto label_27c568;
        }
    }
    ctx->pc = 0x27C4F4u;
label_27c4f4:
    // 0x27c4f4: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C4F4u;
    SET_GPR_U32(ctx, 31, 0x27C4FCu);
    ctx->pc = 0x27C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C4F4u;
            // 0x27c4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4FCu; }
        if (ctx->pc != 0x27C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4FCu; }
        if (ctx->pc != 0x27C4FCu) { return; }
    }
    ctx->pc = 0x27C4FCu;
    // 0x27c4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27c4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c500: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C500u;
    {
        const bool branch_taken_0x27c500 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x27C504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C500u;
            // 0x27c504: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c500) {
            ctx->pc = 0x27C514u;
            goto label_27c514;
        }
    }
    ctx->pc = 0x27C508u;
    // 0x27c508: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c50c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27C50Cu;
    {
        const bool branch_taken_0x27c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C50Cu;
            // 0x27c510: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c50c) {
            ctx->pc = 0x27C568u;
            goto label_27c568;
        }
    }
    ctx->pc = 0x27C514u;
label_27c514:
    // 0x27c514: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C514u;
    SET_GPR_U32(ctx, 31, 0x27C51Cu);
    ctx->pc = 0x27C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C514u;
            // 0x27c518: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C51Cu; }
        if (ctx->pc != 0x27C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C51Cu; }
        if (ctx->pc != 0x27C51Cu) { return; }
    }
    ctx->pc = 0x27C51Cu;
    // 0x27c51c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x27c51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x27c520: 0x24c50380  addiu       $a1, $a2, 0x380
    ctx->pc = 0x27c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x27c524: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27c528: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C528u;
    {
        const bool branch_taken_0x27c528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c528) {
            ctx->pc = 0x27C52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C528u;
            // 0x27c52c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C544u;
            goto label_27c544;
        }
    }
    ctx->pc = 0x27C530u;
    // 0x27c530: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C530u;
    SET_GPR_U32(ctx, 31, 0x27C538u);
    ctx->pc = 0x27C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C530u;
            // 0x27c534: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C538u; }
        if (ctx->pc != 0x27C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C538u; }
        if (ctx->pc != 0x27C538u) { return; }
    }
    ctx->pc = 0x27C538u;
    // 0x27c538: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c53c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C53Cu;
    {
        const bool branch_taken_0x27c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C53Cu;
            // 0x27c540: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c53c) {
            ctx->pc = 0x27C568u;
            goto label_27c568;
        }
    }
    ctx->pc = 0x27C544u;
label_27c544:
    // 0x27c544: 0xacd00380  sw          $s0, 0x380($a2)
    ctx->pc = 0x27c544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 896), GPR_U32(ctx, 16));
    // 0x27c548: 0x8c4408a4  lw          $a0, 0x8A4($v0)
    ctx->pc = 0x27c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2212)));
    // 0x27c54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c550: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x27c550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x27c554: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C554u;
    SET_GPR_U32(ctx, 31, 0x27C55Cu);
    ctx->pc = 0x27C558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C554u;
            // 0x27c558: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C55Cu; }
        if (ctx->pc != 0x27C55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C55Cu; }
        if (ctx->pc != 0x27C55Cu) { return; }
    }
    ctx->pc = 0x27C55Cu;
    // 0x27c55c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C55Cu;
    SET_GPR_U32(ctx, 31, 0x27C564u);
    ctx->pc = 0x27C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C55Cu;
            // 0x27c560: 0x8e2408ac  lw          $a0, 0x8AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C564u; }
        if (ctx->pc != 0x27C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C564u; }
        if (ctx->pc != 0x27C564u) { return; }
    }
    ctx->pc = 0x27C564u;
    // 0x27c564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c568:
    // 0x27c568: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27c568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c56c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c570: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c578: 0x3e00008  jr          $ra
    ctx->pc = 0x27C578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C578u;
            // 0x27c57c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C4F4u: goto label_27c4f4;
            case 0x27C514u: goto label_27c514;
            case 0x27C544u: goto label_27c544;
            case 0x27C568u: goto label_27c568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C580u;
}
