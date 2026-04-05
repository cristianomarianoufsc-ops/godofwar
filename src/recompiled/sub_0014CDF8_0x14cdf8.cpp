#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CDF8
// Address: 0x14cdf8 - 0x14ce90
void sub_0014CDF8_0x14cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CDF8_0x14cdf8");
#endif

    ctx->pc = 0x14cdf8u;

    // 0x14cdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cdfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14cdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ce04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ce08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ce08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce0c: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x14ce0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x14ce10: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x14ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x14ce14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CE14u;
    {
        const bool branch_taken_0x14ce14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE14u;
            // 0x14ce18: 0xa6000040  sh          $zero, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce14) {
            ctx->pc = 0x14CE28u;
            goto label_14ce28;
        }
    }
    ctx->pc = 0x14CE1Cu;
    // 0x14ce1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14ce20: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x14ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x14ce24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14ce24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14ce28:
    // 0x14ce28: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14CE28u;
    {
        const bool branch_taken_0x14ce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce28) {
            ctx->pc = 0x14CE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE28u;
            // 0x14ce2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CE80u;
            goto label_14ce80;
        }
    }
    ctx->pc = 0x14CE30u;
    // 0x14ce30: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CE30u;
    {
        const bool branch_taken_0x14ce30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ce30) {
            ctx->pc = 0x14CE48u;
            goto label_14ce48;
        }
    }
    ctx->pc = 0x14CE38u;
    // 0x14ce38: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14ce38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14ce3c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x14ce40: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x14CE40u;
    {
        const bool branch_taken_0x14ce40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ce40) {
            ctx->pc = 0x14CE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE40u;
            // 0x14ce44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CE80u;
            goto label_14ce80;
        }
    }
    ctx->pc = 0x14CE48u;
label_14ce48:
    // 0x14ce48: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CE48u;
    {
        const bool branch_taken_0x14ce48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ce48) {
            ctx->pc = 0x14CE64u;
            goto label_14ce64;
        }
    }
    ctx->pc = 0x14CE50u;
    // 0x14ce50: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14ce50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14ce54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14ce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14ce58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ce5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CE5Cu;
    {
        const bool branch_taken_0x14ce5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce5c) {
            ctx->pc = 0x14CE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE5Cu;
            // 0x14ce60: 0x92020030  lbu         $v0, 0x30($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CE74u;
            goto label_14ce74;
        }
    }
    ctx->pc = 0x14CE64u;
label_14ce64:
    // 0x14ce64: 0xc053ba0  jal         func_14EE80
    ctx->pc = 0x14CE64u;
    SET_GPR_U32(ctx, 31, 0x14CE6Cu);
    ctx->pc = 0x14EE80u;
    if (runtime->hasFunction(0x14EE80u)) {
        auto targetFn = runtime->lookupFunction(0x14EE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE6Cu; }
        if (ctx->pc != 0x14CE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EE80_0x14ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE6Cu; }
        if (ctx->pc != 0x14CE6Cu) { return; }
    }
    ctx->pc = 0x14CE6Cu;
    // 0x14ce6c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x14ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x14ce70: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14ce70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_14ce74:
    // 0x14ce74: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x14ce78: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x14ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ce7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ce7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ce80:
    // 0x14ce80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ce80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ce84: 0x3e00008  jr          $ra
    ctx->pc = 0x14CE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE84u;
            // 0x14ce88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CE28u: goto label_14ce28;
            case 0x14CE48u: goto label_14ce48;
            case 0x14CE64u: goto label_14ce64;
            case 0x14CE74u: goto label_14ce74;
            case 0x14CE80u: goto label_14ce80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CE8Cu;
    // 0x14ce8c: 0x0  nop
    ctx->pc = 0x14ce8cu;
    // NOP
}
