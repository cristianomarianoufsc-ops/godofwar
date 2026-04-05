#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_101dd8
// Address: 0x101dd8 - 0x101e88
void entry_101dd8_0x101e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_101dd8_0x101e88");
#endif

    ctx->pc = 0x101dd8u;

    // 0x101dd8: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x101ddc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x101ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x101de0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x101de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x101de4: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x101de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x101de8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x101de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x101dec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x101decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x101df0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x101df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101df8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x101df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x101dfc: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x101dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x101e00: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x101e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x101e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101e08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x101e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x101e0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x101e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x101e10: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x101e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x101e14: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x101e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x101e18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x101e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x101e1c: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x101e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x101e20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x101e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x101e24: 0xe4860018  swc1        $f6, 0x18($a0)
    ctx->pc = 0x101e24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x101e28: 0xe485001c  swc1        $f5, 0x1C($a0)
    ctx->pc = 0x101e28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x101e2c: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x101e2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x101e30: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x101e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x101e34: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x101e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x101e38: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x101e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x101e3c: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x101e3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x101e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101e48:
    // 0x101e48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x101e4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x101e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x101e50: 0x0  nop
    ctx->pc = 0x101e50u;
    // NOP
    // 0x101e54: 0x0  nop
    ctx->pc = 0x101e54u;
    // NOP
    // 0x101e58: 0x0  nop
    ctx->pc = 0x101e58u;
    // NOP
    // 0x101e5c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101E5Cu;
    {
        const bool branch_taken_0x101e5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x101E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E5Cu;
            // 0x101e60: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e5c) {
            ctx->pc = 0x101E48u;
            runtime->cooperativeGuestYield();
            goto label_101e48;
        }
    }
    ctx->pc = 0x101E64u;
    // 0x101e64: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x101e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x101e68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x101e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x101e6c: 0xac800160  sw          $zero, 0x160($a0)
    ctx->pc = 0x101e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
    // 0x101e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101e74: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x101e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x101e78: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x101e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x101e7c: 0xac62ec48  sw          $v0, -0x13B8($v1)
    ctx->pc = 0x101e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962248), GPR_U32(ctx, 2));
    // 0x101e80: 0x3e00008  jr          $ra
    ctx->pc = 0x101E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E80u;
            // 0x101e84: 0xac800164  sw          $zero, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E48u: goto label_101e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101E88u;
}
