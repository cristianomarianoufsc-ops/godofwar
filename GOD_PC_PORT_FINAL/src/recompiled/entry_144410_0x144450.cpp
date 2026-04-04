#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_144410
// Address: 0x144410 - 0x144450
void entry_144410_0x144450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_144410_0x144450");
#endif

    ctx->pc = 0x144410u;

    // 0x144410: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x144410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x144414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x144414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144418: 0x8c830c04  lw          $v1, 0xC04($a0)
    ctx->pc = 0x144418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x14441c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144420: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x144424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144428: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x144428u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x14442c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14442cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144430: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x144430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x144434: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x144434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x144438: 0x94820c04  lhu         $v0, 0xC04($a0)
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x14443c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144440: 0xe46c0400  swc1        $f12, 0x400($v1)
    ctx->pc = 0x144440u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1024), bits); }
    // 0x144444: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x144444u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x144448: 0x3e00008  jr          $ra
    ctx->pc = 0x144448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144448u;
            // 0x14444c: 0xac860c04  sw          $a2, 0xC04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144450u;
}
