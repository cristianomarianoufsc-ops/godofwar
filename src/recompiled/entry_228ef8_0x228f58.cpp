#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_228ef8
// Address: 0x228ef8 - 0x228f58
void entry_228ef8_0x228f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_228ef8_0x228f58");
#endif

    ctx->pc = 0x228ef8u;

    // 0x228ef8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x228efc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x228efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x228f00: 0x244291f0  addiu       $v0, $v0, -0x6E10
    ctx->pc = 0x228f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
    // 0x228f04: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x228f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x228f08: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x228f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x228f0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x228f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x228f14: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x228f14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x228f18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228f1c: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x228f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x228f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228f24: 0x0  nop
    ctx->pc = 0x228f24u;
    // NOP
label_228f28:
    // 0x228f28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x228f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x228f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x228f30: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x228f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x228f34: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x228f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x228f38: 0x0  nop
    ctx->pc = 0x228f38u;
    // NOP
    // 0x228f3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228F3Cu;
    {
        const bool branch_taken_0x228f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F3Cu;
            // 0x228f40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f3c) {
            ctx->pc = 0x228F28u;
            runtime->cooperativeGuestYield();
            goto label_228f28;
        }
    }
    ctx->pc = 0x228F44u;
    // 0x228f44: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x228f48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228f4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x228f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f50: 0x3e00008  jr          $ra
    ctx->pc = 0x228F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F50u;
            // 0x228f54: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228F28u: goto label_228f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228F58u;
}
