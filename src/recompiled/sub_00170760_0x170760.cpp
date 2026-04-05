#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170760
// Address: 0x170760 - 0x1707b8
void sub_00170760_0x170760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170760_0x170760");
#endif

    ctx->pc = 0x170760u;

    // 0x170760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17076c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17076cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170770: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x170774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170774u;
    {
        const bool branch_taken_0x170774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170774) {
            ctx->pc = 0x170790u;
            goto label_170790;
        }
    }
    ctx->pc = 0x17077Cu;
    // 0x17077c: 0xc05d656  jal         func_175958
    ctx->pc = 0x17077Cu;
    SET_GPR_U32(ctx, 31, 0x170784u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170784u; }
        if (ctx->pc != 0x170784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170784u; }
        if (ctx->pc != 0x170784u) { return; }
    }
    ctx->pc = 0x170784u;
    // 0x170784: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x170784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x170788: 0xc05d71e  jal         func_175C78
    ctx->pc = 0x170788u;
    SET_GPR_U32(ctx, 31, 0x170790u);
    ctx->pc = 0x17078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170788u;
            // 0x17078c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C78u;
    if (runtime->hasFunction(0x175C78u)) {
        auto targetFn = runtime->lookupFunction(0x175C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170790u; }
        if (ctx->pc != 0x170790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C78_0x175c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170790u; }
        if (ctx->pc != 0x170790u) { return; }
    }
    ctx->pc = 0x170790u;
label_170790:
    // 0x170790: 0xc05c440  jal         func_171100
    ctx->pc = 0x170790u;
    SET_GPR_U32(ctx, 31, 0x170798u);
    ctx->pc = 0x170794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170790u;
            // 0x170794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171100u;
    if (runtime->hasFunction(0x171100u)) {
        auto targetFn = runtime->lookupFunction(0x171100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170798u; }
        if (ctx->pc != 0x170798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171100_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170798u; }
        if (ctx->pc != 0x170798u) { return; }
    }
    ctx->pc = 0x170798u;
    // 0x170798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17079c: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x17079Cu;
    SET_GPR_U32(ctx, 31, 0x1707A4u);
    ctx->pc = 0x1707A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17079Cu;
            // 0x1707a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (runtime->hasFunction(0x239280u)) {
        auto targetFn = runtime->lookupFunction(0x239280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707A4u; }
        if (ctx->pc != 0x1707A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239280_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707A4u; }
        if (ctx->pc != 0x1707A4u) { return; }
    }
    ctx->pc = 0x1707A4u;
    // 0x1707a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1707a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1707a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1707ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1707B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707ACu;
            // 0x1707b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170790u: goto label_170790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1707B4u;
    // 0x1707b4: 0x0  nop
    ctx->pc = 0x1707b4u;
    // NOP
}
