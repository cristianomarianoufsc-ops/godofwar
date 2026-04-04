#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A5E0
// Address: 0x18a5e0 - 0x18a6a8
void sub_0018A5E0_0x18a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A5E0_0x18a5e0");
#endif

    ctx->pc = 0x18a5e0u;

    // 0x18a5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a5e8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x18a5ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18a5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a5f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18A5F4u;
    {
        const bool branch_taken_0x18a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5F4u;
            // 0x18a5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5f4) {
            ctx->pc = 0x18A684u;
            goto label_18a684;
        }
    }
    ctx->pc = 0x18A5FCu;
    // 0x18a5fc: 0x0  nop
    ctx->pc = 0x18a5fcu;
    // NOP
label_18a600:
    // 0x18a600: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x18a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x18a604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a608: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18a608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18a60c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A60Cu;
    {
        const bool branch_taken_0x18a60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a60c) {
            ctx->pc = 0x18A610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A60Cu;
            // 0x18a610: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A614u;
    // 0x18a614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a618: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18A618u;
    {
        const bool branch_taken_0x18a618 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A618u;
            // 0x18a61c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a618) {
            ctx->pc = 0x18A694u;
            goto label_18a694;
        }
    }
    ctx->pc = 0x18A620u;
    // 0x18a620: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x18a620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x18a624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a628: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18a62c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18A62Cu;
    {
        const bool branch_taken_0x18a62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A62Cu;
            // 0x18a630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a62c) {
            ctx->pc = 0x18A668u;
            goto label_18a668;
        }
    }
    ctx->pc = 0x18A634u;
    // 0x18a634: 0x0  nop
    ctx->pc = 0x18a634u;
    // NOP
label_18a638:
    // 0x18a638: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a63c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x18a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x18a640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a644: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A644u;
    {
        const bool branch_taken_0x18a644 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18A648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A644u;
            // 0x18a648: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a644) {
            ctx->pc = 0x18A668u;
            goto label_18a668;
        }
    }
    ctx->pc = 0x18A64Cu;
    // 0x18a64c: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x18a64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x18a650: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18A650u;
    {
        const bool branch_taken_0x18a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A650u;
            // 0x18a654: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a650) {
            ctx->pc = 0x18A638u;
            runtime->cooperativeGuestYield();
            goto label_18a638;
        }
    }
    ctx->pc = 0x18A658u;
    // 0x18a658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a660: 0xc062aaa  jal         func_18AAA8
    ctx->pc = 0x18A660u;
    SET_GPR_U32(ctx, 31, 0x18A668u);
    ctx->pc = 0x18A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A660u;
            // 0x18a664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AAA8u;
    if (runtime->hasFunction(0x18AAA8u)) {
        auto targetFn = runtime->lookupFunction(0x18AAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A668u; }
        if (ctx->pc != 0x18A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AAA8_0x18aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A668u; }
        if (ctx->pc != 0x18A668u) { return; }
    }
    ctx->pc = 0x18A668u;
label_18a668:
    // 0x18a668: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A668u;
    {
        const bool branch_taken_0x18a668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A668u;
            // 0x18a66c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a668) {
            ctx->pc = 0x18A684u;
            goto label_18a684;
        }
    }
    ctx->pc = 0x18A670u;
    // 0x18a670: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x18a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x18a674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a678: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18a67c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A67Cu;
    {
        const bool branch_taken_0x18a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a67c) {
            ctx->pc = 0x18A680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A67Cu;
            // 0x18a680: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A684u;
label_18a684:
    // 0x18a684: 0x8e224f20  lw          $v0, 0x4F20($s1)
    ctx->pc = 0x18a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20256)));
    // 0x18a688: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18a68c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18A68Cu;
    {
        const bool branch_taken_0x18a68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A68Cu;
            // 0x18a690: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a68c) {
            ctx->pc = 0x18A600u;
            runtime->cooperativeGuestYield();
            goto label_18a600;
        }
    }
    ctx->pc = 0x18A694u;
label_18a694:
    // 0x18a694: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a698:
    // 0x18a698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6A0u;
            // 0x18a6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A600u: goto label_18a600;
            case 0x18A638u: goto label_18a638;
            case 0x18A668u: goto label_18a668;
            case 0x18A684u: goto label_18a684;
            case 0x18A694u: goto label_18a694;
            case 0x18A698u: goto label_18a698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A6A8u;
}
