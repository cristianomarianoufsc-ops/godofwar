#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E538
// Address: 0x22e538 - 0x22e618
void sub_0022E538_0x22e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E538_0x22e538");
#endif

    ctx->pc = 0x22e538u;

    // 0x22e538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e53c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22e53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22e544: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22e544u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22e548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e54c: 0x8e421280  lw          $v0, 0x1280($s2)
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4736)));
    // 0x22e550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e554: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22e558: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22E558u;
    {
        const bool branch_taken_0x22e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E558u;
            // 0x22e55c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e558) {
            ctx->pc = 0x22E5B0u;
            goto label_22e5b0;
        }
    }
    ctx->pc = 0x22E560u;
    // 0x22e560: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e564: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x22e564u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x22e568: 0x8c461298  lw          $a2, 0x1298($v0)
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e56c: 0x2610c150  addiu       $s0, $s0, -0x3EB0
    ctx->pc = 0x22e56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951248));
    // 0x22e570: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22e570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22e574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e578: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22e57c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22E57Cu;
    SET_GPR_U32(ctx, 31, 0x22E584u);
    ctx->pc = 0x22E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E57Cu;
            // 0x22e580: 0x24a583d0  addiu       $a1, $a1, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E584u; }
        if (ctx->pc != 0x22E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E584u; }
        if (ctx->pc != 0x22E584u) { return; }
    }
    ctx->pc = 0x22E584u;
    // 0x22e584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e588: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e58c: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x22e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e598: 0xc09f1f0  jal         func_27C7C0
    ctx->pc = 0x22E598u;
    SET_GPR_U32(ctx, 31, 0x22E5A0u);
    ctx->pc = 0x22E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E598u;
            // 0x22e59c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C7C0u;
    if (runtime->hasFunction(0x27C7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27C7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5A0u; }
        if (ctx->pc != 0x22E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C7C0_0x27c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5A0u; }
        if (ctx->pc != 0x22E5A0u) { return; }
    }
    ctx->pc = 0x22E5A0u;
    // 0x22e5a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22e5a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22E5A4u;
    {
        const bool branch_taken_0x22e5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5A4u;
            // 0x22e5a8: 0xae421280  sw          $v0, 0x1280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5a4) {
            ctx->pc = 0x22E5F8u;
            goto label_22e5f8;
        }
    }
    ctx->pc = 0x22E5ACu;
    // 0x22e5ac: 0x0  nop
    ctx->pc = 0x22e5acu;
    // NOP
label_22e5b0:
    // 0x22e5b0: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E5B0u;
    SET_GPR_U32(ctx, 31, 0x22E5B8u);
    ctx->pc = 0x22E5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5B0u;
            // 0x22e5b4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5B8u; }
        if (ctx->pc != 0x22E5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E5B8u; }
        if (ctx->pc != 0x22E5B8u) { return; }
    }
    ctx->pc = 0x22E5B8u;
    // 0x22e5b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E5B8u;
    {
        const bool branch_taken_0x22e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5B8u;
            // 0x22e5bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5b8) {
            ctx->pc = 0x22E5F8u;
            goto label_22e5f8;
        }
    }
    ctx->pc = 0x22E5C0u;
    // 0x22e5c0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x22e5c4: 0x8c451284  lw          $a1, 0x1284($v0)
    ctx->pc = 0x22e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e5c8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E5C8u;
    {
        const bool branch_taken_0x22e5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5C8u;
            // 0x22e5cc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5c8) {
            ctx->pc = 0x22E5E0u;
            goto label_22e5e0;
        }
    }
    ctx->pc = 0x22E5D0u;
    // 0x22e5d0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22e5d4: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E5D4u;
    {
        const bool branch_taken_0x22e5d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e5d4) {
            ctx->pc = 0x22E5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5D4u;
            // 0x22e5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E5FCu;
            goto label_22e5fc;
        }
    }
    ctx->pc = 0x22E5DCu;
    // 0x22e5dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22e5e0:
    // 0x22e5e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e5e4: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e5ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e5f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E5F0u;
    {
        const bool branch_taken_0x22e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E5F0u;
            // 0x22e5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5f0) {
            ctx->pc = 0x22E5FCu;
            goto label_22e5fc;
        }
    }
    ctx->pc = 0x22E5F8u;
label_22e5f8:
    // 0x22e5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e5fc:
    // 0x22e5fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e600: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e604: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E60Cu;
            // 0x22e610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E5B0u: goto label_22e5b0;
            case 0x22E5E0u: goto label_22e5e0;
            case 0x22E5F8u: goto label_22e5f8;
            case 0x22E5FCu: goto label_22e5fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E614u;
    // 0x22e614: 0x0  nop
    ctx->pc = 0x22e614u;
    // NOP
}
