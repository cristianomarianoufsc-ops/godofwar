#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE458
// Address: 0x1be458 - 0x1be550
void sub_001BE458_0x1be458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE458_0x1be458");
#endif

    ctx->pc = 0x1be458u;

    // 0x1be458: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be45c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1be45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1be460: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1be460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1be464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1be464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1be468: 0xc06f8ce  jal         func_1BE338
    ctx->pc = 0x1BE468u;
    SET_GPR_U32(ctx, 31, 0x1BE470u);
    ctx->pc = 0x1BE338u;
    if (runtime->hasFunction(0x1BE338u)) {
        auto targetFn = runtime->lookupFunction(0x1BE338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE470u; }
        if (ctx->pc != 0x1BE470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE338_0x1be338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE470u; }
        if (ctx->pc != 0x1BE470u) { return; }
    }
    ctx->pc = 0x1BE470u;
    // 0x1be470: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1be474: 0xc05f9a4  jal         func_17E690
    ctx->pc = 0x1BE474u;
    SET_GPR_U32(ctx, 31, 0x1BE47Cu);
    ctx->pc = 0x1BE478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE474u;
            // 0x1be478: 0x24841800  addiu       $a0, $a0, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E690u;
    if (runtime->hasFunction(0x17E690u)) {
        auto targetFn = runtime->lookupFunction(0x17E690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE47Cu; }
        if (ctx->pc != 0x1BE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e690_0x17e6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE47Cu; }
        if (ctx->pc != 0x1BE47Cu) { return; }
    }
    ctx->pc = 0x1BE47Cu;
    // 0x1be47c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1be47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1be480: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be484: 0x2442e430  addiu       $v0, $v0, -0x1BD0
    ctx->pc = 0x1be484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960176));
    // 0x1be488: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x1be488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1be48c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1be48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1be490: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be494: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x1be494u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be49c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1be49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1be4a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1be4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1be4a4: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x1be4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1be4a8: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x1be4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1be4ac: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x1be4acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
label_1be4b0:
    // 0x1be4b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1be4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be4b4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x1be4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1be4b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be4bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1be4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1be4c0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1be4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1be4c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE4C4u;
    {
        const bool branch_taken_0x1be4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4C4u;
            // 0x1be4c8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4c4) {
            ctx->pc = 0x1BE4B0u;
            runtime->cooperativeGuestYield();
            goto label_1be4b0;
        }
    }
    ctx->pc = 0x1BE4CCu;
    // 0x1be4cc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1be4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1be4d0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1be4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1be4d4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1be4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1be4d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be4dc: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x1be4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1be4e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1be4e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be4ec: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1be4f0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1be4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1be4f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE4FCu);
        ctx->pc = 0x1BE4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4F4u;
            // 0x1be4f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE4FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE4B0u: goto label_1be4b0;
            case 0x1BE510u: goto label_1be510;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4FCu; }
            if (ctx->pc != 0x1BE4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1BE4FCu;
    // 0x1be4fc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1be500: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE500u;
    {
        const bool branch_taken_0x1be500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE500u;
            // 0x1be504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be500) {
            ctx->pc = 0x1BE510u;
            goto label_1be510;
        }
    }
    ctx->pc = 0x1BE508u;
    // 0x1be508: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1BE508u;
    SET_GPR_U32(ctx, 31, 0x1BE510u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE510u; }
        if (ctx->pc != 0x1BE510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE510u; }
        if (ctx->pc != 0x1BE510u) { return; }
    }
    ctx->pc = 0x1BE510u;
label_1be510:
    // 0x1be510: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1be510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be518: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1be518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1be51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be520: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be524: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1be524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1be528: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1be52c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1be52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1be530: 0x40f809  jalr        $v0
    ctx->pc = 0x1BE530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE538u);
        ctx->pc = 0x1BE534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE530u;
            // 0x1be534: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE538u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE4B0u: goto label_1be4b0;
            case 0x1BE510u: goto label_1be510;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE538u; }
            if (ctx->pc != 0x1BE538u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE538u;
    // 0x1be538: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1be538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be53c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1be53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be544: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE544u;
            // 0x1be548: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE4B0u: goto label_1be4b0;
            case 0x1BE510u: goto label_1be510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE54Cu;
    // 0x1be54c: 0x0  nop
    ctx->pc = 0x1be54cu;
    // NOP
}
