#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F730
// Address: 0x21f730 - 0x21f798
void sub_0021F730_0x21f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F730_0x21f730");
#endif

    ctx->pc = 0x21f730u;

    // 0x21f730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f738: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F738u;
    SET_GPR_U32(ctx, 31, 0x21F740u);
    ctx->pc = 0x21F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F738u;
            // 0x21f73c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F740u; }
        if (ctx->pc != 0x21F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F740u; }
        if (ctx->pc != 0x21F740u) { return; }
    }
    ctx->pc = 0x21F740u;
    // 0x21f740: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f744: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x21f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f748: 0x8ca20284  lw          $v0, 0x284($a1)
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 644)));
    // 0x21f74c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21F74Cu;
    {
        const bool branch_taken_0x21f74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F74Cu;
            // 0x21f750: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f74c) {
            ctx->pc = 0x21F788u;
            goto label_21f788;
        }
    }
    ctx->pc = 0x21F754u;
    // 0x21f754: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21f754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21f758: 0x8c44e594  lw          $a0, -0x1A6C($v0)
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960532)));
    // 0x21f75c: 0x8c63e598  lw          $v1, -0x1A68($v1)
    ctx->pc = 0x21f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960536)));
    // 0x21f760: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f764: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x21f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x21f768: 0xaca30278  sw          $v1, 0x278($a1)
    ctx->pc = 0x21f768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 632), GPR_U32(ctx, 3));
    // 0x21f76c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F76Cu;
    {
        const bool branch_taken_0x21f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F76Cu;
            // 0x21f770: 0xaca401bc  sw          $a0, 0x1BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 444), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f76c) {
            ctx->pc = 0x21F77Cu;
            goto label_21f77c;
        }
    }
    ctx->pc = 0x21F774u;
    // 0x21f774: 0xc075ad0  jal         func_1D6B40
    ctx->pc = 0x21F774u;
    SET_GPR_U32(ctx, 31, 0x21F77Cu);
    ctx->pc = 0x21F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F774u;
            // 0x21f778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6B40u;
    if (runtime->hasFunction(0x1D6B40u)) {
        auto targetFn = runtime->lookupFunction(0x1D6B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F77Cu; }
        if (ctx->pc != 0x21F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6B40_0x1d6b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F77Cu; }
        if (ctx->pc != 0x21F77Cu) { return; }
    }
    ctx->pc = 0x21F77Cu;
label_21f77c:
    // 0x21f77c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21f780: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f784: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21f784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
label_21f788:
    // 0x21f788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f78c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F78Cu;
            // 0x21f790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F77Cu: goto label_21f77c;
            case 0x21F788u: goto label_21f788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F794u;
    // 0x21f794: 0x0  nop
    ctx->pc = 0x21f794u;
    // NOP
}
