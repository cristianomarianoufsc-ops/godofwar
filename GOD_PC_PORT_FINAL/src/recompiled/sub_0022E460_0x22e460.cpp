#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E460
// Address: 0x22e460 - 0x22e538
void sub_0022E460_0x22e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E460_0x22e460");
#endif

    ctx->pc = 0x22e460u;

    // 0x22e460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e464: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22e468: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22e46c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e470: 0x8e421280  lw          $v0, 0x1280($s2)
    ctx->pc = 0x22e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4736)));
    // 0x22e474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e478: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22e47c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22E47Cu;
    {
        const bool branch_taken_0x22e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E47Cu;
            // 0x22e480: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e47c) {
            ctx->pc = 0x22E4D0u;
            goto label_22e4d0;
        }
    }
    ctx->pc = 0x22E484u;
    // 0x22e484: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e488: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x22e48c: 0x8c461298  lw          $a2, 0x1298($v0)
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e490: 0x2610c150  addiu       $s0, $s0, -0x3EB0
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951248));
    // 0x22e494: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22e498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e49c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22e4a0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22E4A0u;
    SET_GPR_U32(ctx, 31, 0x22E4A8u);
    ctx->pc = 0x22E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4A0u;
            // 0x22e4a4: 0x24a583c8  addiu       $a1, $a1, -0x7C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4A8u; }
        if (ctx->pc != 0x22E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4A8u; }
        if (ctx->pc != 0x22E4A8u) { return; }
    }
    ctx->pc = 0x22E4A8u;
    // 0x22e4a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e4ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e4b0: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e4b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e4bc: 0xc09f2b4  jal         func_27CAD0
    ctx->pc = 0x22E4BCu;
    SET_GPR_U32(ctx, 31, 0x22E4C4u);
    ctx->pc = 0x22E4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4BCu;
            // 0x22e4c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CAD0u;
    if (runtime->hasFunction(0x27CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x27CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4C4u; }
        if (ctx->pc != 0x22E4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027CAD0_0x27cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4C4u; }
        if (ctx->pc != 0x22E4C4u) { return; }
    }
    ctx->pc = 0x22E4C4u;
    // 0x22e4c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22e4c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22E4C8u;
    {
        const bool branch_taken_0x22e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4C8u;
            // 0x22e4cc: 0xae421280  sw          $v0, 0x1280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4c8) {
            ctx->pc = 0x22E518u;
            goto label_22e518;
        }
    }
    ctx->pc = 0x22E4D0u;
label_22e4d0:
    // 0x22e4d0: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E4D0u;
    SET_GPR_U32(ctx, 31, 0x22E4D8u);
    ctx->pc = 0x22E4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4D0u;
            // 0x22e4d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4D8u; }
        if (ctx->pc != 0x22E4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4D8u; }
        if (ctx->pc != 0x22E4D8u) { return; }
    }
    ctx->pc = 0x22E4D8u;
    // 0x22e4d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E4D8u;
    {
        const bool branch_taken_0x22e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4D8u;
            // 0x22e4dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4d8) {
            ctx->pc = 0x22E518u;
            goto label_22e518;
        }
    }
    ctx->pc = 0x22E4E0u;
    // 0x22e4e0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x22e4e4: 0x8c451284  lw          $a1, 0x1284($v0)
    ctx->pc = 0x22e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e4e8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E4E8u;
    {
        const bool branch_taken_0x22e4e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4E8u;
            // 0x22e4ec: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4e8) {
            ctx->pc = 0x22E500u;
            goto label_22e500;
        }
    }
    ctx->pc = 0x22E4F0u;
    // 0x22e4f0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22e4f4: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E4F4u;
    {
        const bool branch_taken_0x22e4f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e4f4) {
            ctx->pc = 0x22E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4F4u;
            // 0x22e4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E4FCu;
    // 0x22e4fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22e500:
    // 0x22e500: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e504: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e50c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E510u;
    {
        const bool branch_taken_0x22e510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E510u;
            // 0x22e514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e510) {
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E518u;
label_22e518:
    // 0x22e518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e51c:
    // 0x22e51c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e520: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e524: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E52Cu;
            // 0x22e530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E4D0u: goto label_22e4d0;
            case 0x22E500u: goto label_22e500;
            case 0x22E518u: goto label_22e518;
            case 0x22E51Cu: goto label_22e51c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E534u;
    // 0x22e534: 0x0  nop
    ctx->pc = 0x22e534u;
    // NOP
}
