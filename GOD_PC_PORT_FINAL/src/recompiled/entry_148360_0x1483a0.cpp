#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_148360
// Address: 0x148360 - 0x1483a0
void entry_148360_0x1483a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_148360_0x1483a0");
#endif

    ctx->pc = 0x148360u;

    // 0x148360: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x148360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x148364: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x148364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x148368: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x14836c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x148370: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x148370u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x148374: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x148374u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x148378: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x148378u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x14837c: 0xac44bffc  sw          $a0, -0x4004($v0)
    ctx->pc = 0x14837cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950908), GPR_U32(ctx, 4));
    // 0x148380: 0xac65c000  sw          $a1, -0x4000($v1)
    ctx->pc = 0x148380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950912), GPR_U32(ctx, 5));
    // 0x148384: 0xacc0c004  sw          $zero, -0x3FFC($a2)
    ctx->pc = 0x148384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950916), GPR_U32(ctx, 0));
    // 0x148388: 0xace0c008  sw          $zero, -0x3FF8($a3)
    ctx->pc = 0x148388u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294950920), GPR_U32(ctx, 0));
    // 0x14838c: 0xad00c00c  sw          $zero, -0x3FF4($t0)
    ctx->pc = 0x14838cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294950924), GPR_U32(ctx, 0));
    // 0x148390: 0xad20c010  sw          $zero, -0x3FF0($t1)
    ctx->pc = 0x148390u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294950928), GPR_U32(ctx, 0));
    // 0x148394: 0x3e00008  jr          $ra
    ctx->pc = 0x148394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148394u;
            // 0x148398: 0xad40c014  sw          $zero, -0x3FEC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294950932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14839Cu;
    // 0x14839c: 0x0  nop
    ctx->pc = 0x14839cu;
    // NOP
}
