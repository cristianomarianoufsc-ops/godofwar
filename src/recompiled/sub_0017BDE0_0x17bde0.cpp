#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BDE0
// Address: 0x17bde0 - 0x17be48
void sub_0017BDE0_0x17bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BDE0_0x17bde0");
#endif

    ctx->pc = 0x17bde0u;

    // 0x17bde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bde4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17bde8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17bdec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17bdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17bdf4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x17bdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bdfc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17bdfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17be00:
    // 0x17be00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17be00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be04: 0xc05f106  jal         func_17C418
    ctx->pc = 0x17BE04u;
    SET_GPR_U32(ctx, 31, 0x17BE0Cu);
    ctx->pc = 0x17BE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE04u;
            // 0x17be08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C418u;
    if (runtime->hasFunction(0x17C418u)) {
        auto targetFn = runtime->lookupFunction(0x17C418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE0Cu; }
        if (ctx->pc != 0x17BE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c418_0x17c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE0Cu; }
        if (ctx->pc != 0x17BE0Cu) { return; }
    }
    ctx->pc = 0x17BE0Cu;
    // 0x17be0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17be10: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17BE10u;
    {
        const bool branch_taken_0x17be10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE10u;
            // 0x17be14: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be10) {
            ctx->pc = 0x17BE00u;
            runtime->cooperativeGuestYield();
            goto label_17be00;
        }
    }
    ctx->pc = 0x17BE18u;
    // 0x17be18: 0xc05efb4  jal         func_17BED0
    ctx->pc = 0x17BE18u;
    SET_GPR_U32(ctx, 31, 0x17BE20u);
    ctx->pc = 0x17BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE18u;
            // 0x17be1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BED0u;
    if (runtime->hasFunction(0x17BED0u)) {
        auto targetFn = runtime->lookupFunction(0x17BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE20u; }
        if (ctx->pc != 0x17BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bed0_0x17bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE20u; }
        if (ctx->pc != 0x17BE20u) { return; }
    }
    ctx->pc = 0x17BE20u;
    // 0x17be20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17be24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17be24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17be28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17be28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17be2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17be30: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x17be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x17be34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17be34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17be38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17be38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be40: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE40u;
            // 0x17be44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BE00u: goto label_17be00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BE48u;
}
