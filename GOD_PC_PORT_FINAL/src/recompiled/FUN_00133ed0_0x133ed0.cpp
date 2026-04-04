#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00133ed0
// Address: 0x133ed0 - 0x133ef0
void FUN_00133ed0_0x133ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133ed0_0x133ed0");
#endif

    ctx->pc = 0x133ed0u;

    // 0x133ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133ed4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x133ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x133ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133edc: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x133ee0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x133ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x133ee4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x133ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ee8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x133ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x133eec: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x133eecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
}
