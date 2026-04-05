#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d6ab8
// Address: 0x1d6ab8 - 0x1d6b40
void entry_1d6ab8_0x1d6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d6ab8_0x1d6b40");
#endif

    ctx->pc = 0x1d6ab8u;

    // 0x1d6ab8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d6abc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d6ac0: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x1d6ac4: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1d6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d6ac8: 0x9443006a  lhu         $v1, 0x6A($v0)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1d6acc: 0x9445006c  lhu         $a1, 0x6C($v0)
    ctx->pc = 0x1d6accu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1d6ad0: 0x9446006e  lhu         $a2, 0x6E($v0)
    ctx->pc = 0x1d6ad0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 110)));
    // 0x1d6ad4: 0x94470070  lhu         $a3, 0x70($v0)
    ctx->pc = 0x1d6ad4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1d6ad8: 0x94480072  lhu         $t0, 0x72($v0)
    ctx->pc = 0x1d6ad8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1d6adc: 0x94490074  lhu         $t1, 0x74($v0)
    ctx->pc = 0x1d6adcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1d6ae0: 0xac8301d4  sw          $v1, 0x1D4($a0)
    ctx->pc = 0x1d6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
    // 0x1d6ae4: 0xac8501d8  sw          $a1, 0x1D8($a0)
    ctx->pc = 0x1d6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 5));
    // 0x1d6ae8: 0xac8601dc  sw          $a2, 0x1DC($a0)
    ctx->pc = 0x1d6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 6));
    // 0x1d6aec: 0xac8701e0  sw          $a3, 0x1E0($a0)
    ctx->pc = 0x1d6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 7));
    // 0x1d6af0: 0xac8801e4  sw          $t0, 0x1E4($a0)
    ctx->pc = 0x1d6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 8));
    // 0x1d6af4: 0xac8901e8  sw          $t1, 0x1E8($a0)
    ctx->pc = 0x1d6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 9));
    // 0x1d6af8: 0x90430076  lbu         $v1, 0x76($v0)
    ctx->pc = 0x1d6af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 118)));
    // 0x1d6afc: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x1d6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x1d6b00: 0x90430077  lbu         $v1, 0x77($v0)
    ctx->pc = 0x1d6b00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 119)));
    // 0x1d6b04: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1d6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1d6b08: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x1d6b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d6b0c: 0xac8301ec  sw          $v1, 0x1EC($a0)
    ctx->pc = 0x1d6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 3));
    // 0x1d6b10: 0x90430079  lbu         $v1, 0x79($v0)
    ctx->pc = 0x1d6b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 121)));
    // 0x1d6b14: 0xac8301f0  sw          $v1, 0x1F0($a0)
    ctx->pc = 0x1d6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 3));
    // 0x1d6b18: 0x9043007a  lbu         $v1, 0x7A($v0)
    ctx->pc = 0x1d6b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x1d6b1c: 0xac8301f4  sw          $v1, 0x1F4($a0)
    ctx->pc = 0x1d6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 3));
    // 0x1d6b20: 0x9043007b  lbu         $v1, 0x7B($v0)
    ctx->pc = 0x1d6b20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 123)));
    // 0x1d6b24: 0xac8301f8  sw          $v1, 0x1F8($a0)
    ctx->pc = 0x1d6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 3));
    // 0x1d6b28: 0x9043007c  lbu         $v1, 0x7C($v0)
    ctx->pc = 0x1d6b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d6b2c: 0xac8301fc  sw          $v1, 0x1FC($a0)
    ctx->pc = 0x1d6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 3));
    // 0x1d6b30: 0x9042007d  lbu         $v0, 0x7D($v0)
    ctx->pc = 0x1d6b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
    // 0x1d6b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B34u;
            // 0x1d6b38: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6B3Cu;
    // 0x1d6b3c: 0x0  nop
    ctx->pc = 0x1d6b3cu;
    // NOP
}
