#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002216C8
// Address: 0x2216c8 - 0x221720
void sub_002216C8_0x2216c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002216C8_0x2216c8");
#endif

    ctx->pc = 0x2216c8u;

    // 0x2216c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2216c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2216cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2216ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2216d0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2216d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2216d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2216d8: 0x8e021190  lw          $v0, 0x1190($s0)
    ctx->pc = 0x2216d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
    // 0x2216dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2216DCu;
    {
        const bool branch_taken_0x2216dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2216dc) {
            ctx->pc = 0x2216E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2216DCu;
            // 0x2216e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22170Cu;
            goto label_22170c;
        }
    }
    ctx->pc = 0x2216E4u;
    // 0x2216e4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x2216E4u;
    SET_GPR_U32(ctx, 31, 0x2216ECu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2216ECu; }
        if (ctx->pc != 0x2216ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2216ECu; }
        if (ctx->pc != 0x2216ECu) { return; }
    }
    ctx->pc = 0x2216ECu;
    // 0x2216ec: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2216f0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2216f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2216f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2216f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2216f8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2216f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2216fc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x2216FCu;
    SET_GPR_U32(ctx, 31, 0x221704u);
    ctx->pc = 0x221700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2216FCu;
            // 0x221700: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221704u; }
        if (ctx->pc != 0x221704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221704u; }
        if (ctx->pc != 0x221704u) { return; }
    }
    ctx->pc = 0x221704u;
    // 0x221704: 0xae021190  sw          $v0, 0x1190($s0)
    ctx->pc = 0x221704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4496), GPR_U32(ctx, 2));
    // 0x221708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x221708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22170c:
    // 0x22170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221710: 0x3e00008  jr          $ra
    ctx->pc = 0x221710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221710u;
            // 0x221714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22170Cu: goto label_22170c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221718u;
    // 0x221718: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x221718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22171c: 0x0  nop
    ctx->pc = 0x22171cu;
    // NOP
}
