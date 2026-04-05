#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017ECA8
// Address: 0x17eca8 - 0x17ece0
void sub_0017ECA8_0x17eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ECA8_0x17eca8");
#endif

    ctx->pc = 0x17eca8u;

    // 0x17eca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ecac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ecb0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17ECB0u;
    SET_GPR_U32(ctx, 31, 0x17ECB8u);
    ctx->pc = 0x17ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECB0u;
            // 0x17ecb4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECB8u; }
        if (ctx->pc != 0x17ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECB8u; }
        if (ctx->pc != 0x17ECB8u) { return; }
    }
    ctx->pc = 0x17ECB8u;
    // 0x17ecb8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17ecbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17ecc0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17ECC0u;
    SET_GPR_U32(ctx, 31, 0x17ECC8u);
    ctx->pc = 0x17ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECC0u;
            // 0x17ecc4: 0xac62c784  sw          $v0, -0x387C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECC8u; }
        if (ctx->pc != 0x17ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECC8u; }
        if (ctx->pc != 0x17ECC8u) { return; }
    }
    ctx->pc = 0x17ECC8u;
    // 0x17ecc8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17eccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ecccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ecd0: 0xac62c788  sw          $v0, -0x3878($v1)
    ctx->pc = 0x17ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952840), GPR_U32(ctx, 2));
    // 0x17ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECD4u;
            // 0x17ecd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ECDCu;
    // 0x17ecdc: 0x0  nop
    ctx->pc = 0x17ecdcu;
    // NOP
}
