#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002265E8
// Address: 0x2265e8 - 0x226640
void sub_002265E8_0x2265e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265E8_0x2265e8");
#endif

    ctx->pc = 0x2265e8u;

    // 0x2265e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2265e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2265ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2265ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2265f0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2265f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2265f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2265f8: 0x8e0211a8  lw          $v0, 0x11A8($s0)
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x2265fc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2265FCu;
    {
        const bool branch_taken_0x2265fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2265fc) {
            ctx->pc = 0x226600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2265FCu;
            // 0x226600: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22662Cu;
            goto label_22662c;
        }
    }
    ctx->pc = 0x226604u;
    // 0x226604: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x226604u;
    SET_GPR_U32(ctx, 31, 0x22660Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22660Cu; }
        if (ctx->pc != 0x22660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22660Cu; }
        if (ctx->pc != 0x22660Cu) { return; }
    }
    ctx->pc = 0x22660Cu;
    // 0x22660c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x226610: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x226610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x226614: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x226614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226618: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22661c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x22661Cu;
    SET_GPR_U32(ctx, 31, 0x226624u);
    ctx->pc = 0x226620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22661Cu;
            // 0x226620: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226624u; }
        if (ctx->pc != 0x226624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226624u; }
        if (ctx->pc != 0x226624u) { return; }
    }
    ctx->pc = 0x226624u;
    // 0x226624: 0xae0211a8  sw          $v0, 0x11A8($s0)
    ctx->pc = 0x226624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4520), GPR_U32(ctx, 2));
    // 0x226628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22662c:
    // 0x22662c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226630: 0x3e00008  jr          $ra
    ctx->pc = 0x226630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226630u;
            // 0x226634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22662Cu: goto label_22662c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226638u;
    // 0x226638: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22663c: 0x0  nop
    ctx->pc = 0x22663cu;
    // NOP
}
