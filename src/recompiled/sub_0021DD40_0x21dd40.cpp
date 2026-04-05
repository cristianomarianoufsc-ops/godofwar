#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DD40
// Address: 0x21dd40 - 0x21dde0
void sub_0021DD40_0x21dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DD40_0x21dd40");
#endif

    ctx->pc = 0x21dd40u;

    // 0x21dd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21dd44: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21dd44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21dd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21dd4c: 0x8ce3cb94  lw          $v1, -0x346C($a3)
    ctx->pc = 0x21dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953876)));
    // 0x21dd50: 0x8c621528  lw          $v0, 0x1528($v1)
    ctx->pc = 0x21dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5416)));
    // 0x21dd54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DD54u;
    {
        const bool branch_taken_0x21dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD54u;
            // 0x21dd58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd54) {
            ctx->pc = 0x21DD74u;
            goto label_21dd74;
        }
    }
    ctx->pc = 0x21DD5Cu;
    // 0x21dd5c: 0x8c62152c  lw          $v0, 0x152C($v1)
    ctx->pc = 0x21dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5420)));
    // 0x21dd60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DD60u;
    {
        const bool branch_taken_0x21dd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dd60) {
            ctx->pc = 0x21DD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD60u;
            // 0x21dd64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21DD78u;
            goto label_21dd78;
        }
    }
    ctx->pc = 0x21DD68u;
    // 0x21dd68: 0x8c621530  lw          $v0, 0x1530($v1)
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5424)));
    // 0x21dd6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DD6Cu;
    {
        const bool branch_taken_0x21dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dd6c) {
            ctx->pc = 0x21DD78u;
            goto label_21dd78;
        }
    }
    ctx->pc = 0x21DD74u;
label_21dd74:
    // 0x21dd74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21dd78:
    // 0x21dd78: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21DD78u;
    {
        const bool branch_taken_0x21dd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD78u;
            // 0x21dd7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd78) {
            ctx->pc = 0x21DDD4u;
            goto label_21ddd4;
        }
    }
    ctx->pc = 0x21DD80u;
    // 0x21dd80: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x21dd80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x21dd84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21dd88: 0x24c26e88  addiu       $v0, $a2, 0x6E88
    ctx->pc = 0x21dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28296));
    // 0x21dd8c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x21dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21dd90: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DD90u;
    {
        const bool branch_taken_0x21dd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD90u;
            // 0x21dd94: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd90) {
            ctx->pc = 0x21DDA0u;
            goto label_21dda0;
        }
    }
    ctx->pc = 0x21DD98u;
    // 0x21dd98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21DD98u;
    {
        const bool branch_taken_0x21dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD98u;
            // 0x21dd9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd98) {
            ctx->pc = 0x21DDC8u;
            goto label_21ddc8;
        }
    }
    ctx->pc = 0x21DDA0u;
label_21dda0:
    // 0x21dda0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_21dda4:
    // 0x21dda4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DDA4u;
    {
        const bool branch_taken_0x21dda4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21DDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDA4u;
            // 0x21dda8: 0x24c26e88  addiu       $v0, $a2, 0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dda4) {
            ctx->pc = 0x21DDC8u;
            goto label_21ddc8;
        }
    }
    ctx->pc = 0x21DDACu;
    // 0x21ddac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21ddb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ddb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ddb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ddbc: 0x1062fff9  beq         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21DDBCu;
    {
        const bool branch_taken_0x21ddbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21DDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDBCu;
            // 0x21ddc0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddbc) {
            ctx->pc = 0x21DDA4u;
            runtime->cooperativeGuestYield();
            goto label_21dda4;
        }
    }
    ctx->pc = 0x21DDC4u;
    // 0x21ddc4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21ddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21ddc8:
    // 0x21ddc8: 0xc06e6bc  jal         func_1B9AF0
    ctx->pc = 0x21DDC8u;
    SET_GPR_U32(ctx, 31, 0x21DDD0u);
    ctx->pc = 0x21DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDC8u;
            // 0x21ddcc: 0x8ce4cb94  lw          $a0, -0x346C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AF0u;
    if (runtime->hasFunction(0x1B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DDD0u; }
        if (ctx->pc != 0x21DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9AF0_0x1b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DDD0u; }
        if (ctx->pc != 0x21DDD0u) { return; }
    }
    ctx->pc = 0x21DDD0u;
    // 0x21ddd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ddd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ddd4:
    // 0x21ddd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDD4u;
            // 0x21ddd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DD74u: goto label_21dd74;
            case 0x21DD78u: goto label_21dd78;
            case 0x21DDA0u: goto label_21dda0;
            case 0x21DDA4u: goto label_21dda4;
            case 0x21DDC8u: goto label_21ddc8;
            case 0x21DDD4u: goto label_21ddd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DDDCu;
    // 0x21dddc: 0x0  nop
    ctx->pc = 0x21dddcu;
    // NOP
}
