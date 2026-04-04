#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002215E8
// Address: 0x2215e8 - 0x221660
void sub_002215E8_0x2215e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002215E8_0x2215e8");
#endif

    ctx->pc = 0x2215e8u;

    // 0x2215e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2215ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2215ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2215f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2215f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2215f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2215f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215f8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x2215fc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2215fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x221600: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x221600u;
    {
        const bool branch_taken_0x221600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221600) {
            ctx->pc = 0x221604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221600u;
            // 0x221604: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221650u;
            goto label_221650;
        }
    }
    ctx->pc = 0x221608u;
    // 0x221608: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22160c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x22160cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x221610: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x221614: 0x40f809  jalr        $v0
    ctx->pc = 0x221614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22161Cu);
        ctx->pc = 0x221618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221614u;
            // 0x221618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22161Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221650u: goto label_221650;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22161Cu; }
            if (ctx->pc != 0x22161Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22161Cu;
    // 0x22161c: 0x8c420388  lw          $v0, 0x388($v0)
    ctx->pc = 0x22161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x221620: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x221624: 0x80420070  lb          $v0, 0x70($v0)
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x221628: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x221628u;
    {
        const bool branch_taken_0x221628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221628) {
            ctx->pc = 0x22162Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221628u;
            // 0x22162c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221650u;
            goto label_221650;
        }
    }
    ctx->pc = 0x221630u;
    // 0x221630: 0xc05e996  jal         func_17A658
    ctx->pc = 0x221630u;
    SET_GPR_U32(ctx, 31, 0x221638u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221638u; }
        if (ctx->pc != 0x221638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221638u; }
        if (ctx->pc != 0x221638u) { return; }
    }
    ctx->pc = 0x221638u;
    // 0x221638: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221638u;
    {
        const bool branch_taken_0x221638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221638) {
            ctx->pc = 0x22163Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221638u;
            // 0x22163c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221650u;
            goto label_221650;
        }
    }
    ctx->pc = 0x221640u;
    // 0x221640: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x221640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x221644: 0xc05c294  jal         func_170A50
    ctx->pc = 0x221644u;
    SET_GPR_U32(ctx, 31, 0x22164Cu);
    ctx->pc = 0x221648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221644u;
            // 0x221648: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22164Cu; }
        if (ctx->pc != 0x22164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22164Cu; }
        if (ctx->pc != 0x22164Cu) { return; }
    }
    ctx->pc = 0x22164Cu;
    // 0x22164c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22164cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221650:
    // 0x221650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221654: 0x3e00008  jr          $ra
    ctx->pc = 0x221654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221654u;
            // 0x221658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221650u: goto label_221650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22165Cu;
    // 0x22165c: 0x0  nop
    ctx->pc = 0x22165cu;
    // NOP
}
