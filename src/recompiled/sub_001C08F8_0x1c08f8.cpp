#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C08F8
// Address: 0x1c08f8 - 0x1c0950
void sub_001C08F8_0x1c08f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C08F8_0x1c08f8");
#endif

    ctx->pc = 0x1c08f8u;

    // 0x1c08f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c08f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c08fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c08fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c0900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0904: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c0904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c090c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c090cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0910: 0xc061a06  jal         func_186818
    ctx->pc = 0x1C0910u;
    SET_GPR_U32(ctx, 31, 0x1C0918u);
    ctx->pc = 0x1C0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0910u;
            // 0x1c0914: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0918u; }
        if (ctx->pc != 0x1C0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0918u; }
        if (ctx->pc != 0x1C0918u) { return; }
    }
    ctx->pc = 0x1C0918u;
    // 0x1c0918: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0918u;
    {
        const bool branch_taken_0x1c0918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0918) {
            ctx->pc = 0x1C091Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0918u;
            // 0x1c091c: 0x8e2403f0  lw          $a0, 0x3F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0934u;
            goto label_1c0934;
        }
    }
    ctx->pc = 0x1C0920u;
    // 0x1c0920: 0xc05d4ba  jal         func_1752E8
    ctx->pc = 0x1C0920u;
    SET_GPR_U32(ctx, 31, 0x1C0928u);
    ctx->pc = 0x1C0924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0920u;
            // 0x1c0924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752E8u;
    if (runtime->hasFunction(0x1752E8u)) {
        auto targetFn = runtime->lookupFunction(0x1752E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0928u; }
        if (ctx->pc != 0x1C0928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E8_0x1752e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0928u; }
        if (ctx->pc != 0x1C0928u) { return; }
    }
    ctx->pc = 0x1C0928u;
    // 0x1c0928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0928u;
    {
        const bool branch_taken_0x1c0928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0928u;
            // 0x1c092c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0928) {
            ctx->pc = 0x1C0940u;
            goto label_1c0940;
        }
    }
    ctx->pc = 0x1C0930u;
    // 0x1c0930: 0x8e2403f0  lw          $a0, 0x3F0($s1)
    ctx->pc = 0x1c0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_1c0934:
    // 0x1c0934: 0xc05c302  jal         func_170C08
    ctx->pc = 0x1C0934u;
    SET_GPR_U32(ctx, 31, 0x1C093Cu);
    ctx->pc = 0x1C0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0934u;
            // 0x1c0938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C093Cu; }
        if (ctx->pc != 0x1C093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C093Cu; }
        if (ctx->pc != 0x1C093Cu) { return; }
    }
    ctx->pc = 0x1C093Cu;
    // 0x1c093c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c093cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0940:
    // 0x1c0940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0948: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0948u;
            // 0x1c094c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0934u: goto label_1c0934;
            case 0x1C0940u: goto label_1c0940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0950u;
}
