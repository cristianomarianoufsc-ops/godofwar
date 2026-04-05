#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CDB8
// Address: 0x26cdb8 - 0x26ce30
void sub_0026CDB8_0x26cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CDB8_0x26cdb8");
#endif

    ctx->pc = 0x26cdb8u;

    // 0x26cdb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cdbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26cdc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26cdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cdc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26cdcc: 0xc0a648c  jal         func_299230
    ctx->pc = 0x26CDCCu;
    SET_GPR_U32(ctx, 31, 0x26CDD4u);
    ctx->pc = 0x26CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDCCu;
            // 0x26cdd0: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD4u; }
        if (ctx->pc != 0x26CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDD4u; }
        if (ctx->pc != 0x26CDD4u) { return; }
    }
    ctx->pc = 0x26CDD4u;
    // 0x26cdd4: 0x8e24a440  lw          $a0, -0x5BC0($s1)
    ctx->pc = 0x26cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943808)));
    // 0x26cdd8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cddc: 0x2442a448  addiu       $v0, $v0, -0x5BB8
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943816));
    // 0x26cde0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26cde4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26cde8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26cdec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x26cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x26cdf0: 0xae24a440  sw          $a0, -0x5BC0($s1)
    ctx->pc = 0x26cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943808), GPR_U32(ctx, 4));
    // 0x26cdf4: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x26CDF4u;
    SET_GPR_U32(ctx, 31, 0x26CDFCu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDFCu; }
        if (ctx->pc != 0x26CDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDFCu; }
        if (ctx->pc != 0x26CDFCu) { return; }
    }
    ctx->pc = 0x26CDFCu;
    // 0x26cdfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26CDFCu;
    {
        const bool branch_taken_0x26cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cdfc) {
            ctx->pc = 0x26CE10u;
            goto label_26ce10;
        }
    }
    ctx->pc = 0x26CE04u;
    // 0x26ce04: 0x0  nop
    ctx->pc = 0x26ce04u;
    // NOP
label_26ce08:
    // 0x26ce08: 0xc09b4cc  jal         func_26D330
    ctx->pc = 0x26CE08u;
    SET_GPR_U32(ctx, 31, 0x26CE10u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE10u; }
        if (ctx->pc != 0x26CE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE10u; }
        if (ctx->pc != 0x26CE10u) { return; }
    }
    ctx->pc = 0x26CE10u;
label_26ce10:
    // 0x26ce10: 0x8e23a440  lw          $v1, -0x5BC0($s1)
    ctx->pc = 0x26ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943808)));
    // 0x26ce14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ce18: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26CE18u;
    {
        const bool branch_taken_0x26ce18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE18u;
            // 0x26ce1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce18) {
            ctx->pc = 0x26CE08u;
            runtime->cooperativeGuestYield();
            goto label_26ce08;
        }
    }
    ctx->pc = 0x26CE20u;
    // 0x26ce20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ce20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ce24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x26CE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE28u;
            // 0x26ce2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CE08u: goto label_26ce08;
            case 0x26CE10u: goto label_26ce10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CE30u;
}
