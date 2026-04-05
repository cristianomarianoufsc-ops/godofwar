#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FBC0
// Address: 0x17fbc0 - 0x17fc68
void sub_0017FBC0_0x17fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FBC0_0x17fbc0");
#endif

    ctx->pc = 0x17fbc0u;

    // 0x17fbc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fbc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17fbc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17fbcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17fbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17fbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fbd8: 0xc05fa56  jal         func_17E958
    ctx->pc = 0x17FBD8u;
    SET_GPR_U32(ctx, 31, 0x17FBE0u);
    ctx->pc = 0x17FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBD8u;
            // 0x17fbdc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E958u;
    if (runtime->hasFunction(0x17E958u)) {
        auto targetFn = runtime->lookupFunction(0x17E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE0u; }
        if (ctx->pc != 0x17FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E958_0x17e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE0u; }
        if (ctx->pc != 0x17FBE0u) { return; }
    }
    ctx->pc = 0x17FBE0u;
    // 0x17fbe0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17FBE0u;
    SET_GPR_U32(ctx, 31, 0x17FBE8u);
    ctx->pc = 0x17FBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBE0u;
            // 0x17fbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE8u; }
        if (ctx->pc != 0x17FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE8u; }
        if (ctx->pc != 0x17FBE8u) { return; }
    }
    ctx->pc = 0x17FBE8u;
    // 0x17fbe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17fbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbf4: 0xc060284  jal         func_180A10
    ctx->pc = 0x17FBF4u;
    SET_GPR_U32(ctx, 31, 0x17FBFCu);
    ctx->pc = 0x17FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBF4u;
            // 0x17fbf8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBFCu; }
        if (ctx->pc != 0x17FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBFCu; }
        if (ctx->pc != 0x17FBFCu) { return; }
    }
    ctx->pc = 0x17FBFCu;
    // 0x17fbfc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17fc00: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17fc04: 0x8c64c74c  lw          $a0, -0x38B4($v1)
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952780)));
    // 0x17fc08: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x17fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x17fc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17fc10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x17fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x17fc14: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x17fc14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fc18: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x17fc1c: 0xa6200020  sh          $zero, 0x20($s1)
    ctx->pc = 0x17fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x17fc20: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x17fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x17fc24: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x17fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x17fc28: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x17fc28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fc2c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x17fc30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FC30u;
    {
        const bool branch_taken_0x17fc30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC30u;
            // 0x17fc34: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc30) {
            ctx->pc = 0x17FC40u;
            goto label_17fc40;
        }
    }
    ctx->pc = 0x17FC38u;
    // 0x17fc38: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x17FC38u;
    SET_GPR_U32(ctx, 31, 0x17FC40u);
    ctx->pc = 0x17FC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC38u;
            // 0x17fc3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC40u; }
        if (ctx->pc != 0x17FC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC40u; }
        if (ctx->pc != 0x17FC40u) { return; }
    }
    ctx->pc = 0x17FC40u;
label_17fc40:
    // 0x17fc40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc44: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x17FC44u;
    SET_GPR_U32(ctx, 31, 0x17FC4Cu);
    ctx->pc = 0x17FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC44u;
            // 0x17fc48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC4Cu; }
        if (ctx->pc != 0x17FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC4Cu; }
        if (ctx->pc != 0x17FC4Cu) { return; }
    }
    ctx->pc = 0x17FC4Cu;
    // 0x17fc4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fc54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fc58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17fc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC60u;
            // 0x17fc64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FC40u: goto label_17fc40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FC68u;
}
