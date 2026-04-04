#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FC68
// Address: 0x17fc68 - 0x17fd10
void sub_0017FC68_0x17fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FC68_0x17fc68");
#endif

    ctx->pc = 0x17fc68u;

    // 0x17fc68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fc6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17fc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17fc70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17fc74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17fc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17fc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fc80: 0xc05fa56  jal         func_17E958
    ctx->pc = 0x17FC80u;
    SET_GPR_U32(ctx, 31, 0x17FC88u);
    ctx->pc = 0x17FC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC80u;
            // 0x17fc84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E958u;
    if (runtime->hasFunction(0x17E958u)) {
        auto targetFn = runtime->lookupFunction(0x17E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC88u; }
        if (ctx->pc != 0x17FC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E958_0x17e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC88u; }
        if (ctx->pc != 0x17FC88u) { return; }
    }
    ctx->pc = 0x17FC88u;
    // 0x17fc88: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17FC88u;
    SET_GPR_U32(ctx, 31, 0x17FC90u);
    ctx->pc = 0x17FC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC88u;
            // 0x17fc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC90u; }
        if (ctx->pc != 0x17FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC90u; }
        if (ctx->pc != 0x17FC90u) { return; }
    }
    ctx->pc = 0x17FC90u;
    // 0x17fc90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc9c: 0xc060284  jal         func_180A10
    ctx->pc = 0x17FC9Cu;
    SET_GPR_U32(ctx, 31, 0x17FCA4u);
    ctx->pc = 0x17FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC9Cu;
            // 0x17fca0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCA4u; }
        if (ctx->pc != 0x17FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCA4u; }
        if (ctx->pc != 0x17FCA4u) { return; }
    }
    ctx->pc = 0x17FCA4u;
    // 0x17fca4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17fca8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17fcac: 0x8c64c74c  lw          $a0, -0x38B4($v1)
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952780)));
    // 0x17fcb0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x17fcb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17fcb8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x17fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x17fcbc: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x17fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fcc0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x17fcc4: 0xa6200020  sh          $zero, 0x20($s1)
    ctx->pc = 0x17fcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x17fcc8: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x17fcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x17fccc: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x17fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x17fcd0: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x17fcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fcd4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x17fcd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FCD8u;
    {
        const bool branch_taken_0x17fcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCD8u;
            // 0x17fcdc: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd8) {
            ctx->pc = 0x17FCE8u;
            goto label_17fce8;
        }
    }
    ctx->pc = 0x17FCE0u;
    // 0x17fce0: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x17FCE0u;
    SET_GPR_U32(ctx, 31, 0x17FCE8u);
    ctx->pc = 0x17FCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCE0u;
            // 0x17fce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCE8u; }
        if (ctx->pc != 0x17FCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCE8u; }
        if (ctx->pc != 0x17FCE8u) { return; }
    }
    ctx->pc = 0x17FCE8u;
label_17fce8:
    // 0x17fce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcec: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x17FCECu;
    SET_GPR_U32(ctx, 31, 0x17FCF4u);
    ctx->pc = 0x17FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCECu;
            // 0x17fcf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCF4u; }
        if (ctx->pc != 0x17FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCF4u; }
        if (ctx->pc != 0x17FCF4u) { return; }
    }
    ctx->pc = 0x17FCF4u;
    // 0x17fcf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17fcf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcf8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fcfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17fd00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD08u;
            // 0x17fd0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FCE8u: goto label_17fce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FD10u;
}
