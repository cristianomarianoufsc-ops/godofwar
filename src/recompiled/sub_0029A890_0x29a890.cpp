#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A890
// Address: 0x29a890 - 0x29a8d8
void sub_0029A890_0x29a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A890_0x29a890");
#endif

    ctx->pc = 0x29a890u;

    // 0x29a890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a894: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29a894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a898: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x29a898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x29a89c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a8a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a8a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x29a8ac: 0x2404fffa  addiu       $a0, $zero, -0x6
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x29a8b0: 0xc0a5014  jal         func_294050
    ctx->pc = 0x29A8B0u;
    SET_GPR_U32(ctx, 31, 0x29A8B8u);
    ctx->pc = 0x29A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A8B0u;
            // 0x29a8b4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (runtime->hasFunction(0x294050u)) {
        auto targetFn = runtime->lookupFunction(0x294050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A8B8u; }
        if (ctx->pc != 0x29A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294050_0x2940a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A8B8u; }
        if (ctx->pc != 0x29A8B8u) { return; }
    }
    ctx->pc = 0x29A8B8u;
    // 0x29a8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A8BCu;
            // 0x29a8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A8C4u;
    // 0x29a8c4: 0x0  nop
    ctx->pc = 0x29a8c4u;
    // NOP
    // 0x29a8c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a8cc: 0x0  nop
    ctx->pc = 0x29a8ccu;
    // NOP
    // 0x29a8d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a8d4: 0x0  nop
    ctx->pc = 0x29a8d4u;
    // NOP
}
