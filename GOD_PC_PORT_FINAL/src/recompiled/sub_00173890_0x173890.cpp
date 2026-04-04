#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173890
// Address: 0x173890 - 0x1738f0
void sub_00173890_0x173890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173890_0x173890");
#endif

    ctx->pc = 0x173890u;

    // 0x173890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173894: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x173894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17389c: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x17389cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1738a0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x1738a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1738a8: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x1738a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x1738ac: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1738b0: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x1738b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x1738b4: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x1738b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x1738b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1738b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1738bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1738bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1738c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1738c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1738c4: 0xc09b260  jal         func_26C980
    ctx->pc = 0x1738C4u;
    SET_GPR_U32(ctx, 31, 0x1738CCu);
    ctx->pc = 0x1738C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1738C4u;
            // 0x1738c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738CCu; }
        if (ctx->pc != 0x1738CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738CCu; }
        if (ctx->pc != 0x1738CCu) { return; }
    }
    ctx->pc = 0x1738CCu;
    // 0x1738cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1738ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1738d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1738D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1738D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738D0u;
            // 0x1738d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1738D8u;
    // 0x1738d8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1738d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1738dc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1738dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1738e0: 0xa0a00019  sb          $zero, 0x19($a1)
    ctx->pc = 0x1738e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x1738e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1738E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1738E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738E4u;
            // 0x1738e8: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1738ECu;
    // 0x1738ec: 0x0  nop
    ctx->pc = 0x1738ecu;
    // NOP
}
