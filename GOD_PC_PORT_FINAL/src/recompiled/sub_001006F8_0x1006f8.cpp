#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001006F8
// Address: 0x1006f8 - 0x100758
void sub_001006F8_0x1006f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001006F8_0x1006f8");
#endif

    ctx->pc = 0x1006f8u;

    // 0x1006f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1006fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1006fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100700: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100704: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100708: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10070c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x10070Cu;
    {
        const bool branch_taken_0x10070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10070Cu;
            // 0x100710: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10070c) {
            ctx->pc = 0x100744u;
            goto label_100744;
        }
    }
    ctx->pc = 0x100714u;
    // 0x100714: 0x0  nop
    ctx->pc = 0x100714u;
    // NOP
label_100718:
    // 0x100718: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10071c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x10071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x100720: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x100720u;
    {
        const bool branch_taken_0x100720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x100720) {
            ctx->pc = 0x100724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100720u;
            // 0x100724: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100738u;
            goto label_100738;
        }
    }
    ctx->pc = 0x100728u;
    // 0x100728: 0xc041c80  jal         func_107200
    ctx->pc = 0x100728u;
    SET_GPR_U32(ctx, 31, 0x100730u);
    ctx->pc = 0x107200u;
    if (runtime->hasFunction(0x107200u)) {
        auto targetFn = runtime->lookupFunction(0x107200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100730u; }
        if (ctx->pc != 0x100730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107200_0x107200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100730u; }
        if (ctx->pc != 0x100730u) { return; }
    }
    ctx->pc = 0x100730u;
    // 0x100730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100730u;
    {
        const bool branch_taken_0x100730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100730u;
            // 0x100734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100730) {
            ctx->pc = 0x10074Cu;
            goto label_10074c;
        }
    }
    ctx->pc = 0x100738u;
label_100738:
    // 0x100738: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10073c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10073Cu;
    {
        const bool branch_taken_0x10073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10073Cu;
            // 0x100740: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10073c) {
            ctx->pc = 0x100718u;
            runtime->cooperativeGuestYield();
            goto label_100718;
        }
    }
    ctx->pc = 0x100744u;
label_100744:
    // 0x100744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10074c:
    // 0x10074c: 0x3e00008  jr          $ra
    ctx->pc = 0x10074Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10074Cu;
            // 0x100750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100718u: goto label_100718;
            case 0x100738u: goto label_100738;
            case 0x100744u: goto label_100744;
            case 0x10074Cu: goto label_10074c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100754u;
    // 0x100754: 0x0  nop
    ctx->pc = 0x100754u;
    // NOP
}
