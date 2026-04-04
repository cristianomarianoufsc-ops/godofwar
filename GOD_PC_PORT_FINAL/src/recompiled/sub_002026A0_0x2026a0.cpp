#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002026A0
// Address: 0x2026a0 - 0x202718
void sub_002026A0_0x2026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002026A0_0x2026a0");
#endif

    ctx->pc = 0x2026a0u;

    // 0x2026a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2026a4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2026a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2026a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2026a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2026ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2026acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2026b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2026b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026b4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2026b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2026b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2026B8u;
    {
        const bool branch_taken_0x2026b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026B8u;
            // 0x2026bc: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026b8) {
            ctx->pc = 0x202704u;
            goto label_202704;
        }
    }
    ctx->pc = 0x2026C0u;
    // 0x2026c0: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x2026c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x2026c4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2026c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2026c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2026c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2026cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2026ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2026d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2026D0u;
    {
        const bool branch_taken_0x2026d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026D0u;
            // 0x2026d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026d0) {
            ctx->pc = 0x202708u;
            goto label_202708;
        }
    }
    ctx->pc = 0x2026D8u;
    // 0x2026d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2026dc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2026dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2026e0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2026e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2026e4: 0x40f809  jalr        $v0
    ctx->pc = 0x2026E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2026ECu);
        ctx->pc = 0x2026E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026E4u;
            // 0x2026e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2026ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202704u: goto label_202704;
            case 0x202708u: goto label_202708;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2026ECu; }
            if (ctx->pc != 0x2026ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2026ECu;
    // 0x2026ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2026ECu;
    {
        const bool branch_taken_0x2026ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026ECu;
            // 0x2026f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026ec) {
            ctx->pc = 0x202708u;
            goto label_202708;
        }
    }
    ctx->pc = 0x2026F4u;
    // 0x2026f4: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x2026F4u;
    SET_GPR_U32(ctx, 31, 0x2026FCu);
    ctx->pc = 0x2026F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2026F4u;
            // 0x2026f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2026FCu; }
        if (ctx->pc != 0x2026FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2026FCu; }
        if (ctx->pc != 0x2026FCu) { return; }
    }
    ctx->pc = 0x2026FCu;
    // 0x2026fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2026FCu;
    {
        const bool branch_taken_0x2026fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026FCu;
            // 0x202700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026fc) {
            ctx->pc = 0x202708u;
            goto label_202708;
        }
    }
    ctx->pc = 0x202704u;
label_202704:
    // 0x202704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202708:
    // 0x202708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20270c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202710: 0x3e00008  jr          $ra
    ctx->pc = 0x202710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202710u;
            // 0x202714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202704u: goto label_202704;
            case 0x202708u: goto label_202708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202718u;
}
