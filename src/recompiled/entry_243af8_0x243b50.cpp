#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243af8
// Address: 0x243af8 - 0x243b50
void entry_243af8_0x243b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243af8_0x243b50");
#endif

    ctx->pc = 0x243af8u;

    // 0x243af8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243afc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b00: 0x246321b8  addiu       $v1, $v1, 0x21B8
    ctx->pc = 0x243b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8632));
    // 0x243b04: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x243b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243b08: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x243b0c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243b10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x243b14: 0x3e00008  jr          $ra
    ctx->pc = 0x243B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B14u;
            // 0x243b18: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243B1Cu;
    // 0x243b1c: 0x0  nop
    ctx->pc = 0x243b1cu;
    // NOP
    // 0x243b20: 0x8c4210b8  lw          $v0, 0x10B8($v0)
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4280)));
    // 0x243b24: 0x0  nop
    ctx->pc = 0x243b24u;
    // NOP
    // 0x243b28: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x243b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x243b2c: 0x0  nop
    ctx->pc = 0x243b2cu;
    // NOP
    // 0x243b30: 0xac8203e4  sw          $v0, 0x3E4($a0)
    ctx->pc = 0x243b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 2));
    // 0x243b34: 0x0  nop
    ctx->pc = 0x243b34u;
    // NOP
    // 0x243b38: 0x8c421120  lw          $v0, 0x1120($v0)
    ctx->pc = 0x243b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
    // 0x243b3c: 0x0  nop
    ctx->pc = 0x243b3cu;
    // NOP
    // 0x243b40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x243b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x243b44: 0x0  nop
    ctx->pc = 0x243b44u;
    // NOP
    // 0x243b48: 0xac820360  sw          $v0, 0x360($a0)
    ctx->pc = 0x243b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 2));
    // 0x243b4c: 0x0  nop
    ctx->pc = 0x243b4cu;
    // NOP
}
