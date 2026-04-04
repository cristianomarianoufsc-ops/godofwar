#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002266A8
// Address: 0x2266a8 - 0x226700
void sub_002266A8_0x2266a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266A8_0x2266a8");
#endif

    ctx->pc = 0x2266a8u;

    // 0x2266a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2266ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2266acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2266b0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2266b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2266b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2266b8: 0x8e0211ac  lw          $v0, 0x11AC($s0)
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
    // 0x2266bc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2266BCu;
    {
        const bool branch_taken_0x2266bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2266bc) {
            ctx->pc = 0x2266C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2266BCu;
            // 0x2266c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2266ECu;
            goto label_2266ec;
        }
    }
    ctx->pc = 0x2266C4u;
    // 0x2266c4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x2266C4u;
    SET_GPR_U32(ctx, 31, 0x2266CCu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266CCu; }
        if (ctx->pc != 0x2266CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266CCu; }
        if (ctx->pc != 0x2266CCu) { return; }
    }
    ctx->pc = 0x2266CCu;
    // 0x2266cc: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2266ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2266d0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2266d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2266d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2266d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2266dc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x2266DCu;
    SET_GPR_U32(ctx, 31, 0x2266E4u);
    ctx->pc = 0x2266E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2266DCu;
            // 0x2266e0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266E4u; }
        if (ctx->pc != 0x2266E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266E4u; }
        if (ctx->pc != 0x2266E4u) { return; }
    }
    ctx->pc = 0x2266E4u;
    // 0x2266e4: 0xae0211ac  sw          $v0, 0x11AC($s0)
    ctx->pc = 0x2266e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4524), GPR_U32(ctx, 2));
    // 0x2266e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2266e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2266ec:
    // 0x2266ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2266F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2266F0u;
            // 0x2266f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2266ECu: goto label_2266ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2266F8u;
    // 0x2266f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2266fc: 0x0  nop
    ctx->pc = 0x2266fcu;
    // NOP
}
