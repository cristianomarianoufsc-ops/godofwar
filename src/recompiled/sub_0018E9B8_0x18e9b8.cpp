#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E9B8
// Address: 0x18e9b8 - 0x18ea10
void sub_0018E9B8_0x18e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E9B8_0x18e9b8");
#endif

    ctx->pc = 0x18e9b8u;

    // 0x18e9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e9bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e9c4: 0xc05d656  jal         func_175958
    ctx->pc = 0x18E9C4u;
    SET_GPR_U32(ctx, 31, 0x18E9CCu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    }
    ctx->pc = 0x18E9CCu;
    // 0x18e9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18e9d4: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18e9d8: 0x24a53268  addiu       $a1, $a1, 0x3268
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12904));
    // 0x18e9dc: 0x24c6e7e8  addiu       $a2, $a2, -0x1818
    ctx->pc = 0x18e9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961128));
    // 0x18e9e0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18E9E0u;
    SET_GPR_U32(ctx, 31, 0x18E9E8u);
    ctx->pc = 0x18E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9E0u;
            // 0x18e9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9E8u; }
        if (ctx->pc != 0x18E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9E8u; }
        if (ctx->pc != 0x18E9E8u) { return; }
    }
    ctx->pc = 0x18E9E8u;
    // 0x18e9e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18e9ec: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18e9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9f4: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
    // 0x18e9f8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18E9F8u;
    SET_GPR_U32(ctx, 31, 0x18EA00u);
    ctx->pc = 0x18E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9F8u;
            // 0x18e9fc: 0x24c6e968  addiu       $a2, $a2, -0x1698 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA00u; }
        if (ctx->pc != 0x18EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA00u; }
        if (ctx->pc != 0x18EA00u) { return; }
    }
    ctx->pc = 0x18EA00u;
    // 0x18ea00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ea00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ea04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA08u;
            // 0x18ea0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EA10u;
}
