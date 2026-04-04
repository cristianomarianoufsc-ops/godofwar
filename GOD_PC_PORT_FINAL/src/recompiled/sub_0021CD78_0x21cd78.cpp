#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CD78
// Address: 0x21cd78 - 0x21cdb8
void sub_0021CD78_0x21cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD78_0x21cd78");
#endif

    ctx->pc = 0x21cd78u;

    // 0x21cd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cd80: 0xc087622  jal         func_21D888
    ctx->pc = 0x21CD80u;
    SET_GPR_U32(ctx, 31, 0x21CD88u);
    ctx->pc = 0x21CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD80u;
            // 0x21cd84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D888u;
    if (runtime->hasFunction(0x21D888u)) {
        auto targetFn = runtime->lookupFunction(0x21D888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD88u; }
        if (ctx->pc != 0x21CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D888_0x21d888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CD88u; }
        if (ctx->pc != 0x21CD88u) { return; }
    }
    ctx->pc = 0x21CD88u;
    // 0x21cd88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cd8c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x21cd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x21cd90: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21cd94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21cd98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cda0: 0xac65e574  sw          $a1, -0x1A8C($v1)
    ctx->pc = 0x21cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960500), GPR_U32(ctx, 5));
    // 0x21cda4: 0xac44e560  sw          $a0, -0x1AA0($v0)
    ctx->pc = 0x21cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
    // 0x21cda8: 0xacc5f1f0  sw          $a1, -0xE10($a2)
    ctx->pc = 0x21cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963696), GPR_U32(ctx, 5));
    // 0x21cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDACu;
            // 0x21cdb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CDB4u;
    // 0x21cdb4: 0x0  nop
    ctx->pc = 0x21cdb4u;
    // NOP
}
