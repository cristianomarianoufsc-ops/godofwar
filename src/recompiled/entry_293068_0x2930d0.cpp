#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293068
// Address: 0x293068 - 0x2930d0
void entry_293068_0x2930d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293068_0x2930d0");
#endif

    ctx->pc = 0x293068u;

    // 0x293068: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29306c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x293070: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x293070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293074u;
    {
        const bool branch_taken_0x293074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293074u;
            // 0x293078: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293074) {
            ctx->pc = 0x293094u;
            goto label_293094;
        }
    }
    ctx->pc = 0x29307Cu;
    // 0x29307c: 0x3e00008  jr          $ra
    ctx->pc = 0x29307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293084u: goto label_293084;
            case 0x293094u: goto label_293094;
            case 0x2930A8u: goto label_2930a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293084u;
label_293084:
    // 0x293084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x293088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29308c: 0x3e00008  jr          $ra
    ctx->pc = 0x29308Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29308Cu;
            // 0x293090: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293084u: goto label_293084;
            case 0x293094u: goto label_293094;
            case 0x2930A8u: goto label_2930a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293094u;
label_293094:
    // 0x293094: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x293094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x293098: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x293098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x29309c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x29309cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2930a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2930a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2930a4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_2930a8:
    // 0x2930a8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2930ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2930b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2930b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2930b4: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2930B4u;
    {
        const bool branch_taken_0x2930b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2930b4) {
            ctx->pc = 0x2930B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2930B4u;
            // 0x2930b8: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x293084u;
            runtime->cooperativeGuestYield();
            goto label_293084;
        }
    }
    ctx->pc = 0x2930BCu;
    // 0x2930bc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2930bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2930c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2930C0u;
    {
        const bool branch_taken_0x2930c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2930C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930C0u;
            // 0x2930c4: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930c0) {
            ctx->pc = 0x2930A8u;
            runtime->cooperativeGuestYield();
            goto label_2930a8;
        }
    }
    ctx->pc = 0x2930C8u;
    // 0x2930c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2930C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2930C8u;
            // 0x2930cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293084u: goto label_293084;
            case 0x293094u: goto label_293094;
            case 0x2930A8u: goto label_2930a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2930D0u;
}
