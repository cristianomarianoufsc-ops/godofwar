#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243C40
// Address: 0x243c40 - 0x243ca8
void sub_00243C40_0x243c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243C40_0x243c40");
#endif

    ctx->pc = 0x243c40u;

    // 0x243c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243c44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x243c4c: 0x24422130  addiu       $v0, $v0, 0x2130
    ctx->pc = 0x243c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x243c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x243c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x243c5c: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x243c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x243c60: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x243c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x243c64: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x243c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x243c68: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x243c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x243c6c: 0xc096680  jal         func_259A00
    ctx->pc = 0x243C6Cu;
    SET_GPR_U32(ctx, 31, 0x243C74u);
    ctx->pc = 0x243C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C6Cu;
            // 0x243c70: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C74u; }
        if (ctx->pc != 0x243C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259a00_0x259a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C74u; }
        if (ctx->pc != 0x243C74u) { return; }
    }
    ctx->pc = 0x243C74u;
    // 0x243c74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243c80: 0x3e00008  jr          $ra
    ctx->pc = 0x243C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C80u;
            // 0x243c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243C88u;
    // 0x243c88: 0x8c425590  lw          $v0, 0x5590($v0)
    ctx->pc = 0x243c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21904)));
    // 0x243c8c: 0x0  nop
    ctx->pc = 0x243c8cu;
    // NOP
    // 0x243c90: 0x3e00008  jr          $ra
    ctx->pc = 0x243C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C90u;
            // 0x243c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243C98u;
    // 0x243c98: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x243c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243c9c: 0x0  nop
    ctx->pc = 0x243c9cu;
    // NOP
    // 0x243ca0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x243ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243ca4: 0x0  nop
    ctx->pc = 0x243ca4u;
    // NOP
}
