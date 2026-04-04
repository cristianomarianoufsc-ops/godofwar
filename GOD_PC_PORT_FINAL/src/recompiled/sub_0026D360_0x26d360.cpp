#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D360
// Address: 0x26d360 - 0x26d3c0
void sub_0026D360_0x26d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D360_0x26d360");
#endif

    ctx->pc = 0x26d360u;

    // 0x26d360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d364: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26d368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d370: 0xc0a4e44  jal         func_293910
    ctx->pc = 0x26D370u;
    SET_GPR_U32(ctx, 31, 0x26D378u);
    ctx->pc = 0x26D374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D370u;
            // 0x26d374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293910u;
    if (runtime->hasFunction(0x293910u)) {
        auto targetFn = runtime->lookupFunction(0x293910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D378u; }
        if (ctx->pc != 0x26D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293910_0x293920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D378u; }
        if (ctx->pc != 0x26D378u) { return; }
    }
    ctx->pc = 0x26D378u;
    // 0x26d378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d37c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26d380: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d388: 0x2442a470  addiu       $v0, $v0, -0x5B90
    ctx->pc = 0x26d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
    // 0x26d38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d398: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D398u;
    {
        const bool branch_taken_0x26d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x26D39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D398u;
            // 0x26d39c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d398) {
            ctx->pc = 0x26D3A8u;
            goto label_26d3a8;
        }
    }
    ctx->pc = 0x26D3A0u;
    // 0x26d3a0: 0xc0a51a4  jal         func_294690
    ctx->pc = 0x26D3A0u;
    SET_GPR_U32(ctx, 31, 0x26D3A8u);
    ctx->pc = 0x26D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3A0u;
            // 0x26d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294690u;
    if (runtime->hasFunction(0x294690u)) {
        auto targetFn = runtime->lookupFunction(0x294690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3A8u; }
        if (ctx->pc != 0x26D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294690_0x294690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D3A8u; }
        if (ctx->pc != 0x26D3A8u) { return; }
    }
    ctx->pc = 0x26D3A8u;
label_26d3a8:
    // 0x26d3a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26d3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d3ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26d3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26D3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3B8u;
            // 0x26d3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D3A8u: goto label_26d3a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D3C0u;
}
