#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001746D8
// Address: 0x1746d8 - 0x174728
void sub_001746D8_0x1746d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001746D8_0x1746d8");
#endif

    ctx->pc = 0x1746d8u;

    // 0x1746d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1746d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1746dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1746dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1746e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1746e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1746e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1746e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1746e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1746ec: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1746ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1746f0: 0x8e22c44c  lw          $v0, -0x3BB4($s1)
    ctx->pc = 0x1746f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952012)));
    // 0x1746f4: 0x50500008  beql        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1746F4u;
    {
        const bool branch_taken_0x1746f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1746f4) {
            ctx->pc = 0x1746F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1746F4u;
            // 0x1746f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174718u;
            goto label_174718;
        }
    }
    ctx->pc = 0x1746FCu;
    // 0x1746fc: 0xc09af56  jal         func_26BD58
    ctx->pc = 0x1746FCu;
    SET_GPR_U32(ctx, 31, 0x174704u);
    ctx->pc = 0x26BD58u;
    if (runtime->hasFunction(0x26BD58u)) {
        auto targetFn = runtime->lookupFunction(0x26BD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174704u; }
        if (ctx->pc != 0x174704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26bd58_0x26bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174704u; }
        if (ctx->pc != 0x174704u) { return; }
    }
    ctx->pc = 0x174704u;
    // 0x174704: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x174708: 0xae30c44c  sw          $s0, -0x3BB4($s1)
    ctx->pc = 0x174708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952012), GPR_U32(ctx, 16));
    // 0x17470c: 0xa450c448  sh          $s0, -0x3BB8($v0)
    ctx->pc = 0x17470cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294952008), (uint16_t)GPR_U32(ctx, 16));
    // 0x174710: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x174710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174714: 0x0  nop
    ctx->pc = 0x174714u;
    // NOP
label_174718:
    // 0x174718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17471c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174720: 0x3e00008  jr          $ra
    ctx->pc = 0x174720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174720u;
            // 0x174724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174718u: goto label_174718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174728u;
}
