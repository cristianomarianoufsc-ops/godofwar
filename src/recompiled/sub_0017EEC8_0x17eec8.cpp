#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EEC8
// Address: 0x17eec8 - 0x17ef30
void sub_0017EEC8_0x17eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EEC8_0x17eec8");
#endif

    ctx->pc = 0x17eec8u;

    // 0x17eec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17eecc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x17eeccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eed4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x17eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17eed8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x17eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17eedc: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EEDCu;
    {
        const bool branch_taken_0x17eedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x17EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEDCu;
            // 0x17eee0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eedc) {
            ctx->pc = 0x17EF24u;
            goto label_17ef24;
        }
    }
    ctx->pc = 0x17EEE4u;
    // 0x17eee4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_17eee8:
    // 0x17eee8: 0x5448000b  bnel        $v0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x17EEE8u;
    {
        const bool branch_taken_0x17eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x17eee8) {
            ctx->pc = 0x17EEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEE8u;
            // 0x17eeec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EF18u;
            goto label_17ef18;
        }
    }
    ctx->pc = 0x17EEF0u;
    // 0x17eef0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17eef4: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EEF4u;
    {
        const bool branch_taken_0x17eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x17eef4) {
            ctx->pc = 0x17EEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEF4u;
            // 0x17eef8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EF18u;
            goto label_17ef18;
        }
    }
    ctx->pc = 0x17EEFCu;
    // 0x17eefc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ef00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ef04: 0x8c44c788  lw          $a0, -0x3878($v0)
    ctx->pc = 0x17ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952840)));
    // 0x17ef08: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17EF08u;
    SET_GPR_U32(ctx, 31, 0x17EF10u);
    ctx->pc = 0x17EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF08u;
            // 0x17ef0c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    }
    ctx->pc = 0x17EF10u;
    // 0x17ef10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17EF10u;
    {
        const bool branch_taken_0x17ef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF10u;
            // 0x17ef14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef10) {
            ctx->pc = 0x17EF28u;
            goto label_17ef28;
        }
    }
    ctx->pc = 0x17EF18u;
label_17ef18:
    // 0x17ef18: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ef1c: 0x5465fff2  bnel        $v1, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17EF1Cu;
    {
        const bool branch_taken_0x17ef1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17ef1c) {
            ctx->pc = 0x17EF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF1Cu;
            // 0x17ef20: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EEE8u;
            runtime->cooperativeGuestYield();
            goto label_17eee8;
        }
    }
    ctx->pc = 0x17EF24u;
label_17ef24:
    // 0x17ef24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ef28:
    // 0x17ef28: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF28u;
            // 0x17ef2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EEE8u: goto label_17eee8;
            case 0x17EF18u: goto label_17ef18;
            case 0x17EF24u: goto label_17ef24;
            case 0x17EF28u: goto label_17ef28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EF30u;
}
