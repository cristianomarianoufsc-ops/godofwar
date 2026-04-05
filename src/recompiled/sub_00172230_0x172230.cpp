#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172230
// Address: 0x172230 - 0x172298
void sub_00172230_0x172230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172230_0x172230");
#endif

    ctx->pc = 0x172230u;

    // 0x172230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17223c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172240: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x172244: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x172244u;
    {
        const bool branch_taken_0x172244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172244u;
            // 0x172248: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172244) {
            ctx->pc = 0x172278u;
            goto label_172278;
        }
    }
    ctx->pc = 0x17224Cu;
    // 0x17224c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x17224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_172250:
    // 0x172250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172254: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x172254u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x172258: 0x908200c0  lbu         $v0, 0xC0($a0)
    ctx->pc = 0x172258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x17225c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17225Cu;
    {
        const bool branch_taken_0x17225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17225c) {
            ctx->pc = 0x172260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17225Cu;
            // 0x172260: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172270u;
            goto label_172270;
        }
    }
    ctx->pc = 0x172264u;
    // 0x172264: 0xc05c43a  jal         func_1710E8
    ctx->pc = 0x172264u;
    SET_GPR_U32(ctx, 31, 0x17226Cu);
    ctx->pc = 0x172268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172264u;
            // 0x172268: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710E8u;
    if (runtime->hasFunction(0x1710E8u)) {
        auto targetFn = runtime->lookupFunction(0x1710E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17226Cu; }
        if (ctx->pc != 0x17226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1710e8_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17226Cu; }
        if (ctx->pc != 0x17226Cu) { return; }
    }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x17226cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172270:
    // 0x172270: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x172270u;
    {
        const bool branch_taken_0x172270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x172274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172270u;
            // 0x172274: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172270) {
            ctx->pc = 0x172250u;
            runtime->cooperativeGuestYield();
            goto label_172250;
        }
    }
    ctx->pc = 0x172278u;
label_172278:
    // 0x172278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17227c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17227cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172284: 0x3e00008  jr          $ra
    ctx->pc = 0x172284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172284u;
            // 0x172288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172250u: goto label_172250;
            case 0x172270u: goto label_172270;
            case 0x172278u: goto label_172278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17228Cu;
    // 0x17228c: 0x0  nop
    ctx->pc = 0x17228cu;
    // NOP
    // 0x172290: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x172290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x172294: 0x0  nop
    ctx->pc = 0x172294u;
    // NOP
}
