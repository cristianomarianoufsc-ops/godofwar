#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297CE0
// Address: 0x297ce0 - 0x297d38
void sub_00297CE0_0x297ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297CE0_0x297ce0");
#endif

    ctx->pc = 0x297ce0u;

    // 0x297ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297ce4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297ce8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x297ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297cec: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x297cecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x297cf0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297cf4: 0x8e024b4c  lw          $v0, 0x4B4C($s0)
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19276)));
    // 0x297cf8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x297CF8u;
    {
        const bool branch_taken_0x297cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297CF8u;
            // 0x297cfc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cf8) {
            ctx->pc = 0x297D28u;
            goto label_297d28;
        }
    }
    ctx->pc = 0x297D00u;
    // 0x297d00: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x297d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x297d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297d08: 0x24426b08  addiu       $v0, $v0, 0x6B08
    ctx->pc = 0x297d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27400));
    // 0x297d0c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x297d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x297d10: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x297d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x297d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d18: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x297D18u;
    SET_GPR_U32(ctx, 31, 0x297D20u);
    ctx->pc = 0x297D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D18u;
            // 0x297d1c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D20u; }
        if (ctx->pc != 0x297D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D20u; }
        if (ctx->pc != 0x297D20u) { return; }
    }
    ctx->pc = 0x297D20u;
    // 0x297d20: 0xae024b4c  sw          $v0, 0x4B4C($s0)
    ctx->pc = 0x297d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19276), GPR_U32(ctx, 2));
    // 0x297d24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_297d28:
    // 0x297d28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x297D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D2Cu;
            // 0x297d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297D28u: goto label_297d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297D34u;
    // 0x297d34: 0x0  nop
    ctx->pc = 0x297d34u;
    // NOP
}
