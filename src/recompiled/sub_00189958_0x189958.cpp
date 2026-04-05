#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189958
// Address: 0x189958 - 0x1899e0
void sub_00189958_0x189958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189958_0x189958");
#endif

    ctx->pc = 0x189958u;

    // 0x189958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18995c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18995cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189960: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x189960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x189964: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189968: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x189968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18996c: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x18996cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189970: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x189970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x189974: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x189974u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189978: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18997c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x18997cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189980: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x189980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x189984: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189988: 0x8fb20070  lw          $s2, 0x70($sp)
    ctx->pc = 0x189988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18998c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18998cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189990: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x189990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x189994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x189994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18999c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x18999cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899a0: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1899a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1899a4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1899a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899a8: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1899a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1899ac: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x1899acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899b0: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x1899b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x1899b4: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x1899b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899b8: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x1899b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899bc: 0xc0626f4  jal         func_189BD0
    ctx->pc = 0x1899BCu;
    SET_GPR_U32(ctx, 31, 0x1899C4u);
    ctx->pc = 0x1899C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1899BCu;
            // 0x1899c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189BD0u;
    if (runtime->hasFunction(0x189BD0u)) {
        auto targetFn = runtime->lookupFunction(0x189BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899C4u; }
        if (ctx->pc != 0x1899C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189BD0_0x189bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899C4u; }
        if (ctx->pc != 0x1899C4u) { return; }
    }
    ctx->pc = 0x1899C4u;
    // 0x1899c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1899c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1899c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1899c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1899cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1899ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1899d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1899d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1899D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1899D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899D4u;
            // 0x1899d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1899DCu;
    // 0x1899dc: 0x0  nop
    ctx->pc = 0x1899dcu;
    // NOP
}
