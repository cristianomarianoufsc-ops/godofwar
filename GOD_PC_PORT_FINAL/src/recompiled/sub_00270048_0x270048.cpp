#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270048
// Address: 0x270048 - 0x2700c0
void sub_00270048_0x270048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270048_0x270048");
#endif

    ctx->pc = 0x270048u;

    // 0x270048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27004c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270050: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x270050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x270054: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x270054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x270058: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x270058u;
    {
        const bool branch_taken_0x270058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270058u;
            // 0x27005c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270058) {
            ctx->pc = 0x2700A8u;
            goto label_2700a8;
        }
    }
    ctx->pc = 0x270060u;
    // 0x270060: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x270060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x270064: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x270064u;
    {
        const bool branch_taken_0x270064 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x270068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270064u;
            // 0x270068: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270064) {
            ctx->pc = 0x2700B0u;
            goto label_2700b0;
        }
    }
    ctx->pc = 0x27006Cu;
    // 0x27006c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x27006cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x270070: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x270070u;
    {
        const bool branch_taken_0x270070 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x270074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270070u;
            // 0x270074: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270070) {
            ctx->pc = 0x2700B4u;
            goto label_2700b4;
        }
    }
    ctx->pc = 0x270078u;
    // 0x270078: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x270078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x27007c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x27007cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270080: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x270080u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270084: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270088: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x270088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27008c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270090: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x270090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x270094: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x270094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x270098: 0xe0f809  jalr        $a3
    ctx->pc = 0x270098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2700A0u);
        ctx->pc = 0x27009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270098u;
            // 0x27009c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2700A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2700A8u: goto label_2700a8;
            case 0x2700B0u: goto label_2700b0;
            case 0x2700B4u: goto label_2700b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2700A0u; }
            if (ctx->pc != 0x2700A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2700A0u;
    // 0x2700a0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2700a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700a4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2700a4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2700a8:
    // 0x2700a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2700a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2700ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2700acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2700b0:
    // 0x2700b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2700b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2700b4:
    // 0x2700b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2700B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2700B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700B4u;
            // 0x2700b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2700A8u: goto label_2700a8;
            case 0x2700B0u: goto label_2700b0;
            case 0x2700B4u: goto label_2700b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2700BCu;
    // 0x2700bc: 0x0  nop
    ctx->pc = 0x2700bcu;
    // NOP
}
