#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_296848
// Address: 0x296848 - 0x296898
void entry_296848_0x296898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_296848_0x296898");
#endif

    ctx->pc = 0x296848u;

    // 0x296848: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x296848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29684c: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x29684Cu;
    {
        const bool branch_taken_0x29684c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x296850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29684Cu;
            // 0x296850: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29684c) {
            ctx->pc = 0x29687Cu;
            goto label_29687c;
        }
    }
    ctx->pc = 0x296854u;
    // 0x296854: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x296854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x296858: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x296858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29685c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x296860: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x296864: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x296864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x296868: 0x8c6478a4  lw          $a0, 0x78A4($v1)
    ctx->pc = 0x296868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30884)));
    // 0x29686c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x29686cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x296870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x296874: 0x3e00008  jr          $ra
    ctx->pc = 0x296874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296874u;
            // 0x296878: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29687Cu: goto label_29687c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29687Cu;
label_29687c:
    // 0x29687c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x296880: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x296880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296884: 0x8c8378ac  lw          $v1, 0x78AC($a0)
    ctx->pc = 0x296884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30892)));
    // 0x296888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29688c: 0x3e00008  jr          $ra
    ctx->pc = 0x29688Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29688Cu;
            // 0x296890: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29687Cu: goto label_29687c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296894u;
    // 0x296894: 0x0  nop
    ctx->pc = 0x296894u;
    // NOP
}
