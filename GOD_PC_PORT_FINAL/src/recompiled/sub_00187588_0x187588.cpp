#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187588
// Address: 0x187588 - 0x187868
void sub_00187588_0x187588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187588_0x187588");
#endif

    ctx->pc = 0x187588u;

    // 0x187588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18758c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x187590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187594: 0x2484dd80  addiu       $a0, $a0, -0x2280
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958464));
    // 0x187598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18759c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x18759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1875a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1875a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1875a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1875a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1875a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1875a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1875ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1875b0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1875B0u;
    SET_GPR_U32(ctx, 31, 0x1875B8u);
    ctx->pc = 0x1875B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875B0u;
            // 0x1875b4: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875B8u; }
        if (ctx->pc != 0x1875B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875B8u; }
        if (ctx->pc != 0x1875B8u) { return; }
    }
    ctx->pc = 0x1875B8u;
    // 0x1875b8: 0xc05d67e  jal         func_1759F8
    ctx->pc = 0x1875B8u;
    SET_GPR_U32(ctx, 31, 0x1875C0u);
    ctx->pc = 0x1759F8u;
    if (runtime->hasFunction(0x1759F8u)) {
        auto targetFn = runtime->lookupFunction(0x1759F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875C0u; }
        if (ctx->pc != 0x1875C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1759f8_0x175a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875C0u; }
        if (ctx->pc != 0x1875C0u) { return; }
    }
    ctx->pc = 0x1875C0u;
    // 0x1875c0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1875c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1875c4: 0x2463ddc8  addiu       $v1, $v1, -0x2238
    ctx->pc = 0x1875c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958536));
    // 0x1875c8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1875c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1875cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1875ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1875d0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1875d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1875d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1875d8: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1875dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1875dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1875E0u;
    SET_GPR_U32(ctx, 31, 0x1875E8u);
    ctx->pc = 0x1875E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875E0u;
            // 0x1875e4: 0x8c4400d8  lw          $a0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875E8u; }
        if (ctx->pc != 0x1875E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875E8u; }
        if (ctx->pc != 0x1875E8u) { return; }
    }
    ctx->pc = 0x1875E8u;
    // 0x1875e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1875e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1875ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1875f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1875F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1875F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1875F0u;
            // 0x1875f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1875F8u;
    // 0x1875f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1875f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1875fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1875fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x187604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187608: 0xc04f856  jal         func_13E158
    ctx->pc = 0x187608u;
    SET_GPR_U32(ctx, 31, 0x187610u);
    ctx->pc = 0x18760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187608u;
            // 0x18760c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187610u; }
        if (ctx->pc != 0x187610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187610u; }
        if (ctx->pc != 0x187610u) { return; }
    }
    ctx->pc = 0x187610u;
    // 0x187610: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x187610u;
    SET_GPR_U32(ctx, 31, 0x187618u);
    ctx->pc = 0x187614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187610u;
            // 0x187614: 0x240401a4  addiu       $a0, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187618u; }
        if (ctx->pc != 0x187618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187618u; }
        if (ctx->pc != 0x187618u) { return; }
    }
    ctx->pc = 0x187618u;
    // 0x187618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18761c: 0xc061a72  jal         func_1869C8
    ctx->pc = 0x18761Cu;
    SET_GPR_U32(ctx, 31, 0x187624u);
    ctx->pc = 0x187620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18761Cu;
            // 0x187620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1869C8u;
    if (runtime->hasFunction(0x1869C8u)) {
        auto targetFn = runtime->lookupFunction(0x1869C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187624u; }
        if (ctx->pc != 0x187624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001869C8_0x1869c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187624u; }
        if (ctx->pc != 0x187624u) { return; }
    }
    ctx->pc = 0x187624u;
    // 0x187624: 0xc04f860  jal         func_13E180
    ctx->pc = 0x187624u;
    SET_GPR_U32(ctx, 31, 0x18762Cu);
    ctx->pc = 0x187628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187624u;
            // 0x187628: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18762Cu; }
        if (ctx->pc != 0x18762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18762Cu; }
        if (ctx->pc != 0x18762Cu) { return; }
    }
    ctx->pc = 0x18762Cu;
    // 0x18762c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18762cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187638: 0x3e00008  jr          $ra
    ctx->pc = 0x187638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187638u;
            // 0x18763c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187640u;
    // 0x187640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187644: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x187644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187648: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x187648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18764c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187654: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x187658: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187658u;
    {
        const bool branch_taken_0x187658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187658u;
            // 0x18765c: 0x8c700074  lw          $s0, 0x74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187658) {
            ctx->pc = 0x187678u;
            goto label_187678;
        }
    }
    ctx->pc = 0x187660u;
    // 0x187660: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187664: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187668: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x187668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18766c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x187670: 0x40f809  jalr        $v0
    ctx->pc = 0x187670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187678u);
        ctx->pc = 0x187674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187670u;
            // 0x187674: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187678u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187678u; }
            if (ctx->pc != 0x187678u) { return; }
        }
        }
    }
    ctx->pc = 0x187678u;
label_187678:
    // 0x187678: 0xc04f628  jal         func_13D8A0
    ctx->pc = 0x187678u;
    SET_GPR_U32(ctx, 31, 0x187680u);
    ctx->pc = 0x18767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187678u;
            // 0x18767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D8A0u;
    if (runtime->hasFunction(0x13D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x13D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187680u; }
        if (ctx->pc != 0x187680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D8A0_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187680u; }
        if (ctx->pc != 0x187680u) { return; }
    }
    ctx->pc = 0x187680u;
    // 0x187680: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x187680u;
    SET_GPR_U32(ctx, 31, 0x187688u);
    ctx->pc = 0x187684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187680u;
            // 0x187684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187688u; }
        if (ctx->pc != 0x187688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187688u; }
        if (ctx->pc != 0x187688u) { return; }
    }
    ctx->pc = 0x187688u;
    // 0x187688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18768c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187694: 0x3e00008  jr          $ra
    ctx->pc = 0x187694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187694u;
            // 0x187698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18769Cu;
    // 0x18769c: 0x0  nop
    ctx->pc = 0x18769cu;
    // NOP
    // 0x1876a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1876A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1876A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876A0u;
            // 0x1876a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1876A8u;
    // 0x1876a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1876a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1876ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1876acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1876b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1876b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1876b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1876b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1876b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1876bc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1876c0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1876c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1876c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1876c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1876c8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1876c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1876cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1876CCu;
    {
        const bool branch_taken_0x1876cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876CCu;
            // 0x1876d0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876cc) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876D4u;
    // 0x1876d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1876D4u;
    {
        const bool branch_taken_0x1876d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876D4u;
            // 0x1876d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d4) {
            ctx->pc = 0x187744u;
            goto label_187744;
        }
    }
    ctx->pc = 0x1876DCu;
    // 0x1876dc: 0x0  nop
    ctx->pc = 0x1876dcu;
    // NOP
label_1876e0:
    // 0x1876e0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1876e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1876e4: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1876e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1876e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1876ec: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1876ECu;
    {
        const bool branch_taken_0x1876ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1876F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876ECu;
            // 0x1876f0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876ec) {
            ctx->pc = 0x187740u;
            goto label_187740;
        }
    }
    ctx->pc = 0x1876F4u;
    // 0x1876f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1876f8:
    // 0x1876f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1876fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1876fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187700: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x187700u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187704: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x187704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x187708: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18770c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x18770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x187710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18771c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187720: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x187720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x187724: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x187724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x187728: 0x40f809  jalr        $v0
    ctx->pc = 0x187728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187730u);
        ctx->pc = 0x18772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187728u;
            // 0x18772c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187730u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187730u; }
            if (ctx->pc != 0x187730u) { return; }
        }
        }
    }
    ctx->pc = 0x187730u;
    // 0x187730: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x187730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x187734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187738: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x187738u;
    {
        const bool branch_taken_0x187738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18773Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187738u;
            // 0x18773c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187738) {
            ctx->pc = 0x1876F8u;
            runtime->cooperativeGuestYield();
            goto label_1876f8;
        }
    }
    ctx->pc = 0x187740u;
label_187740:
    // 0x187740: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187744:
    // 0x187744: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x187744u;
    {
        const bool branch_taken_0x187744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187744u;
            // 0x187748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187744) {
            ctx->pc = 0x187768u;
            goto label_187768;
        }
    }
    ctx->pc = 0x18774Cu;
    // 0x18774c: 0xc061c54  jal         func_187150
    ctx->pc = 0x18774Cu;
    SET_GPR_U32(ctx, 31, 0x187754u);
    ctx->pc = 0x187750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18774Cu;
            // 0x187750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187150u;
    if (runtime->hasFunction(0x187150u)) {
        auto targetFn = runtime->lookupFunction(0x187150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187754u; }
        if (ctx->pc != 0x187754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187150_0x187150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187754u; }
        if (ctx->pc != 0x187754u) { return; }
    }
    ctx->pc = 0x187754u;
    // 0x187754: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x187754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x187758: 0x8e05019c  lw          $a1, 0x19C($s0)
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x18775c: 0xc04769a  jal         func_11DA68
    ctx->pc = 0x18775Cu;
    SET_GPR_U32(ctx, 31, 0x187764u);
    ctx->pc = 0x187760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18775Cu;
            // 0x187760: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA68u;
    if (runtime->hasFunction(0x11DA68u)) {
        auto targetFn = runtime->lookupFunction(0x11DA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187764u; }
        if (ctx->pc != 0x187764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11da68_0x11da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187764u; }
        if (ctx->pc != 0x187764u) { return; }
    }
    ctx->pc = 0x187764u;
    // 0x187764: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187768:
    // 0x187768: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x187768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18776c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18776cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187774: 0x3e00008  jr          $ra
    ctx->pc = 0x187774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187774u;
            // 0x187778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18777Cu;
    // 0x18777c: 0x0  nop
    ctx->pc = 0x18777cu;
    // NOP
    // 0x187780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x187784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x187788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x187788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18778c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187794: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x187794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x187798: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18779c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18779Cu;
    {
        const bool branch_taken_0x18779c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18779Cu;
            // 0x1877a0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18779c) {
            ctx->pc = 0x187820u;
            goto label_187820;
        }
    }
    ctx->pc = 0x1877A4u;
    // 0x1877a4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1877a8: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1877ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1877acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1877b0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1877B0u;
    {
        const bool branch_taken_0x1877b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1877B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877B0u;
            // 0x1877b4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b0) {
            ctx->pc = 0x187818u;
            goto label_187818;
        }
    }
    ctx->pc = 0x1877B8u;
    // 0x1877b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1877b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1877bc: 0x0  nop
    ctx->pc = 0x1877bcu;
    // NOP
label_1877c0:
    // 0x1877c0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1877c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1877c8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1877c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1877cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1877ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1877d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1877D0u;
    {
        const bool branch_taken_0x1877d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877D0u;
            // 0x1877d4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877d0) {
            ctx->pc = 0x187808u;
            goto label_187808;
        }
    }
    ctx->pc = 0x1877D8u;
    // 0x1877d8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1877d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1877dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1877e0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1877e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1877e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1877e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1877ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1877f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1877f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1877f4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1877f8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1877fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1877FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187804u);
        ctx->pc = 0x187800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877FCu;
            // 0x187800: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187804u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187804u; }
            if (ctx->pc != 0x187804u) { return; }
        }
        }
    }
    ctx->pc = 0x187804u;
    // 0x187804: 0x0  nop
    ctx->pc = 0x187804u;
    // NOP
label_187808:
    // 0x187808: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x187808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18780c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187810: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x187810u;
    {
        const bool branch_taken_0x187810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187810u;
            // 0x187814: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187810) {
            ctx->pc = 0x1877C0u;
            runtime->cooperativeGuestYield();
            goto label_1877c0;
        }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187818u;
    {
        const bool branch_taken_0x187818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187818u;
            // 0x18781c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187818) {
            ctx->pc = 0x18783Cu;
            goto label_18783c;
        }
    }
    ctx->pc = 0x187820u;
label_187820:
    // 0x187820: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x187820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x187824: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x187824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x187828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187828u;
    {
        const bool branch_taken_0x187828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187828u;
            // 0x18782c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187828) {
            ctx->pc = 0x18783Cu;
            goto label_18783c;
        }
    }
    ctx->pc = 0x187830u;
    // 0x187830: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x187830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x187834: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187838: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x187838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_18783c:
    // 0x18783c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18783Cu;
    {
        const bool branch_taken_0x18783c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18783Cu;
            // 0x187840: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18783c) {
            ctx->pc = 0x187850u;
            goto label_187850;
        }
    }
    ctx->pc = 0x187844u;
    // 0x187844: 0x8e05019c  lw          $a1, 0x19C($s0)
    ctx->pc = 0x187844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x187848: 0xc0476a4  jal         func_11DA90
    ctx->pc = 0x187848u;
    SET_GPR_U32(ctx, 31, 0x187850u);
    ctx->pc = 0x18784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187848u;
            // 0x18784c: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA90u;
    if (runtime->hasFunction(0x11DA90u)) {
        auto targetFn = runtime->lookupFunction(0x11DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187850u; }
        if (ctx->pc != 0x187850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11da90_0x11db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187850u; }
        if (ctx->pc != 0x187850u) { return; }
    }
    ctx->pc = 0x187850u;
label_187850:
    // 0x187850: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187854: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x187854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x187858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18785c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18785cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187860: 0x3e00008  jr          $ra
    ctx->pc = 0x187860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187860u;
            // 0x187864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187678u: goto label_187678;
            case 0x1876E0u: goto label_1876e0;
            case 0x1876F8u: goto label_1876f8;
            case 0x187740u: goto label_187740;
            case 0x187744u: goto label_187744;
            case 0x187768u: goto label_187768;
            case 0x1877C0u: goto label_1877c0;
            case 0x187808u: goto label_187808;
            case 0x187818u: goto label_187818;
            case 0x187820u: goto label_187820;
            case 0x18783Cu: goto label_18783c;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187868u;
}
