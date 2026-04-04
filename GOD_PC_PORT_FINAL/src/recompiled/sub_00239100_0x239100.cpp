#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239100
// Address: 0x239100 - 0x239140
void sub_00239100_0x239100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239100_0x239100");
#endif

    ctx->pc = 0x239100u;

    // 0x239100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x239104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x239108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23910c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239110: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x239110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x239114: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x239114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x239118: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x239118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x23911c: 0xc08e450  jal         func_239140
    ctx->pc = 0x23911Cu;
    SET_GPR_U32(ctx, 31, 0x239124u);
    ctx->pc = 0x239120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23911Cu;
            // 0x239120: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239140u;
    if (runtime->hasFunction(0x239140u)) {
        auto targetFn = runtime->lookupFunction(0x239140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239124u; }
        if (ctx->pc != 0x239124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239140_0x239168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239124u; }
        if (ctx->pc != 0x239124u) { return; }
    }
    ctx->pc = 0x239124u;
    // 0x239124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239128: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x239128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23912c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239134: 0x3e00008  jr          $ra
    ctx->pc = 0x239134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239134u;
            // 0x239138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23913Cu;
    // 0x23913c: 0x0  nop
    ctx->pc = 0x23913cu;
    // NOP
}
