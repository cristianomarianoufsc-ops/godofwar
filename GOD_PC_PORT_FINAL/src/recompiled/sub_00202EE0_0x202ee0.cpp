#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202EE0
// Address: 0x202ee0 - 0x202f48
void sub_00202EE0_0x202ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202EE0_0x202ee0");
#endif

    ctx->pc = 0x202ee0u;

    // 0x202ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202ee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ef0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x202ef4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x202EF4u;
    {
        const bool branch_taken_0x202ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202ef4) {
            ctx->pc = 0x202EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202EF4u;
            // 0x202ef8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202EFCu;
    // 0x202efc: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x202efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x202f00: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x202f04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x202f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x202f08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202f0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x202F0Cu;
    {
        const bool branch_taken_0x202f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f0c) {
            ctx->pc = 0x202F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202F0Cu;
            // 0x202f10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202F14u;
    // 0x202f14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202f18: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x202f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x202f1c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x202f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x202f20: 0x40f809  jalr        $v0
    ctx->pc = 0x202F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202F28u);
        ctx->pc = 0x202F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F20u;
            // 0x202f24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x202F28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202F3Cu: goto label_202f3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x202F28u; }
            if (ctx->pc != 0x202F28u) { return; }
        }
        }
    }
    ctx->pc = 0x202F28u;
    // 0x202f28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x202F28u;
    {
        const bool branch_taken_0x202f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f28) {
            ctx->pc = 0x202F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202F28u;
            // 0x202f2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202F3Cu;
            goto label_202f3c;
        }
    }
    ctx->pc = 0x202F30u;
    // 0x202f30: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x202F30u;
    SET_GPR_U32(ctx, 31, 0x202F38u);
    ctx->pc = 0x202F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F30u;
            // 0x202f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F38u; }
        if (ctx->pc != 0x202F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F38u; }
        if (ctx->pc != 0x202F38u) { return; }
    }
    ctx->pc = 0x202F38u;
    // 0x202f38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202f3c:
    // 0x202f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202f40: 0x3e00008  jr          $ra
    ctx->pc = 0x202F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F40u;
            // 0x202f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202F3Cu: goto label_202f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202F48u;
}
