#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbd90
// Address: 0x1dbd90 - 0x1dbde8
void entry_1dbd90_0x1dbde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbd90_0x1dbde8");
#endif

    ctx->pc = 0x1dbd90u;

    // 0x1dbd90: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1dbd90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1dbd94: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbd94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd98: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1dbd9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dbd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbda0: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x1dbda0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x1dbda4: 0x0  nop
    ctx->pc = 0x1dbda4u;
    // NOP
label_1dbda8:
    // 0x1dbda8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1dbdac: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1dbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbdb0: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1dbdb4: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBDB4u;
    {
        const bool branch_taken_0x1dbdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dbdb4) {
            ctx->pc = 0x1DBDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDB4u;
            // 0x1dbdb8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBDC8u;
            goto label_1dbdc8;
        }
    }
    ctx->pc = 0x1DBDBCu;
    // 0x1dbdbc: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDC0u;
            // 0x1dbdc4: 0x94420010  lhu         $v0, 0x10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBDA8u: goto label_1dbda8;
            case 0x1DBDC8u: goto label_1dbdc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBDC8u;
label_1dbdc8:
    // 0x1dbdc8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbdcc: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x1dbdccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1dbdd0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dbdd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DBDD4u;
    {
        const bool branch_taken_0x1dbdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDD4u;
            // 0x1dbdd8: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd4) {
            ctx->pc = 0x1DBDA8u;
            runtime->cooperativeGuestYield();
            goto label_1dbda8;
        }
    }
    ctx->pc = 0x1DBDDCu;
    // 0x1dbddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDDCu;
            // 0x1dbde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBDA8u: goto label_1dbda8;
            case 0x1DBDC8u: goto label_1dbdc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBDE4u;
    // 0x1dbde4: 0x0  nop
    ctx->pc = 0x1dbde4u;
    // NOP
}
