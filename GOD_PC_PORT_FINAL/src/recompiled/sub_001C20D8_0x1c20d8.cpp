#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C20D8
// Address: 0x1c20d8 - 0x1c2130
void sub_001C20D8_0x1c20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C20D8_0x1c20d8");
#endif

    ctx->pc = 0x1c20d8u;

    // 0x1c20d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c20e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1c20e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20e8: 0x8e02cd20  lw          $v0, -0x32E0($s0)
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954272)));
    // 0x1c20ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C20ECu;
    {
        const bool branch_taken_0x1c20ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c20ec) {
            ctx->pc = 0x1C20F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20ECu;
            // 0x1c20f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C211Cu;
            goto label_1c211c;
        }
    }
    ctx->pc = 0x1C20F4u;
    // 0x1c20f4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1C20F4u;
    SET_GPR_U32(ctx, 31, 0x1C20FCu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20FCu; }
        if (ctx->pc != 0x1C20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20FCu; }
        if (ctx->pc != 0x1C20FCu) { return; }
    }
    ctx->pc = 0x1C20FCu;
    // 0x1c20fc: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1c2100: 0x24050370  addiu       $a1, $zero, 0x370
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x1c2104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c210c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1C210Cu;
    SET_GPR_U32(ctx, 31, 0x1C2114u);
    ctx->pc = 0x1C2110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C210Cu;
            // 0x1c2110: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2114u; }
        if (ctx->pc != 0x1C2114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2114u; }
        if (ctx->pc != 0x1C2114u) { return; }
    }
    ctx->pc = 0x1C2114u;
    // 0x1c2114: 0xae02cd20  sw          $v0, -0x32E0($s0)
    ctx->pc = 0x1c2114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954272), GPR_U32(ctx, 2));
    // 0x1c2118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c211c:
    // 0x1c211c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2120: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2120u;
            // 0x1c2124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C211Cu: goto label_1c211c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2128u;
    // 0x1c2128: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c212c: 0x0  nop
    ctx->pc = 0x1c212cu;
    // NOP
}
