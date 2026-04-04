#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243dc0
// Address: 0x243dc0 - 0x243ec0
void entry_243dc0_0x243ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243dc0_0x243ec0");
#endif

    ctx->pc = 0x243dc0u;

    // 0x243dc0: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x243dc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x243dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x243dcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_243dd0:
    // 0x243dd0: 0x0  nop
    ctx->pc = 0x243dd0u;
    // NOP
    // 0x243dd4: 0x0  nop
    ctx->pc = 0x243dd4u;
    // NOP
    // 0x243dd8: 0x0  nop
    ctx->pc = 0x243dd8u;
    // NOP
    // 0x243ddc: 0x0  nop
    ctx->pc = 0x243ddcu;
    // NOP
    // 0x243de0: 0x0  nop
    ctx->pc = 0x243de0u;
    // NOP
    // 0x243de4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x243DE4u;
    {
        const bool branch_taken_0x243de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243de4) {
            ctx->pc = 0x243DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243DE4u;
            // 0x243de8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243DD0u;
            runtime->cooperativeGuestYield();
            goto label_243dd0;
        }
    }
    ctx->pc = 0x243DECu;
    // 0x243dec: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x243decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x243df0: 0x3e00008  jr          $ra
    ctx->pc = 0x243DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DF0u;
            // 0x243df4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243DD0u: goto label_243dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243DF8u;
    // 0x243df8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243dfc: 0x0  nop
    ctx->pc = 0x243dfcu;
    // NOP
    // 0x243e00: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x243e04: 0x0  nop
    ctx->pc = 0x243e04u;
    // NOP
    // 0x243e08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243e0c: 0x0  nop
    ctx->pc = 0x243e0cu;
    // NOP
    // 0x243e10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243e14: 0x0  nop
    ctx->pc = 0x243e14u;
    // NOP
    // 0x243e18: 0xa4820076  sh          $v0, 0x76($a0)
    ctx->pc = 0x243e18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x243e1c: 0x0  nop
    ctx->pc = 0x243e1cu;
    // NOP
    // 0x243e20: 0xa482007a  sh          $v0, 0x7A($a0)
    ctx->pc = 0x243e20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x243e24: 0x0  nop
    ctx->pc = 0x243e24u;
    // NOP
    // 0x243e28: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x243e2c: 0x0  nop
    ctx->pc = 0x243e2cu;
    // NOP
    // 0x243e30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x243e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x243e34: 0x0  nop
    ctx->pc = 0x243e34u;
    // NOP
    // 0x243e38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x243e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x243e3c: 0x0  nop
    ctx->pc = 0x243e3cu;
    // NOP
    // 0x243e40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x243e44: 0x0  nop
    ctx->pc = 0x243e44u;
    // NOP
    // 0x243e48: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x243e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x243e4c: 0x0  nop
    ctx->pc = 0x243e4cu;
    // NOP
    // 0x243e50: 0xa4820072  sh          $v0, 0x72($a0)
    ctx->pc = 0x243e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x243e54: 0x0  nop
    ctx->pc = 0x243e54u;
    // NOP
    // 0x243e58: 0xa4820072  sh          $v0, 0x72($a0)
    ctx->pc = 0x243e58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x243e5c: 0x0  nop
    ctx->pc = 0x243e5cu;
    // NOP
    // 0x243e60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243e64: 0x0  nop
    ctx->pc = 0x243e64u;
    // NOP
    // 0x243e68: 0x0  nop
    ctx->pc = 0x243e68u;
    // NOP
    // 0x243e6c: 0x0  nop
    ctx->pc = 0x243e6cu;
    // NOP
    // 0x243e70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x243e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x243e74: 0x0  nop
    ctx->pc = 0x243e74u;
    // NOP
    // 0x243e78: 0xe44c016c  swc1        $f12, 0x16C($v0)
    ctx->pc = 0x243e78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
    // 0x243e7c: 0x0  nop
    ctx->pc = 0x243e7cu;
    // NOP
    // 0x243e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243e84: 0x0  nop
    ctx->pc = 0x243e84u;
    // NOP
    // 0x243e88: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x243e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x243e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x243E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E8Cu;
            // 0x243e90: 0x8442009c  lh          $v0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243DD0u: goto label_243dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243E94u;
    // 0x243e94: 0x0  nop
    ctx->pc = 0x243e94u;
    // NOP
    // 0x243e98: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x243e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x243E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E9Cu;
            // 0x243ea0: 0x8442009e  lh          $v0, 0x9E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 158)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243DD0u: goto label_243dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243EA4u;
    // 0x243ea4: 0x0  nop
    ctx->pc = 0x243ea4u;
    // NOP
    // 0x243ea8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x243ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x243eac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x243eb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x243eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x243EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EB4u;
            // 0x243eb8: 0x844200a0  lh          $v0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243DD0u: goto label_243dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243EBCu;
    // 0x243ebc: 0x0  nop
    ctx->pc = 0x243ebcu;
    // NOP
}
