#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22a750
// Address: 0x22a750 - 0x22a770
void entry_22a750_0x22a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22a750_0x22a770");
#endif

    ctx->pc = 0x22a750u;

    // 0x22a750: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22a754: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x22a754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22a758: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x22a75c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a760: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x22a760u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22a764: 0x3e00008  jr          $ra
    ctx->pc = 0x22A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A764u;
            // 0x22a768: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A76Cu;
    // 0x22a76c: 0x0  nop
    ctx->pc = 0x22a76cu;
    // NOP
}
