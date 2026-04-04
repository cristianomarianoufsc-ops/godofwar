#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21fce8
// Address: 0x21fce8 - 0x21fd20
void entry_21fce8_0x21fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21fce8_0x21fd20");
#endif

    ctx->pc = 0x21fce8u;

    // 0x21fce8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21fcec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fcf0: 0xc442c64c  lwc1        $f2, -0x39B4($v0)
    ctx->pc = 0x21fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21fcf4: 0xc460e5a4  lwc1        $f0, -0x1A5C($v1)
    ctx->pc = 0x21fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fcfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21fcfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fd00: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21fd00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21fd04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21fd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fd08: 0x0  nop
    ctx->pc = 0x21fd08u;
    // NOP
    // 0x21fd0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x21FD0Cu;
    {
        const bool branch_taken_0x21fd0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD0Cu;
            // 0x21fd10: 0xe460e5a4  swc1        $f0, -0x1A5C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd0c) {
            ctx->pc = 0x21FD18u;
            goto label_21fd18;
        }
    }
    ctx->pc = 0x21FD14u;
    // 0x21fd14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fd18:
    // 0x21fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x21FD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FD18u: goto label_21fd18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FD20u;
}
