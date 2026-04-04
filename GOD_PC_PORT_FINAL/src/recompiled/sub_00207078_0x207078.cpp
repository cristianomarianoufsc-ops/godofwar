#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207078
// Address: 0x207078 - 0x207110
void sub_00207078_0x207078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207078_0x207078");
#endif

    ctx->pc = 0x207078u;

    // 0x207078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20707c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x207080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207088: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20708c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20708Cu;
    {
        const bool branch_taken_0x20708c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20708Cu;
            // 0x207090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20708c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x207094u;
    // 0x207094: 0xc090d56  jal         func_243558
    ctx->pc = 0x207094u;
    SET_GPR_U32(ctx, 31, 0x20709Cu);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20709Cu; }
        if (ctx->pc != 0x20709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20709Cu; }
        if (ctx->pc != 0x20709Cu) { return; }
    }
    ctx->pc = 0x20709Cu;
    // 0x20709c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x20709cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2070a0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2070a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2070a4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2070a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2070a8:
    // 0x2070a8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2070A8u;
    {
        const bool branch_taken_0x2070a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070a8) {
            ctx->pc = 0x2070ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2070A8u;
            // 0x2070ac: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2070C0u;
            goto label_2070c0;
        }
    }
    ctx->pc = 0x2070B0u;
    // 0x2070b0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2070b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2070B4u;
    {
        const bool branch_taken_0x2070b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2070B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070B4u;
            // 0x2070b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070b4) {
            ctx->pc = 0x2070C0u;
            goto label_2070c0;
        }
    }
    ctx->pc = 0x2070BCu;
    // 0x2070bc: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2070bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2070c0:
    // 0x2070c0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2070c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2070c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2070C4u;
    {
        const bool branch_taken_0x2070c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2070C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070C4u;
            // 0x2070c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070c4) {
            ctx->pc = 0x2070FCu;
            goto label_2070fc;
        }
    }
    ctx->pc = 0x2070CCu;
    // 0x2070cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2070ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2070d0: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x2070d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2070d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2070d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2070d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2070dc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2070dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2070e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2070e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2070e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2070e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2070ec: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2070ECu;
    {
        const bool branch_taken_0x2070ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2070F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070ECu;
            // 0x2070f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070ec) {
            ctx->pc = 0x2070F8u;
            goto label_2070f8;
        }
    }
    ctx->pc = 0x2070F4u;
    // 0x2070f4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2070f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2070f8:
    // 0x2070f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2070f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2070fc:
    // 0x2070fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2070fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207104: 0x3e00008  jr          $ra
    ctx->pc = 0x207104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207104u;
            // 0x207108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2070A8u: goto label_2070a8;
            case 0x2070C0u: goto label_2070c0;
            case 0x2070F8u: goto label_2070f8;
            case 0x2070FCu: goto label_2070fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20710Cu;
    // 0x20710c: 0x0  nop
    ctx->pc = 0x20710cu;
    // NOP
}
