#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2976c8
// Address: 0x2976c8 - 0x297740
void entry_2976c8_0x297740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2976c8_0x297740");
#endif

    ctx->pc = 0x2976c8u;

    // 0x2976c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2976c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2976cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2976ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2976d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2976d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2976d4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2976d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2976d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2976d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2976dc: 0x8e024b50  lw          $v0, 0x4B50($s0)
    ctx->pc = 0x2976dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19280)));
    // 0x2976e0: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2976E0u;
    {
        const bool branch_taken_0x2976e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2976E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2976E0u;
            // 0x2976e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976e0) {
            ctx->pc = 0x29772Cu;
            goto label_29772c;
        }
    }
    ctx->pc = 0x2976E8u;
    // 0x2976e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2976ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2976ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2976f0: 0x24426a80  addiu       $v0, $v0, 0x6A80
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27264));
    // 0x2976f4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2976f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2976f8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2976f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2976fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2976fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297700: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x297700u;
    SET_GPR_U32(ctx, 31, 0x297708u);
    ctx->pc = 0x297704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297700u;
            // 0x297704: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297708u; }
        if (ctx->pc != 0x297708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297708u; }
        if (ctx->pc != 0x297708u) { return; }
    }
    ctx->pc = 0x297708u;
    // 0x297708: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x297708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x29770c: 0xae024b50  sw          $v0, 0x4B50($s0)
    ctx->pc = 0x29770cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19280), GPR_U32(ctx, 2));
    // 0x297710: 0x24636a90  addiu       $v1, $v1, 0x6A90
    ctx->pc = 0x297710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27280));
    // 0x297714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297718: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x297718u;
    SET_GPR_U32(ctx, 31, 0x297720u);
    ctx->pc = 0x29771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297718u;
            // 0x29771c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297720u; }
        if (ctx->pc != 0x297720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297720u; }
        if (ctx->pc != 0x297720u) { return; }
    }
    ctx->pc = 0x297720u;
    // 0x297720: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x297724: 0xac624b54  sw          $v0, 0x4B54($v1)
    ctx->pc = 0x297724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19284), GPR_U32(ctx, 2));
    // 0x297728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29772c:
    // 0x29772c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297730: 0x3e00008  jr          $ra
    ctx->pc = 0x297730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297730u;
            // 0x297734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29772Cu: goto label_29772c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297738u;
    // 0x297738: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x297738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29773c: 0x0  nop
    ctx->pc = 0x29773cu;
    // NOP
}
