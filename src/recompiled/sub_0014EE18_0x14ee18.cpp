#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EE18
// Address: 0x14ee18 - 0x14ee80
void sub_0014EE18_0x14ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE18_0x14ee18");
#endif

    ctx->pc = 0x14ee18u;

    // 0x14ee18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ee1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ee20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ee24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ee24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ee2c: 0x8c4416f8  lw          $a0, 0x16F8($v0)
    ctx->pc = 0x14ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
    // 0x14ee30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ee34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ee38: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x14EE38u;
    SET_GPR_U32(ctx, 31, 0x14EE40u);
    ctx->pc = 0x14EE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE38u;
            // 0x14ee3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE40u; }
        if (ctx->pc != 0x14EE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE40u; }
        if (ctx->pc != 0x14EE40u) { return; }
    }
    ctx->pc = 0x14EE40u;
    // 0x14ee40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee44: 0x9626001e  lhu         $a2, 0x1E($s1)
    ctx->pc = 0x14ee44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x14ee48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14ee4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14ee4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee50: 0x86240014  lh          $a0, 0x14($s1)
    ctx->pc = 0x14ee50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14ee54: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x14EE54u;
    SET_GPR_U32(ctx, 31, 0x14EE5Cu);
    ctx->pc = 0x14EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE54u;
            // 0x14ee58: 0x8625001a  lh          $a1, 0x1A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE5Cu; }
        if (ctx->pc != 0x14EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3B0_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE5Cu; }
        if (ctx->pc != 0x14EE5Cu) { return; }
    }
    ctx->pc = 0x14EE5Cu;
    // 0x14ee5c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x14ee5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14ee60: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x14ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x14ee64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14ee64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ee68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ee6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ee6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ee70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14ee70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ee74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ee74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ee78: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE78u;
            // 0x14ee7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14EE80u;
}
