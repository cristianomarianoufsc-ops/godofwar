#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017ED28
// Address: 0x17ed28 - 0x17ed88
void sub_0017ED28_0x17ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED28_0x17ed28");
#endif

    ctx->pc = 0x17ed28u;

    // 0x17ed28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ed2c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17ed2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ed34: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ed38: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x17ED38u;
    {
        const bool branch_taken_0x17ed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x17ED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED38u;
            // 0x17ed3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed38) {
            ctx->pc = 0x17ED78u;
            goto label_17ed78;
        }
    }
    ctx->pc = 0x17ED40u;
    // 0x17ed40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17ed44: 0x0  nop
    ctx->pc = 0x17ed44u;
    // NOP
label_17ed48:
    // 0x17ed48: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17ED48u;
    {
        const bool branch_taken_0x17ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ed48) {
            ctx->pc = 0x17ED4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED48u;
            // 0x17ed4c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17ED6Cu;
            goto label_17ed6c;
        }
    }
    ctx->pc = 0x17ED50u;
    // 0x17ed50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ed54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ed58: 0x8c44c784  lw          $a0, -0x387C($v0)
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952836)));
    // 0x17ed5c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17ED5Cu;
    SET_GPR_U32(ctx, 31, 0x17ED64u);
    ctx->pc = 0x17ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED5Cu;
            // 0x17ed60: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED64u; }
        if (ctx->pc != 0x17ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED64u; }
        if (ctx->pc != 0x17ED64u) { return; }
    }
    ctx->pc = 0x17ED64u;
    // 0x17ed64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17ED64u;
    {
        const bool branch_taken_0x17ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED64u;
            // 0x17ed68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed64) {
            ctx->pc = 0x17ED7Cu;
            goto label_17ed7c;
        }
    }
    ctx->pc = 0x17ED6Cu;
label_17ed6c:
    // 0x17ed6c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ed70: 0x5485fff5  bnel        $a0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17ED70u;
    {
        const bool branch_taken_0x17ed70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x17ed70) {
            ctx->pc = 0x17ED74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED70u;
            // 0x17ed74: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17ED48u;
            runtime->cooperativeGuestYield();
            goto label_17ed48;
        }
    }
    ctx->pc = 0x17ED78u;
label_17ed78:
    // 0x17ed78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ed7c:
    // 0x17ed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED7Cu;
            // 0x17ed80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ED48u: goto label_17ed48;
            case 0x17ED6Cu: goto label_17ed6c;
            case 0x17ED78u: goto label_17ed78;
            case 0x17ED7Cu: goto label_17ed7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ED84u;
    // 0x17ed84: 0x0  nop
    ctx->pc = 0x17ed84u;
    // NOP
}
