#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dcd78
// Address: 0x1dcd78 - 0x1dcdc0
void entry_1dcd78_0x1dcdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dcd78_0x1dcdc0");
#endif

    ctx->pc = 0x1dcd78u;

    // 0x1dcd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dcd7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcd80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcd84: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1dcd88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dcd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcd8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcd90: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1dcd90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1dcd94: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1dcd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1dcd98: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1dcd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1dcd9c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x1dcd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dcda0: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x1dcda0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcda4: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x1dcda4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dcda8: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x1dcda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1dcdac: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x1dcdacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dcdb0: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x1dcdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dcdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDB4u;
            // 0x1dcdb8: 0xa483002c  sh          $v1, 0x2C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCDBCu;
    // 0x1dcdbc: 0x0  nop
    ctx->pc = 0x1dcdbcu;
    // NOP
}
