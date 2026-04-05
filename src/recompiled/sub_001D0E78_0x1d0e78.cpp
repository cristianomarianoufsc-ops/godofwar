#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0E78
// Address: 0x1d0e78 - 0x1d0f18
void sub_001D0E78_0x1d0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E78_0x1d0e78");
#endif

    ctx->pc = 0x1d0e78u;

    // 0x1d0e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e7c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d0e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d0e80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e8c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1d0e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1d0e90: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1D0E90u;
    SET_GPR_U32(ctx, 31, 0x1D0E98u);
    ctx->pc = 0x1D0E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E90u;
            // 0x1d0e94: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E98u; }
        if (ctx->pc != 0x1D0E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E98u; }
        if (ctx->pc != 0x1D0E98u) { return; }
    }
    ctx->pc = 0x1D0E98u;
    // 0x1d0e98: 0xa2020082  sb          $v0, 0x82($s0)
    ctx->pc = 0x1d0e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EA4u;
            // 0x1d0ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0EACu;
    // 0x1d0eac: 0x0  nop
    ctx->pc = 0x1d0eacu;
    // NOP
    // 0x1d0eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0eb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d0eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0ebc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1d0ec0: 0x8c42f190  lw          $v0, -0xE70($v0)
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x1d0ec4: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1d0ec8: 0x8c6577b4  lw          $a1, 0x77B4($v1)
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30644)));
    // 0x1d0ecc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d0ed0: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d0ed4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1d0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d0ed8: 0x94420074  lhu         $v0, 0x74($v0)
    ctx->pc = 0x1d0ed8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1d0edc: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1d0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d0ee0: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x1d0ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d0ee4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1d0ee8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1d0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1d0eec: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1d0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1d0ef0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d0ef4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d0ef8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d0efc: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D0EFCu;
    SET_GPR_U32(ctx, 31, 0x1D0F04u);
    ctx->pc = 0x1D0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EFCu;
            // 0x1d0f00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F04u; }
        if (ctx->pc != 0x1D0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F04u; }
        if (ctx->pc != 0x1D0F04u) { return; }
    }
    ctx->pc = 0x1D0F04u;
    // 0x1d0f04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F0Cu;
            // 0x1d0f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0F14u;
    // 0x1d0f14: 0x0  nop
    ctx->pc = 0x1d0f14u;
    // NOP
}
