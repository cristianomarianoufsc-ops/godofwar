#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001810E0
// Address: 0x1810e0 - 0x181130
void sub_001810E0_0x1810e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810E0_0x1810e0");
#endif

    ctx->pc = 0x1810e0u;

    // 0x1810e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1810e4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1810e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1810e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1810e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1810ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1810ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1810f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1810f4: 0x8c900028  lw          $s0, 0x28($a0)
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1810f8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1810F8u;
    SET_GPR_U32(ctx, 31, 0x181100u);
    ctx->pc = 0x1810FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1810F8u;
            // 0x1810fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181100u; }
        if (ctx->pc != 0x181100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181100u; }
        if (ctx->pc != 0x181100u) { return; }
    }
    ctx->pc = 0x181100u;
    // 0x181100: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x181100u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x181104: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x181108: 0x8c84c74c  lw          $a0, -0x38B4($a0)
    ctx->pc = 0x181108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952780)));
    // 0x18110c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181118: 0xc05fb9c  jal         func_17EE70
    ctx->pc = 0x181118u;
    SET_GPR_U32(ctx, 31, 0x181120u);
    ctx->pc = 0x18111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181118u;
            // 0x18111c: 0xa4430010  sh          $v1, 0x10($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EE70u;
    if (runtime->hasFunction(0x17EE70u)) {
        auto targetFn = runtime->lookupFunction(0x17EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181120u; }
        if (ctx->pc != 0x181120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EE70_0x17ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181120u; }
        if (ctx->pc != 0x181120u) { return; }
    }
    ctx->pc = 0x181120u;
    // 0x181120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181128: 0x3e00008  jr          $ra
    ctx->pc = 0x181128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181128u;
            // 0x18112c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181130u;
}
