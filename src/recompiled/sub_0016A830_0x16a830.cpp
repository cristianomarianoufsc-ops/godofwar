#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A830
// Address: 0x16a830 - 0x16a8e0
void sub_0016A830_0x16a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A830_0x16a830");
#endif

    ctx->pc = 0x16a830u;

    // 0x16a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a838: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a83c: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x16a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x16a840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a848: 0xae000814  sw          $zero, 0x814($s0)
    ctx->pc = 0x16a848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 0));
    // 0x16a84c: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x16a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x16a850: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x16A850u;
    SET_GPR_U32(ctx, 31, 0x16A858u);
    ctx->pc = 0x16A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A850u;
            // 0x16a854: 0xae000810  sw          $zero, 0x810($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A858u; }
        if (ctx->pc != 0x16A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A858u; }
        if (ctx->pc != 0x16A858u) { return; }
    }
    ctx->pc = 0x16A858u;
    // 0x16a858: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16a85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a860: 0xc05aac0  jal         func_16AB00
    ctx->pc = 0x16A860u;
    SET_GPR_U32(ctx, 31, 0x16A868u);
    ctx->pc = 0x16A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A860u;
            // 0x16a864: 0x24a5a300  addiu       $a1, $a1, -0x5D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AB00u;
    if (runtime->hasFunction(0x16AB00u)) {
        auto targetFn = runtime->lookupFunction(0x16AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A868u; }
        if (ctx->pc != 0x16A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AB00_0x16ab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A868u; }
        if (ctx->pc != 0x16A868u) { return; }
    }
    ctx->pc = 0x16A868u;
    // 0x16a868: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x16a868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
    // 0x16a86c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x16a870: 0x248424d8  addiu       $a0, $a0, 0x24D8
    ctx->pc = 0x16a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9432));
    // 0x16a874: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a878: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x16a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16a87c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x16a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x16a880: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16A880u;
    {
        const bool branch_taken_0x16a880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a880) {
            ctx->pc = 0x16A884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A880u;
            // 0x16a884: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A888u;
            goto label_16a888;
        }
    }
    ctx->pc = 0x16A888u;
label_16a888:
    // 0x16a888: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16a888u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16a88c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x16a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x16a890: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x16a890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x16a894: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x16a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16a898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a89c: 0x1012  mflo        $v0
    ctx->pc = 0x16a89cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16a8a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A8A0u;
    {
        const bool branch_taken_0x16a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8A0u;
            // 0x16a8a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8a0) {
            ctx->pc = 0x16A8CCu;
            goto label_16a8cc;
        }
    }
    ctx->pc = 0x16A8A8u;
    // 0x16a8a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16a8ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a8b0:
    // 0x16a8b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16a8b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a8b8: 0xac430210  sw          $v1, 0x210($v0)
    ctx->pc = 0x16a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 3));
    // 0x16a8bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a8c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x16a8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16a8c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8C4u;
            // 0x16a8c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A8B0u;
            runtime->cooperativeGuestYield();
            goto label_16a8b0;
        }
    }
    ctx->pc = 0x16A8CCu;
label_16a8cc:
    // 0x16a8cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a8d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8D8u;
            // 0x16a8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A888u: goto label_16a888;
            case 0x16A8B0u: goto label_16a8b0;
            case 0x16A8CCu: goto label_16a8cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A8E0u;
}
