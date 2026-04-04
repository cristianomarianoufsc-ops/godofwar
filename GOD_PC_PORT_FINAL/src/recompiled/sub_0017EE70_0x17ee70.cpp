#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EE70
// Address: 0x17ee70 - 0x17eec8
void sub_0017EE70_0x17ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EE70_0x17ee70");
#endif

    ctx->pc = 0x17ee70u;

    // 0x17ee70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ee74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ee78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ee7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17ee80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17ee84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17ee88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ee88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee8c: 0x8c44c788  lw          $a0, -0x3878($v0)
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952840)));
    // 0x17ee90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ee94: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17EE94u;
    SET_GPR_U32(ctx, 31, 0x17EE9Cu);
    ctx->pc = 0x17EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE94u;
            // 0x17ee98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE9Cu; }
        if (ctx->pc != 0x17EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE9Cu; }
        if (ctx->pc != 0x17EE9Cu) { return; }
    }
    ctx->pc = 0x17EE9Cu;
    // 0x17ee9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17eea0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x17eea4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17eea8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17eeac: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x17eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x17eeb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17eeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eeb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17eeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eeb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x17EEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEC0u;
            // 0x17eec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EEC8u;
}
