#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE758
// Address: 0x1ee758 - 0x1ee838
void sub_001EE758_0x1ee758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE758_0x1ee758");
#endif

    ctx->pc = 0x1ee758u;

    // 0x1ee758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee75c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ee75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ee760: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ee760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ee764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ee764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ee768: 0xc07b8fa  jal         func_1EE3E8
    ctx->pc = 0x1EE768u;
    SET_GPR_U32(ctx, 31, 0x1EE770u);
    ctx->pc = 0x1EE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE768u;
            // 0x1ee76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE3E8u;
    if (runtime->hasFunction(0x1EE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1EE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE770u; }
        if (ctx->pc != 0x1EE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE3E8_0x1ee3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE770u; }
        if (ctx->pc != 0x1EE770u) { return; }
    }
    ctx->pc = 0x1EE770u;
    // 0x1ee770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee774: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1ee774u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ee778: 0x7e020770  sq          $v0, 0x770($s0)
    ctx->pc = 0x1ee778u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1904), GPR_VEC(ctx, 2));
    // 0x1ee77c: 0xc07b74a  jal         func_1EDD28
    ctx->pc = 0x1EE77Cu;
    SET_GPR_U32(ctx, 31, 0x1EE784u);
    ctx->pc = 0x1EE780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE77Cu;
            // 0x1ee780: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD28u;
    if (runtime->hasFunction(0x1EDD28u)) {
        auto targetFn = runtime->lookupFunction(0x1EDD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE784u; }
        if (ctx->pc != 0x1EE784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EDD28_0x1edd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE784u; }
        if (ctx->pc != 0x1EE784u) { return; }
    }
    ctx->pc = 0x1EE784u;
    // 0x1ee784: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1ee784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ee788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee78c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE78Cu;
    {
        const bool branch_taken_0x1ee78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE78Cu;
            // 0x1ee790: 0xae0208bc  sw          $v0, 0x8BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee78c) {
            ctx->pc = 0x1EE7A0u;
            goto label_1ee7a0;
        }
    }
    ctx->pc = 0x1EE794u;
    // 0x1ee794: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ee794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ee798: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ee798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ee79c: 0x8c516268  lw          $s1, 0x6268($v0)
    ctx->pc = 0x1ee79cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25192)));
label_1ee7a0:
    // 0x1ee7a0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE7A0u;
    {
        const bool branch_taken_0x1ee7a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7A0u;
            // 0x1ee7a4: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7a0) {
            ctx->pc = 0x1EE810u;
            goto label_1ee810;
        }
    }
    ctx->pc = 0x1EE7A8u;
    // 0x1ee7a8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1ee7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1ee7ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE7ACu;
    {
        const bool branch_taken_0x1ee7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee7ac) {
            ctx->pc = 0x1EE7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7ACu;
            // 0x1ee7b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE7C0u;
            goto label_1ee7c0;
        }
    }
    ctx->pc = 0x1EE7B4u;
    // 0x1ee7b4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ee7b8: 0x10510015  beq         $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EE7B8u;
    {
        const bool branch_taken_0x1ee7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1EE7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7B8u;
            // 0x1ee7bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7b8) {
            ctx->pc = 0x1EE810u;
            goto label_1ee810;
        }
    }
    ctx->pc = 0x1EE7C0u;
label_1ee7c0:
    // 0x1ee7c0: 0x8c42e2b0  lw          $v0, -0x1D50($v0)
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959792)));
    // 0x1ee7c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE7C4u;
    {
        const bool branch_taken_0x1ee7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7C4u;
            // 0x1ee7c8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7c4) {
            ctx->pc = 0x1EE800u;
            goto label_1ee800;
        }
    }
    ctx->pc = 0x1EE7CCu;
    // 0x1ee7cc: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1EE7CCu;
    SET_GPR_U32(ctx, 31, 0x1EE7D4u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7D4u; }
        if (ctx->pc != 0x1EE7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7D4u; }
        if (ctx->pc != 0x1EE7D4u) { return; }
    }
    ctx->pc = 0x1EE7D4u;
    // 0x1ee7d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE7D4u;
    {
        const bool branch_taken_0x1ee7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7D4u;
            // 0x1ee7d8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d4) {
            ctx->pc = 0x1EE800u;
            goto label_1ee800;
        }
    }
    ctx->pc = 0x1EE7DCu;
    // 0x1ee7dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee7e0: 0x8e0307b0  lw          $v1, 0x7B0($s0)
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1968)));
    // 0x1ee7e4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ee7e8: 0x260507c0  addiu       $a1, $s0, 0x7C0
    ctx->pc = 0x1ee7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    // 0x1ee7ec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1ee7ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1ee7f0: 0xc0770b0  jal         func_1DC2C0
    ctx->pc = 0x1EE7F0u;
    SET_GPR_U32(ctx, 31, 0x1EE7F8u);
    ctx->pc = 0x1EE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7F0u;
            // 0x1ee7f4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2C0u;
    if (runtime->hasFunction(0x1DC2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F8u; }
        if (ctx->pc != 0x1EE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc2c0_0x1dc398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7F8u; }
        if (ctx->pc != 0x1EE7F8u) { return; }
    }
    ctx->pc = 0x1EE7F8u;
    // 0x1ee7f8: 0xae0007b0  sw          $zero, 0x7B0($s0)
    ctx->pc = 0x1ee7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1968), GPR_U32(ctx, 0));
    // 0x1ee7fc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1ee7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ee800:
    // 0x1ee800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ee800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee804: 0xc07b8b4  jal         func_1EE2D0
    ctx->pc = 0x1EE804u;
    SET_GPR_U32(ctx, 31, 0x1EE80Cu);
    ctx->pc = 0x1EE808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE804u;
            // 0x1ee808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2D0u;
    if (runtime->hasFunction(0x1EE2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE80Cu; }
        if (ctx->pc != 0x1EE80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE2D0_0x1ee2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE80Cu; }
        if (ctx->pc != 0x1EE80Cu) { return; }
    }
    ctx->pc = 0x1EE80Cu;
    // 0x1ee80c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ee80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1ee810:
    // 0x1ee810: 0x8c62e2b0  lw          $v0, -0x1D50($v1)
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959792)));
    // 0x1ee814: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE814u;
    {
        const bool branch_taken_0x1ee814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE814u;
            // 0x1ee818: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee814) {
            ctx->pc = 0x1EE820u;
            goto label_1ee820;
        }
    }
    ctx->pc = 0x1EE81Cu;
    // 0x1ee81c: 0xac62e2b0  sw          $v0, -0x1D50($v1)
    ctx->pc = 0x1ee81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959792), GPR_U32(ctx, 2));
label_1ee820:
    // 0x1ee820: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ee820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee824: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ee824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ee828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE82Cu;
            // 0x1ee830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE7A0u: goto label_1ee7a0;
            case 0x1EE7C0u: goto label_1ee7c0;
            case 0x1EE800u: goto label_1ee800;
            case 0x1EE810u: goto label_1ee810;
            case 0x1EE820u: goto label_1ee820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE834u;
    // 0x1ee834: 0x0  nop
    ctx->pc = 0x1ee834u;
    // NOP
}
