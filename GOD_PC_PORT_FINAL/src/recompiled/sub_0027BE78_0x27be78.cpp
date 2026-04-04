#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BE78
// Address: 0x27be78 - 0x27bed8
void sub_0027BE78_0x27be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE78_0x27be78");
#endif

    ctx->pc = 0x27be78u;

    // 0x27be78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27be7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27be80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27be84: 0xc09ef6a  jal         func_27BDA8
    ctx->pc = 0x27BE84u;
    SET_GPR_U32(ctx, 31, 0x27BE8Cu);
    ctx->pc = 0x27BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE84u;
            // 0x27be88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BDA8u;
    if (runtime->hasFunction(0x27BDA8u)) {
        auto targetFn = runtime->lookupFunction(0x27BDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE8Cu; }
        if (ctx->pc != 0x27BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bda8_0x27be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE8Cu; }
        if (ctx->pc != 0x27BE8Cu) { return; }
    }
    ctx->pc = 0x27BE8Cu;
    // 0x27be8c: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27be90: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27BE90u;
    {
        const bool branch_taken_0x27be90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE90u;
            // 0x27be94: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be90) {
            ctx->pc = 0x27BEB8u;
            goto label_27beb8;
        }
    }
    ctx->pc = 0x27BE98u;
    // 0x27be98: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27be9c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x27be9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27bea0: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
    // 0x27bea4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x27bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27bea8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27beac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27beb0: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BEB0u;
    {
        const bool branch_taken_0x27beb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27beb0) {
            ctx->pc = 0x27BEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEB0u;
            // 0x27beb4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BEC0u;
            goto label_27bec0;
        }
    }
    ctx->pc = 0x27BEB8u;
label_27beb8:
    // 0x27beb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BEB8u;
    {
        const bool branch_taken_0x27beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BEB8u;
            // 0x27bebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27beb8) {
            ctx->pc = 0x27BEC4u;
            goto label_27bec4;
        }
    }
    ctx->pc = 0x27BEC0u;
label_27bec0:
    // 0x27bec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bec4:
    // 0x27bec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27becc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BECCu;
            // 0x27bed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BEB8u: goto label_27beb8;
            case 0x27BEC0u: goto label_27bec0;
            case 0x27BEC4u: goto label_27bec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BED4u;
    // 0x27bed4: 0x0  nop
    ctx->pc = 0x27bed4u;
    // NOP
}
