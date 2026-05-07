#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178BE8 (Bug AS fix — variante BST 1x, 4 instrucoes: WRITE32(0x333830,1) + jr $ra)
// Address: 0x178be8 - 0x178bf8
// lui $v1, 0x33 | addiu $v0,$zero,1 | jr $ra | sw $v0,0x3830($v1)
void sub_00178BE8_0x178be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178BE8_0x178be8");
#endif

    ctx->pc = 0x178be8u;

    // 0x178be8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x178bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x178BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BF0u;
            // 0x178bf4: 0xac623830  sw          $v0, 0x3830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
}
