#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AF50
// Address: 0x16af50 - 0x16afa0
void sub_0016AF50_0x16af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF50_0x16af50");
#endif

    ctx->pc = 0x16af50u;

    // 0x16af50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16af54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16af54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16af5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16af60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16af60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af64: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x16af64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x16af68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x16af6c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16af70: 0x8c64f198  lw          $a0, -0xE68($v1)
    ctx->pc = 0x16af70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963608)));
    // 0x16af74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16af78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16af78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16af7c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16AF7Cu;
    SET_GPR_U32(ctx, 31, 0x16AF84u);
    ctx->pc = 0x16AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF7Cu;
            // 0x16af80: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF84u; }
        if (ctx->pc != 0x16AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF84u; }
        if (ctx->pc != 0x16AF84u) { return; }
    }
    ctx->pc = 0x16AF84u;
    // 0x16af84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16af84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16af88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16af88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16af90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af94: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF94u;
            // 0x16af98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AF9Cu;
    // 0x16af9c: 0x0  nop
    ctx->pc = 0x16af9cu;
    // NOP
}
