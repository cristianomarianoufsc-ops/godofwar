#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f970
// Address: 0x13f970 - 0x13f9c8
void entry_13f970_0x13f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f970_0x13f9c8");
#endif

    ctx->pc = 0x13f970u;

    // 0x13f970: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x13f970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x13f974: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x13f978: 0x53e82  srl         $a3, $a1, 26
    ctx->pc = 0x13f978u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x13f97c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13f980: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13f984: 0x8d0af168  lw          $t2, -0xE98($t0)
    ctx->pc = 0x13f984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294963560)));
    // 0x13f988: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x13f98c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x13f98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13f990: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x13f990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x13f994: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f998: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13f998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13f99c: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x13f99cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x13f9a0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x13f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x13f9a4: 0xac431030  sw          $v1, 0x1030($v0)
    ctx->pc = 0x13f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4144), GPR_U32(ctx, 3));
    // 0x13f9a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x13f9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x13f9ac: 0xac871038  sw          $a3, 0x1038($a0)
    ctx->pc = 0x13f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4152), GPR_U32(ctx, 7));
    // 0x13f9b0: 0xad2a1034  sw          $t2, 0x1034($t1)
    ctx->pc = 0x13f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4148), GPR_U32(ctx, 10));
    // 0x13f9b4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x13f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x13f9b8: 0x8d02f168  lw          $v0, -0xE98($t0)
    ctx->pc = 0x13f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294963560)));
    // 0x13f9bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F9C0u;
            // 0x13f9c4: 0xad02f168  sw          $v0, -0xE98($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F9C8u;
}
