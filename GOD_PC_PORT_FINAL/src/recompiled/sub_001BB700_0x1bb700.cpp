#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB700
// Address: 0x1bb700 - 0x1bb7e8
void sub_001BB700_0x1bb700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB700_0x1bb700");
#endif

    ctx->pc = 0x1bb700u;

    // 0x1bb700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb704: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bb704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bb708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bb708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bb70c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb710: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bb710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bb714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb718: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1bb718u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1bb71c: 0x0  nop
    ctx->pc = 0x1bb71cu;
    // NOP
label_1bb720:
    // 0x1bb720: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb724: 0x26455280  addiu       $a1, $s2, 0x5280
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21120));
    // 0x1bb728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bb730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb734: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1bb738: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1bb738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb73c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB73Cu;
    {
        const bool branch_taken_0x1bb73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB73Cu;
            // 0x1bb740: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb73c) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB744u;
    // 0x1bb744: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1bb744u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bb748:
    // 0x1bb748: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB748u;
    {
        const bool branch_taken_0x1bb748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB748u;
            // 0x1bb74c: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb748) {
            ctx->pc = 0x1BB768u;
            goto label_1bb768;
        }
    }
    ctx->pc = 0x1BB750u;
    // 0x1bb750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bb754: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1bb754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb758: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1BB758u;
    {
        const bool branch_taken_0x1bb758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb758) {
            ctx->pc = 0x1BB75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB758u;
            // 0x1bb75c: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB720u;
            runtime->cooperativeGuestYield();
            goto label_1bb720;
        }
    }
    ctx->pc = 0x1BB760u;
    // 0x1bb760: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1bb760u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb764: 0x0  nop
    ctx->pc = 0x1bb764u;
    // NOP
label_1bb768:
    // 0x1bb768: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1bb76c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb770: 0xc06f980  jal         func_1BE600
    ctx->pc = 0x1BB770u;
    SET_GPR_U32(ctx, 31, 0x1BB778u);
    ctx->pc = 0x1BB774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB770u;
            // 0x1bb774: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE600u;
    if (runtime->hasFunction(0x1BE600u)) {
        auto targetFn = runtime->lookupFunction(0x1BE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB778u; }
        if (ctx->pc != 0x1BB778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE600_0x1be600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB778u; }
        if (ctx->pc != 0x1BB778u) { return; }
    }
    ctx->pc = 0x1BB778u;
    // 0x1bb778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb77c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb780: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1bb780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb784: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1bb784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1bb788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb78c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1bb78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1bb790: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1bb790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1bb794: 0x0  nop
    ctx->pc = 0x1bb794u;
    // NOP
label_1bb798:
    // 0x1bb798: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb79c: 0x26435280  addiu       $v1, $s2, 0x5280
    ctx->pc = 0x1bb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 21120));
    // 0x1bb7a0: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1bb7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bb7a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1bb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1bb7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb7ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bb7b0: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x1bb7b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bb7b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bb7b8: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bb7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb7bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb7c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bb7c4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BB7C4u;
    {
        const bool branch_taken_0x1bb7c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7C4u;
            // 0x1bb7c8: 0xa0400032  sb          $zero, 0x32($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7c4) {
            ctx->pc = 0x1BB798u;
            runtime->cooperativeGuestYield();
            goto label_1bb798;
        }
    }
    ctx->pc = 0x1BB7CCu;
    // 0x1bb7cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bb7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb7d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bb7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb7d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bb7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7DCu;
            // 0x1bb7e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB720u: goto label_1bb720;
            case 0x1BB748u: goto label_1bb748;
            case 0x1BB768u: goto label_1bb768;
            case 0x1BB798u: goto label_1bb798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB7E4u;
    // 0x1bb7e4: 0x0  nop
    ctx->pc = 0x1bb7e4u;
    // NOP
}
