#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_142da0
// Address: 0x142da0 - 0x142e00
void entry_142da0_0x142e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_142da0_0x142e00");
#endif

    ctx->pc = 0x142da0u;

    // 0x142da0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x142da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x142da4: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x142da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x142da8: 0x2443bc00  addiu       $v1, $v0, -0x4400
    ctx->pc = 0x142da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
label_142dac:
    // 0x142dac: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x142dacu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142db0: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x142db0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x142db4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x142db4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x142db8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x142db8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x142dbc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x142dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x142dc0: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142DC0u;
    {
        const bool branch_taken_0x142dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x142DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DC0u;
            // 0x142dc4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142dc0) {
            ctx->pc = 0x142DACu;
            runtime->cooperativeGuestYield();
            goto label_142dac;
        }
    }
    ctx->pc = 0x142DC8u;
    // 0x142dc8: 0x2442bc00  addiu       $v0, $v0, -0x4400
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
    // 0x142dcc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x142dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x142dd0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x142dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142dd4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x142dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x142dd8: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x142dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x142ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142de0: 0xc4420048  lwc1        $f2, 0x48($v0)
    ctx->pc = 0x142de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x142de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x142de8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x142de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x142dec: 0xac83bfe0  sw          $v1, -0x4020($a0)
    ctx->pc = 0x142decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950880), GPR_U32(ctx, 3));
    // 0x142df0: 0xaca0bfc8  sw          $zero, -0x4038($a1)
    ctx->pc = 0x142df0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950856), GPR_U32(ctx, 0));
    // 0x142df4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x142df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x142df8: 0x3e00008  jr          $ra
    ctx->pc = 0x142DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DF8u;
            // 0x142dfc: 0xe440bfe4  swc1        $f0, -0x401C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142DACu: goto label_142dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142E00u;
}
