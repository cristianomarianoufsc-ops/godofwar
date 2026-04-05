#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26d858
// Address: 0x26d858 - 0x26d8b0
void entry_26d858_0x26d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26d858_0x26d8b0");
#endif

    ctx->pc = 0x26d858u;

    // 0x26d858: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x26d858u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26d85c: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x26d85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x26d860: 0xdc8b0020  ld          $t3, 0x20($a0)
    ctx->pc = 0x26d860u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x26d864: 0x2408004f  addiu       $t0, $zero, 0x4F
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x26d868: 0xdc8a0030  ld          $t2, 0x30($a0)
    ctx->pc = 0x26d868u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x26d86c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x26d86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x26d870: 0xdc890040  ld          $t1, 0x40($a0)
    ctx->pc = 0x26d870u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26d874: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x26d878: 0xdc820080  ld          $v0, 0x80($a0)
    ctx->pc = 0x26d878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x26d87c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x26d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x26d880: 0xfc8700a8  sd          $a3, 0xA8($a0)
    ctx->pc = 0x26d880u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 7));
    // 0x26d884: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x26d884u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x26d888: 0xfc8800b8  sd          $t0, 0xB8($a0)
    ctx->pc = 0x26d888u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 184), GPR_U64(ctx, 8));
    // 0x26d88c: 0xfc8600c8  sd          $a2, 0xC8($a0)
    ctx->pc = 0x26d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 6));
    // 0x26d890: 0xfc8500d8  sd          $a1, 0xD8($a0)
    ctx->pc = 0x26d890u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 5));
    // 0x26d894: 0xfc8300e8  sd          $v1, 0xE8($a0)
    ctx->pc = 0x26d894u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 232), GPR_U64(ctx, 3));
    // 0x26d898: 0xfc8c00a0  sd          $t4, 0xA0($a0)
    ctx->pc = 0x26d898u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 12));
    // 0x26d89c: 0xfc8b00b0  sd          $t3, 0xB0($a0)
    ctx->pc = 0x26d89cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 176), GPR_U64(ctx, 11));
    // 0x26d8a0: 0xfc8a00c0  sd          $t2, 0xC0($a0)
    ctx->pc = 0x26d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 10));
    // 0x26d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8A4u;
            // 0x26d8a8: 0xfc8900d0  sd          $t1, 0xD0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D8ACu;
    // 0x26d8ac: 0x0  nop
    ctx->pc = 0x26d8acu;
    // NOP
}
