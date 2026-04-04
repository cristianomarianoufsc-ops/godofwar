#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002069E8
// Address: 0x2069e8 - 0x206a70
void sub_002069E8_0x2069e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002069E8_0x2069e8");
#endif

    ctx->pc = 0x2069e8u;

    // 0x2069e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2069e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2069ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2069ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2069f0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2069f4: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x2069f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x2069f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2069f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2069fc: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2069FCu;
    {
        const bool branch_taken_0x2069fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x206A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069FCu;
            // 0x206a00: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069fc) {
            ctx->pc = 0x206A60u;
            goto label_206a60;
        }
    }
    ctx->pc = 0x206A04u;
    // 0x206a04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x206a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x206a08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x206a0c: 0x0  nop
    ctx->pc = 0x206a0cu;
    // NOP
label_206a10:
    // 0x206a10: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206a14: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x206a14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x206a18: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x206a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x206a1c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x206a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x206a20: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x206a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x206a24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x206a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x206a28: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x206a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x206a2c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x206a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x206a30: 0x8c847910  lw          $a0, 0x7910($a0)
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30992)));
    // 0x206a34: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x206a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x206a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x206a3c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x206a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206a40: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x206a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x206a44: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x206a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x206a48: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x206A48u;
    SET_GPR_U32(ctx, 31, 0x206A50u);
    ctx->pc = 0x206A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206A48u;
            // 0x206a4c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A50u; }
        if (ctx->pc != 0x206A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A50u; }
        if (ctx->pc != 0x206A50u) { return; }
    }
    ctx->pc = 0x206A50u;
    // 0x206a50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x206a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x206a54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a58: 0x5462ffed  bnel        $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x206A58u;
    {
        const bool branch_taken_0x206a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206a58) {
            ctx->pc = 0x206A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206A58u;
            // 0x206a5c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206A10u;
            runtime->cooperativeGuestYield();
            goto label_206a10;
        }
    }
    ctx->pc = 0x206A60u;
label_206a60:
    // 0x206a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a64: 0x3e00008  jr          $ra
    ctx->pc = 0x206A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A64u;
            // 0x206a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206A10u: goto label_206a10;
            case 0x206A60u: goto label_206a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206A6Cu;
    // 0x206a6c: 0x0  nop
    ctx->pc = 0x206a6cu;
    // NOP
}
