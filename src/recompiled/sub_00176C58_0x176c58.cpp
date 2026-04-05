#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176C58
// Address: 0x176c58 - 0x176cf8
void sub_00176C58_0x176c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176C58_0x176c58");
#endif

    ctx->pc = 0x176c58u;

    // 0x176c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176c5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x176c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x176c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x176c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x176c64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x176c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176c6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x176c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x176c74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x176c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176c7c: 0xc05d762  jal         func_175D88
    ctx->pc = 0x176C7Cu;
    SET_GPR_U32(ctx, 31, 0x176C84u);
    ctx->pc = 0x176C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C7Cu;
            // 0x176c80: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175D88u;
    if (runtime->hasFunction(0x175D88u)) {
        auto targetFn = runtime->lookupFunction(0x175D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C84u; }
        if (ctx->pc != 0x176C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175D88_0x175d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C84u; }
        if (ctx->pc != 0x176C84u) { return; }
    }
    ctx->pc = 0x176C84u;
    // 0x176c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c88: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x176c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x176c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c90: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x176c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x176c94: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x176c94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x176c98: 0xc08e450  jal         func_239140
    ctx->pc = 0x176C98u;
    SET_GPR_U32(ctx, 31, 0x176CA0u);
    ctx->pc = 0x176C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C98u;
            // 0x176c9c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239140u;
    if (runtime->hasFunction(0x239140u)) {
        auto targetFn = runtime->lookupFunction(0x239140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CA0u; }
        if (ctx->pc != 0x176CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239140_0x239168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CA0u; }
        if (ctx->pc != 0x176CA0u) { return; }
    }
    ctx->pc = 0x176CA0u;
    // 0x176ca0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x176ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176ca4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x176ca8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176cac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x176cb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x176cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x176cb4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x176cb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x176cb8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x176cb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x176cbc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x176cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x176cc0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x176cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x176cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x176cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ccc: 0xc05dbf2  jal         func_176FC8
    ctx->pc = 0x176CCCu;
    SET_GPR_U32(ctx, 31, 0x176CD4u);
    ctx->pc = 0x176CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CCCu;
            // 0x176cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176FC8u;
    if (runtime->hasFunction(0x176FC8u)) {
        auto targetFn = runtime->lookupFunction(0x176FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CD4u; }
        if (ctx->pc != 0x176CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176FC8_0x176fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CD4u; }
        if (ctx->pc != 0x176CD4u) { return; }
    }
    ctx->pc = 0x176CD4u;
    // 0x176cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x176cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176cdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x176cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176ce4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x176ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cec: 0x3e00008  jr          $ra
    ctx->pc = 0x176CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176CECu;
            // 0x176cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176CF4u;
    // 0x176cf4: 0x0  nop
    ctx->pc = 0x176cf4u;
    // NOP
}
