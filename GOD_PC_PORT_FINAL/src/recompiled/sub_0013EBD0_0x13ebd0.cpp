#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EBD0
// Address: 0x13ebd0 - 0x13ec48
void sub_0013EBD0_0x13ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EBD0_0x13ebd0");
#endif

    ctx->pc = 0x13ebd0u;

    // 0x13ebd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ebd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ebd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ebdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ebe0: 0xc04c090  jal         func_130240
    ctx->pc = 0x13EBE0u;
    SET_GPR_U32(ctx, 31, 0x13EBE8u);
    ctx->pc = 0x13EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBE0u;
            // 0x13ebe4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (runtime->hasFunction(0x130240u)) {
        auto targetFn = runtime->lookupFunction(0x130240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBE8u; }
        if (ctx->pc != 0x13EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_130240_0x1302b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBE8u; }
        if (ctx->pc != 0x13EBE8u) { return; }
    }
    ctx->pc = 0x13EBE8u;
    // 0x13ebe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EBECu;
    {
        const bool branch_taken_0x13ebec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBECu;
            // 0x13ebf0: 0x262300f8  addiu       $v1, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebec) {
            ctx->pc = 0x13EC08u;
            goto label_13ec08;
        }
    }
    ctx->pc = 0x13EBF4u;
    // 0x13ebf4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13ebf8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13ebfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ec00: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13ec04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_13ec08:
    // 0x13ec08: 0xc04faea  jal         func_13EBA8
    ctx->pc = 0x13EC08u;
    SET_GPR_U32(ctx, 31, 0x13EC10u);
    ctx->pc = 0x13EC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC08u;
            // 0x13ec0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EBA8u;
    if (runtime->hasFunction(0x13EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x13EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC10u; }
        if (ctx->pc != 0x13EC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13eba8_0x13ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC10u; }
        if (ctx->pc != 0x13EC10u) { return; }
    }
    ctx->pc = 0x13EC10u;
    // 0x13ec10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EC10u;
    {
        const bool branch_taken_0x13ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec10) {
            ctx->pc = 0x13EC24u;
            goto label_13ec24;
        }
    }
    ctx->pc = 0x13EC18u;
    // 0x13ec18: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x13ec18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x13ec1c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC1Cu;
    {
        const bool branch_taken_0x13ec1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC1Cu;
            // 0x13ec20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec1c) {
            ctx->pc = 0x13EC2Cu;
            goto label_13ec2c;
        }
    }
    ctx->pc = 0x13EC24u;
label_13ec24:
    // 0x13ec24: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13EC24u;
    {
        const bool branch_taken_0x13ec24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC24u;
            // 0x13ec28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec24) {
            ctx->pc = 0x13EC30u;
            goto label_13ec30;
        }
    }
    ctx->pc = 0x13EC2Cu;
label_13ec2c:
    // 0x13ec2c: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x13ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
label_13ec30:
    // 0x13ec30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ec30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ec34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ec34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ec38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC3Cu;
            // 0x13ec40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EC08u: goto label_13ec08;
            case 0x13EC24u: goto label_13ec24;
            case 0x13EC2Cu: goto label_13ec2c;
            case 0x13EC30u: goto label_13ec30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EC44u;
    // 0x13ec44: 0x0  nop
    ctx->pc = 0x13ec44u;
    // NOP
}
