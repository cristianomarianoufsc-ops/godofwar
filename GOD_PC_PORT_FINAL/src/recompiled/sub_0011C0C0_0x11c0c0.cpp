#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C0C0
// Address: 0x11c0c0 - 0x11c218
void sub_0011C0C0_0x11c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C0C0_0x11c0c0");
#endif

    ctx->pc = 0x11c0c0u;

    // 0x11c0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c0c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11c0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c0cc: 0x2442e9a8  addiu       $v0, $v0, -0x1658
    ctx->pc = 0x11c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961576));
    // 0x11c0d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11c0d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c0dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11c0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c0e4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x11c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x11c0e8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11c0ec: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x11c0f0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11c0f4: 0xc047d68  jal         func_11F5A0
    ctx->pc = 0x11C0F4u;
    SET_GPR_U32(ctx, 31, 0x11C0FCu);
    ctx->pc = 0x11C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0F4u;
            // 0x11c0f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A0u;
    if (runtime->hasFunction(0x11F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0FCu; }
        if (ctx->pc != 0x11C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a0_0x11f5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0FCu; }
        if (ctx->pc != 0x11C0FCu) { return; }
    }
    ctx->pc = 0x11C0FCu;
    // 0x11c0fc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x11c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11c100: 0xc047d26  jal         func_11F498
    ctx->pc = 0x11C100u;
    SET_GPR_U32(ctx, 31, 0x11C108u);
    ctx->pc = 0x11C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C100u;
            // 0x11c104: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F498u;
    if (runtime->hasFunction(0x11F498u)) {
        auto targetFn = runtime->lookupFunction(0x11F498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C108u; }
        if (ctx->pc != 0x11C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f498_0x11f598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C108u; }
        if (ctx->pc != 0x11C108u) { return; }
    }
    ctx->pc = 0x11C108u;
    // 0x11c108: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x11c108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11c10c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C10Cu;
    {
        const bool branch_taken_0x11c10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c10c) {
            ctx->pc = 0x11C110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C10Cu;
            // 0x11c110: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C130u;
            goto label_11c130;
        }
    }
    ctx->pc = 0x11C114u;
    // 0x11c114: 0x80820009  lb          $v0, 0x9($a0)
    ctx->pc = 0x11c114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x11c118: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C118u;
    {
        const bool branch_taken_0x11c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c118) {
            ctx->pc = 0x11C11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C118u;
            // 0x11c11c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C130u;
            goto label_11c130;
        }
    }
    ctx->pc = 0x11C120u;
    // 0x11c120: 0xc046fda  jal         func_11BF68
    ctx->pc = 0x11C120u;
    SET_GPR_U32(ctx, 31, 0x11C128u);
    ctx->pc = 0x11C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C120u;
            // 0x11c124: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BF68u;
    if (runtime->hasFunction(0x11BF68u)) {
        auto targetFn = runtime->lookupFunction(0x11BF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C128u; }
        if (ctx->pc != 0x11C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF68_0x11bf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C128u; }
        if (ctx->pc != 0x11C128u) { return; }
    }
    ctx->pc = 0x11C128u;
    // 0x11c128: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11c12c: 0x0  nop
    ctx->pc = 0x11c12cu;
    // NOP
label_11c130:
    // 0x11c130: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C130u;
    {
        const bool branch_taken_0x11c130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c130) {
            ctx->pc = 0x11C134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C130u;
            // 0x11c134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C144u;
            goto label_11c144;
        }
    }
    ctx->pc = 0x11C138u;
    // 0x11c138: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x11C138u;
    SET_GPR_U32(ctx, 31, 0x11C140u);
    ctx->pc = 0x11C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C138u;
            // 0x11c13c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C140u; }
        if (ctx->pc != 0x11C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C140u; }
        if (ctx->pc != 0x11C140u) { return; }
    }
    ctx->pc = 0x11C140u;
    // 0x11c140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11c144:
    // 0x11c144: 0xc08e218  jal         func_238860
    ctx->pc = 0x11C144u;
    SET_GPR_U32(ctx, 31, 0x11C14Cu);
    ctx->pc = 0x11C148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C144u;
            // 0x11c148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C14Cu; }
        if (ctx->pc != 0x11C14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C14Cu; }
        if (ctx->pc != 0x11C14Cu) { return; }
    }
    ctx->pc = 0x11C14Cu;
    // 0x11c14c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c154: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11c154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c15c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C15Cu;
            // 0x11c160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C130u: goto label_11c130;
            case 0x11C144u: goto label_11c144;
            case 0x11C200u: goto label_11c200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C164u;
    // 0x11c164: 0x0  nop
    ctx->pc = 0x11c164u;
    // NOP
    // 0x11c168: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c16c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11c170: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11c174: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c178: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11c17c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c180: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x11c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x11c184: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11C184u;
    {
        const bool branch_taken_0x11c184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C184u;
            // 0x11c188: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c184) {
            ctx->pc = 0x11C200u;
            goto label_11c200;
        }
    }
    ctx->pc = 0x11C18Cu;
    // 0x11c18c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11c190: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x11c194: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c198: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x11c19c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11c1a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11c1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11c1a8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x11c1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c1ac: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x11c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x11c1b0: 0x8e11bcf0  lw          $s1, -0x4310($s0)
    ctx->pc = 0x11c1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950128)));
    // 0x11c1b4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11c1b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11c1b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11c1bc: 0xae12bcf0  sw          $s2, -0x4310($s0)
    ctx->pc = 0x11c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950128), GPR_U32(ctx, 18));
    // 0x11c1c0: 0x40f809  jalr        $v0
    ctx->pc = 0x11C1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C1C8u);
        ctx->pc = 0x11C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1C0u;
            // 0x11c1c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C1C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C130u: goto label_11c130;
            case 0x11C144u: goto label_11c144;
            case 0x11C200u: goto label_11c200;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C1C8u; }
            if (ctx->pc != 0x11C1C8u) { return; }
        }
        }
    }
    ctx->pc = 0x11C1C8u;
    // 0x11c1c8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x11c1cc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11c1d0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11c1d4: 0x40f809  jalr        $v0
    ctx->pc = 0x11C1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C1DCu);
        ctx->pc = 0x11C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1D4u;
            // 0x11c1d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C1DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C130u: goto label_11c130;
            case 0x11C144u: goto label_11c144;
            case 0x11C200u: goto label_11c200;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C1DCu; }
            if (ctx->pc != 0x11C1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x11C1DCu;
    // 0x11c1dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11c1e0: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11c1e4: 0xc047d68  jal         func_11F5A0
    ctx->pc = 0x11C1E4u;
    SET_GPR_U32(ctx, 31, 0x11C1ECu);
    ctx->pc = 0x11C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C1E4u;
            // 0x11c1e8: 0x8e450018  lw          $a1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A0u;
    if (runtime->hasFunction(0x11F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1ECu; }
        if (ctx->pc != 0x11C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a0_0x11f5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C1ECu; }
        if (ctx->pc != 0x11C1ECu) { return; }
    }
    ctx->pc = 0x11C1ECu;
    // 0x11c1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c1f0: 0xae11bcf0  sw          $s1, -0x4310($s0)
    ctx->pc = 0x11c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950128), GPR_U32(ctx, 17));
    // 0x11c1f4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x11c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x11c1f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11c1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c1fc: 0x0  nop
    ctx->pc = 0x11c1fcu;
    // NOP
label_11c200:
    // 0x11c200: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11c200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c204: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11c204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c20c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C20Cu;
            // 0x11c210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C130u: goto label_11c130;
            case 0x11C144u: goto label_11c144;
            case 0x11C200u: goto label_11c200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C214u;
    // 0x11c214: 0x0  nop
    ctx->pc = 0x11c214u;
    // NOP
}
