#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170070
// Address: 0x170070 - 0x170130
void sub_00170070_0x170070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170070_0x170070");
#endif

    ctx->pc = 0x170070u;

    // 0x170070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170078: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x170078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x17007c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17007cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170084: 0xc05c098  jal         func_170260
    ctx->pc = 0x170084u;
    SET_GPR_U32(ctx, 31, 0x17008Cu);
    ctx->pc = 0x170088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170084u;
            // 0x170088: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170260u;
    if (runtime->hasFunction(0x170260u)) {
        auto targetFn = runtime->lookupFunction(0x170260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17008Cu; }
        if (ctx->pc != 0x17008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170260_0x170300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17008Cu; }
        if (ctx->pc != 0x17008Cu) { return; }
    }
    ctx->pc = 0x17008Cu;
    // 0x17008c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170090: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x170090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x170094: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x170094u;
    {
        const bool branch_taken_0x170094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170094u;
            // 0x170098: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170094) {
            ctx->pc = 0x1700D0u;
            goto label_1700d0;
        }
    }
    ctx->pc = 0x17009Cu;
    // 0x17009c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17009cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1700a0: 0x24424a58  addiu       $v0, $v0, 0x4A58
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19032));
    // 0x1700a4: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x1700a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1700a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1700a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1700ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1700b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1700b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1700b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1700b8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1700b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1700bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1700bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1700c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1700C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1700C8u);
        ctx->pc = 0x1700C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700C0u;
            // 0x1700c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1700C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1700D0u: goto label_1700d0;
            case 0x170104u: goto label_170104;
            case 0x17011Cu: goto label_17011c;
            case 0x170120u: goto label_170120;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1700C8u; }
            if (ctx->pc != 0x1700C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1700C8u;
    // 0x1700c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1700C8u;
    {
        const bool branch_taken_0x1700c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700C8u;
            // 0x1700cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700c8) {
            ctx->pc = 0x170120u;
            goto label_170120;
        }
    }
    ctx->pc = 0x1700D0u;
label_1700d0:
    // 0x1700d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1700d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1700d4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1700D4u;
    {
        const bool branch_taken_0x1700d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1700D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700D4u;
            // 0x1700d8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700d4) {
            ctx->pc = 0x170104u;
            goto label_170104;
        }
    }
    ctx->pc = 0x1700DCu;
    // 0x1700dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1700dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1700e0: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x1700e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1700e4: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x1700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x1700e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1700ec: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1700f0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1700f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1700F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1700FCu);
        ctx->pc = 0x1700F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700F4u;
            // 0x1700f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1700FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1700D0u: goto label_1700d0;
            case 0x170104u: goto label_170104;
            case 0x17011Cu: goto label_17011c;
            case 0x170120u: goto label_170120;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1700FCu; }
            if (ctx->pc != 0x1700FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1700FCu;
    // 0x1700fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1700FCu;
    {
        const bool branch_taken_0x1700fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700FCu;
            // 0x170100: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700fc) {
            ctx->pc = 0x17011Cu;
            goto label_17011c;
        }
    }
    ctx->pc = 0x170104u;
label_170104:
    // 0x170104: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x170104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x170108: 0x24634a98  addiu       $v1, $v1, 0x4A98
    ctx->pc = 0x170108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19096));
    // 0x17010c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17010cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170114: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170118: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x170118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17011c:
    // 0x17011c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17011cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170120:
    // 0x170120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170128: 0x3e00008  jr          $ra
    ctx->pc = 0x170128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170128u;
            // 0x17012c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1700D0u: goto label_1700d0;
            case 0x170104u: goto label_170104;
            case 0x17011Cu: goto label_17011c;
            case 0x170120u: goto label_170120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170130u;
}
