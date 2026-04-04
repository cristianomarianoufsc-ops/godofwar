#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F490
// Address: 0x14f490 - 0x14f500
void sub_0014F490_0x14f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F490_0x14f490");
#endif

    ctx->pc = 0x14f490u;

    // 0x14f490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f498: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14f49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14f4a0: 0x8e223828  lw          $v0, 0x3828($s1)
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14376)));
    // 0x14f4a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14f4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4a8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F4A8u;
    {
        const bool branch_taken_0x14f4a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4A8u;
            // 0x14f4ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4a8) {
            ctx->pc = 0x14F4ECu;
            goto label_14f4ec;
        }
    }
    ctx->pc = 0x14F4B0u;
    // 0x14f4b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f4b4: 0x0  nop
    ctx->pc = 0x14f4b4u;
    // NOP
label_14f4b8:
    // 0x14f4b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f4bc: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x14f4c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f4c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f4c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F4C8u;
    {
        const bool branch_taken_0x14f4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4C8u;
            // 0x14f4cc: 0x8e223828  lw          $v0, 0x3828($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4c8) {
            ctx->pc = 0x14F4DCu;
            goto label_14f4dc;
        }
    }
    ctx->pc = 0x14F4D0u;
    // 0x14f4d0: 0xc0540c2  jal         func_150308
    ctx->pc = 0x14F4D0u;
    SET_GPR_U32(ctx, 31, 0x14F4D8u);
    ctx->pc = 0x150308u;
    if (runtime->hasFunction(0x150308u)) {
        auto targetFn = runtime->lookupFunction(0x150308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F4D8u; }
        if (ctx->pc != 0x14F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150308_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F4D8u; }
        if (ctx->pc != 0x14F4D8u) { return; }
    }
    ctx->pc = 0x14F4D8u;
    // 0x14f4d8: 0x8e223828  lw          $v0, 0x3828($s1)
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14376)));
label_14f4dc:
    // 0x14f4dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14f4e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14f4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f4e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14F4E4u;
    {
        const bool branch_taken_0x14f4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4E4u;
            // 0x14f4e8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4e4) {
            ctx->pc = 0x14F4B8u;
            runtime->cooperativeGuestYield();
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F4ECu;
label_14f4ec:
    // 0x14f4ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14f4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4F8u;
            // 0x14f4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F4B8u: goto label_14f4b8;
            case 0x14F4DCu: goto label_14f4dc;
            case 0x14F4ECu: goto label_14f4ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F500u;
}
