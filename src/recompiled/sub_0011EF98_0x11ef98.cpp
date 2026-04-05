#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EF98
// Address: 0x11ef98 - 0x11f018
void sub_0011EF98_0x11ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EF98_0x11ef98");
#endif

    ctx->pc = 0x11ef98u;

    // 0x11ef98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ef9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11efa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11efa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11efa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11efac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11efacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11efb4: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11efb8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EFB8u;
    {
        const bool branch_taken_0x11efb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFB8u;
            // 0x11efbc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efb8) {
            ctx->pc = 0x11F000u;
            goto label_11f000;
        }
    }
    ctx->pc = 0x11EFC0u;
    // 0x11efc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11efc4: 0x0  nop
    ctx->pc = 0x11efc4u;
    // NOP
label_11efc8:
    // 0x11efc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11efc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efcc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11efd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11efd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11efd4: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11efd8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11efdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11efe0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x11efe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x11efe4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x11efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x11efe8: 0x40f809  jalr        $v0
    ctx->pc = 0x11EFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EFF0u);
        ctx->pc = 0x11EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFE8u;
            // 0x11efec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EFF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EFC8u: goto label_11efc8;
            case 0x11F000u: goto label_11f000;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EFF0u; }
            if (ctx->pc != 0x11EFF0u) { return; }
        }
        }
    }
    ctx->pc = 0x11EFF0u;
    // 0x11eff0: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x11eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x11eff4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11eff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11eff8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFF8u;
            // 0x11effc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11EFC8u;
            runtime->cooperativeGuestYield();
            goto label_11efc8;
        }
    }
    ctx->pc = 0x11F000u;
label_11f000:
    // 0x11f000: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11f000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11f004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f008: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11f008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f010: 0x3e00008  jr          $ra
    ctx->pc = 0x11F010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F010u;
            // 0x11f014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EFC8u: goto label_11efc8;
            case 0x11F000u: goto label_11f000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F018u;
}
