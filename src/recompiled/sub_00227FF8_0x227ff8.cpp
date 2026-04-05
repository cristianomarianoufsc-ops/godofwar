#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227FF8
// Address: 0x227ff8 - 0x228058
void sub_00227FF8_0x227ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227FF8_0x227ff8");
#endif

    ctx->pc = 0x227ff8u;

    // 0x227ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227ffc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x227ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22800c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x22800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x228010: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x228010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x228014: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x228014u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x228018: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x228018u;
    SET_GPR_U32(ctx, 31, 0x228020u);
    ctx->pc = 0x22801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228018u;
            // 0x22801c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228020u; }
        if (ctx->pc != 0x228020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228020u; }
        if (ctx->pc != 0x228020u) { return; }
    }
    ctx->pc = 0x228020u;
    // 0x228020: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x228024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x228024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228028: 0xc05ec80  jal         func_17B200
    ctx->pc = 0x228028u;
    SET_GPR_U32(ctx, 31, 0x228030u);
    ctx->pc = 0x22802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228028u;
            // 0x22802c: 0x24a5d9c0  addiu       $a1, $a1, -0x2640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B200u;
    if (runtime->hasFunction(0x17B200u)) {
        auto targetFn = runtime->lookupFunction(0x17B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228030u; }
        if (ctx->pc != 0x228030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b200_0x17b248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228030u; }
        if (ctx->pc != 0x228030u) { return; }
    }
    ctx->pc = 0x228030u;
    // 0x228030: 0xae2211b8  sw          $v0, 0x11B8($s1)
    ctx->pc = 0x228030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4536), GPR_U32(ctx, 2));
    // 0x228034: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22803c: 0xac4011c4  sw          $zero, 0x11C4($v0)
    ctx->pc = 0x22803cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4548), GPR_U32(ctx, 0));
    // 0x228040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x228040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228048: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22804c: 0x3e00008  jr          $ra
    ctx->pc = 0x22804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22804Cu;
            // 0x228050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228054u;
    // 0x228054: 0x0  nop
    ctx->pc = 0x228054u;
    // NOP
}
