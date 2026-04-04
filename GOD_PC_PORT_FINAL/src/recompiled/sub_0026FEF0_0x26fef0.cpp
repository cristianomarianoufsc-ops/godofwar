#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FEF0
// Address: 0x26fef0 - 0x26ff70
void sub_0026FEF0_0x26fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FEF0_0x26fef0");
#endif

    ctx->pc = 0x26fef0u;

    // 0x26fef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26fef4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26fef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26fefc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ff00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ff04: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x26ff04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26ff08: 0xae000878  sw          $zero, 0x878($s0)
    ctx->pc = 0x26ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 0));
    // 0x26ff0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26ff14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26ff18: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26ff1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x26ff20: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x26ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x26ff24: 0xc09bd4c  jal         func_26F530
    ctx->pc = 0x26FF24u;
    SET_GPR_U32(ctx, 31, 0x26FF2Cu);
    ctx->pc = 0x26FF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF24u;
            // 0x26ff28: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F530u;
    if (runtime->hasFunction(0x26F530u)) {
        auto targetFn = runtime->lookupFunction(0x26F530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF2Cu; }
        if (ctx->pc != 0x26FF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F530_0x26f530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF2Cu; }
        if (ctx->pc != 0x26FF2Cu) { return; }
    }
    ctx->pc = 0x26FF2Cu;
    // 0x26ff2c: 0xae000858  sw          $zero, 0x858($s0)
    ctx->pc = 0x26ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 0));
    // 0x26ff30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x26ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x26ff34: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x26ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x26ff38: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x26ff3c: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x26ff40: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x26ff40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x26ff44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26ff48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26ff48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26ff4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ff4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ff54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26ff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26ff58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ff58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ff5c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x26ff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x26ff60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x26ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x26ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FF64u;
            // 0x26ff68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FF6Cu;
    // 0x26ff6c: 0x0  nop
    ctx->pc = 0x26ff6cu;
    // NOP
}
