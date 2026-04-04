#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8E30
// Address: 0x1a8e30 - 0x1a8e60
void sub_001A8E30_0x1a8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E30_0x1a8e30");
#endif

    ctx->pc = 0x1a8e30u;

    // 0x1a8e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8e34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a8e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8e3c: 0x2442a8c8  addiu       $v0, $v0, -0x5738
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944968));
    // 0x1a8e40: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a8e44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8E44u;
    {
        const bool branch_taken_0x1a8e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E44u;
            // 0x1a8e48: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e44) {
            ctx->pc = 0x1A8E54u;
            goto label_1a8e54;
        }
    }
    ctx->pc = 0x1A8E4Cu;
    // 0x1a8e4c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1A8E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E54u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E54u; }
        if (ctx->pc != 0x1A8E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E54u; }
        if (ctx->pc != 0x1A8E54u) { return; }
    }
    ctx->pc = 0x1A8E54u;
label_1a8e54:
    // 0x1a8e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E58u;
            // 0x1a8e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8E54u: goto label_1a8e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8E60u;
}
