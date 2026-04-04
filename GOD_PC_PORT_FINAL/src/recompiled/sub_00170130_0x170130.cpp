#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170130
// Address: 0x170130 - 0x1701e8
void sub_00170130_0x170130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170130_0x170130");
#endif

    ctx->pc = 0x170130u;

    // 0x170130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170138: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x170138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x17013c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17013cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170144: 0xc05c098  jal         func_170260
    ctx->pc = 0x170144u;
    SET_GPR_U32(ctx, 31, 0x17014Cu);
    ctx->pc = 0x170148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170144u;
            // 0x170148: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170260u;
    if (runtime->hasFunction(0x170260u)) {
        auto targetFn = runtime->lookupFunction(0x170260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17014Cu; }
        if (ctx->pc != 0x17014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170260_0x170300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17014Cu; }
        if (ctx->pc != 0x17014Cu) { return; }
    }
    ctx->pc = 0x17014Cu;
    // 0x17014c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170150: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x170150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x170154: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170154u;
    {
        const bool branch_taken_0x170154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170154u;
            // 0x170158: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170154) {
            ctx->pc = 0x170184u;
            goto label_170184;
        }
    }
    ctx->pc = 0x17015Cu;
    // 0x17015c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17015cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170160: 0x24424a58  addiu       $v0, $v0, 0x4A58
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19032));
    // 0x170164: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x170164u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170168: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17016c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17016cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170170: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170178: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17017c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17017Cu;
    {
        const bool branch_taken_0x17017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17017Cu;
            // 0x170180: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17017c) {
            ctx->pc = 0x1701ACu;
            goto label_1701ac;
        }
    }
    ctx->pc = 0x170184u;
label_170184:
    // 0x170184: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x170184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x170188: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170188u;
    {
        const bool branch_taken_0x170188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170188u;
            // 0x17018c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170188) {
            ctx->pc = 0x1701BCu;
            goto label_1701bc;
        }
    }
    ctx->pc = 0x170190u;
    // 0x170190: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x170194: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x170194u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170198: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x170198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x17019c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17019cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1701a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1701a4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1701a8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1701ac:
    // 0x1701ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1701ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1701B4u);
        ctx->pc = 0x1701B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701ACu;
            // 0x1701b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1701B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170184u: goto label_170184;
            case 0x1701ACu: goto label_1701ac;
            case 0x1701BCu: goto label_1701bc;
            case 0x1701D4u: goto label_1701d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1701B4u; }
            if (ctx->pc != 0x1701B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1701B4u;
    // 0x1701b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1701B4u;
    {
        const bool branch_taken_0x1701b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701B4u;
            // 0x1701b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701b4) {
            ctx->pc = 0x1701D4u;
            goto label_1701d4;
        }
    }
    ctx->pc = 0x1701BCu;
label_1701bc:
    // 0x1701bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1701c0: 0x24424a98  addiu       $v0, $v0, 0x4A98
    ctx->pc = 0x1701c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19096));
    // 0x1701c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1701c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1701cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1701ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1701d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1701d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1701d4:
    // 0x1701d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1701d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1701dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1701DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1701E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701DCu;
            // 0x1701e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170184u: goto label_170184;
            case 0x1701ACu: goto label_1701ac;
            case 0x1701BCu: goto label_1701bc;
            case 0x1701D4u: goto label_1701d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1701E4u;
    // 0x1701e4: 0x0  nop
    ctx->pc = 0x1701e4u;
    // NOP
}
