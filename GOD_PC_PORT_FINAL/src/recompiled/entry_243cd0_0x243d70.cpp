#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243cd0
// Address: 0x243cd0 - 0x243d70
void entry_243cd0_0x243d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243cd0_0x243d70");
#endif

    ctx->pc = 0x243cd0u;

    // 0x243cd0: 0x2483005c  addiu       $v1, $a0, 0x5C
    ctx->pc = 0x243cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x243cd4: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x243cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x243cd8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x243cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x243cdc: 0x24850078  addiu       $a1, $a0, 0x78
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x243ce0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x243ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x243ce4: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x243ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x243ce8: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x243ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x243cec: 0x24860094  addiu       $a2, $a0, 0x94
    ctx->pc = 0x243cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x243cf0: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x243cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x243cf4: 0x24e720f0  addiu       $a3, $a3, 0x20F0
    ctx->pc = 0x243cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8432));
    // 0x243cf8: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x243cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x243cfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d00: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x243d00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d04: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x243d04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d08: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x243d08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d0c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x243d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d10: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x243d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d14: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x243d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x243d18: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x243d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x243d1c: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x243d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d20: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x243d20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d24: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x243d24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d28: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x243d28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d2c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x243d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d30: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x243d30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d34: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x243d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x243d38: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x243d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x243d3c: 0xa4c00016  sh          $zero, 0x16($a2)
    ctx->pc = 0x243d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d40: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x243d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243d44: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243d48: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243d4c: 0xa4c00004  sh          $zero, 0x4($a2)
    ctx->pc = 0x243d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d50: 0xa4c00006  sh          $zero, 0x6($a2)
    ctx->pc = 0x243d50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d54: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x243d54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x243d58: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x243d58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d5c: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x243d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x243d60: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x243d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x243d64: 0x3e00008  jr          $ra
    ctx->pc = 0x243D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D64u;
            // 0x243d68: 0xa4c00014  sh          $zero, 0x14($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243D6Cu;
    // 0x243d6c: 0x0  nop
    ctx->pc = 0x243d6cu;
    // NOP
}
