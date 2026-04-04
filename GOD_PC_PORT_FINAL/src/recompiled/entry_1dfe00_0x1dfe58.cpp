#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dfe00
// Address: 0x1dfe00 - 0x1dfe58
void entry_1dfe00_0x1dfe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dfe00_0x1dfe58");
#endif

    ctx->pc = 0x1dfe00u;

    // 0x1dfe00: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1dfe00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfe04: 0x24880150  addiu       $t0, $a0, 0x150
    ctx->pc = 0x1dfe04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1dfe08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfe0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfe0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfe10: 0x7c870050  sq          $a3, 0x50($a0)
    ctx->pc = 0x1dfe10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 7));
    // 0x1dfe14: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1dfe14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1dfe18: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x1dfe18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x1dfe1c: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x1dfe1cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1dfe20: 0x7c860070  sq          $a2, 0x70($a0)
    ctx->pc = 0x1dfe20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 6));
    // 0x1dfe24: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1dfe24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1dfe28: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x1dfe28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x1dfe2c: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x1dfe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x1dfe30: 0x7c870090  sq          $a3, 0x90($a0)
    ctx->pc = 0x1dfe30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 7));
    // 0x1dfe34: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x1dfe34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1dfe38: 0x7c8600b0  sq          $a2, 0xB0($a0)
    ctx->pc = 0x1dfe38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 6));
    // 0x1dfe3c: 0x7c8300c0  sq          $v1, 0xC0($a0)
    ctx->pc = 0x1dfe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 3));
    // 0x1dfe40: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x1dfe40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x1dfe44: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x1dfe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1dfe48: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1dfe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1dfe4c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x1dfe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1dfe50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE50u;
            // 0x1dfe54: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFE58u;
}
