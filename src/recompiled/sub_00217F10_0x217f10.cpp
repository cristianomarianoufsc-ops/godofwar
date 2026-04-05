#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217F10
// Address: 0x217f10 - 0x217f68
void sub_00217F10_0x217f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F10_0x217f10");
#endif

    ctx->pc = 0x217f10u;

    // 0x217f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217f14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x217f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x217f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f28: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x217f2c: 0x96220046  lhu         $v0, 0x46($s1)
    ctx->pc = 0x217f2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x217f30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x217f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x217f34: 0xc086008  jal         func_218020
    ctx->pc = 0x217F34u;
    SET_GPR_U32(ctx, 31, 0x217F3Cu);
    ctx->pc = 0x217F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217F34u;
            // 0x217f38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218020u;
    if (runtime->hasFunction(0x218020u)) {
        auto targetFn = runtime->lookupFunction(0x218020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F3Cu; }
        if (ctx->pc != 0x217F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218020_0x218020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F3Cu; }
        if (ctx->pc != 0x217F3Cu) { return; }
    }
    ctx->pc = 0x217F3Cu;
    // 0x217f3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x217f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x217f40: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x217f44: 0x246386a0  addiu       $v1, $v1, -0x7960
    ctx->pc = 0x217f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936224));
    // 0x217f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f4c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x217f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x217f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x217f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x217F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217F5Cu;
            // 0x217f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217F64u;
    // 0x217f64: 0x0  nop
    ctx->pc = 0x217f64u;
    // NOP
}
