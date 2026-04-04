#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_181068
// Address: 0x181068 - 0x1810b8
void entry_181068_0x1810b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_181068_0x1810b8");
#endif

    ctx->pc = 0x181068u;

    // 0x181068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18106c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x18106cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x181070: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181074: 0x24842d40  addiu       $a0, $a0, 0x2D40
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11584));
    // 0x181078: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18107c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181080: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x181080u;
    SET_GPR_U32(ctx, 31, 0x181088u);
    ctx->pc = 0x181084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181080u;
            // 0x181084: 0xae00c74c  sw          $zero, -0x38B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181088u; }
        if (ctx->pc != 0x181088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181088u; }
        if (ctx->pc != 0x181088u) { return; }
    }
    ctx->pc = 0x181088u;
    // 0x181088: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x181088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18108c: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x18108Cu;
    SET_GPR_U32(ctx, 31, 0x181094u);
    ctx->pc = 0x181090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18108Cu;
            // 0x181090: 0x8c44bd38  lw          $a0, -0x42C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181094u; }
        if (ctx->pc != 0x181094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181094u; }
        if (ctx->pc != 0x181094u) { return; }
    }
    ctx->pc = 0x181094u;
    // 0x181094: 0xc05d1da  jal         func_174768
    ctx->pc = 0x181094u;
    SET_GPR_U32(ctx, 31, 0x18109Cu);
    ctx->pc = 0x174768u;
    if (runtime->hasFunction(0x174768u)) {
        auto targetFn = runtime->lookupFunction(0x174768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18109Cu; }
        if (ctx->pc != 0x18109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174768_0x174768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18109Cu; }
        if (ctx->pc != 0x18109Cu) { return; }
    }
    ctx->pc = 0x18109Cu;
    // 0x18109c: 0xc052d5c  jal         func_14B570
    ctx->pc = 0x18109Cu;
    SET_GPR_U32(ctx, 31, 0x1810A4u);
    ctx->pc = 0x14B570u;
    if (runtime->hasFunction(0x14B570u)) {
        auto targetFn = runtime->lookupFunction(0x14B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1810A4u; }
        if (ctx->pc != 0x1810A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B570_0x14b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1810A4u; }
        if (ctx->pc != 0x1810A4u) { return; }
    }
    ctx->pc = 0x1810A4u;
    // 0x1810a4: 0xae00c74c  sw          $zero, -0x38B4($s0)
    ctx->pc = 0x1810a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952780), GPR_U32(ctx, 0));
    // 0x1810a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1810a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1810ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1810acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1810B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1810B0u;
            // 0x1810b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1810B8u;
}
