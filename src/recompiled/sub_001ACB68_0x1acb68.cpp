#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACB68
// Address: 0x1acb68 - 0x1acbe0
void sub_001ACB68_0x1acb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACB68_0x1acb68");
#endif

    ctx->pc = 0x1acb68u;

    // 0x1acb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1acb6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acb70: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1ACB70u;
    SET_GPR_U32(ctx, 31, 0x1ACB78u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB78u; }
        if (ctx->pc != 0x1ACB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB78u; }
        if (ctx->pc != 0x1ACB78u) { return; }
    }
    ctx->pc = 0x1ACB78u;
    // 0x1acb78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb7c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ACB7Cu;
    {
        const bool branch_taken_0x1acb7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB7Cu;
            // 0x1acb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb7c) {
            ctx->pc = 0x1ACBD0u;
            goto label_1acbd0;
        }
    }
    ctx->pc = 0x1ACB84u;
    // 0x1acb84: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1acb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1acb88:
    // 0x1acb88: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1ACB88u;
    {
        const bool branch_taken_0x1acb88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb88) {
            ctx->pc = 0x1ACB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB88u;
            // 0x1acb8c: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBC4u;
            goto label_1acbc4;
        }
    }
    ctx->pc = 0x1ACB90u;
    // 0x1acb90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1acb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1acb94: 0x5085000b  beql        $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACB94u;
    {
        const bool branch_taken_0x1acb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1acb94) {
            ctx->pc = 0x1ACB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB94u;
            // 0x1acb98: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBC4u;
            goto label_1acbc4;
        }
    }
    ctx->pc = 0x1ACB9Cu;
    // 0x1acb9c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1acba0:
    // 0x1acba0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acba4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x1acba4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1acba8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACBA8u;
    {
        const bool branch_taken_0x1acba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1acba8) {
            ctx->pc = 0x1ACBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBA8u;
            // 0x1acbac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBB8u;
            goto label_1acbb8;
        }
    }
    ctx->pc = 0x1ACBB0u;
    // 0x1acbb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACBB0u;
    {
        const bool branch_taken_0x1acbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBB0u;
            // 0x1acbb4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbb0) {
            ctx->pc = 0x1ACBD0u;
            goto label_1acbd0;
        }
    }
    ctx->pc = 0x1ACBB8u;
label_1acbb8:
    // 0x1acbb8: 0x5485fff9  bnel        $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1ACBB8u;
    {
        const bool branch_taken_0x1acbb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1acbb8) {
            ctx->pc = 0x1ACBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBB8u;
            // 0x1acbbc: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBA0u;
            runtime->cooperativeGuestYield();
            goto label_1acba0;
        }
    }
    ctx->pc = 0x1ACBC0u;
    // 0x1acbc0: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1acbc4:
    // 0x1acbc4: 0x54c0fff0  bnel        $a2, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1ACBC4u;
    {
        const bool branch_taken_0x1acbc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acbc4) {
            ctx->pc = 0x1ACBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBC4u;
            // 0x1acbc8: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACB88u;
            runtime->cooperativeGuestYield();
            goto label_1acb88;
        }
    }
    ctx->pc = 0x1ACBCCu;
    // 0x1acbcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acbd0:
    // 0x1acbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBD4u;
            // 0x1acbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACB88u: goto label_1acb88;
            case 0x1ACBA0u: goto label_1acba0;
            case 0x1ACBB8u: goto label_1acbb8;
            case 0x1ACBC4u: goto label_1acbc4;
            case 0x1ACBD0u: goto label_1acbd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACBDCu;
    // 0x1acbdc: 0x0  nop
    ctx->pc = 0x1acbdcu;
    // NOP
}
