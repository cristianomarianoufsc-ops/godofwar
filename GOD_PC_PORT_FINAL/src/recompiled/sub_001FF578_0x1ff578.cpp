#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF578
// Address: 0x1ff578 - 0x1ff5c8
void sub_001FF578_0x1ff578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF578_0x1ff578");
#endif

    ctx->pc = 0x1ff578u;

    // 0x1ff578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff57c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ff57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ff580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff58c: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1ff58cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ff590: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ff590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff594: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1FF594u;
    SET_GPR_U32(ctx, 31, 0x1FF59Cu);
    ctx->pc = 0x1FF598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF594u;
            // 0x1ff598: 0x8c440320  lw          $a0, 0x320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF59Cu; }
        if (ctx->pc != 0x1FF59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF59Cu; }
        if (ctx->pc != 0x1FF59Cu) { return; }
    }
    ctx->pc = 0x1FF59Cu;
    // 0x1ff59c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1ff59cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff5a0: 0x94420246  lhu         $v0, 0x246($v0)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 582)));
    // 0x1ff5a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ff5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ff5a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff5ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ff5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ff5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff5b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ff5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ff5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5BCu;
            // 0x1ff5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF5C4u;
    // 0x1ff5c4: 0x0  nop
    ctx->pc = 0x1ff5c4u;
    // NOP
}
