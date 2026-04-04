#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117470
// Address: 0x117470 - 0x117560
void sub_00117470_0x117470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117470_0x117470");
#endif

    ctx->pc = 0x117470u;

    // 0x117470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117474: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x117474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x117478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x117478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11747c: 0x24920044  addiu       $s2, $a0, 0x44
    ctx->pc = 0x11747cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x117480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117484: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x117484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x117488: 0x8c900044  lw          $s0, 0x44($a0)
    ctx->pc = 0x117488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x11748c: 0x5212002e  beql        $s0, $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x11748Cu;
    {
        const bool branch_taken_0x11748c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x11748c) {
            ctx->pc = 0x117490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11748Cu;
            // 0x117490: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117548u;
            goto label_117548;
        }
    }
    ctx->pc = 0x117494u;
    // 0x117494: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x117494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_117498:
    // 0x117498: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x117498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11749c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x11749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1174a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1174A0u;
    {
        const bool branch_taken_0x1174a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1174A0u;
            // 0x1174a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174a0) {
            ctx->pc = 0x1174D8u;
            goto label_1174d8;
        }
    }
    ctx->pc = 0x1174A8u;
    // 0x1174a8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1174a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1174ac: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1174b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1174b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1174b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1174b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1174b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1174c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1174c4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1174c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1174c8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1174c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1174cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1174CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1174D4u);
        ctx->pc = 0x1174D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1174CCu;
            // 0x1174d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1174D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117498u: goto label_117498;
            case 0x1174D8u: goto label_1174d8;
            case 0x117548u: goto label_117548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1174D4u; }
            if (ctx->pc != 0x1174D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1174D4u;
    // 0x1174d4: 0x0  nop
    ctx->pc = 0x1174d4u;
    // NOP
label_1174d8:
    // 0x1174d8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1174d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1174dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1174e0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1174e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1174e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1174e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1174e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1174ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1174ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1174f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1174f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1174f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1174f8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1174f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1174fc: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x117500: 0x40f809  jalr        $v0
    ctx->pc = 0x117500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117508u);
        ctx->pc = 0x117504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117500u;
            // 0x117504: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117508u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117498u: goto label_117498;
            case 0x1174D8u: goto label_1174d8;
            case 0x117548u: goto label_117548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117508u; }
            if (ctx->pc != 0x117508u) { return; }
        }
        }
    }
    ctx->pc = 0x117508u;
    // 0x117508: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x117508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11750c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117510: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x117510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x117514: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x117514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x117518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11751c: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x11751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x117520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x117520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117524: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x117524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117528: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x117528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x11752c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11752cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x117530: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x117530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x117534: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x117534u;
    SET_GPR_U32(ctx, 31, 0x11753Cu);
    ctx->pc = 0x117538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117534u;
            // 0x117538: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11753Cu; }
        if (ctx->pc != 0x11753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11753Cu; }
        if (ctx->pc != 0x11753Cu) { return; }
    }
    ctx->pc = 0x11753Cu;
    // 0x11753c: 0x5612ffd6  bnel        $s0, $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x11753Cu;
    {
        const bool branch_taken_0x11753c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x11753c) {
            ctx->pc = 0x117540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11753Cu;
            // 0x117540: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117498u;
            runtime->cooperativeGuestYield();
            goto label_117498;
        }
    }
    ctx->pc = 0x117544u;
    // 0x117544: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x117544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_117548:
    // 0x117548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x117548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11754c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11754cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117554: 0x3e00008  jr          $ra
    ctx->pc = 0x117554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117554u;
            // 0x117558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117498u: goto label_117498;
            case 0x1174D8u: goto label_1174d8;
            case 0x117548u: goto label_117548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11755Cu;
    // 0x11755c: 0x0  nop
    ctx->pc = 0x11755cu;
    // NOP
}
