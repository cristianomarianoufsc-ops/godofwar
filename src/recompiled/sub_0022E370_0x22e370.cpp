#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E370
// Address: 0x22e370 - 0x22e460
void sub_0022E370_0x22e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E370_0x22e370");
#endif

    ctx->pc = 0x22e370u;

    // 0x22e370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e374: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22e378: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22e37c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e380: 0x8e421280  lw          $v0, 0x1280($s2)
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4736)));
    // 0x22e384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e388: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22e38c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22E38Cu;
    {
        const bool branch_taken_0x22e38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E38Cu;
            // 0x22e390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e38c) {
            ctx->pc = 0x22E3F8u;
            goto label_22e3f8;
        }
    }
    ctx->pc = 0x22E394u;
    // 0x22e394: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e398: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x22e398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x22e39c: 0x8c461298  lw          $a2, 0x1298($v0)
    ctx->pc = 0x22e39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e3a0: 0x2610c150  addiu       $s0, $s0, -0x3EB0
    ctx->pc = 0x22e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951248));
    // 0x22e3a4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22e3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3ac: 0x24a583c0  addiu       $a1, $a1, -0x7C40
    ctx->pc = 0x22e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935488));
    // 0x22e3b0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22E3B0u;
    SET_GPR_U32(ctx, 31, 0x22E3B8u);
    ctx->pc = 0x22E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3B0u;
            // 0x22e3b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3B8u; }
        if (ctx->pc != 0x22E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3B8u; }
        if (ctx->pc != 0x22E3B8u) { return; }
    }
    ctx->pc = 0x22E3B8u;
    // 0x22e3b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e3bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e3c0: 0x24421278  addiu       $v0, $v0, 0x1278
    ctx->pc = 0x22e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e3c4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x22e3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x22e3c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e3cc: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x22e3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x22e3d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e3d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3d8: 0x2508bf08  addiu       $t0, $t0, -0x40F8
    ctx->pc = 0x22e3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950664));
    // 0x22e3dc: 0x2529129c  addiu       $t1, $t1, 0x129C
    ctx->pc = 0x22e3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4764));
    // 0x22e3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3e4: 0xc09f268  jal         func_27C9A0
    ctx->pc = 0x22E3E4u;
    SET_GPR_U32(ctx, 31, 0x22E3ECu);
    ctx->pc = 0x22E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3E4u;
            // 0x22e3e8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C9A0u;
    if (runtime->hasFunction(0x27C9A0u)) {
        auto targetFn = runtime->lookupFunction(0x27C9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3ECu; }
        if (ctx->pc != 0x22E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C9A0_0x27c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3ECu; }
        if (ctx->pc != 0x22E3ECu) { return; }
    }
    ctx->pc = 0x22E3ECu;
    // 0x22e3ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22e3f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22E3F0u;
    {
        const bool branch_taken_0x22e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3F0u;
            // 0x22e3f4: 0xae421280  sw          $v0, 0x1280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3f0) {
            ctx->pc = 0x22E440u;
            goto label_22e440;
        }
    }
    ctx->pc = 0x22E3F8u;
label_22e3f8:
    // 0x22e3f8: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E3F8u;
    SET_GPR_U32(ctx, 31, 0x22E400u);
    ctx->pc = 0x22E3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3F8u;
            // 0x22e3fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E400u; }
        if (ctx->pc != 0x22E400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E400u; }
        if (ctx->pc != 0x22E400u) { return; }
    }
    ctx->pc = 0x22E400u;
    // 0x22e400: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E400u;
    {
        const bool branch_taken_0x22e400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E400u;
            // 0x22e404: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e400) {
            ctx->pc = 0x22E440u;
            goto label_22e440;
        }
    }
    ctx->pc = 0x22E408u;
    // 0x22e408: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x22e408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x22e40c: 0x8c451284  lw          $a1, 0x1284($v0)
    ctx->pc = 0x22e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e410: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E410u;
    {
        const bool branch_taken_0x22e410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E410u;
            // 0x22e414: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e410) {
            ctx->pc = 0x22E428u;
            goto label_22e428;
        }
    }
    ctx->pc = 0x22E418u;
    // 0x22e418: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x22e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22e41c: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E41Cu;
    {
        const bool branch_taken_0x22e41c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e41c) {
            ctx->pc = 0x22E420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E41Cu;
            // 0x22e420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E444u;
            goto label_22e444;
        }
    }
    ctx->pc = 0x22E424u;
    // 0x22e424: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22e428:
    // 0x22e428: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22e42c: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e434: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E438u;
    {
        const bool branch_taken_0x22e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E438u;
            // 0x22e43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e438) {
            ctx->pc = 0x22E444u;
            goto label_22e444;
        }
    }
    ctx->pc = 0x22E440u;
label_22e440:
    // 0x22e440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e444:
    // 0x22e444: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e44c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e454: 0x3e00008  jr          $ra
    ctx->pc = 0x22E454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E454u;
            // 0x22e458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E3F8u: goto label_22e3f8;
            case 0x22E428u: goto label_22e428;
            case 0x22E440u: goto label_22e440;
            case 0x22E444u: goto label_22e444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E45Cu;
    // 0x22e45c: 0x0  nop
    ctx->pc = 0x22e45cu;
    // NOP
}
