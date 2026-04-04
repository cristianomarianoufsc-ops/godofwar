#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117b38
// Address: 0x117b38 - 0x117b50
void entry_117b38_0x117b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117b38_0x117b50");
#endif

    ctx->pc = 0x117b38u;

    // 0x117b38: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x117b38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x117b3c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x117b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x117b40: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x117b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x117b44: 0x3e00008  jr          $ra
    ctx->pc = 0x117B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B44u;
            // 0x117b48: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117B4Cu;
    // 0x117b4c: 0x0  nop
    ctx->pc = 0x117b4cu;
    // NOP
}
