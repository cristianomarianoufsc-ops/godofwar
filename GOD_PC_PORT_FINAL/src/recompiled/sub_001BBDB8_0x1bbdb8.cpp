#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBDB8
// Address: 0x1bbdb8 - 0x1bbe28
void sub_001BBDB8_0x1bbdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBDB8_0x1bbdb8");
#endif

    ctx->pc = 0x1bbdb8u;

    // 0x1bbdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbdbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbdc0: 0xc06ef94  jal         func_1BBE50
    ctx->pc = 0x1BBDC0u;
    SET_GPR_U32(ctx, 31, 0x1BBDC8u);
    ctx->pc = 0x1BBE50u;
    if (runtime->hasFunction(0x1BBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDC8u; }
        if (ctx->pc != 0x1BBDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE50_0x1bbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDC8u; }
        if (ctx->pc != 0x1BBDC8u) { return; }
    }
    ctx->pc = 0x1BBDC8u;
    // 0x1bbdc8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1bbdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1bbdcc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1BBDCCu;
    SET_GPR_U32(ctx, 31, 0x1BBDD4u);
    ctx->pc = 0x1BBDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDCCu;
            // 0x1bbdd0: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDD4u; }
        if (ctx->pc != 0x1BBDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDD4u; }
        if (ctx->pc != 0x1BBDD4u) { return; }
    }
    ctx->pc = 0x1BBDD4u;
    // 0x1bbdd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdd8: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x1bbddc: 0x8c850360  lw          $a1, 0x360($a0)
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x1bbde0: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBDE0u;
    {
        const bool branch_taken_0x1bbde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbde0) {
            ctx->pc = 0x1BBDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDE0u;
            // 0x1bbde4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBDF0u;
            goto label_1bbdf0;
        }
    }
    ctx->pc = 0x1BBDE8u;
    // 0x1bbde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdec: 0x0  nop
    ctx->pc = 0x1bbdecu;
    // NOP
label_1bbdf0:
    // 0x1bbdf0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBDF0u;
    {
        const bool branch_taken_0x1bbdf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdf0) {
            ctx->pc = 0x1BBDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDF0u;
            // 0x1bbdf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE04u;
            goto label_1bbe04;
        }
    }
    ctx->pc = 0x1BBDF8u;
    // 0x1bbdf8: 0xc05a3e6  jal         func_168F98
    ctx->pc = 0x1BBDF8u;
    SET_GPR_U32(ctx, 31, 0x1BBE00u);
    ctx->pc = 0x168F98u;
    if (runtime->hasFunction(0x168F98u)) {
        auto targetFn = runtime->lookupFunction(0x168F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE00u; }
        if (ctx->pc != 0x1BBE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F98_0x168f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE00u; }
        if (ctx->pc != 0x1BBE00u) { return; }
    }
    ctx->pc = 0x1BBE00u;
    // 0x1bbe00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbe04:
    // 0x1bbe04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe0c: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE14u);
    ctx->pc = 0x1BBE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE0Cu;
            // 0x1bbe10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE14u; }
        if (ctx->pc != 0x1BBE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE14u; }
        if (ctx->pc != 0x1BBE14u) { return; }
    }
    ctx->pc = 0x1BBE14u;
    // 0x1bbe14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bbe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe1c: 0xac40cc50  sw          $zero, -0x33B0($v0)
    ctx->pc = 0x1bbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954064), GPR_U32(ctx, 0));
    // 0x1bbe20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE20u;
            // 0x1bbe24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBDF0u: goto label_1bbdf0;
            case 0x1BBE04u: goto label_1bbe04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBE28u;
}
