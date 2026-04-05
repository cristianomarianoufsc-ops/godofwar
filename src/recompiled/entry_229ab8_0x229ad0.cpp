#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_229ab8
// Address: 0x229ab8 - 0x229ad0
void entry_229ab8_0x229ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_229ab8_0x229ad0");
#endif

    ctx->pc = 0x229ab8u;

    // 0x229ab8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229abc: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x229abcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x229ac0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x229ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x229ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x229AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AC4u;
            // 0x229ac8: 0xe48c000c  swc1        $f12, 0xC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229ACCu;
    // 0x229acc: 0x0  nop
    ctx->pc = 0x229accu;
    // NOP
}
