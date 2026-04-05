#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CB60
// Address: 0x19cb60 - 0x19cbe8
void sub_0019CB60_0x19cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CB60_0x19cb60");
#endif

    ctx->pc = 0x19cb60u;

    // 0x19cb60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19cb64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19cb68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19cb6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cb74: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x19CB74u;
    {
        const bool branch_taken_0x19cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb74) {
            ctx->pc = 0x19CB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB74u;
            // 0x19cb78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19CBD4u;
            goto label_19cbd4;
        }
    }
    ctx->pc = 0x19CB7Cu;
    // 0x19cb7c: 0xc089990  jal         func_226640
    ctx->pc = 0x19CB7Cu;
    SET_GPR_U32(ctx, 31, 0x19CB84u);
    ctx->pc = 0x19CB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB7Cu;
            // 0x19cb80: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB84u; }
        if (ctx->pc != 0x19CB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB84u; }
        if (ctx->pc != 0x19CB84u) { return; }
    }
    ctx->pc = 0x19CB84u;
    // 0x19cb84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb8c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19cb90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19cb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb94: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x19cb94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19cb98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19cba0: 0x8ca5c9d4  lw          $a1, -0x362C($a1)
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953428)));
    // 0x19cba4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19cba8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cbac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x19cbacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19cbb0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x19cbb4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x19cbb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19cbb8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19cbbc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x19cbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19cbc0: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x19CBC0u;
    SET_GPR_U32(ctx, 31, 0x19CBC8u);
    ctx->pc = 0x19CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBC0u;
            // 0x19cbc4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBC8u; }
        if (ctx->pc != 0x19CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBC8u; }
        if (ctx->pc != 0x19CBC8u) { return; }
    }
    ctx->pc = 0x19CBC8u;
    // 0x19cbc8: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19CBC8u;
    SET_GPR_U32(ctx, 31, 0x19CBD0u);
    ctx->pc = 0x19CBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBC8u;
            // 0x19cbcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBD0u; }
        if (ctx->pc != 0x19CBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBD0u; }
        if (ctx->pc != 0x19CBD0u) { return; }
    }
    ctx->pc = 0x19CBD0u;
    // 0x19cbd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19cbd4:
    // 0x19cbd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19cbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cbd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19CBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBDCu;
            // 0x19cbe0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CBD4u: goto label_19cbd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CBE4u;
    // 0x19cbe4: 0x0  nop
    ctx->pc = 0x19cbe4u;
    // NOP
}
