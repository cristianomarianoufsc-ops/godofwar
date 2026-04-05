#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D20
// Address: 0x192d20 - 0x192d90
void sub_00192D20_0x192d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D20_0x192d20");
#endif

    ctx->pc = 0x192d20u;

    // 0x192d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192d24: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x192d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x192d28: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x192d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x192d2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192d30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x192d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x192d34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d38: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x192d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x192d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x192d40: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x192d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x192d44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x192d48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x192d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x192d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192d50: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x192d54: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x192d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x192d58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x192d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x192d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d60: 0x24a53358  addiu       $a1, $a1, 0x3358
    ctx->pc = 0x192d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13144));
    // 0x192d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192d68: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x192d68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x192d6c: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x192d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x192d70: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x192d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x192d74: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x192d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x192d78: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x192d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x192d7c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x192D7Cu;
    SET_GPR_U32(ctx, 31, 0x192D84u);
    ctx->pc = 0x192D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D7Cu;
            // 0x192d80: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D84u; }
        if (ctx->pc != 0x192D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D84u; }
        if (ctx->pc != 0x192D84u) { return; }
    }
    ctx->pc = 0x192D84u;
    // 0x192d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d88: 0x3e00008  jr          $ra
    ctx->pc = 0x192D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D88u;
            // 0x192d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D90u;
}
