#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021ED08
// Address: 0x21ed08 - 0x21edc0
void sub_0021ED08_0x21ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ED08_0x21ed08");
#endif

    ctx->pc = 0x21ed08u;

    // 0x21ed08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ed0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ed14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ed18: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21ED18u;
    SET_GPR_U32(ctx, 31, 0x21ED20u);
    ctx->pc = 0x21ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED18u;
            // 0x21ed1c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED20u; }
        if (ctx->pc != 0x21ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED20u; }
        if (ctx->pc != 0x21ED20u) { return; }
    }
    ctx->pc = 0x21ED20u;
    // 0x21ed20: 0x8e02e5a0  lw          $v0, -0x1A60($s0)
    ctx->pc = 0x21ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960544)));
    // 0x21ed24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21ED24u;
    {
        const bool branch_taken_0x21ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED24u;
            // 0x21ed28: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed24) {
            ctx->pc = 0x21ED7Cu;
            goto label_21ed7c;
        }
    }
    ctx->pc = 0x21ED2Cu;
    // 0x21ed2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21ED2Cu;
    {
        const bool branch_taken_0x21ed2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED2Cu;
            // 0x21ed30: 0xae02e5a0  sw          $v0, -0x1A60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed2c) {
            ctx->pc = 0x21EDB0u;
            goto label_21edb0;
        }
    }
    ctx->pc = 0x21ED34u;
    // 0x21ed34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ed38: 0x8c42cab4  lw          $v0, -0x354C($v0)
    ctx->pc = 0x21ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953652)));
    // 0x21ed3c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21ED3Cu;
    {
        const bool branch_taken_0x21ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED3Cu;
            // 0x21ed40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed3c) {
            ctx->pc = 0x21EDACu;
            goto label_21edac;
        }
    }
    ctx->pc = 0x21ED44u;
    // 0x21ed44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed48: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21ED48u;
    SET_GPR_U32(ctx, 31, 0x21ED50u);
    ctx->pc = 0x21ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED48u;
            // 0x21ed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (runtime->hasFunction(0x21F060u)) {
        auto targetFn = runtime->lookupFunction(0x21F060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED50u; }
        if (ctx->pc != 0x21ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F060_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED50u; }
        if (ctx->pc != 0x21ED50u) { return; }
    }
    ctx->pc = 0x21ED50u;
    // 0x21ed50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed54: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x21ED54u;
    SET_GPR_U32(ctx, 31, 0x21ED5Cu);
    ctx->pc = 0x21ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED54u;
            // 0x21ed58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED5Cu; }
        if (ctx->pc != 0x21ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED5Cu; }
        if (ctx->pc != 0x21ED5Cu) { return; }
    }
    ctx->pc = 0x21ED5Cu;
    // 0x21ed5c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21ed60: 0xc06ec78  jal         func_1BB1E0
    ctx->pc = 0x21ED60u;
    SET_GPR_U32(ctx, 31, 0x21ED68u);
    ctx->pc = 0x21ED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED60u;
            // 0x21ed64: 0x2484e550  addiu       $a0, $a0, -0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1E0u;
    if (runtime->hasFunction(0x1BB1E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED68u; }
        if (ctx->pc != 0x21ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB1E0_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED68u; }
        if (ctx->pc != 0x21ED68u) { return; }
    }
    ctx->pc = 0x21ED68u;
    // 0x21ed68: 0xc06ee6e  jal         func_1BB9B8
    ctx->pc = 0x21ED68u;
    SET_GPR_U32(ctx, 31, 0x21ED70u);
    ctx->pc = 0x21ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED68u;
            // 0x21ed6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9B8u;
    if (runtime->hasFunction(0x1BB9B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED70u; }
        if (ctx->pc != 0x21ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB9B8_0x1bb9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED70u; }
        if (ctx->pc != 0x21ED70u) { return; }
    }
    ctx->pc = 0x21ED70u;
    // 0x21ed70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ed74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21ED74u;
    {
        const bool branch_taken_0x21ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED74u;
            // 0x21ed78: 0xac40e574  sw          $zero, -0x1A8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed74) {
            ctx->pc = 0x21EDB0u;
            goto label_21edb0;
        }
    }
    ctx->pc = 0x21ED7Cu;
label_21ed7c:
    // 0x21ed7c: 0xc087904  jal         func_21E410
    ctx->pc = 0x21ED7Cu;
    SET_GPR_U32(ctx, 31, 0x21ED84u);
    ctx->pc = 0x21E410u;
    if (runtime->hasFunction(0x21E410u)) {
        auto targetFn = runtime->lookupFunction(0x21E410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED84u; }
        if (ctx->pc != 0x21ED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E410_0x21e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED84u; }
        if (ctx->pc != 0x21ED84u) { return; }
    }
    ctx->pc = 0x21ED84u;
    // 0x21ed84: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21ED84u;
    {
        const bool branch_taken_0x21ed84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ed84) {
            ctx->pc = 0x21ED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED84u;
            // 0x21ed88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EDB4u;
            goto label_21edb4;
        }
    }
    ctx->pc = 0x21ED8Cu;
    // 0x21ed8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21ed90: 0xc06ef6e  jal         func_1BBDB8
    ctx->pc = 0x21ED90u;
    SET_GPR_U32(ctx, 31, 0x21ED98u);
    ctx->pc = 0x21ED94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED90u;
            // 0x21ed94: 0xac40f1f0  sw          $zero, -0xE10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBDB8u;
    if (runtime->hasFunction(0x1BBDB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED98u; }
        if (ctx->pc != 0x21ED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBDB8_0x1bbdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED98u; }
        if (ctx->pc != 0x21ED98u) { return; }
    }
    ctx->pc = 0x21ED98u;
    // 0x21ed98: 0xc0623c0  jal         func_188F00
    ctx->pc = 0x21ED98u;
    SET_GPR_U32(ctx, 31, 0x21EDA0u);
    ctx->pc = 0x21ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED98u;
            // 0x21ed9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188F00u;
    if (runtime->hasFunction(0x188F00u)) {
        auto targetFn = runtime->lookupFunction(0x188F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDA0u; }
        if (ctx->pc != 0x21EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188f00_0x188f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDA0u; }
        if (ctx->pc != 0x21EDA0u) { return; }
    }
    ctx->pc = 0x21EDA0u;
    // 0x21eda0: 0xc0623a0  jal         func_188E80
    ctx->pc = 0x21EDA0u;
    SET_GPR_U32(ctx, 31, 0x21EDA8u);
    ctx->pc = 0x21EDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDA0u;
            // 0x21eda4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E80u;
    if (runtime->hasFunction(0x188E80u)) {
        auto targetFn = runtime->lookupFunction(0x188E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDA8u; }
        if (ctx->pc != 0x21EDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188e80_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDA8u; }
        if (ctx->pc != 0x21EDA8u) { return; }
    }
    ctx->pc = 0x21EDA8u;
    // 0x21eda8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21edac:
    // 0x21edac: 0xae02e5a0  sw          $v0, -0x1A60($s0)
    ctx->pc = 0x21edacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960544), GPR_U32(ctx, 2));
label_21edb0:
    // 0x21edb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21edb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21edb4:
    // 0x21edb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21edb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21edb8: 0x3e00008  jr          $ra
    ctx->pc = 0x21EDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDB8u;
            // 0x21edbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21ED7Cu: goto label_21ed7c;
            case 0x21EDACu: goto label_21edac;
            case 0x21EDB0u: goto label_21edb0;
            case 0x21EDB4u: goto label_21edb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EDC0u;
}
