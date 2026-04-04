#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f5e0
// Address: 0x13f5e0 - 0x13f648
void entry_13f5e0_0x13f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f5e0_0x13f648");
#endif

    ctx->pc = 0x13f5e0u;

    // 0x13f5e0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f5e4: 0x8c66f168  lw          $a2, -0xE98($v1)
    ctx->pc = 0x13f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x13f5e8: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x13f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x13f5ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F5ECu;
    {
        const bool branch_taken_0x13f5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5ECu;
            // 0x13f5f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5ec) {
            ctx->pc = 0x13F618u;
            goto label_13f618;
        }
    }
    ctx->pc = 0x13F5F4u;
    // 0x13f5f4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x13f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_13f5f8:
    // 0x13f5f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13f5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13f5fc: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x13f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x13f600: 0x0  nop
    ctx->pc = 0x13f600u;
    // NOP
    // 0x13f604: 0x0  nop
    ctx->pc = 0x13f604u;
    // NOP
    // 0x13f608: 0x0  nop
    ctx->pc = 0x13f608u;
    // NOP
    // 0x13f60c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F60Cu;
    {
        const bool branch_taken_0x13f60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f60c) {
            ctx->pc = 0x13F610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F60Cu;
            // 0x13f610: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F5F8u;
            runtime->cooperativeGuestYield();
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F614u;
    // 0x13f614: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_13f618:
    // 0x13f618: 0xac66f168  sw          $a2, -0xE98($v1)
    ctx->pc = 0x13f618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 6));
    // 0x13f61c: 0x8c441018  lw          $a0, 0x1018($v0)
    ctx->pc = 0x13f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4120)));
    // 0x13f620: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13f624: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x13f624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13f628: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f62c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x13f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13f630: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13f634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13f638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13f63c: 0x8ca2101c  lw          $v0, 0x101C($a1)
    ctx->pc = 0x13f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4124)));
    // 0x13f640: 0x3e00008  jr          $ra
    ctx->pc = 0x13F640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F640u;
            // 0x13f644: 0xc21023  subu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F618u: goto label_13f618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F648u;
}
