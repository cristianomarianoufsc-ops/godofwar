#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C278
// Address: 0x14c278 - 0x14c2f0
void sub_0014C278_0x14c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C278_0x14c278");
#endif

    ctx->pc = 0x14c278u;

    // 0x14c278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c27c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c288: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14c28c: 0x0  nop
    ctx->pc = 0x14c28cu;
    // NOP
label_14c290:
    // 0x14c290: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14c294: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x14c294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14c298: 0x2463c030  addiu       $v1, $v1, -0x3FD0
    ctx->pc = 0x14c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950960));
    // 0x14c29c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x14c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14c2a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c2a4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x14c2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14c2a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C2A8u;
    {
        const bool branch_taken_0x14c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2A8u;
            // 0x14c2ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2a8) {
            ctx->pc = 0x14C2D4u;
            goto label_14c2d4;
        }
    }
    ctx->pc = 0x14C2B0u;
    // 0x14c2b0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x14c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14c2b4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x14c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14c2b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14c2bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C2BCu;
    {
        const bool branch_taken_0x14c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2BCu;
            // 0x14c2c0: 0x28c20005  slti        $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2bc) {
            ctx->pc = 0x14C2D8u;
            goto label_14c2d8;
        }
    }
    ctx->pc = 0x14C2C4u;
    // 0x14c2c4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x14C2C4u;
    SET_GPR_U32(ctx, 31, 0x14C2CCu);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2CCu; }
        if (ctx->pc != 0x14C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2CCu; }
        if (ctx->pc != 0x14C2CCu) { return; }
    }
    ctx->pc = 0x14C2CCu;
    // 0x14c2cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14C2CCu;
    {
        const bool branch_taken_0x14c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2CCu;
            // 0x14c2d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2cc) {
            ctx->pc = 0x14C2E8u;
            goto label_14c2e8;
        }
    }
    ctx->pc = 0x14C2D4u;
label_14c2d4:
    // 0x14c2d4: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x14c2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_14c2d8:
    // 0x14c2d8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14C2D8u;
    {
        const bool branch_taken_0x14c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2D8u;
            // 0x14c2dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2d8) {
            ctx->pc = 0x14C290u;
            runtime->cooperativeGuestYield();
            goto label_14c290;
        }
    }
    ctx->pc = 0x14C2E0u;
    // 0x14c2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c2e8:
    // 0x14c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14C2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2E8u;
            // 0x14c2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C290u: goto label_14c290;
            case 0x14C2D4u: goto label_14c2d4;
            case 0x14C2D8u: goto label_14c2d8;
            case 0x14C2E8u: goto label_14c2e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C2F0u;
}
