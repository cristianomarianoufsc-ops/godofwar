#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17b248
// Address: 0x17b248 - 0x17b270
void entry_17b248_0x17b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17b248_0x17b270");
#endif

    ctx->pc = 0x17b248u;

    // 0x17b248: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17b248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17b24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b250: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x17b250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x17b254: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b258: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17b258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x17b25c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x17b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17b260: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x17b260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x17b264: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x17b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b268: 0x3e00008  jr          $ra
    ctx->pc = 0x17B268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B268u;
            // 0x17b26c: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B270u;
}
