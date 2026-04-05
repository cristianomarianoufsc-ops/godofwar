#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21fc68
// Address: 0x21fc68 - 0x21fca8
void entry_21fc68_0x21fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21fc68_0x21fca8");
#endif

    ctx->pc = 0x21fc68u;

    // 0x21fc68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fc6c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21fc70: 0xc440e5a8  lwc1        $f0, -0x1A58($v0)
    ctx->pc = 0x21fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fc74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fc74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fc78: 0x8c646284  lw          $a0, 0x6284($v1)
    ctx->pc = 0x21fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25220)));
    // 0x21fc7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fc80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fc84: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x21fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x21fc88: 0xe440e5a4  swc1        $f0, -0x1A5C($v0)
    ctx->pc = 0x21fc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960548), bits); }
    // 0x21fc8c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x21FC8Cu;
    SET_GPR_U32(ctx, 31, 0x21FC94u);
    ctx->pc = 0x21FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC8Cu;
            // 0x21fc90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC94u; }
        if (ctx->pc != 0x21FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC94u; }
        if (ctx->pc != 0x21FC94u) { return; }
    }
    ctx->pc = 0x21FC94u;
    // 0x21fc94: 0xc050b68  jal         func_142DA0
    ctx->pc = 0x21FC94u;
    SET_GPR_U32(ctx, 31, 0x21FC9Cu);
    ctx->pc = 0x21FC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC94u;
            // 0x21fc98: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142DA0u;
    if (runtime->hasFunction(0x142DA0u)) {
        auto targetFn = runtime->lookupFunction(0x142DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC9Cu; }
        if (ctx->pc != 0x21FC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_142da0_0x142e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC9Cu; }
        if (ctx->pc != 0x21FC9Cu) { return; }
    }
    ctx->pc = 0x21FC9Cu;
    // 0x21fc9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fca0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCA0u;
            // 0x21fca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FCA8u;
}
