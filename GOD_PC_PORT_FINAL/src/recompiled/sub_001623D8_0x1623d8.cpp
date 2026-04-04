#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001623D8
// Address: 0x1623d8 - 0x162448
void sub_001623D8_0x1623d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001623D8_0x1623d8");
#endif

    ctx->pc = 0x1623d8u;

    // 0x1623d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1623d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1623dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1623dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1623e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1623e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1623e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1623e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1623e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1623ec: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1623f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1623F0u;
    {
        const bool branch_taken_0x1623f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1623F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623F0u;
            // 0x1623f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623f0) {
            ctx->pc = 0x162400u;
            goto label_162400;
        }
    }
    ctx->pc = 0x1623F8u;
    // 0x1623f8: 0xc0503ea  jal         func_140FA8
    ctx->pc = 0x1623F8u;
    SET_GPR_U32(ctx, 31, 0x162400u);
    ctx->pc = 0x1623FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623F8u;
            // 0x1623fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140FA8u;
    if (runtime->hasFunction(0x140FA8u)) {
        auto targetFn = runtime->lookupFunction(0x140FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162400u; }
        if (ctx->pc != 0x162400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140FA8_0x140fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162400u; }
        if (ctx->pc != 0x162400u) { return; }
    }
    ctx->pc = 0x162400u;
label_162400:
    // 0x162400: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x162404: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x162404u;
    {
        const bool branch_taken_0x162404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x162404) {
            ctx->pc = 0x162408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162404u;
            // 0x162408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162418u;
            goto label_162418;
        }
    }
    ctx->pc = 0x16240Cu;
    // 0x16240c: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x16240Cu;
    SET_GPR_U32(ctx, 31, 0x162414u);
    ctx->pc = 0x162410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16240Cu;
            // 0x162410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162414u; }
        if (ctx->pc != 0x162414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162414u; }
        if (ctx->pc != 0x162414u) { return; }
    }
    ctx->pc = 0x162414u;
    // 0x162414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162418:
    // 0x162418: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x162418u;
    SET_GPR_U32(ctx, 31, 0x162420u);
    ctx->pc = 0x16241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162418u;
            // 0x16241c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162420u; }
        if (ctx->pc != 0x162420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162420u; }
        if (ctx->pc != 0x162420u) { return; }
    }
    ctx->pc = 0x162420u;
    // 0x162420: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x162420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x162424: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x162424u;
    {
        const bool branch_taken_0x162424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162424) {
            ctx->pc = 0x162428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162424u;
            // 0x162428: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162438u;
            goto label_162438;
        }
    }
    ctx->pc = 0x16242Cu;
    // 0x16242c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x16242Cu;
    SET_GPR_U32(ctx, 31, 0x162434u);
    ctx->pc = 0x162430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16242Cu;
            // 0x162430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162434u; }
        if (ctx->pc != 0x162434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162434u; }
        if (ctx->pc != 0x162434u) { return; }
    }
    ctx->pc = 0x162434u;
    // 0x162434: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x162434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_162438:
    // 0x162438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16243c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162440: 0x3e00008  jr          $ra
    ctx->pc = 0x162440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162440u;
            // 0x162444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162400u: goto label_162400;
            case 0x162418u: goto label_162418;
            case 0x162438u: goto label_162438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162448u;
}
